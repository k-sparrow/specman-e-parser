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

int start_condition = INITIAL;
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
it	        (it) 
keeping     (keeping)
keep        (keep)
like        (like)
extend      (extend)
bind        (bind)
simple      (simple)
port        (port)
method      (method)
list        (list)
bits        (bits)
bytes       (bytes)
type        (type)
cycle	    (cycle)
detach	    (detach)
true	    (true)
false	    (false)
rise	    (rise) 
fall	    (fall) 
change	    (change)
delay	    (delay)
consume	    (consume)
fail	    (fail) 
eventually	(eventually)
start	    (start)
wait	    (wait)
sync	    (sync)
only	    (only)
also	    (also)
undefined	(undefined)
event	    (event)
package	    (package)
private	    (private)
protected	(protected)
sequence	(sequence)
that	    (that)
assume	    (assume)
expect	    (expect)
assert	    (assert)
step	    (step)
new         (new)
as_a        (as_a)
soft        (soft)
import      (import)
select      (==[ \t\f\v]*select)
key         (key)
on          (on)
exec        (exec)
if          (if)
else        (else)
is_a	    (is{ws}a{ws})
is	        (is)
cover	    (cover)
global	    (global)
no_collect	(no_collect)
per_unit_instance	 (per_unit_instance)
item                 (item)
created_kind         (created_kind)
created_driver       (created_driver)
sequence_type        (sequence_type)
sequence_driver_type (sequence_driver_type)



null	      (NULL)
true_literal  (TRUE)
false_literal (FALSE)
/* ------------------ Keywords ------------------ */

/* ------------------ Operators ----------------- */
ver_eq          ===
ver_neq         !==
eq              ==
neq             !=
assign          =
xor_op          \^
log_and_op      \&\&
btws_and_op     \&
log_or_op       \|\|
btws_or_op      \|
btws_not_op     ~
log_not_op      !
plus            \+
minus           \-
lshift          >>
rshift          <<
gte             >=
gt              >
lte             <=
lt              <
mul             \*
div             \/
rem             %
hwp             \$

lparen          \(
rparen          \)
lbracket        \[
rbracket        \]
lbrace          \{
rbrace          \}
sng_quoted_string \'[^ \t\v\f\n']+\'
sng_quote       \'

ddot            \.\.
dot             \.
colon           \:
semicolon       \;
comma           \,
implication     =>
ternary         \?
at              \@

string  \"[^\n"]+\"

ws      [ \t\f\v]+

alpha   [A-Za-z_]
dig     [0-9]
alphanum ({alpha}|{dig})
name    ({alpha}{alphanum}*)
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
{it}	    { return yy::parser::make_IT(location()); } 
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

{cycle}	    { return yy::parser::make_CYCLE(location()); }
{detach}	{ return yy::parser::make_DETACH(location()); }
{true}	    { return yy::parser::make_TRUE(location()); }
{false}	    { return yy::parser::make_FALSE(location()); }
{rise}	    { return yy::parser::make_RISE(location()); } 
{fall}	    { return yy::parser::make_FALL(location()); } 
{change}	{ return yy::parser::make_CHANGE(location()); }
{delay}	    { return yy::parser::make_DELAY(location()); }
{consume}	{ return yy::parser::make_CONSUME(location()); }

{fail}	    { return yy::parser::make_FAIL(location()); } 
{eventually} { return yy::parser::make_EVENTUALLY(location()); }
{start}	    { return yy::parser::make_START(location()); }
{wait}	    { return yy::parser::make_WAIT(location()); }
{sync}	    { return yy::parser::make_SYNC(location()); }
{only}	    { return yy::parser::make_ONLY(location()); }
{also}	    { return yy::parser::make_ALSO(location()); }
{undefined}	{ return yy::parser::make_UNDEFINED(location()); }
{event}	    { return yy::parser::make_EVENT(location()); }
{package}	{ return yy::parser::make_PACKAGE(location()); }
{private}	{ return yy::parser::make_PRIVATE(location()); }
{protected}	{ return yy::parser::make_PROTECTED(location()); }
{sequence}	{ return yy::parser::make_SEQUENCE(location()); }
{that}	    { return yy::parser::make_THAT(location()); }
{assume}	{ return yy::parser::make_ASSUME(location()); }
{expect}	{ return yy::parser::make_EXPECT(location()); }
{assert}	{ return yy::parser::make_ASSERT(location()); }
{step}	    { return yy::parser::make_STEP(location()); }
{new}	    { return yy::parser::make_NEW(location()); }
{as_a}	    { return yy::parser::make_AS_A(location()); }
{soft}	    { return yy::parser::make_SOFT(location()); }
{import}	{ return yy::parser::make_IMPORT(location()); }
{select}	{ return yy::parser::make_SELECT(location()); }
{key}   	{ return yy::parser::make_KEY(location()); }
{on}   	    { return yy::parser::make_ON(location()); }
{exec}   	{ return yy::parser::make_EXEC(location()); }
{if}   	    { return yy::parser::make_IF(location()); }
{else}      { return yy::parser::make_ELSE(location()); }
{is_a}	    { return yy::parser::make_IS_A(location()); } 
{is}	    { return yy::parser::make_IS(location()); }
{cover}	    { return yy::parser::make_COVER(location()); }
{global}    { return yy::parser::make_GLOBAL(location()); }
{no_collect} { return yy::parser::make_NO_COLLECT(location()); }
{per_unit_instance} { return yy::parser::make_PER_UNIT_INSTANCE(location()); }
{item}		            { return yy::parser::make_ITEM(location()); }                
{created_kind}		    { return yy::parser::make_CREATED_KIND(location()); }        
{created_driver}		{ return yy::parser::make_CREATED_DRIVER(location()); }      
{sequence_type}		    { return yy::parser::make_SEQUENCE_TYPE(location()); }       
{sequence_driver_type}	{ return yy::parser::make_SEQUENCE_DRIVER_TYPE(location()); }

