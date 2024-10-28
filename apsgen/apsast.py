from jinja2 import Template

from apslang import module, PHYLUM, TYPE, CONSTRUCTOR, LIST
from typing import List
from pyparsing import ParseResults
from apstempgen import *

__all__ = ["APSModuleNode",
           "APSNode",
           "APSPhylumListNode",
           "APSCtorNode",
           "APSPhylumNode",
           "APSTypeNode",
           "APSFormalNode",
           "switch_repr_template"]


class APSNode:
    use_decl_repr = 1

    def __init__(self, parent=None):
        assert isinstance(parent, APSNode)
        # reference to the parent
        self.parent: APSNode = parent
        self.attrs: dict = None
        self.repr: APSNodeRepr = None

    @classmethod
    def switch_repr_template(cls, use_decl_template):
        cls.use_decl_repr = use_decl_template

    @property
    def attributes(self) -> dict:
        if not self.attrs:
            raise NotImplementedError("APSNode has no attributes")
        else:
            return self.attrs

    @attributes.setter
    def attributes(self):
        raise NotImplementedError("APSNode has no attributes")

    def template(self) -> APSNodeRepr:
        raise NotImplementedError("Base APS node doesn't have any template")

    def __repr__(self) -> str:
        template_: APSNodeRepr = self.template()
        return template_.__repr__()


# phylum & list phylum types are base classes to constructor representation
class APSTypeNode(APSNode):
    """
    Type is a class representing a terminal (a meaningful one, usually a symbol, not a literal token) in a BNF equation
    """
    def __init__(self, parent: APSNode, name: str):
        super(APSTypeNode, self).__init__(parent)

        self.attributes = name

    @APSNode.attributes.setter
    def attributes(self, type_name):
        self.attrs = dict(type_name=type_name)

    def __repr__(self) -> str:
        return ""

    def template(self) -> Template:
        return Template("")

    @staticmethod
    def fromParseResults(results: ParseResults, root: APSNode):
        assert results.kwd == str(TYPE).strip(r"'")
        assert results.id != ''
        assert root

        results["declaration"] = APSTypeNode(name=results.id, parent=root)
        return results


class APSFormalNode(APSNode):
    def __init__(self, parent: APSNode, name: str, type_name: str):
        super(APSFormalNode, self).__init__(parent)

        self.name: str = name
        self.type_name: str = type_name
        self.attributes = name, type_name

    @APSNode.attributes.setter
    def attributes(self, *args):
        name, type_name = args[0]
        self.attrs = dict(type_name=type_name,
                          name=name)

    def template(self) -> APSNodeRepr:
        return FormalDeclNodeRepr(**self.attributes) if self.use_decl_repr \
            else FormalImpNodeRepr(**self.attributes)

    @staticmethod
    def fromParseResults(results: ParseResults, root: APSNode):
        assert results.id != ''
        assert results.type != ''
        assert root

        results["formal"] = APSFormalNode(root, results.id, results.type)
        return results


class APSPhylumNode(APSNode):
    """
    Phylum is a class representing a non-terminal declaration (the lhs of a BNF equation)
    In Pyhlum:
        - class_name - the name of the generated class
    """
    def __init__(self, parent: APSNode, name: str):
        super(APSPhylumNode, self).__init__(parent)

        self.attributes = name

    @APSNode.attributes.setter
    def attributes(self, class_name):
        self.attrs = dict(class_name=class_name)

    def template(self) -> APSNodeRepr:
        return PhylumDeclNodeRepr(**self.attributes) if self.use_decl_repr \
            else PhylumImpNodeRepr(**self.attributes)

    @staticmethod
    def fromParseResults(results: ParseResults, root: APSNode):
        assert results.kwd == str(PHYLUM).strip(r"'")
        assert results.id != ''
        assert root

        results["declaration"] = APSPhylumNode(name=results.id, parent=root)
        return results


class APSPhylumListNode(APSPhylumNode):
    """
    In List Pyhlum:
        - name      - the name of the generated class
        - list_elem - the element type of the list
    """
    def __init__(self, parent: APSNode, name: str, list_elem: str):
        super(APSPhylumListNode, self).__init__(parent, name)

        self.attributes = name, list_elem

    @APSNode.attributes.setter
    def attributes(self, *args):
        if not isinstance(args[0], tuple):
            return

        args = args[0]
        self.attrs = dict(class_name=args[0], list_elem=args[1])

    # TODO: no need for list phylum declaration template (only typedef)
    def template(self) -> APSNodeRepr:
        return ListPhylumDeclRepr(**self.attributes) if self.use_decl_repr \
            else ListPhylumImpNodeRepr(**self.attributes)

    @staticmethod
    def fromParseResults(results: ParseResults, root: APSNode):
        assert results.kwd == str(LIST).strip(r"'")
        assert results.id != ''
        assert results.elem_id != ''
        assert root

        results["declaration"] = APSPhylumListNode(name=results.id,
                                                   list_elem=results.elem_id,
                                                   parent=root)
        return results


