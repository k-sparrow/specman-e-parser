import os
from os.path import abspath, join

import jinja2
from pyparsing import ParseException
from typing import List

from apsast import APSModuleNode, switch_repr_template, \
    APSCtorNode, APSPhylumNode, APSPhylumListNode
from apslang import module

__all__ = ["APSAstGen"]

MODULE_TEST_DIR = 'tests/modules'
GEN_DIR = 'generated'

HEADER_GUARD_TOP = """/* 
    Language declaration file for classes used by bison
    
    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***
     
 */
 
#pragma once
"""

HEADER_INCLUDES = """
#include "tree.hpp"
#include "{}-tree-handcode.hpp"
#include "strtab.hpp"
"""

IMP_GUARD_TOP = """/* 
    Language implementation file for classes used by bison

    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***

 */
"""

IMP_INCLUDES = """
#include "tree.hpp"
#include "{}-tree.hpp"
#include "utils.hpp"
"""

NAMESPACE_WRAPPER = """
namespace elex {{ 
    {} 
}}"""


def snake_case_to_pascal_case(name: str) -> str:
    return "".join(u.title() for u in name.split("_"))


def build_enum_rtti_table_repr(root: APSModuleNode, lang_spec: str) -> str:
    constructors: List[APSCtorNode] \
        = [node for node in root.attributes["declarations"] if isinstance(node, APSCtorNode)]
    ctor_enum_names: List[str] = [ctor.attributes["class_name"] for ctor in constructors]
    ctor_enum_names = [snake_case_to_pascal_case(name) for name in ctor_enum_names]

    enum_template = jinja2.Template("""
enum class {{ lang }}CtorKind {
{%- for name in names %}
    {{ name }}{%- if loop.index == 1 %} = 0{% endif %}{% if not loop.last %},{% endif %}
{%- endfor %}
};
    """)
    return enum_template.render(names=ctor_enum_names, lang=lang_spec.title())


def build_phylum_enum_rtti_table_repr(root: APSModuleNode, lang_spec: str) -> str:
    """
    Create an enum for phyla which are not list phyla
    :param root: the root of the module - phylums are attributes (declarations)
    :param lang_spec: the language specification
    :return: a rendered code of the enum
    """
    phylums: List[APSPhylumNode] \
        = [node for node in root.attributes["declarations"] if
           isinstance(node, APSPhylumNode) and not isinstance(node, APSPhylumListNode)]
    phylum_enum_names: List[str] = [phylum.attributes["class_name"] for phylum in phylums]

    enum_template = jinja2.Template("""
enum class {{ lang }}PhylumKind {
{%- for name in names %}
    {{ name }}{%- if loop.index == 1 %} = 0{% endif %}{% if not loop.last %},{% endif %}
{%- endfor %}
};
    """)
    return enum_template.render(names=phylum_enum_names, lang=lang_spec.title())


class APSAstGen:
    def __init__(self, lang_name: str):
        self.parser = module()
        self.parser = self.parser.set_parse_action(APSModuleNode.fromParseResults)
        self.lang: str = lang_name

    def gen(self, lang_spec: str, out_dir: str):
        if not os.path.exists(lang_spec):
            raise FileNotFoundError()

        model_str: str = open(lang_spec, 'r').read()

        try:
            ast = self.parser.parse_string(model_str)

            root: APSModuleNode = ast.root
            switch_repr_template(use_decl_template=True)
            assert isinstance(root, APSModuleNode)

            # generate the representation of the header file
            header_file = os.path.join(os.path.join(out_dir, self.lang + '-tree.hpp'))
            with open(header_file, 'w') as f:
                enum_ctor_rtti_table: str = build_enum_rtti_table_repr(root=root, lang_spec=self.lang)
                enum_phylum_rtti_table: str = build_phylum_enum_rtti_table_repr(root=root, lang_spec=self.lang)
                representation: str = root.__repr__()
                f.write(
                    HEADER_GUARD_TOP +
                    HEADER_INCLUDES.format(self.lang) +
                    NAMESPACE_WRAPPER.format(enum_phylum_rtti_table + enum_ctor_rtti_table +  representation)
                )

            # generate the representation of the implementation file
            switch_repr_template(use_decl_template=False)
            imp_file = os.path.join(os.path.join(out_dir, self.lang + '-tree.cpp'))
            with open(imp_file, 'w') as f:
                representation: str = root.__repr__()
                f.write(IMP_GUARD_TOP +
                        IMP_INCLUDES.format(self.lang) +
                        NAMESPACE_WRAPPER.format(representation))

        except ParseException as e:
            print(e.msg)


if __name__ == "__main__":
    ast_gen: APSAstGen = APSAstGen(lang_name="e")

    ast_gen.gen(lang_spec=abspath(join(MODULE_TEST_DIR, 'specman.aps')),
                out_dir=os.path.abspath(GEN_DIR))

    pass


