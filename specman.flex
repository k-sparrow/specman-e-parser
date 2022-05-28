%option noyywrap 
%option c++
%option nodefault
%option yyclass="scanner"


%{
    #include <iostream>
    #include <string>

    #include "parser.hpp"
    #include "driver.hpp"
    using namespace std;
    int mylineno = 0;
    
    #define yyterminate() yy::parser::make_END(yy::location())

    using yy::location;
%}

/* ------------------ Keywords ------------------ */
while       (while)
for         (for)
in          (in)
do          (do)
with        (with)
when        (when)
struct	    (struct)
unit	    (unit)
enclosing	(enclosing)
using	    (using)
each	    (each)
prev	    (prev)
index	    (index)
within	    (within)
gen	        (gen)
before	    (before)
in_table    (in_table)
is	        (is)
not	        (not)
range	    (range)
empty	    (empty)
now	        (now) 
or	        (or)
and	        (and)
nxor	    (nxor)
xor	        (xor)
nor	        (nor)
nand	    (nand)
all	        (all)
first	    (first)
of	        (of)
me	        (me) 
keeping     (keeping)
keep        (keep)
like        (like)
extend      (extend)
a	        (a) 
bind        (bind)
simple      (simple)
port        (port)
method      (method)
list        (list)
bits        (bits)
bytes       (bytes)
type        (type)

null	    (NULL)
true	    (TRUE)
false	    (FALSE)
/* ------------------ Keywords ------------------ */

string  \"[^\n"]+\"

ws      [ \t\f\v]+

alpha   [A-Za-z]
dig     [0-9]
name    ({alpha}|{dig}|\$)({alpha}|{dig}|[_.\-/$])*
num1    [-+]?{dig}+\.?([eE][-+]?{dig}+)?
num2    [-+]?{dig}*\.{dig}+([eE][-+]?{dig}+)?
/* number  {num1}|{num2} */
number  [0-9]+

%%

{ws}    /* skip blanks and tabs */

\n        mylineno++;

    /* ------------------ Keywords ------------------ */
{while}     { return yy::parser::make_WHILE(location()); }
{for}       { return yy::parser::make_FOR(location()); }
{in}        { return yy::parser::make_IN(location()); }
{do}        { return yy::parser::make_DO(location()); }
{with}      { return yy::parser::make_WITH(location()); }
{when}      { return yy::parser::make_WHEN(location()); }
{struct}	{ return yy::parser::make_STRUCT(location()); }
{unit}	    { return yy::parser::make_UNIT(location()); }
{enclosing}	{ return yy::parser::make_ENCLOSING(location()); }
{using}	    { return yy::parser::make_USING(location()); }
{each}	    { return yy::parser::make_EACH(location()); }
{prev}	    { return yy::parser::make_PREV(location()); }
{index}	    { return yy::parser::make_INDEX(location()); }
{within}	{ return yy::parser::make_WITHIN(location()); }
{gen}	    { return yy::parser::make_GEN(location()); }
{before}	{ return yy::parser::make_BEFORE(location()); }
{in_table}	{ return yy::parser::make_IN_TABLE(location()); }
{is}	    { return yy::parser::make_IS(location()); }
{a}	        { return yy::parser::make_A(location()); } 
{not}	    { return yy::parser::make_NOT(location()); }
{range}	    { return yy::parser::make_RANGE(location()); }
{empty}	    { return yy::parser::make_EMPTY(location()); }
{now}	    { return yy::parser::make_NOW(location()); } 
{or}	    { return yy::parser::make_OR(location()); }
{and}	    { return yy::parser::make_AND(location()); }
{nxor}	    { return yy::parser::make_NXOR(location()); }
{xor}	    { return yy::parser::make_XOR(location()); }
{nor}	    { return yy::parser::make_NOR(location()); }
{nand}  	{ return yy::parser::make_NAND(location()); }
{all}	    { return yy::parser::make_ALL(location()); }
{first}	    { return yy::parser::make_FIRST(location()); }
{of}	    { return yy::parser::make_OF(location()); }
{me}	    { return yy::parser::make_ME(location()); } 
{keeping}   { return yy::parser::make_KEEPING(location());  }
{keep}      { return yy::parser::make_KEEP(location());  }
{bind}      { return yy::parser::make_BIND(location());  }
{like}      { return yy::parser::make_LIKE(location());  }
{extend}    { return yy::parser::make_EXTEND(location());  }
{simple}    { return yy::parser::make_SIMPLE(location());  }
{port}      { return yy::parser::make_PORT(location());  }
{method}    { return yy::parser::make_METHOD(location());  }
{list}      { return yy::parser::make_LIST(location());  }
{bits}      { return yy::parser::make_BITS(location());  }
{bytes}     { return yy::parser::make_BYTES(location());  }
{type}      { return yy::parser::make_TYPE(location());  }

{null}	    { return yy::parser::make_NULL_(location()); }
{true}	    { return yy::parser::make_TRUE(location()); }    
{false}	    { return yy::parser::make_FALSE(location()); }

    /* ------------------ Keywords ------------------ */
    /* ------------------ Literals ------------------ */
    /* ------------------ Literals ------------------ */
{number}  { return yy::parser::make_NUMBER(std::stoi(YYText()), location()); }

{name}    { return yy::parser::make_ID(YYText(), location()); }

{string}  { return yy::parser::make_STRING_LITERAL(YYText(), location()); }

<<EOF>>   { return yyterminate(); }

%%

// This include is required if main() is an another source file.
//#include <FlexLexer.h>
