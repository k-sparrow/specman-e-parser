from pyparsing import Word, Literal, alphanums, Keyword, Regex
from pyparsing import ZeroOrMore, Group, delimitedList, Optional
__all__ = ["module"]

# language file for APS

# Literals
SEMICOLON = Literal(";").suppress()
COLON = Literal(":").suppress()
ASSIGN = Literal("=").suppress()
LBRAC = Literal("[").suppress()
RBRAC = Literal("]").suppress()
LPAREN = Literal("(").suppress()
RPAREN = Literal(")").suppress()

# Keywords
TYPE = Keyword("type")("kwd")
PHYLUM = Keyword("phylum")("kwd")
LIST = Keyword("LIST")("kwd")
MODULE = Keyword("module")("kwd")
BEGIN = Keyword("begin")("kwd")
END = Keyword("end")("kwd")
CONSTRUCTOR = Keyword("constructor")("kwd")

# constructs
ID = Word(alphanums + "_")
comment = Regex("--[^\n\r]*[\n\r]$").suppress()

type_ = TYPE + ID("id") + SEMICOLON
type_ = Group(type_)("type")

phylum_base = PHYLUM + ID("id")

phylum_single = phylum_base

phylum_list = phylum_base + ASSIGN + LIST + LBRAC + ID("elem_id") + RBRAC


phylum = (phylum_list | phylum_single) + SEMICOLON
phylum = Group(phylum)("phylum")

formal = ID("id") + COLON + ID("type")
formal = Group(formal)("formal")

formal_list = delimitedList(expr=formal, delim=SEMICOLON)
formal_list = Group(formal_list)("formals")

constructor = CONSTRUCTOR + \
              ID("id") + \
              LPAREN + Optional(formal_list) + RPAREN + COLON + \
              ID("return_type") + \
              SEMICOLON

constructor = Group(constructor)("constructor")

declaration = type_ | phylum | constructor | comment
declarations = Group(ZeroOrMore(declaration))
declarations = declarations("declarations")

module = MODULE + ID("id") + BEGIN + \
         declarations + \
         END + SEMICOLON
