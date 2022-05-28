%skeleton "lalr1.cc"  // -* C++ -*-
%require "3.0.4"
%define api.token.constructor
%define api.value.type variant
%locations
%define parse.assert true
%define parse.trace 
%define parse.error verbose
%defines // create hpp files (parser.hpp, position.hh, location.hh)
%lex-param { yy::scanner& lexer }
%lex-param { yy::driver& driver }
%parse-param { yy::scanner& lexer }
%parse-param { yy::driver& driver }

%code requires {
    using namespace std;

    namespace yy {
        class scanner;
        class driver;
    }
}

%code top{
    #include <iostream>
    #include <string>
    #include "scanner.hpp"
    #include "parser.hpp"
    #include "driver.hpp"

    using namespace std;
        // yylex() arguments are defined in parser.y
    static yy::parser::symbol_type yylex(yy::scanner &lexer, yy::driver &driver) {
        return lexer.get_next_token();
    }

}

%token <std::string> ID
%token <std::string> STRING_LITERAL
%token <int> NUMBER
%token END 0 

%nterm <int> program

%start program

%%

program : NUMBER { 
        $$ = $1;
        cout <<  "ID: " << $$ << " and Parsing ended" << endl; 
    };

%%

void yy::parser::error(location const& location, std::string const& message){
    cerr << "Syntax error at " << location << ": " << message << endl;
}