{null}	    { return yy::parser::make_NULL_(location()); }
{true_literal}	{ return yy::parser::make_TRUE_LITERAL(location()); }    
{false_literal}	{ return yy::parser::make_FALSE_LITERAL(location()); }

    /* ------------------ Keywords ------------------ */
    /* ------------------ Literals ------------------ */
    /* ------------------ Literals ------------------ */
    /* ------------------ Operators ----------------- */

{xor_op}        { return yy::parser::make_XOR_OP(location()); } 
{ver_eq}	    { return yy::parser::make_VERILOG_EQ(location()); }      
{ver_neq}	    { return yy::parser::make_VERILOG_NEQ(location()); }     
{eq}	        { return yy::parser::make_EQ(location()); }          
{neq}	        { return yy::parser::make_NEQ(location()); }         
{assign}	    { return yy::parser::make_ASSIGN(location()); }      
{log_and_op}	{ return yy::parser::make_LOGICAL_AND_OP(location()); }  
{btws_and_op}   { return yy::parser::make_BTWS_AND_OP(location()); } 
{log_or_op}	    { return yy::parser::make_LOGICAL_OR_OP(location()); }   
{btws_or_op}	{ return yy::parser::make_BTWS_OR_OP(location()); }  
{btws_not_op}	{ return yy::parser::make_BTWS_NOT_OP(location()); } 
{log_not_op}	{ return yy::parser::make_LOGICAL_NOT_OP(location()); }  
{plus}	        { return yy::parser::make_PLUS(location()); }        
{minus}	        { return yy::parser::make_MINUS(location()); }       
{lshift}	    { return yy::parser::make_LSHIFT(location()); }      
{rshift}	    { return yy::parser::make_RSHIFT(location()); }      
{gte}	        { return yy::parser::make_GTE(location()); }         
{gt}	        { return yy::parser::make_GT(location()); }          
{lte}	        { return yy::parser::make_LTE(location()); }         
{lt}	        { return yy::parser::make_LT(location()); }          
{mul}	        { return yy::parser::make_MUL(location()); }         
{div}	        { return yy::parser::make_DIV(location()); }         
{rem}	        { return yy::parser::make_REMAINDER(location()); }         
{hwp}	        { return yy::parser::make_HWP(location()); }         
{ternary}       { return yy::parser::make_TERNARY(location()); }         

{lparen}	{ return yy::parser::make_LPAREN(location()); }      
{rparen}	{ return yy::parser::make_RPAREN(location()); }      
{lbracket}	{ return yy::parser::make_LBRACKET(location()); }    
{rbracket}	{ return yy::parser::make_RBRACKET(location()); }    
{lbrace}	{ return yy::parser::make_LBRACE(location()); }      
{rbrace}	{ return yy::parser::make_RBRACE(location()); }      
{sng_quoted_string}	{ 
    std::string str(YYText());
    if(m_driver.strtable.find(str) == std::end(m_driver.strtable)) {
        m_driver.strtable[str] = elex::Symbol(new elex::Entry(str, str.length()));
    }
    return yy::parser::make_SNG_QUOTED_STRING_LITERAL(m_driver.strtable[str], location()); 
    }   
{sng_quote}	{ return yy::parser::make_SNG_QUOTE(location()); }   
{at}	    { return yy::parser::make_AT(location()); }   

{comma}       { return yy::parser::make_COMMA(location()); }
{colon}       { return yy::parser::make_COLON(location()); }
{semicolon}   { return yy::parser::make_SEMICOLON(location()); }
{ddot}        { return yy::parser::make_DDOT(location()); }
{dot}         { return yy::parser::make_DOT(location()); }
{implication} { return yy::parser::make_IMPLICATION(location()); }

    /* ------------------ Operators ----------------- */
    /* ------------------ Names & Numbers & String Literals ----------------- */
{number}  { 
    std::string number(YYText());
    if(m_driver.inttable.find(number) == std::end(m_driver.inttable)) {
        m_driver.inttable[number] = elex::Symbol(new elex::Entry(number, number.length()));
    }
    // return yy::parser::make_NUMBER(std::stoi(YYText()), location()); 
    return yy::parser::make_NUMBER(m_driver.inttable[number], location()); 
}

{name}    { 
    std::string id(YYText());
    if(m_driver.idtable.find(id) == std::end(m_driver.idtable)) {
        m_driver.idtable[id] = elex::Symbol(new elex::Entry(id, id.length()));
    }
    return yy::parser::make_ID(m_driver.idtable[id], location()); 
}

{string}  { 
    std::string str(YYText());
    if(m_driver.strtable.find(str) == std::end(m_driver.strtable)) {
        m_driver.strtable[str] = elex::Symbol(new elex::Entry(str, str.length()));
    }
    return yy::parser::make_STRING_LITERAL(m_driver.strtable[str], location()); }

<<EOF>>   { return yyterminate(); }

%%
