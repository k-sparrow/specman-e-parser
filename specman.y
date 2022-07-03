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
%token DDOT
%token DOT 
%token IMPLICATION 
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
%nterm <elex::Expressions>  expressions
%nterm <elex::Expression>   expression
%nterm <elex::Expression>   non_term_expression

/* Bitwise Expressions */
%nterm <elex::Expression>   bitwise_expression
%nterm <elex::Expression>   unary_bitwise_expression
%nterm <elex::Expression>   binary_bitwise_expression
%nterm <elex::Expression>   shift_expression

/* Logical (Boolean) Expressions */
%nterm <elex::Expression>   logical_expression
%nterm <elex::Expression>   unary_logical_expression
%nterm <elex::Expression>   binary_logical_expression
%nterm <elex::Expression>   comparison_expression
%nterm <elex::Expression>   inclusion_expression
%nterm <elex::Expression>   implication_expression

/* Arithmetic Expressions */ 
%nterm <elex::Expression>   arithmetic_expression
%nterm <elex::Expression>   unary_arithmetic_expression
%nterm <elex::Expression>   binary_arithmetic_expression

/* Object Expressions */
%nterm <elex::Expression>   list_indexing_expression
%nterm <elex::Expression>   list_slicing_expression
%nterm <elex::Expression>   list_splicing_expression
%nterm <elex::Expression>   list_concatenation_expression
%nterm <elex::Expressions>  list_concat_expressions
%nterm <elex::Expression>   bit_concatenation_expression
%nterm <elex::Expressions>  bit_concat_expressions

%nterm <elex::Expression>   id_expr
%nterm <elex::Expression>   type_scalar
%nterm <elex::Expression>   enum_type_expr
%nterm <elex::Expressions>  enum_list_exprs
%nterm <elex::Expression>   enum_list_item

%nterm <elex::Expression>   str_expression

%nterm <elex::Expression>   opt_expr
%nterm <elex::Expression>   opt_slice_expr

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

non_term_expression :  
      type_scalar        { $$ = $1; }
    | bitwise_expression { $$ = $1; }
    | logical_expression { $$ = $1; }
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

bitwise_expression : 
      unary_bitwise_expression  { $$ = $1;}
    | binary_bitwise_expression { $$ = $1;}
    | shift_expression          { $$ = $1;}
    ;

unary_bitwise_expression : 
    BTWS_NOT_OP expression { $$ = elex::bitwise_not_expr($2); }
    // TODO: $2 should be numeric or HDL pathname only - refactor this
    ;

binary_bitwise_expression : 
      expression BTWS_AND_OP expression { $$ = elex::bitwise_and_expr($1, $3); }
    | expression BTWS_OR_OP expression  { $$ = elex::bitwise_or_expr($1, $3); }
    | expression XOR_OP expression      { $$ = elex::bitwise_xor_expr($1, $3); }
    ;

shift_expression : 
      expression LSHIFT expression { $$ = elex::shift_left_expr($1, $3); }
    | expression RSHIFT expression { $$ = elex::right_left_expr($1, $3); }
    ;

logical_expression : 
      unary_logical_expression  { $$ = $1; }
    | binary_logical_expression { $$ = $1; }
    | implication_expression    { $$ = $1; }
    | comparison_expression     { $$ = $1; }
    | inclusion_expression      { $$ = $1; }
    ;

unary_logical_expression : 
    LOGICAL_NOT_OP expression   { $$ = elex::logical_not_expr($2); }
    ;

binary_logical_expression : 
      expression LOGICAL_AND_OP expression { $$ = elex::logical_and_expr($1, $3); }
    | expression AND expression            { $$ = elex::logical_and_expr($1, $3); }
    | expression LOGICAL_OR_OP expression  { $$ = elex::logical_or_expr($1, $3); }
    | expression OR expression             { $$ = elex::logical_or_expr($1, $3); }
    ;

implication_expression : 
    expression IMPLICATION expression { $$ = elex::implication_expr($1, $3); }
    ;

inclusion_expression : 
    expression IN expression          { $$ = elex::in_expr($1, $3); }
    ;

arithmetic_expression : 
      unary_arithmetic_expression  { $$ = $1; }
    | binary_arithmetic_expression { $$ = $1; }
    ;

unary_arithmetic_expression : 
      PLUS expression  { $$ = elex::unary_positive_expr($2); }
    | MINUS expression { $$ = elex::unary_negative_expr($2); }
    ;

binary_arithmetic_expression : 
      expression PLUS      expression { $$ = elex::binary_add_expr($1, $3); }
    | expression MINUS     expression { $$ = elex::binary_sub_expr($1, $3); }
    | expression MUL       expression { $$ = elex::binary_mul_expr($1, $3); }
    | expression DIV       expression { $$ = elex::binary_div_expr($1, $3); }
    | expression REMAINDER expression { $$ = elex::binary_remainder_expr($1, $3); }
    ;

comparison_expression : 
      expression GT expression  { $$ = elex::greater_then_expr($1, $3); }
    | expression LT expression  { $$ = elex::less_then_expr($1, $3); }
    | expression GTE expression { $$ = elex::greater_then_or_equal_expr($1, $3); }
    | expression LTE expression { $$ = elex::less_then_or_equal_expr($1, $3); }
    | expression EQ expression  { $$ = elex::equality_expr($1, $3); }
    | expression NEQ expression { $$ = elex::non_equality_expr($1, $3); }
    | expression VERILOG_EQ expression  { $$ = elex::hdl_equality_expr($1, $3); }
    | expression VERILOG_NEQ expression { $$ = elex::hdl_non_equality_expr($1, $3); }
    | expression BTWS_NOT_OP expression                { $$ = elex::str_match_expr($1, $3); } // "str" ~ "pattern"
    | expression LOGICAL_NOT_OP BTWS_NOT_OP expression { $$ = elex::str_does_not_match_expr($1, $4); } // "str" !~ "pattern"
    ;

list_indexing_expression : 
    expression LBRACKET expression RBRACKET { $$ = elex::list_indexing_expr($1, $3); }
    ;

list_slicing_expression : 
    expression LBRACKET opt_expr COLON opt_expr opt_slice_expr RBRACKET { $$ = elex::list_slicing_expr($1, $3, $5, $6); }
    ;

list_splicing_expression : 
    expression LBRACKET opt_expr DDOT opt_expr RBRACKET { $$ = elex::list_splicing_expr($1, $3, $5); }
    ;
    
list_concatenation_expression : 
    LBRACE list_concat_expressions RBRACE { $$ = elex::list_concat_expr($2); }
    ;

list_concat_expressions : 
      expression                                   { $$ = elex::single_Expressions($1); }
    | list_concat_expressions SEMICOLON expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;

bit_concatenation_expression : 
    REMAINDER LBRACE bit_concat_expressions RBRACE { $$ = elex::bit_concat_expr($3); }

bit_concat_expressions : 
      expression                              { $$ = elex::single_Expressions($1); }
    | bit_concat_expressions COMMA expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;

opt_slice_expr : 
      %empty            { $$ = elex::no_expr(); }
    | COLON expression  { $$ = $2; }

opt_expr : 
      %empty        { $$ = elex::no_expr(); }
    | expression    { $$ = $1; }
    ;
str_expression : STRING_LITERAL { $$ = elex::str_match_expr($1); }
    ;

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
