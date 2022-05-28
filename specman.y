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

/* ------------------ Keywords ------------------ */
%token WHILE
%token FOR
%token IN 
%token DO 
%token WITH
%token WHEN
%token STRUCT	  
%token UNIT	    
%token ENCLOSING
%token USING	   
%token EACH	    
%token PREV	    
%token INDEX	   
%token WITHIN	  
%token GEN	     
%token BEFORE	  
%token IN_TABLE 
%token IS	      
%token A	       
%token NOT	     
%token RANGE	   
%token EMPTY	   
%token NOW	     
%token OR	      
%token AND	     
%token NXOR	    
%token XOR	     
%token NOR	     
%token NAND	    
%token ALL	     
%token FIRST	   
%token OF	      
%token ME	      
%token KEEPING  
%token KEEP     
%token LIKE
%token EXTEND
%token BIND
%token SIMPLE
%token PORT
%token METHOD
%token LIST
%token BITS
%token BYTES
%token TYPE


%token NULL_
%token UNDEF
%token TRUE
%token FALSE
/* ------------------ Keywords ------------------ */

/* ------------------ Literals ------------------ */
%token <std::string> STRING_LITERAL
/* ------------------ Literals ------------------ */

%token <std::string> ID
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
