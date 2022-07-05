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

    namespace elex {
        enum e_method_ext_mod {
            eModError = -1,
            eNone,
            eOnly,
            eFirst,
            eAlso
        };

        enum e_method_int_mod {
            eEmpty,
            eUndefined
        };
    };
}

/* goes inside implementation file */
%code top{
    #include <iostream>
    #include <string>
    #include <exception>
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
%token IT	      
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
%token SOFT
%token NEW
%token AS_A    
%token IMPORT    
%token KEY    

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
%token SLASH         
%token REMAINDER      
%token HWP
%token TERNARY   
%token AT

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

/* token precedence */
%nonassoc EQ NEQ VERILOG_EQ VERILOG_NEQ GT GTE LT LTE
%left IN IS OR AND LOGICAL_AND_OP LOGICAL_OR_OP BTWS_AND_OP BTWS_OR_OP XOR_OP XOR LSHIFT RSHIFT IMPLICATION
%right LOGICAL_NOT_OP BTWS_NOT_OP

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
%nterm <elex::Statement>  import_statement

/* Struct Members */
%nterm <elex::StructMembers> struct_members
%nterm <elex::StructMember>  struct_member
%nterm <elex::StructMember>  non_term_struct_member

%nterm <elex::StructMember>  field_declaration
%nterm <elex::StructMember>  method_declaration
%nterm <elex::StructMember>  tcm_declaration
%nterm <elex::StructMember>  event_declaration
%nterm <elex::StructMember>  coverage_group_declaration
%nterm <elex::StructMember>  when_subtype_declaration
%nterm <elex::StructMember>  on_event_definition
%nterm <elex::StructMember>  constraint_definition
%nterm <elex::StructMember>  expect_definition

%nterm <elex::StructMember>  scalar_field_declaration
%nterm <elex::StructMember>  list_field_declaration
%nterm <elex::StructMember>  keyed_list_field_declaration

/* Actions */
%nterm <elex::Actions> actions
%nterm <elex::Actions> action_block
%nterm <elex::Actions> opt_with_action_block
%nterm <elex::Action>  action
%nterm <elex::Action>  non_term_action

/* Expressions */
%nterm <elex::Expressions>  expressions
%nterm <elex::Expression>   expression
%nterm <elex::Expression>   non_term_expression

%nterm <elex::Expressions>  comma_separated_expressions 

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

%nterm <elex::Expressions>  allocate_expression
%nterm <elex::Expressions>  opt_struct_type_expr_with_opt_action_block
%nterm <elex::Expression>   opt_struct_type_id_expression
%nterm <elex::Expression>   struct_type_id_expression
%nterm <elex::Expressions>  struct_type_modifiers
%nterm <elex::Expressions>  opt_struct_type_modifiers
%nterm <elex::Expression>   struct_type_modifier
%nterm <elex::Expression>   named_action_block
%nterm <elex::Expression>   opt_iterated_id_expr
%nterm <elex::Expression>   iterated_id_expr

%nterm <elex::Expression>   id_expr
%nterm <elex::Expression>   type_scalar
%nterm <elex::Expression>   enum_type_expr
%nterm <elex::Expressions>  enum_list_exprs
%nterm <elex::Expression>   enum_list_item

%nterm <elex::Expression>   hier_ref_expression
%nterm <elex::Expressions>  dot_separated_expressions
%nterm <elex::Expression>   hdl_pathname_expression
%nterm <elex::Expression>   slash_separated_expressions

%nterm <elex::expression>   ternary_operator_expression   
%nterm <elex::expression>   casting_operator_expression   

%nterm <elex::Expression>   opt_expr
%nterm <elex::Expression>   opt_slice_expr
%nterm <elex::Expression>   opt_struct_type_id

%nterm <elex::Expression>   range_modifier_expression

%nterm <elex::Expression>   constraint_expression
%nterm <elex::Expression>   method_call_expression

%nterm <elex::Expression>   sized_scalar_expr

%nterm <elex::Expression>   str_expression
%nterm <elex::Expression>   me_expression
%nterm <elex::Expression>   it_expression

%nterm <elex::Formals>      formals
%nterm <elex::Formal>       formal

%nterm <elex::Symbol_>      opt_return_type
%nterm <elex::e_method_int_mod> opt_method_introduction_modifier
%nterm <elex::e_method_ext_mod> opt_method_extension_modifier

%nterm <elex::Expression>   opt_len_expr
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
    | import_statement  { $$ = $1; }
    ;

import_statement : 
    IMPORT ID { $$ = elex::import($2); }
    ;

struct_statement : 
    STRUCT ID LBRACE struct_members RBRACE { $$ = elex::struct_($2, $4); }
    ;

unit_statement   : 
    UNIT ID LBRACE struct_members RBRACE   { $$ = elex::unit($2, $4); }
    ;

package_statement : 
    PACKAGE ID { $$ = elex::package($2); }
    ;

extend_struct_unit_statement : 
      EXTEND ID LIKE ID LBRACE struct_members RBRACE { $$ = elex::extend_like($2, $4, $6); }
    | EXTEND ID LBRACE struct_members RBRACE         { $$ = elex::extend_when($2, $4); }
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

non_term_struct_member : 
      field_declaration        { $$ = $1; }
    | method_declaration       { $$ = $1; }
    | tcm_declaration          { $$ = $1; }
    | when_subtype_declaration { $$ = $1; }
//   | event_declaration { $$ = $1; }
//   | coverage_group_declaration { $$ = $1; }
//   | on_event_definition { $$ = $1; }
//   | constraint_definition { $$ = $1; }
//   | expect_definition { $$ = $1; }
    ; // TODO: correctly implement this

field_declaration : 
      scalar_field_declaration      { $$ = $1; }
    | list_field_declaration        { $$ = $1; }
    | keyed_list_field_declaration  { $$ = $1; }
    ;

// name : type

// TODO: type should not only be an id expression but also a struct name qualifier
// TODO: add optional physical and do-not-randomize modifiers
// TODO: add optional const modifier
// TODO: add optional bits|bytes length specification
scalar_field_declaration : 
    ID[name] COLON ID[type_] { $$ = elex::struct_field_sm($name, $type_); }     
    ;

// list-name[[len]] : list of type

// TODO: make $len optional
// TODO: type should not only be an id expression but also a struct name qualifier
// TODO: add optional physical and do-not-randomize modifiers
list_field_declaration : 
    ID[name] LBRACKET id_expr[len] RBRACKET COLON LIST OF ID[type_] { $$ = elex::struct_field_list_sm($name, $len, $type_); }
    ;

// list-name : list(key: key-name) of list-type

// TODO: type should not only be an id expression but also a struct name qualifier
// TODO: add optional physical and do-not-randomize modifiers
keyed_list_field_declaration : 
    ID[name] COLON LIST LPAREN KEY COLON id_expr[key_type] RPAREN OF ID[list_type] { $$ = elex::struct_field_assoc_list_sm($name, $key_type, $list_type); }
    ;

method_declaration : 
      /*
        method([arguments]) [: return_type] is [also|only|first] { action; ...}
      */
      ID[id] LPAREN formals[args] RPAREN opt_return_type[return_type] IS opt_method_extension_modifier[method_modifier] action_block[actions_]       
      { 
          switch($method_modifier) {
            case eNone: {  // method([arguments]) [: return_type] is { action; ...}
              $$ = elex::method_dec_sm($id, $args, $return_type, $actions_); 
              break;  
            }

            case eOnly: {  // method([arguments]) [: return_type] is only { action; ...}
              $$ = elex::method_dec_only_sm($id, $args, $return_type, $actions_); 
              break;  
            }
            case eAlso: { // method([arguments]) [: return_type] is also { action; ...}
              $$ = elex::method_dec_also_sm($id, $args, $return_type, $actions_); 
              break;  
            }

            case eFirst: { // method([arguments]) [: return_type] is first { action; ...}
              $$ = elex::method_dec_first_sm($id, $args, $return_type, $actions_); 
              break;  
            }
          }
      }

      /*
        method([arguments]) [: return_type] is empty|undefined
      */
    | ID[id] LPAREN formals[args] RPAREN opt_return_type[return_type] IS opt_method_introduction_modifier[intro_modifier]
      {
          switch($intro_modifier) {
            case eEmpty: {  // method([arguments]) [: return_type] is empty
              $$ = elex::method_dec_empty_sm($id, $args, $return_type);
              break;
            }
            
            case eUndefined : { // method([arguments]) [: return_type] is undefined
              $$ = elex::method_dec_undef_sm($id, $args, $return_type); 
            }
          }
      }
    ;     

tcm_declaration : 
      /*
        method([arguments]) [: return_type] @event is [also|only|first] { action; ...}
      */
      ID[id] LPAREN formals[args] RPAREN opt_return_type[return_type] AT hier_ref_expression[event] IS opt_method_extension_modifier[method_modifier] action_block[actions_]       
      { 
          switch($method_modifier) {
            case eNone: {  // method([arguments]) [: return_type] @event is { action; ...}
              $$ = elex::tcm_dec_sm($id, $args, $return_type, $event, $actions_); 
              break;  
            }

            case eOnly: {  // method([arguments]) [: return_type] @event is only { action; ...}
              $$ = elex::tcm_dec_only_sm($id, $args, $return_type, $event, $actions_); 
              break;  
            }

            case eAlso: { // method([arguments]) [: return_type] @event is also { action; ...}
              $$ = elex::tcm_dec_also_sm($id, $args, $return_type, $event, $actions_); 
              break;  
            }

            case eFirst: { // method([arguments]) [: return_type] @event is first { action; ...}
              $$ = elex::tcm_dec_first_sm($id, $args, $return_type, $event, $actions_); 
              break;  
            }
          }
      }

      /*
        method([arguments]) [: return_type] @event is empty|undefined
      */
    | ID[id] LPAREN formals[args] RPAREN opt_return_type[return_type] AT hier_ref_expression[event] IS opt_method_introduction_modifier[intro_modifier]
      {
          switch($intro_modifier) {
            case eEmpty: {  // method([arguments]) [: return_type] @event is empty
              $$ = elex::tcm_dec_empty_sm($id, $args, $return_type, $event);
              break;
            }
            
            case eUndefined : { // method([arguments]) [: return_type] @event is undefined
              $$ = elex::tcm_dec_undef_sm($id, $args, $return_type, $event); 
            }
          }
      }
    ;

opt_method_extension_modifier : 
      %empty { $$ = eNone; }
    | ONLY   { $$ = eOnly; }
    | ALSO   { $$ = eAlso; }
    | FIRST  { $$ = eFirst; }
    ;

opt_method_introduction_modifier : 
      EMPTY     { $$ = eEmpty; }
    | UNDEFINED { $$ = eUndefined; }

// when VALUE'id,... [base-struct-type] { member; ...}
when_subtype_declaration :
    WHEN struct_type_modifiers[subtype_mods] LBRACE struct_members[members] RBRACE 
    {
        // base-type should be the last element, but is optional
        // if it exists, semantic analysis should be checking that the last element id
        // is an id_expr and its value equals to the struct type
        $$ = elex::when_subtype_sm($subtype_mods, $members); 
    }
    ;

/* Actions */
actions : 
      %empty         { $$ = elex::nil_Actions(); }
    | actions action { $$ = elex::append_Actions($1, elex::single_Actions($2)); }
    ;

action_block : 
    LBRACE actions RBRACE { $$ = $2; }
    ;

action : non_term_action SEMICOLON { $$ = $1; } 
    ;

non_term_action : %empty { $$ = elex::no_action(); } //TODO: implement
    ;

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
    | id_expr            { $$ = $1; }
    ; // TODO: fully implement this

type_scalar: // TODO: fully implement this
    enum_type_expr { $$ = $1; } 
    ;

enum_type_expr : LBRACKET enum_list_exprs RBRACKET { $$ = elex::enum_type_expr($2); }
    ;

enum_list_exprs :     
    enum_list_item                         { $$ = elex::single_Expressions($1); }
    | enum_list_exprs COMMA enum_list_item { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    | %empty                               { $$ = elex::nil_Expressions(); }
    ;

enum_list_item : 
      ID EQ ID  { $$ = elex::enum_list_item($1, elex::id_expr($3)); }
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
      non_term_expression BTWS_AND_OP non_term_expression { $$ = elex::bitwise_and_expr($1, $3); }
    | non_term_expression BTWS_OR_OP  non_term_expression { $$ = elex::bitwise_or_expr($1, $3); }
    | non_term_expression XOR_OP      non_term_expression { $$ = elex::bitwise_xor_expr($1, $3); }
    ;

shift_expression : 
      non_term_expression LSHIFT non_term_expression { $$ = elex::shift_left_expr($1, $3); }
    | non_term_expression RSHIFT non_term_expression { $$ = elex::right_left_expr($1, $3); }
    ;

logical_expression : 
      unary_logical_expression  { $$ = $1; }
    | binary_logical_expression { $$ = $1; }
    | implication_expression    { $$ = $1; }
    | comparison_expression     { $$ = $1; }
    | inclusion_expression      { $$ = $1; }
    ;

unary_logical_expression : 
    LOGICAL_NOT_OP non_term_expression   { $$ = elex::logical_not_expr($2); }
    ;

binary_logical_expression : 
      non_term_expression LOGICAL_AND_OP non_term_expression { $$ = elex::logical_and_expr($1, $3); }
    | non_term_expression AND non_term_expression            { $$ = elex::logical_and_expr($1, $3); }
    | non_term_expression LOGICAL_OR_OP non_term_expression  { $$ = elex::logical_or_expr($1, $3); }
    | non_term_expression OR non_term_expression             { $$ = elex::logical_or_expr($1, $3); }
    ;

implication_expression : 
    non_term_expression IMPLICATION non_term_expression { $$ = elex::implication_expr($1, $3); }
    ;

inclusion_expression : 
    non_term_expression IN non_term_expression          { $$ = elex::in_expr($1, $3); }
    ;

arithmetic_expression : 
      unary_arithmetic_expression  { $$ = $1; }
    | binary_arithmetic_expression { $$ = $1; }
    ;

unary_arithmetic_expression : 
      PLUS non_term_expression  { $$ = elex::unary_positive_expr($2); }
    | MINUS non_term_expression { $$ = elex::unary_negative_expr($2); }
    ;

binary_arithmetic_expression : 
      non_term_expression PLUS      non_term_expression { $$ = elex::binary_add_expr($1, $3); }
    | non_term_expression MINUS     non_term_expression { $$ = elex::binary_sub_expr($1, $3); }
    | non_term_expression MUL       non_term_expression { $$ = elex::binary_mul_expr($1, $3); }
    | non_term_expression DIV       non_term_expression { $$ = elex::binary_div_expr($1, $3); }
    | non_term_expression REMAINDER non_term_expression { $$ = elex::binary_remainder_expr($1, $3); }
    ;

comparison_expression : 
      non_term_expression GT non_term_expression  { $$ = elex::greater_then_expr($1, $3); }
    | non_term_expression LT non_term_expression  { $$ = elex::less_then_expr($1, $3); }
    | non_term_expression GTE non_term_expression { $$ = elex::greater_then_or_equal_expr($1, $3); }
    | non_term_expression LTE non_term_expression { $$ = elex::less_then_or_equal_expr($1, $3); }
    | non_term_expression EQ non_term_expression  { $$ = elex::equality_expr($1, $3); }
    | non_term_expression NEQ non_term_expression { $$ = elex::non_equality_expr($1, $3); }
    | non_term_expression VERILOG_EQ non_term_expression  { $$ = elex::hdl_equality_expr($1, $3); }
    | non_term_expression VERILOG_NEQ non_term_expression { $$ = elex::hdl_non_equality_expr($1, $3); }
    | non_term_expression BTWS_NOT_OP non_term_expression                { $$ = elex::str_match_expr($1, $3); } // "str" ~ "pattern"
    | non_term_expression LOGICAL_NOT_OP BTWS_NOT_OP non_term_expression { $$ = elex::str_does_not_match_expr($1, $4); } // "str" !~ "pattern"
    ;

list_indexing_expression : 
    non_term_expression LBRACKET non_term_expression RBRACKET { $$ = elex::list_indexing_expr($1, $3); }
    ;

list_slicing_expression : 
    non_term_expression LBRACKET opt_expr COLON opt_expr opt_slice_expr RBRACKET { $$ = elex::list_slicing_expr($1, $3, $5, $6); }
    ;

list_splicing_expression : 
    non_term_expression LBRACKET opt_expr DDOT opt_expr RBRACKET { $$ = elex::list_splicing_expr($1, $3, $5); }
    ;
    
list_concatenation_expression : 
    LBRACE list_concat_expressions RBRACE { $$ = elex::list_concat_expr($2); }
    ;

list_concat_expressions : 
      non_term_expression                                   { $$ = elex::single_non_term_expressions($1); }
    | list_concat_expressions SEMICOLON non_term_expression { $$ = elex::append_non_term_expressions($1, elex::single_non_term_expressions($3)); }
    ;

bit_concatenation_expression : 
    REMAINDER LBRACE comma_separated_expressions RBRACE { $$ = elex::bit_concat_expr($3); }


range_modifier_expression : 
    LBRACKET comma_separated_expressions RBRACKET    { $$ = elex::range_modifier_expr($2); }
    ;

comma_separated_expressions : 
      non_term_expression                                   { $$ = elex::single_non_term_expressions($1); }
    | comma_separated_expressions COMMA non_term_expression { $$ = elex::append_non_term_expressions($1, elex::single_non_term_expressions($3)); }
    ;

sized_scalar_expr : 
      LPAREN BITS  COLON expression RPAREN      { $$ = elex::sized_bits_scalar_expr($4); }
    | LPAREN BYTES COLON expression RPAREN      { $$ = elex::sized_bytes_scalar_expr($4); }
    ;

allocate_expression : // new [struct-type [[(name)] with {action;...}]]
    NEW opt_struct_type_expr_with_opt_action_block { $$ = elex::allocate_expr($2); }
    ;

opt_struct_type_expr_with_opt_action_block : // [struct-type [[(name)] with {action;...}]]
      %empty                                   { $$ = elex::no_expr(); }
    | opt_struct_type_id_expression opt_with_action_block { $$ = elex::struct_type_expr_with_opt_action_block($1, $2); }
    ;

opt_struct_type_id_expression : // [[struct_id]]
      %empty          { $$ = elex::no_expr(); }
    | struct_type_id_expression  { $$ = $1; }                      
    ;

struct_type_id_expression : // [[VALUE1'id1|id1 VALUE1'id2|id2 ...]] id
    struct_type_modifiers[modifiers] 
    { 
        if($modifiers.m_elems.empty())
           yy::parser::error(@modifiers, "struct type modifier must have at least a single identifier or modifier");

        auto struct_id = $modifiers.m_elems.back();
        $modifiers.m_elems.pop_back();

        $$ = elex::struct_type_id_expr($modifiers, struct_id); 
    }
    ;

opt_struct_type_modifiers : // [[VALUE1'id1|id1 VALUE1'id2|id2 ...]]
      %empty                 { $$ = elex::nil_Expressions(); }
    | struct_type_modifiers  { $$ = $1;}
    ;

struct_type_modifiers : // VALUE1'id1|id1 VALUE1'id2|id2 ...
      struct_type_modifier                       { $$ = elex::single_Expressions($1); }
    | struct_type_modifiers struct_type_modifier { $$ = elex::append_Expressions($1, elex::single_Expressions($2)); }
    ;

struct_type_modifier : // VALUE'id | id
      id_expr[value] SNG_QUOTE id_expr[id] { $$ = elex::struct_type_modifier($value, $id); }
    | id_expr[value]                       { $$ = elex::struct_type_modifier($value, elex::no_expr()); }
    ;

opt_with_action_block : // [[ [[(name)]] with {action; ...}]]
      %empty                                              { $$ = elex::no_expr(); }
    | opt_iterated_id_expr[id] WITH action_block[actions] { $$ = elex::named_action_block($id, $actions); }
    ;

opt_iterated_id_expr : // [[ (name) ]]
      %empty                { $$ = elex::no_expr(); }
    | LPAREN id_expr RPAREN { $$ = $2; }

opt_slice_expr : // [[: slice]]
      %empty            { $$ = elex::no_expr(); }
    | COLON non_term_expression  { $$ = $2; } 

opt_expr :  // [[ expr ]]
      %empty        { $$ = elex::no_expr(); }
    | non_term_expression    { $$ = $1; }
    ;

str_expression : 
    STRING_LITERAL { $$ = elex::str_expr($1); }
    ;

hier_ref_expression : 
    dot_separated_expressions { $$ = elex::struct_hier_ref_expr($1); }
    ;

dot_separated_expressions : 
      non_term_expression                                { $$ = elex::single_Expressions($1); }
    | dot_separated_expressions DOT non_term_expression  { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;

hdl_pathname_expression : 
      SNG_QUOTE slash_separated_expressions SNG_QUOTE { $$ = elex::hdl_path_name_expr($2); }
    | SNG_QUOTE dot_separated_expressions   SNG_QUOTE { $$ = elex::hdl_path_name_expr($2); }
    ; 

slash_separated_expressions : 
      non_term_expression                                   { $$ = elex::single_Expressions($1); }
    | slash_separated_expressions SLASH non_term_expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;


ternary_operator_expression :
    non_term_expression[cond] TERNARY non_term_expression[true_exp] COLON non_term_expression[false_exp] { $$ = elex::ternary_operator_expr($cond, $true_exp, $false_exp); }
    ;   

casting_operator_expression :
    non_term_expression[casted] DOT AS_A LPAREN non_term_expression[dest_type] RPAREN { $$ = elex::cast_operator_expr($casted, $dest_type); }
    ;

constraint_expression : 
      logical_expression         { $$ = elex::constraint_expr($1); }
    | SOFT constraint_expression { $$ = elex::soft_constraint_expr($2); }
    ;

method_call_expression : 
    non_term_expression[base] LPAREN comma_separated_expressions[arguments] RPAREN { $$ = elex::method_call_expr($base, $arguments); }
    ;

me_expression : 
    ME { $$ = elex::me_expr(); }
    ;

it_expression : 
    IT { $$ = elex::it_expr(); }
    ;

formals:
      %empty               { $$ = elex::nil_Formals(); }
    | formal               { $$ = elex::single_Formals($1); }
    | formals COMMA formal { $$ = elex::append_Formals($1, elex::single_Formals($3)); }
    ;

formal : 
    ID[name] COLON ID[type_] { $$ = elex::formal($name, $type_); }
    ;

opt_return_type : 
      %empty    { $$ = driver.idtable["NO SYMBOL"]; } 
    | COLON ID  { $$ = $2; }

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
