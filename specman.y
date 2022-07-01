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

/* goes inside header file */
%code requires {
    
    #include "specman-tree.hpp"
    using namespace std;

    namespace yy {
        class scanner;
        class driver;
    }
}

/* goes inside implementation file */
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
%token CYCLE
%token DETACH
%token TRUE
%token FALSE
%token RISE 
%token FALL 
%token CHANGE
%token DELAY
%token CONSUME
%token FAIL 
%token EVENTUAL
%token START
%token WAIT
%token SYNC
%token ONLY
%token ALSO
%token UNDEFINED
%token EVENT
%token PACKAGE
%token PRIVATE
%token PROTECTED
%token SEQUENCE
%token THAT
%token ASSUME
%token EXPECT
%token ASSERT
%token STEP

%token NULL_
%token UNDEF
%token TRUE_LITERAL
%token FALSE_LITERAL
/* ------------------ Keywords ------------------ */

/* ------------------ Operators ----------------- */
%token XOR_OP
%token BITWISE_AND_OP
%token VERILOG_EQ      
%token VERILOG_NEQ     
%token EQ          
%token NEQ         
%token ASSIGN      
%token LOGICAL_AND_OP  
%token BTWS_AND_OP 
%token LOGICAL_OR_OP   
%token BTWS_OR_OP  
%token BTWS_NOT_OP 
%token LOGICAL_NOT_OP  
%token PLUS        
%token MINUS       
%token LSHIFT      
%token RSHIFT      
%token GTE         
%token GT          
%token LTE         
%token LT          
%token MUL         
%token DIV         
%token REMAINDER      
%token HWP         

%token LPAREN      
%token RPAREN      
%token LBRACKET    
%token RBRACKET    
%token LBRACE      
%token RBRACE      
%token SNG_QUOTE   

%token COMMA 
%token COLON
%token SEMICOLON
%token DOT 
/* ------------------ Operators ----------------- */

/* ------------------ Literals ------------------ */
%token <elex::Symbol_> STRING_LITERAL
/* ------------------ Literals ------------------ */

%token <elex::Symbol_> ID
%token <int> NUMBER
%token END 0 

%nterm <elex::Module>     module
%nterm <elex::Statements> statements
%nterm <elex::Statement>  statement
%nterm <elex::Statement>  unit
%nterm <elex::Statement>  struct_
%nterm <elex::Statement>  extend

%start module

%%

module : statements { 
        $$ = module_($1);
        driver.set_root($$);
    };

statements : statement      { $$ = elex::single_Statements($1); }// TODO: add implementations
    | statements statement  { $$ = elex::append_Statements($1, elex::single_Statements($2)); }
    ; 

statement : 
    unit        { $$ = $1; }
    | struct_   { $$ = $1; }
    | extend    { $$ = $1; }
    ;

unit : UNIT ID LBRACE RBRACE SEMICOLON { $$ = elex::unit($2); };
 
struct_ : STRUCT ID LBRACE RBRACE SEMICOLON { $$ = elex::struct_($2); }
    ;
 
extend :  EXTEND ID LIKE ID LBRACE RBRACE SEMICOLON  { $$ = elex::extend_like($2, $4); }
    ;

%%

void yy::parser::error(location const& location, std::string const& message){
    cerr << "Syntax error at " << location << ": " << message << endl;
}
