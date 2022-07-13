%option noyywrap 
%option c++
%option nodefault
%option yyclass="scanner"
%option yylineno

%{
    #include <iostream>
    #include <string>

    #include "parser.hpp"
    #include "driver.hpp"
    using namespace std;
    int mylineno = 0;
    
    #define yyterminate() yy::parser::make_END(Location())

    // update the location of the current token any time a rule is matched
    // consider removing this option if yyless/yymore will be used in the future
    #define YY_USER_ACTION updateLocation();
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
e_path	    (e_path)
radix	    (radix)
dec         (DEC)
hex         (HEX)
bin         (BIN)
text        (text)
weight      (weight)
at_least    (at_least)
ignore      (ignore)
illegal     (illegal)
no_trace    (no_trace)
num_of_buckets    (num_of_buckets)
per_instance    (per_instance)
cross       (cross)
transition  (transition)

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
{while}     { return yy::parser::make_WHILE(Location()); }
{for}       { return yy::parser::make_FOR(Location()); }
{in}        { return yy::parser::make_IN(Location()); }
{do}        { return yy::parser::make_DO(Location()); }
{with}      { return yy::parser::make_WITH(Location()); }
{when}      { return yy::parser::make_WHEN(Location()); }
{struct}	{ return yy::parser::make_STRUCT(Location()); }
{unit}	    { return yy::parser::make_UNIT(Location()); }
{enclosing}	{ return yy::parser::make_ENCLOSING(Location()); }
{using}	    { return yy::parser::make_USING(Location()); }
{each}	    { return yy::parser::make_EACH(Location()); }
{prev}	    { return yy::parser::make_PREV(Location()); }
{index}	    { return yy::parser::make_INDEX(Location()); }
{within}	{ return yy::parser::make_WITHIN(Location()); }
{gen}	    { return yy::parser::make_GEN(Location()); }
{before}	{ return yy::parser::make_BEFORE(Location()); }
{in_table}	{ return yy::parser::make_IN_TABLE(Location()); }
{not}	    { return yy::parser::make_NOT(Location()); }
{range}	    { return yy::parser::make_RANGE(Location()); }
{empty}	    { return yy::parser::make_EMPTY(Location()); }
{now}	    { return yy::parser::make_NOW(Location()); } 
{or}	    { return yy::parser::make_OR(Location()); }
{and}	    { return yy::parser::make_AND(Location()); }
{nxor}	    { return yy::parser::make_NXOR(Location()); }
{xor}	    { return yy::parser::make_XOR(Location()); }
{nor}	    { return yy::parser::make_NOR(Location()); }
{nand}  	{ return yy::parser::make_NAND(Location()); }
{all}	    { return yy::parser::make_ALL(Location()); }
{first}	    { return yy::parser::make_FIRST(Location()); }
{of}	    { return yy::parser::make_OF(Location()); }
{me}	    { return yy::parser::make_ME(Location()); } 
{it}	    { return yy::parser::make_IT(Location()); } 
{keeping}   { return yy::parser::make_KEEPING(Location());  }
{keep}      { return yy::parser::make_KEEP(Location());  }
{bind}      { return yy::parser::make_BIND(Location());  }
{like}      { return yy::parser::make_LIKE(Location());  }
{extend}    { return yy::parser::make_EXTEND(Location());  }
{simple}    { return yy::parser::make_SIMPLE(Location());  }
{port}      { return yy::parser::make_PORT(Location());  }
{method}    { return yy::parser::make_METHOD(Location());  }
{list}      { return yy::parser::make_LIST(Location());  }
{bits}      { return yy::parser::make_BITS(Location());  }
{bytes}     { return yy::parser::make_BYTES(Location());  }
{type}      { return yy::parser::make_TYPE(Location());  }

{cycle}	    { return yy::parser::make_CYCLE(Location()); }
{detach}	{ return yy::parser::make_DETACH(Location()); }
{true}	    { return yy::parser::make_TRUE(Location()); }
{false}	    { return yy::parser::make_FALSE(Location()); }
{rise}	    { return yy::parser::make_RISE(Location()); } 
{fall}	    { return yy::parser::make_FALL(Location()); } 
{change}	{ return yy::parser::make_CHANGE(Location()); }
{delay}	    { return yy::parser::make_DELAY(Location()); }
{consume}	{ return yy::parser::make_CONSUME(Location()); }

{fail}	    { return yy::parser::make_FAIL(Location()); } 
{eventually} { return yy::parser::make_EVENTUALLY(Location()); }
{start}	    { return yy::parser::make_START(Location()); }
{wait}	    { return yy::parser::make_WAIT(Location()); }
{sync}	    { return yy::parser::make_SYNC(Location()); }
{only}	    { return yy::parser::make_ONLY(Location()); }
{also}	    { return yy::parser::make_ALSO(Location()); }
{undefined}	{ return yy::parser::make_UNDEFINED(Location()); }
{event}	    { return yy::parser::make_EVENT(Location()); }
{package}	{ return yy::parser::make_PACKAGE(Location()); }
{private}	{ return yy::parser::make_PRIVATE(Location()); }
{protected}	{ return yy::parser::make_PROTECTED(Location()); }
{sequence}	{ return yy::parser::make_SEQUENCE(Location()); }
{that}	    { return yy::parser::make_THAT(Location()); }
{assume}	{ return yy::parser::make_ASSUME(Location()); }
{expect}	{ return yy::parser::make_EXPECT(Location()); }
{assert}	{ return yy::parser::make_ASSERT(Location()); }
{step}	    { return yy::parser::make_STEP(Location()); }
{new}	    { return yy::parser::make_NEW(Location()); }
{as_a}	    { return yy::parser::make_AS_A(Location()); }
{soft}	    { return yy::parser::make_SOFT(Location()); }
{import}	{ return yy::parser::make_IMPORT(Location()); }
{select}	{ return yy::parser::make_SELECT(Location()); }
{key}   	{ return yy::parser::make_KEY(Location()); }
{on}   	    { return yy::parser::make_ON(Location()); }
{exec}   	{ return yy::parser::make_EXEC(Location()); }
{if}   	    { return yy::parser::make_IF(Location()); }
{else}      { return yy::parser::make_ELSE(Location()); }
{is_a}	    { return yy::parser::make_IS_A(Location()); } 
{is}	    { return yy::parser::make_IS(Location()); }
{cover}	    { return yy::parser::make_COVER(Location()); }
{global}    { return yy::parser::make_GLOBAL(Location()); }
{no_collect} { return yy::parser::make_NO_COLLECT(Location()); }
{per_unit_instance} { return yy::parser::make_PER_UNIT_INSTANCE(Location()); }
{e_path}            { return yy::parser::make_E_PATH(Location()); }
{radix}     { return yy::parser::make_RADIX(Location()); }
{dec}		{ return yy::parser::make_DEC(Location()); }
{hex}		{ return yy::parser::make_HEX(Location()); }
{bin}		{ return yy::parser::make_BIN(Location()); }
{text}		{ return yy::parser::make_TEXT(Location()); }
{weight}	{ return yy::parser::make_WEIGHT(Location()); }
{at_least}	{ return yy::parser::make_AT_LEAST(Location()); }
{ignore}	{ return yy::parser::make_IGNORE(Location()); }
{illegal}	{ return yy::parser::make_ILLEGAL(Location()); }
{no_trace}	{ return yy::parser::make_NO_TRACE(Location()); }
{num_of_buckets}	    { return yy::parser::make_NUM_OF_BUCKETS(Location()); }
{per_instance}	    { return yy::parser::make_PER_INSTANCE(Location()); }
{cross}	        { return yy::parser::make_CROSS(Location()); }
{transition}	{ return yy::parser::make_TRANSITION(Location()); }
{item}		            { return yy::parser::make_ITEM(Location()); }                
{created_kind}		    { return yy::parser::make_CREATED_KIND(Location()); }        
{created_driver}		{ return yy::parser::make_CREATED_DRIVER(Location()); }      
{sequence_type}		    { return yy::parser::make_SEQUENCE_TYPE(Location()); }       
{sequence_driver_type}	{ return yy::parser::make_SEQUENCE_DRIVER_TYPE(Location()); }

{null}	    { return yy::parser::make_NULL_(Location()); }
{true_literal}	{ return yy::parser::make_TRUE_LITERAL(Location()); }    
{false_literal}	{ return yy::parser::make_FALSE_LITERAL(Location()); }

    /* ------------------ Keywords ------------------ */
    /* ------------------ Literals ------------------ */
    /* ------------------ Literals ------------------ */
    /* ------------------ Operators ----------------- */

{xor_op}        { return yy::parser::make_XOR_OP(Location()); } 
{ver_eq}	    { return yy::parser::make_VERILOG_EQ(Location()); }      
{ver_neq}	    { return yy::parser::make_VERILOG_NEQ(Location()); }     
{eq}	        { return yy::parser::make_EQ(Location()); }          
{neq}	        { return yy::parser::make_NEQ(Location()); }         
{assign}	    { return yy::parser::make_ASSIGN(Location()); }      
{log_and_op}	{ return yy::parser::make_LOGICAL_AND_OP(Location()); }  
{btws_and_op}   { return yy::parser::make_BTWS_AND_OP(Location()); } 
{log_or_op}	    { return yy::parser::make_LOGICAL_OR_OP(Location()); }   
{btws_or_op}	{ return yy::parser::make_BTWS_OR_OP(Location()); }  
{btws_not_op}	{ return yy::parser::make_BTWS_NOT_OP(Location()); } 
{log_not_op}	{ return yy::parser::make_LOGICAL_NOT_OP(Location()); }  
{plus}	        { return yy::parser::make_PLUS(Location()); }        
{minus}	        { return yy::parser::make_MINUS(Location()); }       
{lshift}	    { return yy::parser::make_LSHIFT(Location()); }      
{rshift}	    { return yy::parser::make_RSHIFT(Location()); }      
{gte}	        { return yy::parser::make_GTE(Location()); }         
{gt}	        { return yy::parser::make_GT(Location()); }          
{lte}	        { return yy::parser::make_LTE(Location()); }         
{lt}	        { return yy::parser::make_LT(Location()); }          
{mul}	        { return yy::parser::make_MUL(Location()); }         
{div}	        { return yy::parser::make_DIV(Location()); }         
{rem}	        { return yy::parser::make_REMAINDER(Location()); }         
{hwp}	        { return yy::parser::make_HWP(Location()); }         
{ternary}       { return yy::parser::make_TERNARY(Location()); }         

{lparen}	{ return yy::parser::make_LPAREN(Location()); }      
{rparen}	{ return yy::parser::make_RPAREN(Location()); }      
{lbracket}	{ return yy::parser::make_LBRACKET(Location()); }    
{rbracket}	{ return yy::parser::make_RBRACKET(Location()); }    
{lbrace}	{ return yy::parser::make_LBRACE(Location()); }      
{rbrace}	{ return yy::parser::make_RBRACE(Location()); }      
{sng_quoted_string}	{ 
    std::string str(YYText());
    if(m_driver.strtable.find(str) == std::end(m_driver.strtable)) {
        m_driver.strtable[str] = elex::Symbol(new elex::Entry(str, str.length()));
    }
    return yy::parser::make_SNG_QUOTED_STRING_LITERAL(m_driver.strtable[str], Location()); 
    }   
{sng_quote}	{ return yy::parser::make_SNG_QUOTE(Location()); }   
{at}	    { return yy::parser::make_AT(Location()); }   

{comma}       { return yy::parser::make_COMMA(Location()); }
{colon}       { return yy::parser::make_COLON(Location()); }
{semicolon}   { return yy::parser::make_SEMICOLON(Location()); }
{ddot}        { return yy::parser::make_DDOT(Location()); }
{dot}         { return yy::parser::make_DOT(Location()); }
{implication} { return yy::parser::make_IMPLICATION(Location()); }

    /* ------------------ Operators ----------------- */
    /* ------------------ Names & Numbers & String Literals ----------------- */
{number}  { 
    std::string number(YYText());
    if(m_driver.inttable.find(number) == std::end(m_driver.inttable)) {
        m_driver.inttable[number] = elex::Symbol(new elex::Entry(number, number.length()));
    }
    // return yy::parser::make_NUMBER(std::stoi(YYText()), Location()); 
    return yy::parser::make_NUMBER(m_driver.inttable[number], Location()); 
}

{name}    { 
    std::string id(YYText());
    if(m_driver.idtable.find(id) == std::end(m_driver.idtable)) {
        m_driver.idtable[id] = elex::Symbol(new elex::Entry(id, id.length()));
    }
    return yy::parser::make_ID(m_driver.idtable[id], Location()); 
}

{string}  { 
    std::string str(YYText());
    if(m_driver.strtable.find(str) == std::end(m_driver.strtable)) {
        m_driver.strtable[str] = elex::Symbol(new elex::Entry(str, str.length()));
    }
    return yy::parser::make_STRING_LITERAL(m_driver.strtable[str], Location()); }

<<EOF>>   { return yyterminate(); }

%%
