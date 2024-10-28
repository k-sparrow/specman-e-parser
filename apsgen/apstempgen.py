from os.path import dirname, realpath, join, exists
from jinja2 import Template
from jinja2.environment import Environment
from typing import List


TEMPLATE_ROOT_DIR = join(dirname(realpath(__file__)), "templates")
TEMPLATE_DECL_ROOT_DIR = join(TEMPLATE_ROOT_DIR, "declarations")
TEMPLATE_IMPS_ROOT_DIR = join(TEMPLATE_ROOT_DIR, "definitions")


def snake_case_to_pascal_case(name: str) -> str:
    return "".join(u.title() for u in name.split('_'))


class APSEnvironment(Environment):
    def __init__(self, **kwargs):
        super(APSEnvironment, self).__init__(**kwargs)
        self.globals["lang"] = "Specman"
        self.filters["snake_case_to_pascal_case"] = snake_case_to_pascal_case


APS_ENV: APSEnvironment = APSEnvironment()


class APSNodeRepr:
    """
    Required:
        template_file: a string to a template file path
    """

    def __init__(self, template_file: str, **attrs):
        self.attrs = attrs
        self.required_attrs: List[str] = []
        self.tmp_file: str = realpath(template_file)

    def __check(self):
        assert exists(self.tmp_file)

        self.__check_required()

    def __check_required(self):
        raise NotImplementedError("Please implement requirement checking")

    @property
    def template(self):
        return open(self.tmp_file, 'r').read()

    @property
    def attributes(self):
        return self.attrs

    def __repr__(self):
        template_str: str = self.template
        rendered_text = APS_ENV.from_string(template_str).render(**self.attributes)
        return rendered_text


class APSDeclNodeRepr(APSNodeRepr):
    def __init__(self, template_file: str, **attrs):
        super(APSDeclNodeRepr, self).__init__(join(TEMPLATE_DECL_ROOT_DIR, template_file), **attrs)

    def __check_required(self):
        raise NotImplementedError("Please implement requirement checking")


class APSImpNodeRepr(APSNodeRepr):
    def __init__(self, template_file: str, **attrs):
        super(APSImpNodeRepr, self).__init__(join(TEMPLATE_IMPS_ROOT_DIR, template_file), **attrs)

    def __check_required(self):
        raise NotImplementedError("Please implement requirement checking")


class FormalDeclNodeRepr(APSDeclNodeRepr):
    def __init__(self, **attrs):
        super(FormalDeclNodeRepr, self).__init__("formal.tpl", **attrs)

    def __check_required(self):
        assert "type_name" in self.attrs
        assert "name" in self.attrs


class PhylumDeclNodeRepr(APSDeclNodeRepr):
    def __init__(self, **attrs):
        super(PhylumDeclNodeRepr, self).__init__("phylum.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes


class ListPhylumDeclRepr(APSDeclNodeRepr):
    def __init__(self, **attrs):
        super(ListPhylumDeclRepr, self).__init__("list_phylum.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes
        assert "list_elem" in self.attributes


class ConstructorDeclRepr(APSDeclNodeRepr):
    def __init__(self, **attrs):
        super(ConstructorDeclRepr, self).__init__("constructor.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes
        assert "return_type" in self.attributes
        assert "formals" in self.attributes


class ModuleDeclRepr(APSDeclNodeRepr):
    def __init__(self, **attrs):
        super(ModuleDeclRepr, self).__init__("module.tpl", **attrs)

    def __check_required(self):
        assert "declarations" in self.attributes


class FormalImpNodeRepr(APSImpNodeRepr):
    def __init__(self, **attrs):
        super(FormalImpNodeRepr, self).__init__("formal.tpl", **attrs)

    def __check_required(self):
        assert "type_name" in self.attrs
        assert "name" in self.attrs


class PhylumImpNodeRepr(APSImpNodeRepr):
    def __init__(self, **attrs):
        super(PhylumImpNodeRepr, self).__init__("phylum.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes


class ListPhylumImpNodeRepr(APSImpNodeRepr):
    def __init__(self, **attrs):
        super(ListPhylumImpNodeRepr, self).__init__("list_phylum.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes


class ConstructorImplRepr(APSImpNodeRepr):
    def __init__(self, **attrs):
        super(ConstructorImplRepr, self).__init__("constructor.tpl", **attrs)

    def __check_required(self):
        assert "class_name" in self.attributes
        assert "return_type" in self.attributes
        assert "formals" in self.attributes
        assert "types" in self.attributes
        assert "phylums" in self.attributes


class ModuleImplRepr(APSImpNodeRepr):
    def __init__(self, **attrs):
        super(ModuleImplRepr, self).__init__("module.tpl", **attrs)

    def __check_required(self):
        assert "declarations" in self.attributes