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

{number}  { return yy::parser::make_NUMBER(std::stoi(YYText()), location()); }

{name}    { return yy::parser::make_ID(YYText(), location()); }

{string}  { return yy::parser::make_STRING_LITERAL(YYText(), location()); }

<<EOF>>   { return yyterminate(); }

%%

// This include is required if main() is an another source file.
//#include <FlexLexer.h>
