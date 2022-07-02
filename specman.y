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

/* ------------------ helpers ------------------ */
%nterm <elex::Symbol_>    OPT_SEMICOLON
%nterm <elex::Symbol_>    OPT_PACKAGE

/* ------------------  rules  ------------------ */
%nterm <elex::Module>     module
%nterm <elex::Statements> statements
%nterm <elex::Statement>  statement
%nterm <elex::Statement>  non_term_statement

%nterm <elex::Statement>  struct_statement
%nterm <elex::Statement>  package_statement
%nterm <elex::Statement>  extend_struct_unit_statement
%nterm <elex::Statement>  type_statement
%nterm <elex::Statement>  extend_type_statement
// %nterm <elex::Statement>  routine_statement
// %nterm <elex::Statement>  simulator_statement
%nterm <elex::Statement>  unit_statement
%nterm <elex::Statement>  sequence_statement
// %nterm <elex::Statement>  method_statement
%nterm <elex::Statement>  c_export_statement
 
/* Struct Members */
%nterm <elex::StructMembers> struct_members
%nterm <elex::StructMember>  struct_member
%nterm <elex::StructMember>  non_term_struct_member

/* Expressions */
%nterm <elex::Expressions>   expressions
%nterm <elex::Expression>    expression
%nterm <elex::Expression>    non_term_expression

%nterm <elex::Expression> id_expr
%nterm <elex::Expression> type_scalar
%nterm <elex::Expression> enum_type_expr
%nterm <elex::Expressions> enum_list_exprs
%nterm <elex::Expression> enum_list_item

%start module

%%

module : statements { 
        $$ = module_($1);
        driver.set_root($$);
    };

statements : 
    %empty                  { $$ = elex::nil_Statements(); }
    | statements statement  { $$ = elex::append_Statements($1, elex::single_Statements($2)); }
    ; 

/* Statements */
statement : non_term_statement SEMICOLON { $$ = $1; }

non_term_statement : 
      package_statement { $$ = $1; }
    | struct_statement  { $$ = $1; }
    | unit_statement    { $$ = $1; }
    | extend_struct_unit_statement { $$ = $1; }
    | type_statement    { $$ = $1; }
    ;

struct_statement : 
    STRUCT ID LBRACE struct_members RBRACE { $$ = elex::struct_($2, $4); }
    ;

unit_statement   : 
    UNIT ID LBRACE struct_members RBRACE   { $$ = elex::unit($2, $4); }
    ;

package_statement : PACKAGE ID                     { $$ = elex::package($2); }
    ;

extend_struct_unit_statement : 
    EXTEND ID LIKE ID LBRACE struct_members RBRACE { $$ = elex::extend_like($2, $4, $6); }
    | EXTEND ID LBRACE struct_members RBRACE       { $$ = elex::extend_when($2, $4); }
    ;

type_statement : 
    OPT_PACKAGE TYPE ID COLON type_scalar          { $$ = elex::type_($3, $5); }
    ;


/* Struct Members */
struct_members : 
    %empty                         { $$ = elex::nil_StructMembers();  }
    | struct_members struct_member { $$ = elex::append_StructMembers($1, elex::single_StructMembers($2)); }
    ;

struct_member : non_term_struct_member SEMICOLON { $$ = $1; }
    ;

non_term_struct_member : ID {}; // TODO: correctly implement this

/* Expressions */
expressions : 
    %empty                         { $$ = elex::nil_Expressions();  }
    | expressions expression       { $$ = elex::append_Expressions($1, elex::single_Expressions($2)); }
    ;

expression : non_term_expression SEMICOLON { $$ = $1; }
    ;

non_term_expression :  type_scalar { $$ = $1; }
    ; // TODO: correctly implement this

type_scalar: 
    id_expr          { $$ = $1; } 
    | enum_type_expr { $$ = $1; } 
    ;

enum_type_expr : LBRACKET enum_list_exprs RBRACKET { $$ = elex::enum_type_expr($2); }
    ;

enum_list_exprs :     
    enum_list_item                         { $$ = elex::single_Expressions($1); }
    | enum_list_exprs COMMA enum_list_item { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    | %empty                               { $$ = elex::nil_Expressions(); }
    ;

enum_list_item : 
    ID EQ ID    { $$ = elex::enum_list_item($1, elex::id_expr($3)); }
    | ID        { $$ = elex::enum_list_item($1, elex::no_expr()); }
    ;
id_expr : ID { $$ = elex::id_expr($1); }


OPT_PACKAGE : 
    PACKAGE  { }
    | %empty { }
    ;

OPT_SEMICOLON : 
    SEMICOLON  { }
    | %empty   { }
    ;
%%

void yy::parser::error(location const& location, std::string const& message){
    cerr << "Syntax error at " << location << ": " << message << endl;
}