def declFromParseResults(results: ParseResults, root: APSNode) -> APSNode:
    cls = None
    if results.kwd == str(TYPE).strip(r"'"):
        cls = APSTypeNode
    elif results.kwd == str(PHYLUM).strip(r"'"):
        cls = APSPhylumNode
    elif results.kwd == str(LIST).strip(r"'"):
        cls = APSPhylumListNode
    elif results.kwd == str(CONSTRUCTOR).strip(r"'"):
        cls = APSCtorNode
    else:
        raise ValueError("No APSNode support found for {}".format(results.kwd))

    decl = cls.fromParseResults(results, root)

    return decl.declaration


class APSCtorNode(APSNode):
    """
    Constructor is a class representing a non-terminal definition (one of the rhs of the BNF equation)
    In constructor:
        - name - the name of the generated class
        - return_type - the name of the inherited class (base phylum class)
        - formals - list of class attributes, represented as APS nodes
    """
    def __init__(self,
                 parent: APSNode,
                 name: str,
                 return_type: str,
                 formals: List[APSNode] = ()):
        assert isinstance(parent, APSModuleNode)
        super(APSCtorNode, self).__init__(parent)

        # check all formals are Type/Pyhlum/PhylumList instances
        assert all(isinstance(formal, (APSTypeNode, APSPhylumNode, APSPhylumNode))
                   for formal in formals)

        self.root: APSModuleNode = parent
        self.attributes = dict(class_name=name, return_type=return_type, formals=formals, root=self.root)

    @APSNode.attributes.setter
    def attributes(self, attrs: dict):
        self.attrs = dict(**attrs)

    def __set_formals(self, formals: List[APSNode]):
        # check all formals are Type/Pyhlum/PhylumList instances
        assert all(isinstance(formal, APSFormalNode)
                   for formal in formals)

        attrs = self.attributes
        attrs["formals"] = formals
        self.attributes = attrs

    def template(self) -> APSNodeRepr:
        return ConstructorDeclRepr(**self.attributes) if self.use_decl_repr \
            else ConstructorImplRepr(**self.attributes)

    @staticmethod
    def fromParseResults(results: ParseResults, root: APSNode):
        assert results.kwd == str(CONSTRUCTOR).strip(r"'")
        assert results.id != ''
        assert results.return_type != ''
        assert root

        formals: List[APSNode] = []
        ctor = APSCtorNode(parent=root, name=results.id, return_type=results.return_type)
        for formal in results.formals:
            formals.append(APSFormalNode.fromParseResults(formal, ctor).formal)

        ctor.__set_formals(formals)
        results["declaration"] = ctor
        return results


class APSModuleNode(APSNode):
    def __init__(self, name: str, declarations: List[APSNode] = []):
        super(APSModuleNode, self).__init__(parent=self)
        self.module_name: str = name

        self.types: List[APSTypeNode] = []
        self.phylums: List[APSPhylumNode] = []

        assert all(isinstance(decl, (APSTypeNode,
                                     APSPhylumNode,
                                     APSPhylumListNode,
                                     APSCtorNode))
                   for decl in declarations)

        self.attributes = declarations

    @APSNode.attributes.setter
    def attributes(self, declarations: List[APSNode]):
        self.attrs = dict(declarations=declarations)

    def __set_decls(self, decls: List[APSNode]):
        self.types = {decl.attributes["type_name"]: decl for decl in decls if isinstance(decl, APSTypeNode)}
        self.phylums = {decl.attributes["class_name"]: decl for decl in decls if isinstance(decl, APSPhylumNode)}
        self.attributes = decls

    def template(self) -> APSNodeRepr:
        return ModuleDeclRepr(**self.attributes) if self.use_decl_repr else \
            ModuleImplRepr(**self.attributes)

    @staticmethod
    def fromParseResults(results: ParseResults):
        assert results.id != '', "Module must have an id"
        root: APSModuleNode = APSModuleNode(name=results.id)
        declarations: List[APSNode] = []
        for decl in results.declarations:
            declarations.append(declFromParseResults(decl, root))

        root.__set_decls(declarations)
        results["root"] = root
        return results


def switch_repr_template(use_decl_template: bool):
    all_cls = [
        APSModuleNode,
        APSPhylumListNode,
        APSPhylumNode,
        APSCtorNode,
        APSFormalNode,
        APSTypeNode
    ]
    for cls_ in all_cls:
        cls_.switch_repr_template(use_decl_template)


if __name__ == "__main__":
    mod = module()
    mod = mod.set_parse_action(APSModuleNode.fromParseResults)
    x = mod.parse_string("""
    module MY_MODULE begin 
        type Symbol;
        type Boolean;

        phylum Program;
        
        phylum Class_;
        phylum Classes = LIST[Class_];
        
        phylum Feature;
        phylum Features = LIST[Feature];
        
        phylum Formal;
        phylum Formals = LIST[Formal];
        
        phylum Expression;
        phylum Expressions = LIST[Expression];
        
        phylum Case;
        phylum Cases = LIST[Case];
        
        constructor method(name : Symbol; formals : Formals; return_type : Symbol; expr: Expression) : Feature;
        
        constructor attr(name: Symbol; type_decl : Symbol; init : Expression) : Feature;
    end;
    """)
    print(str(x.root))
    pass