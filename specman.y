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

// should not have any shift/reduce or reduce/reduce conflicts
// %expect 0

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
        
        enum e_scalar_predefined_type {
            eInt,
            eUint, 
            eBool,
            eBit,
            eByte,
            eNibble,
            eTime,
            eNotPredefined 
        };

        enum e_temporal_check {
            eExpect,
            eAssume
        };

        enum e_seq_option {
          eSeqItem,
          eSeqKind,
          eSeqDrvKind,
          eSeqBaseKind,
          eSeqDrvBaseKind
        };

        enum e_radix_bucket {
          eDec,
          eHex,
          eBin
        };

        enum e_physical_dont_gen {
          eNoFieldMod = 0,
          eDoNotGen = 1,
          ePhysical = 2,
          eAllFieldMod = 3
        };
    };
}

/* goes inside implementation file */
%code top{
    #include <iostream>
    #include <string>
    #include <exception>
    #include <sstream>
    #include "scanner.hpp"
    #include "parser.hpp"
    #include "driver.hpp"

    using namespace std;
        // yylex() arguments are defined in parser.y
    static yy::parser::symbol_type yylex(yy::scanner &lexer, yy::driver &driver) {
        return lexer.get_next_token();
    }

}

%{
/*     auto decodeTypeStr() -> e_scalar_predefined_type {
    } */
    namespace elex {
        auto decodeTypeStr(Symbol_ token) -> elex::e_scalar_predefined_type {              
            auto token_str = token.lock()->Str();

            if(token_str == "int")          return eInt;
            else if (token_str == "uint")   return eUint;
            else if (token_str == "bool")   return eBool;
            else if (token_str == "bit")    return eBit;
            else if (token_str == "byte")   return eByte;
            else if (token_str == "nibble") return eNibble;
            else if (token_str == "time")   return eTime;
            else                            return eNotPredefined;
        }

        auto decodeType(Symbol_ token) -> elex::Expression {
          switch(decodeTypeStr(token)) {
              case eInt: {
                  return elex::predefined_type_int_expr();
              } 
              case eUint: {
                  return elex::predefined_type_uint_expr();
              } 
              case eBool: {
                  return elex::predefined_type_bool_expr();
              } 
              case eBit: {
                  return elex::predefined_type_bit_expr();
              } 
              case eByte: {
                  return elex::predefined_type_byte_expr();
              }
              case eNibble: {
                  return elex::predefined_type_nibble_expr();
              } 
              case eTime: {
                  return elex::predefined_type_time_expr();
              } 
              case eNotPredefined: {
                  return elex::id_expr(token);
              } 
              default: {
                  return elex::id_expr(token);
              }
          }
        }
    }
%}

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
%token IS_A	       
%token IS_NOT_A	       
%token IS	      
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
%token EVENTUALLY
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
%token SELECT    
%token KEY    
%token ON
%token EXEC
%token ITEM
%token CREATED_KIND
%token CREATED_DRIVER
%token SEQUENCE_TYPE
%token SEQUENCE_DRIVER_TYPE
%token COVER
%token GLOBAL
%token NO_COLLECT
%token PER_UNIT_INSTANCE
%token E_PATH
%token RADIX
%token DEC
%token HEX
%token BIN
%token TEXT
%token WEIGHT
%token AT_LEAST
%token IGNORE
%token ILLEGAL
%token NO_TRACE
%token NUM_OF_BUCKETS
%token PER_INSTANCE 
%token CROSS 
%token TRANSITION 

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
%token IF 
%token ELSE
%token INT 
%token UINT 
%token BIT 
%token BYTE 
%token NIBBLE
%token TIME 
%token BOOL 


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
%token <elex::Symbol_> SNG_QUOTED_STRING_LITERAL   
%token <elex::Symbol_> STRING_LITERAL
%token <elex::Symbol_> MVL_LITERAL
/* ------------------ Literals ------------------ */

%token <elex::Symbol_> ID
%token <elex::Symbol_> NUMBER
%token END 0 

/* token precedence */
%precedence EXEC
%left IN IS OR LOGICAL_OR_OP BTWS_OR_OP XOR_OP XOR LSHIFT RSHIFT IMPLICATION
%left PLUS MINUS
%left DIV MUL REMAINDER
%left AND LOGICAL_AND_OP BTWS_AND_OP
%left EQ NEQ VERILOG_EQ VERILOG_NEQ GT GTE LT LTE
%right LOGICAL_NOT_OP BTWS_NOT_OP NOT DETACH FAIL EVENTUALLY
%right RPAREN LPAREN
%precedence FIRST_MATCH 
/* ------------------ helpers ------------------ */
/* %nterm <elex::Symbol_>    OPT_SEMICOLON */
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
%nterm <elex::Statement>  inner_type_statement
%nterm <elex::Statement>  enumerated_type_statement
%nterm <elex::Statement>    scalar_subtype_statement
%nterm <elex::Expressions>  subtype_range_list_items
%nterm <elex::Expression>   subtype_range_list_item
%nterm <elex::Statement>  scalar_sized_type_statement

%nterm <elex::Statement>  extend_type_statement
// %nterm <elex::Statement>  routine_statement
// %nterm <elex::Statement>  simulator_statement
%nterm <elex::Statement>  unit_statement
%nterm <elex::Statement>  sequence_statement
%nterm <elex::SequenceItems> sequence_options
%nterm <elex::SequenceItem>  sequence_option
%nterm <elex::e_seq_option>  sequence_item_kwd
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
%nterm <elex::StructMember>  when_subtype_declaration
%nterm <elex::StructMember>  on_event_definition
%nterm <elex::StructMember>  constraint_definition
%nterm <elex::StructMember>  expect_definition
%nterm <elex::e_temporal_check> expect_or_assume_kwd
%nterm <elex::e_method_ext_mod> opt_expect_assume_modifier
%nterm <elex::Expression>       opt_dut_error_call

%nterm <elex::StructMember>  coverage_group_declaration
%nterm <elex::CovergroupOptions> coverage_group_options
%nterm <elex::CovergroupOption>  coverage_group_option
%nterm <elex::CovergroupOptions> opt_coverage_group_options
%nterm <elex::CovergroupOption>  global_cg_option
%nterm <elex::CovergroupOption>  no_collect_cg_option
%nterm <elex::CovergroupOption>  per_unit_instance_cg_option
%nterm <elex::CovergroupOption>  text_cg_option
%nterm <elex::CovergroupOption>  weight_cg_option
%nterm <elex::CovergroupOption>  when_cg_option
%nterm <elex::CovergroupOption>  radix_cg_option
%nterm <elex::e_radix_bucket>    radix_bucket
%nterm <elex::e_method_ext_mod>  opt_cg_extension

%nterm <elex::CovergroupItems>   coverage_group_items
%nterm <elex::CovergroupItem>    coverage_group_item
%nterm <elex::CovergroupItem>    non_term_coverage_group_item

%nterm <elex::CovergroupItemOption>   coverage_group_item_option
%nterm <elex::CovergroupItemOptions>  coverage_group_item_options
%nterm <elex::Expressions>            covergroup_item_list
%nterm <elex::CovergroupItemOptions>  opt_coverage_group_item_options
%nterm <elex::CovergroupItemOption>   at_least_cg_item_option
%nterm <elex::CovergroupItemOption>   ignore_cg_item_option
%nterm <elex::CovergroupItemOption>   illegal_cg_item_option
%nterm <elex::CovergroupItemOption>   no_collect_cg_item_option
%nterm <elex::CovergroupItemOption>   no_trace_cg_item_option
%nterm <elex::CovergroupItemOption>   num_of_buckets_cg_item_option
%nterm <elex::CovergroupItemOption>   per_instance_cg_item_option
%nterm <elex::CovergroupItemOption>   radix_cg_item_option
%nterm <elex::CovergroupItemOption>   text_cg_item_option
%nterm <elex::CovergroupItemOption>   weight_cg_item_option
%nterm <elex::CovergroupItemOption>   when_cg_item_option

%nterm <elex::CovergroupExtensionID>  covergroup_extension_id
%nterm <elex::CovergroupExtensionID>  opt_covergroup_extension_id

%nterm <elex::StructMember>  scalar_field_declaration
%nterm <elex::StructMember>  non_decorated_scalar_field_declaration
%nterm <elex::StructMember>  list_field_declaration
%nterm <elex::StructMember>  non_decorated_list_field_declaration
%nterm <elex::StructMember>  keyed_list_field_declaration
%nterm <elex::e_physical_dont_gen>  do_not_gen_physical

/* Actions */
%nterm <elex::Actions> actions
%nterm <elex::Actions> action_block
/* %nterm <elex::Actions> opt_with_action_block */
%nterm <elex::Action>  action
%nterm <elex::Action>  non_term_action

/* Expressions */
/* %nterm <elex::Expressions>  expressions */
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
%nterm <elex::Expression>   type_instrospection_expression

/* Arithmetic Expressions */ 
%nterm <elex::Expression>   arithmetic_expression
%nterm <elex::Expression>   unary_arithmetic_expression
%nterm <elex::Expression>   binary_arithmetic_expression

/* Temporal Expressions */
%nterm <elex::Expression>   temporal_expression
%nterm <elex::Expression>   temporal_expression_base
%nterm <elex::Expressions>  temporal_expression_base_items
%nterm <elex::Expression>   sampling_event_expression
%nterm <elex::Expression>   unary_temporal_expression_base
%nterm <elex::Expression>   binary_temporal_expression_base
%nterm <elex::Expression>   edge_triggered_temporal_expression_base

%nterm <elex::Expression>   sequence_temporal_expression_base
%nterm <elex::Expression>   fixed_repetition_temporal_expression_base
%nterm <elex::Expression>   first_match_repetition_temporal_expression_base
%nterm <elex::Expression>   true_match_repetition_temporal_expression_base
%nterm <elex::Expression>   fixed_repetition_rep_base_expr
%nterm <elex::Expression>   opt_fixed_repetition_rep_base_expr

/* Object Expressions */
/* %nterm <elex::Expression>   list_indexing_expression
%nterm <elex::Expression>   list_slicing_expression
%nterm <elex::Expression>   list_splicing_expression
%nterm <elex::Expression>   list_concatenation_expression
%nterm <elex::Expressions>  list_concat_expressions
%nterm <elex::Expression>   bit_concatenation_expression
%nterm <elex::Expressions>  bit_concat_expressions */

/* %nterm <elex::Expressions>  allocate_expression
%nterm <elex::Expressions>  opt_struct_type_expr_with_opt_action_block
%nterm <elex::Expression>   opt_struct_type_id_expression 
%nterm <elex::Expression>   struct_type_id_expression
%nterm <elex::Expressions>  opt_struct_type_modifiers
*/
%nterm <elex::Expression>   scalar_subtype_expression
%nterm <elex::Expression>   range_modifier_expression
%nterm <elex::Expression>   width_modifier_expression

%nterm <elex::Expressions>  struct_type_modifiers
%nterm <elex::Expression>   struct_type_modifier
%nterm <elex::Expression>   named_action_block
%nterm <elex::Expression>   opt_iterated_id_expr
%nterm <elex::Expression>   iterated_id_expr

%nterm <elex::Expression>   id_expr
%nterm <elex::Expression>   identifier_expression
%nterm <elex::Expression>   type_scalar_expression
%nterm <elex::Expression>   enum_type_expression
%nterm <elex::Expressions>  enum_list_exprs
%nterm <elex::Expression>   enum_list_item

%nterm <elex::Expression>   hdl_pathname_expression 
%nterm <elex::Expression>   hier_ref_expression
%nterm <elex::Expressions>  dot_separated_expressions

/* %nterm <elex::expression>   ternary_operator_expression   
%nterm <elex::expression>   casting_operator_expression    */

/* %nterm <elex::Expression>   opt_expr
%nterm <elex::Expression>   opt_slice_expr */
%nterm <elex::Expression>   opt_struct_type_id

%nterm <elex::Expression>   scalar_type_expression
%nterm <elex::Expression>   scalar_type_qualifier_expression
%nterm <elex::Expression>   predefined_scalar_type_expression

%nterm <elex::Expression>   constraint_expression
%nterm <elex::Expression>   scoped_type_identifier_expression
%nterm <elex::Expression>   terminated_constraint_expression
%nterm <elex::Expressions>  constriant_expression_block
%nterm <elex::Expression>   method_call_expression

%nterm <elex::Expression>   sized_scalar_expr

%nterm <elex::Expression>   str_expression
%nterm <elex::Expression>   int_expression
%nterm <elex::Expression>   bool_literal_expression
%nterm <elex::Expression>   me_expression
%nterm <elex::Expression>   it_expression

%nterm <elex::Cases>        weight_value_pairs               
%nterm <elex::Case>         terminated_weight_value_pair
%nterm <elex::Case>         weight_value_pair

%nterm <elex::Formals>      formals
%nterm <elex::Formal>       formal

%nterm <elex::Expression>      opt_return_type
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
      package_statement            { $$ = $1; }
    | struct_statement             { $$ = $1; }
    | unit_statement               { $$ = $1; }
    | extend_struct_unit_statement { $$ = $1; }
    | type_statement               { $$ = $1; }
    | extend_type_statement        { $$ = $1; }
    | import_statement             { $$ = $1; }
    | sequence_statement           { $$ = $1; }
    ;

import_statement : 
    IMPORT ID { $$ = elex::import($2); }
    ;

struct_statement : 
    STRUCT ID[struct_type] LBRACE struct_members[members] RBRACE 
    { $$ = elex::struct_st($struct_type, $members); }

  | STRUCT ID[struct_type] LIKE ID[base_struct_type] LBRACE struct_members[members] RBRACE 
    { $$ = elex::struct_like_st($struct_type, $base_struct_type, $members); }
  ;

unit_statement   : 
    UNIT ID LBRACE struct_members RBRACE   { $$ = elex::unit($2, $4); }
    ;

package_statement : 
    PACKAGE ID { $$ = elex::package($2); }
    ;

extend_struct_unit_statement : 
    EXTEND struct_type_modifiers[modifiers] LBRACE struct_members[members] RBRACE 
    { $$ = elex::extend_struct_st($2, $4); }
    ;

type_statement : 
  OPT_PACKAGE inner_type_statement
  { $$ = $2; }
  ;

inner_type_statement : 
    enumerated_type_statement
    { $$ = $1; }

  | scalar_subtype_statement 
    { $$ = $1; }

  | scalar_sized_type_statement
    { $$ = $1; }
  ;

// all type statements are unrolled as long productions
// in order to avoid astonishing, annoying and difficult rr & rs conflicts
enumerated_type_statement:
    TYPE ID[id] COLON LBRACKET enum_list_exprs[items] RBRACKET
    { 
      $$ = elex::enum_type_st($id, $items, nullptr); 
    }

  | TYPE ID[id] COLON LBRACKET enum_list_exprs[items] RBRACKET 
    LPAREN BITS COLON int_expression[width] RPAREN
    { 
      auto width_expr = elex::sized_bits_scalar_expr($width);
      $$ = elex::enum_type_st($id, $items, width_expr); 
    }

  | TYPE ID[id] COLON LBRACKET enum_list_exprs[items] RBRACKET 
    LPAREN BYTES COLON int_expression[width] RPAREN
    { 
      auto width_expr = elex::sized_bytes_scalar_expr($width);
      $$ = elex::enum_type_st($id, $items, width_expr); 
    }
  ;

scalar_subtype_statement :
    TYPE ID[subtype_id] COLON ID[type_id] 
    { 
      $$ = elex::scalar_subtype_st($subtype_id, elex::id_expr($type_id), nullptr);
    }

  | TYPE ID[subtype_id] COLON predefined_scalar_type_expression[type_id] 
    { 
      $$ = elex::scalar_subtype_st($subtype_id, $type_id, nullptr);
    }
  
  | TYPE ID[subtype_id] COLON ID[type_id] 
    LBRACKET subtype_range_list_items[ranges] RBRACKET
    { 
      $$ = elex::scalar_subtype_st($subtype_id, elex::id_expr($type_id), $ranges);
    }

  | TYPE ID[subtype_id] COLON predefined_scalar_type_expression[type_id] 
    LBRACKET subtype_range_list_items[ranges] RBRACKET
    { 
      $$ = elex::scalar_subtype_st($subtype_id, $type_id, $ranges);
    }
  ;

subtype_range_list_items : 
    subtype_range_list_item 
    { $$ = elex::single_Expressions($1); }

  | subtype_range_list_items COMMA subtype_range_list_item 
    { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  ;

subtype_range_list_item : 
    ID 
    { $$ = elex::id_expr($1); }
  
  | int_expression 
    { $$ = $1; }

  | ID DDOT ID 
    { $$ = elex::range_modifier_expr(elex::id_expr($1), elex::id_expr($3)); }
  
  | int_expression DDOT int_expression 
    { $$ = elex::range_modifier_expr($1, $3); }
  ;

scalar_sized_type_statement : 
    TYPE ID[id] COLON predefined_scalar_type_expression[base_type_id]
    width_modifier_expression[width]
    { $$ = elex::scalar_sized_type_st($id, 
                                      $base_type_id, 
                                      nullptr,
                                      $width); }
  
  | TYPE ID[id] COLON predefined_scalar_type_expression[base_type_id]
    LBRACKET subtype_range_list_items[ranges] RBRACKET
    width_modifier_expression[width]
    { $$ = elex::scalar_sized_type_st($id, 
                                      $base_type_id, 
                                      $ranges,
                                      $width); }
  ;

width_modifier_expression :
    LPAREN BITS COLON int_expression[width] RPAREN
    { $$ = elex::sized_bits_scalar_expr($width); }

  | LPAREN BYTES COLON int_expression[width] RPAREN
    { $$ = elex::sized_bytes_scalar_expr($width); }  
  ;

extend_type_statement :
  EXTEND ID[type_id] COLON LBRACKET enum_list_exprs[enum_items] RBRACKET 
  { $$ = elex::extend_enum_type_st($type_id, $enum_items); }
  ;

sequence_statement : 
    SEQUENCE ID[seq_id]                                 
    { 
      // this is a pure virtual sequence, meaning we didn't provide any description
      // for the following:
      //  created_kind         -> will be created as '{$seq_id}_kind_name'
      //  created_driver       -> will be created as '{$seq_id}_driver'
      //  sequence_type        -> will be created as 'any_sequence'
      //  sequence_driver_type -> will be created as 'any_sequence_driver'

      // all of those new id's will be added to the driver idtable
      $$ = elex::virtual_sequence_st(
                    $seq_id, 
                    elex::nil_SequenceItems()); 
    }

  | SEQUENCE ID[seq_id] USING sequence_options[options] 
  { 
    // TODO: add missing information filling 
    $$ = elex::sequence_st($seq_id, $options); 
  }
  ;

sequence_options : 
    sequence_option                        { $$ = elex::single_SequenceItems($1); }
  | sequence_options COMMA sequence_option { $$ = elex::append_SequenceItems($1, elex::single_SequenceItems($3)); }
  ;

sequence_option : 
  sequence_item_kwd[kwd] ASSIGN ID[id]{ 
    switch($kwd) {
      case eSeqItem: {
        $$ = elex::sequence_item_kind_it($id);
        break;
      }
      case eSeqKind: {
        $$ = elex::sequence_created_kind_name_it($id);
        break;
      }
      case eSeqDrvKind: {
        $$ = elex::sequence_created_driver_name_it($id);
        break;
      }
      case eSeqBaseKind: {
        $$ = elex::sequence_base_kind_it($id);
        break;
      }
      case eSeqDrvBaseKind: {
        $$ = elex::sequence_driver_base_kind_it($id);
        break;
      }
    }
  }
  ;

sequence_item_kwd : 
    ITEM                  { $$ = eSeqItem; }
  | CREATED_KIND          { $$ = eSeqKind; }
  | CREATED_DRIVER        { $$ = eSeqDrvKind; }
  | SEQUENCE_TYPE         { $$ = eSeqBaseKind; }
  | SEQUENCE_DRIVER_TYPE  { $$ = eSeqDrvBaseKind; }
  ;

/* Struct Members */
struct_members : 
    %empty                         { $$ = elex::nil_StructMembers();  }
    | struct_members struct_member { $$ = elex::append_StructMembers($1, elex::single_StructMembers($2)); }
    ;

struct_member : non_term_struct_member SEMICOLON { $$ = $1; }
    ;

non_term_struct_member : 
      field_declaration          { $$ = $1; }
    | method_declaration         { $$ = $1; }
    | tcm_declaration            { $$ = $1; }
    | when_subtype_declaration   { $$ = $1; }
    | event_declaration          { $$ = $1; }
    | coverage_group_declaration { $$ = $1; }
    | on_event_definition        { $$ = $1; }
    | constraint_definition      { $$ = $1; }
    | expect_definition          { $$ = $1; }
    ; 

// TODO: this is extremely ugly, needs to be entirely reworked
 coverage_group_declaration :
    COVER ID[event] IS EMPTY 
    { $$ = elex::empty_covergroup_sm($event); }
  
  | COVER ID[event] IS opt_cg_extension[ext] LBRACE coverage_group_items[cg_items] RBRACE 
    { 
      switch($ext) {
        case eAlso: 
          $$ = elex::covergroup_extension_sm($event, 
                                             elex::covergroup_per_type_ceid(),
                                             elex::nil_CovergroupOptions(), 
                                             $cg_items); 
          break;
        case eNone:
        default: 
          $$ = elex::covergroup_sm($event, 
                                  elex::nil_CovergroupOptions(), 
                                  $cg_items); }
          break;
      }
  
  | COVER ID[event] USING coverage_group_options[cg_options] IS LBRACE coverage_group_items[cg_items] RBRACE  
    { $$ = elex::covergroup_sm($event, $cg_options, $cg_items); }

  | COVER ID[event] LPAREN covergroup_extension_id[ceid] RPAREN IS opt_cg_extension[ext] LBRACE coverage_group_items[cg_items] RBRACE 
  {
      switch($ext) {
        case eAlso: 
          $$ = elex::covergroup_extension_sm($event, 
                                             $ceid,
                                             elex::nil_CovergroupOptions(), 
                                             $cg_items); 
          break;
        case eNone:
        default: 
          $$ = elex::covergroup_sm($event, 
                                  elex::nil_CovergroupOptions(), 
                                  $cg_items); }
          break;
  }

  | COVER ID[event] USING ALSO coverage_group_options[cg_options] IS ALSO LBRACE coverage_group_items[cg_items] RBRACE  
    { $$ = elex::covergroup_extension_sm($event, 
                                         elex::covergroup_per_type_ceid(), 
                                         $cg_options, 
                                         $cg_items); }

  | COVER ID[event] LPAREN covergroup_extension_id[ceid] RPAREN USING ALSO coverage_group_options[cg_options] IS ALSO LBRACE coverage_group_items[cg_items] RBRACE  
    { $$ = elex::covergroup_extension_sm($event, $ceid, $cg_options, $cg_items); }
  ;

covergroup_extension_id : 
    E_PATH EQ hier_ref_expression    { $$ = elex::covergroup_per_unit_instance_ceid($3); }
  | ID[item_name] EQ ID[bucket_name] { $$ = elex::covergroup_per_instance_ceid($item_name, $bucket_name); }
  ;


opt_cg_extension : 
    %empty { $$ = eNone; }
  | ALSO   { $$ = eAlso; }
  ;

coverage_group_options : 
    coverage_group_option 
    { $$ = elex::single_CovergroupOptions($1); }

  | coverage_group_options COMMA coverage_group_option 
    { $$ = elex::append_CovergroupOptions($1, elex::single_CovergroupOptions($3)); }
  ;

coverage_group_option : 
    global_cg_option            { $$ = $1; }
  | no_collect_cg_option        { $$ = $1; }
  | per_unit_instance_cg_option { $$ = $1; }
  | radix_cg_option             { $$ = $1; }
  | text_cg_option              { $$ = $1; }
  | weight_cg_option            { $$ = $1; }
  | when_cg_option              { $$ = $1; }
  ;

global_cg_option:
    GLOBAL ASSIGN bool_literal_expression 
    { $$ = elex::global_cgo($3); }

  | GLOBAL                      
    { $$ = elex::global_cgo(elex::true_literal_expr()); }
  ;

no_collect_cg_option :
    NO_COLLECT ASSIGN bool_literal_expression 
    { $$ = elex::no_collect_cgo($3); }

  | NO_COLLECT 
    { $$ = elex::no_collect_cgo(elex::true_literal_expr()); }
  ;

per_unit_instance_cg_option :
    PER_UNIT_INSTANCE ASSIGN hier_ref_expression 
    { $$ = elex::per_unit_instance_cgo($3); }
  
  | PER_UNIT_INSTANCE
    { $$ = elex::per_unit_instance_cgo(elex::me_expr()); }
  ;

text_cg_option : 
  TEXT ASSIGN STRING_LITERAL { $$ = elex::text_cgo($3); }
  ;

weight_cg_option : 
  WEIGHT ASSIGN NUMBER { $$ = elex::weight_cgo($3); }
  ;

when_cg_option : 
  WHEN ASSIGN logical_expression { $$ = elex::when_cgo($3); }
  ;

radix_cg_option : 
  RADIX ASSIGN radix_bucket 
  {
    switch($3){
      case eDec : {
        $$ = elex::radix_dec_cgo();
        break;
      }
      case eHex : {
        $$ = elex::radix_hex_cgo();
        break;     
      }
      case eBin : {
        $$ = elex::radix_bin_cgo();
        break;      
      }
    }
  }
  ;

radix_bucket : 
    DEC { $$ = eDec; }
  | HEX { $$ = eHex; }
  | BIN { $$ = eBin; }
  ;

bool_literal_expression :
    TRUE_LITERAL  { $$ = elex::true_literal_expr();  }
  | FALSE_LITERAL { $$ = elex::false_literal_expr(); }
  ;

coverage_group_items : 
    coverage_group_item 
    { $$ = elex::single_CovergroupItems($1); }

  | coverage_group_items coverage_group_item 
    { $$ = elex::append_CovergroupItems($1, elex::single_CovergroupItems($2)); }
  ;

coverage_group_item :
  non_term_coverage_group_item SEMICOLON { $$ = $1; }
  ;  

non_term_coverage_group_item : 
    ITEM ID[id] opt_coverage_group_item_options[options] 
    { $$ = elex::simple_covergroup_item_cgi($id, $options);}
    
  | ITEM ID[id] COLON scoped_type_identifier_expression[type_] ASSIGN non_term_expression[value] opt_coverage_group_item_options[options] 
    { $$ = elex::on_the_fly_covergroup_item_cgi($id, $type_, $value, $options); }
  
  | CROSS covergroup_item_list[cross_cg_items] opt_coverage_group_item_options[options]
    { $$ = elex::cross_covergroup_item_cgi($cross_cg_items, $options); }
  
  | TRANSITION ID[id] opt_coverage_group_item_options[options]
    { $$ = elex::transition_covergroup_item_cgi($id, $options); }
  ;

covergroup_item_list : 
    ID 
    { $$ = elex::single_Expressions(elex::id_expr($1)); }
  
  | covergroup_item_list COMMA ID 
    { $$ = elex::append_Expressions($1, elex::single_Expressions(elex::id_expr($3))); }
  ;

opt_coverage_group_item_options :
    %empty                                 
    { $$ = elex::nil_CovergroupItemOptions(); }

  | USING opt_cg_extension coverage_group_item_options 
    { $$ = $3; }
  ;

coverage_group_item_options : 
    coverage_group_item_option 
    { $$ = elex::single_CovergroupItemOptions($1); }  
  
  | coverage_group_item_options COMMA coverage_group_item_option
    { $$ = elex::append_CovergroupItemOptions($1, elex::single_CovergroupItemOptions($3)); }
  ;

coverage_group_item_option: 
    at_least_cg_item_option   { $$ = $1; }
  | ignore_cg_item_option     { $$ = $1; }
  | illegal_cg_item_option    { $$ = $1; }
  | no_collect_cg_item_option { $$ = $1; }
  | no_trace_cg_item_option   { $$ = $1; }
  | num_of_buckets_cg_item_option { $$ = $1; }
  | per_instance_cg_item_option { $$ = $1; }
  | radix_cg_item_option	    { $$ = $1; }
  | text_cg_item_option	      { $$ = $1; }
  | weight_cg_item_option	    { $$ = $1; }
  | when_cg_item_option	      { $$ = $1; }
  // | TODO: add range_cg_item_option
  ;

at_least_cg_item_option :
  AT_LEAST ASSIGN NUMBER { $$ = elex::at_least_cgio($3); }
  ;

ignore_cg_item_option : 
  IGNORE ASSIGN logical_expression { $$ = elex::ignore_cgio($3); }
  ;

illegal_cg_item_option : 
  ILLEGAL ASSIGN logical_expression { $$ = elex::illegal_cgio($3); }
  ;

no_collect_cg_item_option :
    NO_COLLECT ASSIGN bool_literal_expression 
    { $$ = elex::no_collect_cgio($3); }

  | NO_COLLECT 
    { $$ = elex::no_collect_cgio(elex::true_literal_expr()); }
  ;

no_trace_cg_item_option : 
    NO_TRACE ASSIGN bool_literal_expression 
    { $$ = elex::no_trace_cgio($3); }

  | NO_TRACE 
    { $$ = elex::no_trace_cgio(elex::true_literal_expr()); }
  ;

num_of_buckets_cg_item_option :
  NUM_OF_BUCKETS ASSIGN NUMBER { $$ = elex::num_of_buckets_cgio($3); }
  ;

per_instance_cg_item_option : 
    PER_INSTANCE ASSIGN bool_literal_expression 
    { $$ = elex::per_instance_cgio($3); }

  | PER_INSTANCE 
    { $$ = elex::per_instance_cgio(elex::true_literal_expr()); }
  ;

radix_cg_item_option :
  RADIX ASSIGN radix_bucket 
  {
    switch($3){
      case eDec : {
        $$ = elex::radix_dec_cgio();
        break;
      }
      case eHex : {
        $$ = elex::radix_hex_cgio();
        break;     
      }
      case eBin : {
        $$ = elex::radix_bin_cgio();
        break;      
      }
    }
  }
  ;

text_cg_item_option : 
  TEXT ASSIGN STRING_LITERAL { $$ = elex::text_cgio($3); }
  ;

weight_cg_item_option : 
  WEIGHT ASSIGN NUMBER { $$ = elex::weight_cgio($3); }
  ;

when_cg_item_option : 
  WHEN ASSIGN logical_expression { $$ = elex::when_cgio($3); }
  ;

expect_definition:
    expect_or_assume_kwd[kwd] temporal_expression[temporal] opt_dut_error_call[dut_error_call] 
    {
      switch($kwd){
        case eExpect: {
          $$ = elex::expect_nameless_sm($temporal, $dut_error_call);
          break;
        }
        case eAssume: {
          $$ = elex::assume_nameless_sm($temporal, $dut_error_call);
          break;
        }
      }
    }

  | expect_or_assume_kwd[kwd] ID[rule_name] IS opt_expect_assume_modifier[mod] temporal_expression[temporal] opt_dut_error_call[dut_error_call] 
    {
      auto rule_name_ = elex::id_expr($rule_name);

      switch($kwd){
        case eExpect: {
          if ($mod == eNone)
            $$ = elex::expect_sm(rule_name_, $temporal, $dut_error_call);
          else if($mod == eOnly)
            $$ = elex::expect_override_sm(rule_name_, $temporal, $dut_error_call);
          else
            $$ = elex::expect_sm(rule_name_, $temporal, $dut_error_call);
          break;
        }

        case eAssume: {
          if ($mod == eNone)
            $$ = elex::assume_sm(rule_name_, $temporal, $dut_error_call);
          else if($mod == eOnly)
            $$ = elex::assume_override_sm(rule_name_, $temporal, $dut_error_call);
          else
            $$ = elex::assume_sm(rule_name_, $temporal, $dut_error_call);
          break;
        }
      }
    }
  ;

opt_dut_error_call : 
    %empty                      { $$ = elex::no_expr(); }
  | ELSE method_call_expression { $$ = $2; }
  ;

expect_or_assume_kwd : 
    EXPECT { $$ = eExpect; }
  | ASSUME { $$ = eAssume; }
  ;

opt_expect_assume_modifier : 
    %empty { $$ = eNone; }
  | ONLY   { $$ = eOnly; }
  ;

field_declaration : 
      scalar_field_declaration      { $$ = $1; }
    | list_field_declaration        { $$ = $1; }
    | keyed_list_field_declaration  { $$ = $1; }
    ;

do_not_gen_physical:
    REMAINDER                { $$ = ePhysical; }
  | LOGICAL_NOT_OP           { $$ = eDoNotGen; }
  | REMAINDER LOGICAL_NOT_OP { $$ = static_cast<e_physical_dont_gen>(eDoNotGen | ePhysical); }
  | LOGICAL_NOT_OP REMAINDER { $$ = static_cast<e_physical_dont_gen>(eDoNotGen | ePhysical); }
  ;

// name : type

// TODO: add optional const modifier
scalar_field_declaration : 
    non_decorated_scalar_field_declaration
    { $$ = $1; }

  | do_not_gen_physical[gen_phy] non_decorated_scalar_field_declaration[field_decl]
    { 
      $$ = $field_decl;
      auto scalar_field_shared = std::dynamic_pointer_cast<elex::struct_field_sm_class>($field_decl);
      if(scalar_field_shared == nullptr) error(@1, "Bad pointer cast");

      auto is_physical = static_cast<elex::Boolean>(ePhysical & $gen_phy);
      auto do_not_gen  = static_cast<elex::Boolean>(eDoNotGen & $gen_phy);

      scalar_field_shared->set_is_physical(is_physical);
      scalar_field_shared->set_do_not_gen(do_not_gen);
    }
  ;

non_decorated_scalar_field_declaration : 
    ID[name] COLON scoped_type_identifier_expression[type_] 
    { $$ = elex::struct_field_sm($name, $type_, false, false); }
  ;


// list-name[[len]] : list of type
list_field_declaration :
    non_decorated_list_field_declaration 
    { $$ = $1; }

  | do_not_gen_physical[gen_phy] non_decorated_list_field_declaration[list_field_decl]
    {
      $$ = $list_field_decl;
      auto list_field_shared = std::dynamic_pointer_cast<elex::struct_field_list_sm_class>($list_field_decl);
      if(list_field_shared == nullptr) error(@1, "Bad pointer cast");

      auto is_physical = static_cast<elex::Boolean>(ePhysical & $gen_phy);
      auto do_not_gen  = static_cast<elex::Boolean>(eDoNotGen & $gen_phy);

      list_field_shared->set_is_physical(is_physical);
      list_field_shared->set_do_not_gen(do_not_gen);
    }


non_decorated_list_field_declaration : 
    ID[name] LBRACKET id_expr[len] RBRACKET COLON LIST OF scoped_type_identifier_expression[type_] 
    { $$ = elex::struct_field_list_sm($name, $len, $type_, false, false); }

  |  ID[name] COLON LIST OF scoped_type_identifier_expression[type_] 
    { $$ = elex::struct_field_list_sm($name, elex::no_expr(), $type_, false, false); }
    ;

// list-name : !list(key: key-name) of list-type
keyed_list_field_declaration : 
    do_not_gen_physical[gen_phy] ID[name] COLON LIST LPAREN KEY COLON id_expr[key_type] RPAREN OF scoped_type_identifier_expression[list_type] 
    { 
        if($gen_phy & eDoNotGen){
          auto is_physical = static_cast<elex::Boolean>($gen_phy & eDoNotGen);
          $$ = elex::struct_field_assoc_list_sm($name, $key_type, $list_type, is_physical); 
        }
        else {
          error(@1, "Associative lists must be generatable!");
          $$ = nullptr;
        }
    }
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

constraint_definition :
    KEEP constraint_expression { $$ = elex::constraint_def_sm($2); }
    ;

on_event_definition : 
    ON hier_ref_expression[event_name] action_block[actions] { $$ = elex::on_event_sm($event_name, $actions); }
    ;

event_declaration : 
      EVENT ID[id]                                       { $$ = elex::simple_event_dec_sm($id); }
    | EVENT ID[id] IS temporal_expression[temporal]      { $$ = elex::event_def_sm($id, $temporal); }
    | EVENT ID[id] IS ONLY temporal_expression[temporal] { $$ = elex::event_def_override_sm($id, $temporal); }

temporal_expression : 
      temporal_expression_base[temporal] AT sampling_event_expression[sample_event] 
      { 
          $$ = elex::temporal_expr($temporal, $sample_event); 
      }
    | AT hier_ref_expression 
      {
          $$ = elex::event_ref_expr($2);
      }
    ;

sampling_event_expression : 
    hier_ref_expression { $$ = $1; }
    ;

temporal_expression_base: 
      unary_temporal_expression_base
      { $$ = $1; }

    | binary_temporal_expression_base 
      { $$ = $1; }

    | edge_triggered_temporal_expression_base
      { $$ = $1; }

    | fixed_repetition_temporal_expression_base
      { $$ = $1; }

    | first_match_repetition_temporal_expression_base
      { $$ = $1; }

    | true_match_repetition_temporal_expression_base
      { $$ = $1; }

    | sequence_temporal_expression_base
      { $$ = $1; }
    
    | temporal_expression_base[temporal] EXEC action_block[actions]
      { $$ = elex::action_attached_temporal_expr($temporal, $actions); }

    | temporal_expression_base[trigger] IMPLICATION temporal_expression_base[temporal]
      { $$ = elex::yield_temporal_expr($trigger, $temporal); }
    ;

binary_temporal_expression_base : 
      temporal_expression_base AND temporal_expression_base 
      { $$ = elex::and_temporal_expr($1, $3); }

    | temporal_expression_base OR  temporal_expression_base
      { $$ = elex::or_temporal_expr($1, $3); }
    ;

unary_temporal_expression_base : 
      LPAREN temporal_expression_base RPAREN 
      { $$ = $2; }
    
    | NOT  temporal_expression_base          
      { $$ = elex::not_temporal_expr($2); }
    
    | FAIL temporal_expression_base          
      { $$ = elex::fail_temporal_expr($2); }
    
    | EVENTUALLY temporal_expression_base    
      { $$ = elex::eventually_temporal_expr($2); }
    
    | DETACH temporal_expression_base        
      { $$ = elex::detach_temporal_expr($2); }
    
    | TRUE LPAREN logical_expression RPAREN 
      { $$ = elex::true_temporal_expr($3); }

    | AT hier_ref_expression                 
      { $$ = $2; }

    | CYCLE                                  
      { $$ = elex::cycle_temporal_expr(); }
    ;

edge_triggered_temporal_expression_base : 
    RISE LPAREN hdl_pathname_expression RPAREN 
    { $$ = elex::rise_temporal_expr($3); }

  | FALL LPAREN hdl_pathname_expression RPAREN
    { $$ = elex::fall_temporal_expr($3); }  

  | CHANGE LPAREN hdl_pathname_expression RPAREN
    { $$ = elex::change_temporal_expr($3); }  
  ;
  
sequence_temporal_expression_base : 
  LBRACE temporal_expression_base_items RBRACE 
  { $$ = elex::sequence_temporal_expr($2); }
  ;

temporal_expression_base_items : 
    temporal_expression_base 
    { $$ = elex::single_Expressions($1); }

  | temporal_expression_base_items SEMICOLON temporal_expression_base
    { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  ;

fixed_repetition_temporal_expression_base : 
    LBRACKET fixed_repetition_rep_base_expr[rep] RBRACKET 
    { $$ = elex::fixed_repetition_expr($rep, elex::cycle_temporal_expr()); }
  
  | LBRACKET fixed_repetition_rep_base_expr[rep] RBRACKET MUL temporal_expression_base[temporal]
    { $$ = elex::fixed_repetition_expr($rep, $temporal); }
  ;

// %prec FIRST_MATCH is a dummy token needed to solve
// shift-reduce problems caused by IMPLICATION/OR/AND tokens
// and the non-terminal match temporal expression after the SEMICOLON
first_match_repetition_temporal_expression_base : 
    LBRACKET opt_fixed_repetition_rep_base_expr[from] DDOT opt_fixed_repetition_rep_base_expr[to] RBRACKET SEMICOLON temporal_expression_base[match] %prec FIRST_MATCH
    { $$ = elex::first_match_repetition_expr($from, $to, elex::cycle_temporal_expr(), $match); }

  |  LBRACKET opt_fixed_repetition_rep_base_expr[from] DDOT opt_fixed_repetition_rep_base_expr[to] RBRACKET MUL temporal_expression_base[temporal] SEMICOLON temporal_expression_base[match] %prec FIRST_MATCH
    { $$ = elex::first_match_repetition_expr($from, $to, $temporal, $match); }
  ;

// TODO: convert empty repetition terminal into zero/infinite terminal expressions
true_match_repetition_temporal_expression_base : 
    BTWS_NOT_OP LBRACKET opt_fixed_repetition_rep_base_expr[from] DDOT opt_fixed_repetition_rep_base_expr[to] RBRACKET 
    { $$ = elex::true_match_repetition_expr($from, $to, elex::cycle_temporal_expr()); }

  | BTWS_NOT_OP LBRACKET opt_fixed_repetition_rep_base_expr[from] DDOT opt_fixed_repetition_rep_base_expr[to] RBRACKET MUL temporal_expression_base[temporal] 
    { $$ = elex::true_match_repetition_expr($from, $to, $temporal); }
  ; 

opt_fixed_repetition_rep_base_expr : 
    %empty 
    { $$ = elex::no_expr(); }

  | fixed_repetition_rep_base_expr 
    { $$ = $1; }
  ;

fixed_repetition_rep_base_expr : 
    int_expression        { $$ = $1; }
  | identifier_expression { $$ = $1; }
  | arithmetic_expression { $$ = $1; }

/* Actions */ 
actions : 
      %empty         { $$ = elex::nil_Actions(); }
    | actions action { $$ = elex::append_Actions($1, elex::single_Actions($2)); }
    ;

action_block : 
    LBRACE actions RBRACE 
    { $$ = $2; }
  ;

action : non_term_action SEMICOLON { $$ = $1; } 
    ;

non_term_action : %empty { $$ = elex::no_action(); } //TODO: implement
    ;

/* Expressions */
/* expressions : 
    %empty                         { $$ = elex::nil_Expressions();  }
    | expressions expression       { $$ = elex::append_Expressions($1, elex::single_Expressions($2)); }
    ; */

expression : non_term_expression SEMICOLON { $$ = $1; }
    ;

non_term_expression :  
    bitwise_expression     { $$ = $1; }
  | logical_expression     { $$ = $1; }
  | arithmetic_expression  { $$ = $1; }
  | method_call_expression { $$ = $1; }
  | identifier_expression  { $$ = $1; }
  | str_expression         { $$ = $1; }
  | int_expression         { $$ = $1; }
  ; // TODO: fully implement this



enum_list_exprs :     
    enum_list_item                       { $$ = elex::single_Expressions($1); }
  | enum_list_exprs COMMA enum_list_item { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  | %empty                               { $$ = elex::nil_Expressions(); }
  ;

enum_list_item : 
      ID ASSIGN int_expression  { $$ = elex::enum_list_item($1, $3); }
    | ID                        { $$ = elex::enum_list_item($1, nullptr); }
    ;


bitwise_expression : 
      unary_bitwise_expression  { $$ = $1;}
    | binary_bitwise_expression { $$ = $1;}
    | shift_expression          { $$ = $1;}
    ;

unary_bitwise_expression : 
  BTWS_NOT_OP non_term_expression { $$ = elex::bitwise_not_expr($2); }
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
    LPAREN logical_expression RPAREN { $$ = $2; }
  | unary_logical_expression         { $$ = $1; }
  | binary_logical_expression        { $$ = $1; }
  | implication_expression           { $$ = $1; }
  | comparison_expression            { $$ = $1; }
  | inclusion_expression             { $$ = $1; }
  | type_instrospection_expression   { $$ = $1; }
  ;

unary_logical_expression : 
    LOGICAL_NOT_OP non_term_expression   { $$ = elex::logical_not_expr($2); }
  | NOT            non_term_expression   { $$ = elex::logical_not_expr($2); }
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

/* 
    struct-field is a subtype
    struct-field is not a subtype

   as opposed to other low level fundamental expressions,
   type introspection cannot be used with non_term_expression
   as a building block since it only accepts hiearachy id and type id expressions
   
*/
type_instrospection_expression :
    hier_ref_expression[field] IS_A scoped_type_identifier_expression[type_] 
    { $$ = elex::type_introspec_expr($field, $type_); }

  | hier_ref_expression[field] IS_NOT_A scoped_type_identifier_expression[type_] 
  { $$ = elex::type_introspec_negation_expr($field, $type_); }
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
      non_term_expression GT  non_term_expression { $$ = elex::greater_then_expr($1, $3); }
    | non_term_expression LT  non_term_expression { $$ = elex::less_then_expr($1, $3); }
    | non_term_expression GTE non_term_expression { $$ = elex::greater_then_or_equal_expr($1, $3); }
    | non_term_expression LTE non_term_expression { $$ = elex::less_then_or_equal_expr($1, $3); }
    | non_term_expression EQ  non_term_expression { $$ = elex::equality_expr($1, $3); }
    | non_term_expression NEQ non_term_expression { $$ = elex::non_equality_expr($1, $3); }
    | non_term_expression VERILOG_EQ non_term_expression  { $$ = elex::hdl_equality_expr($1, $3); }
    | non_term_expression VERILOG_NEQ non_term_expression { $$ = elex::hdl_non_equality_expr($1, $3); }
    | non_term_expression BTWS_NOT_OP non_term_expression                { $$ = elex::str_match_expr($1, $3); } // "str" ~ "pattern"
    | non_term_expression LOGICAL_NOT_OP BTWS_NOT_OP non_term_expression { $$ = elex::str_does_not_match_expr($1, $4); } // "str" !~ "pattern"
    ;

/* list_indexing_expression : 
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
      non_term_expression                                   { $$ = elex::single_Expressions($1); }
    | list_concat_expressions SEMICOLON non_term_expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;

bit_concatenation_expression : 
    REMAINDER LBRACE comma_separated_expressions RBRACE { $$ = elex::bit_concat_expr($3); }


comma_separated_expressions : 
      non_term_expression                                   { $$ = elex::single_Expressions($1); }
    | comma_separated_expressions COMMA non_term_expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
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
    ; */

/* opt_struct_type_id_expression : // [[struct_id]]
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

    ; */


predefined_scalar_type_expression : 
    INT     { $$ = elex::predefined_type_int_expr(); }
  | UINT    { $$ = elex::predefined_type_uint_expr(); }
  | BOOL    { $$ = elex::predefined_type_bool_expr(); }
  | BIT     { $$ = elex::predefined_type_bit_expr(); }
  | BYTE    { $$ = elex::predefined_type_byte_expr(); }
  | NIBBLE  { $$ = elex::predefined_type_nibble_expr(); }
  | TIME    { $$ = elex::predefined_type_time_expr(); }
  ;


struct_type_modifiers : // VALUE1'id1|id1 VALUE1'id2|id2 ...
      struct_type_modifier                       { $$ = elex::single_Expressions($1); }
    | struct_type_modifiers struct_type_modifier { $$ = elex::append_Expressions($1, elex::single_Expressions($2)); }
    ;

struct_type_modifier : // VALUE'id | id
      id_expr[value] SNG_QUOTE id_expr[id] { $$ = elex::struct_type_modifier($value, $id); }
    | id_expr                              { $$ = $1; }
    ;

/* opt_with_action_block : // [[ [[(name)]] with {action; ...}]]
      %empty                                              { $$ = elex::no_expr(); }
    | opt_iterated_id_expr[id] WITH action_block[actions] { $$ = elex::named_action_block($id, $actions); }
    ; */

opt_iterated_id_expr : // [[ (name) ]]
      %empty                { $$ = elex::no_expr(); }
    | LPAREN id_expr RPAREN { $$ = $2; }

/*
opt_slice_expr : // [[: slice]]
      %empty            { $$ = elex::no_expr(); }
    | COLON non_term_expression  { $$ = $2; }  */

/* opt_expr :  // [[ expr ]]
      %empty        { $$ = elex::no_expr(); }
    | non_term_expression    { $$ = $1; }
    ; */

str_expression : 
    STRING_LITERAL { $$ = elex::str_expr($1); }
    ;

int_expression : 
    NUMBER { $$ = elex::int_expr($1); }
    ;

hdl_pathname_expression : 
      SNG_QUOTED_STRING_LITERAL  { 
          // std::cout << "Found HDL pathname: " << $1.lock()->Str() << std::endl;

          std::string pathname = $1.lock()->Str();
          if (pathname.find('.') != std::string::npos && 
              pathname.find('/') != std::string::npos) {
            error(@1, "HDL pathname is mixed with '.' and '/'!");
          }
          // construct the HDL pathname
          $$ = elex::hdl_path_name_expr($1); 
        }
    ;

hier_ref_expression : 
    id_expr
    { $$ = elex::struct_hier_ref_expr(elex::single_Expressions($1)); }

  | DOT id_expr
    { 
      auto it_expr = elex::it_expr();
      auto complete_hierarchy = elex::append_Expressions(elex::single_Expressions(it_expr), 
                                                         elex::single_Expressions($2));
      $$ = elex::struct_hier_ref_expr(complete_hierarchy);
    }
  | dot_separated_expressions 
    { $$ = elex::struct_hier_ref_expr($1); }

  | DOT dot_separated_expressions 
    { 
      auto it_expr = elex::it_expr();
      auto complete_hierarchy = elex::append_Expressions(elex::single_Expressions(it_expr), $2);
      $$ = elex::struct_hier_ref_expr(complete_hierarchy);
    }
  ;

dot_separated_expressions : 
      id_expr DOT id_expr                    { $$ = elex::append_Expressions(elex::single_Expressions($1), elex::single_Expressions($3)); }
    | dot_separated_expressions DOT id_expr  { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;


/* ternary_operator_expression :
    non_term_expression[cond] TERNARY non_term_expression[true_exp] COLON non_term_expression[false_exp] { $$ = elex::ternary_operator_expr($cond, $true_exp, $false_exp); }
    ;   

casting_operator_expression :
    non_term_expression[casted] DOT AS_A LPAREN non_term_expression[dest_type] RPAREN { $$ = elex::cast_operator_expr($casted, $dest_type); }
    ; */

/*
Hard constraint:
    protocol == USB

Soft constraint:
    soft protocol == USB

All of constraints:
    all of { 
        soft protocol == USB; 
        kind == HOST;
    }

List items constraint
    for each (ag) in usb_agents { 
        ag.kind == HOST; 
    }
*/
constraint_expression : 
      logical_expression                               { $$ = elex::constraint_expr($1); }
    | SOFT constraint_expression                       { $$ = elex::soft_constraint_expr($2); }
    | TYPE hier_ref_expression[field] IS_A scoped_type_identifier_expression[type_] 
      { $$ = elex::field_type_constraint_by_type_expr($field, $type_); }
    | TYPE hier_ref_expression[lhs] EQ hier_ref_expression[rhs]
      { $$ = elex::field_type_constraint_by_field_expr($lhs, $rhs); }
    | ALL OF LBRACE constriant_expression_block RBRACE { $$ = elex::all_of_constraint_expr($4); } 
    | FOR EACH opt_iterated_id_expr[item_name] IN hier_ref_expression[gen_item] LBRACE constriant_expression_block[constraint] RBRACE 
      {
          $$ = elex::list_items_constraint_expr($item_name, $gen_item, $constraint);
      }
    | SOFT hier_ref_expression[gen_item] SELECT LBRACE weight_value_pairs[distribution] RBRACE 
      // in order to avoid shift/reduce conflicts with `hier_ref_expression . EQ -> identifier_expression`
      // the SELECT keyword was changed to EQ[WS]SELECT (see scanner .l file)
      {
          $$ = elex::distribution_constraint_expr($gen_item, $distribution);
      }
    ;

scoped_type_identifier_expression :
    struct_type_modifiers              { $$ = elex::type_identifier_expr($1); }
  | predefined_scalar_type_expression  
    { $$ = $1; } 

  | predefined_scalar_type_expression[type_] LPAREN BITS COLON int_expression[width] RPAREN 
    { 
      auto width_expr = elex::sized_bits_scalar_expr($width);
      $$ = elex::scalar_subtype_expr($type_, nullptr, width_expr); 
    }

  | predefined_scalar_type_expression[type_] LPAREN BYTES COLON int_expression[width] RPAREN 
    { 
      auto width_expr = elex::sized_bytes_scalar_expr($width);
      $$ = elex::scalar_subtype_expr($type_, nullptr, width_expr); 
    }

  | predefined_scalar_type_expression[type_]   
    LBRACKET int_expression[bot] DDOT int_expression[top] RBRACKET
    LPAREN BITS COLON int_expression[width] RPAREN 
    { 
      auto range_expr = elex::range_modifier_expr($bot, $top);
      auto width_expr = elex::sized_bits_scalar_expr($width);
      $$ = elex::scalar_subtype_expr($type_, range_expr, width_expr); 
    }

  | predefined_scalar_type_expression[type_] 
    LBRACKET int_expression[bot] DDOT int_expression[top] RBRACKET
    LPAREN BYTES COLON int_expression[width] RPAREN 
    { 
      auto range_expr = elex::range_modifier_expr($bot, $top);
      auto width_expr = elex::sized_bytes_scalar_expr($width);
      $$ = elex::scalar_subtype_expr($type_, range_expr, width_expr); 
    }
  ;

terminated_constraint_expression : 
    constraint_expression SEMICOLON { $$ = $1; }
    ;

constriant_expression_block : 
      terminated_constraint_expression { 
          $$ = elex::single_Expressions($1); 
      }
    | constriant_expression_block terminated_constraint_expression {
        $$ = elex::append_Expressions($1, elex::single_Expressions($2));
      }
    ;

 method_call_expression : 
    non_term_expression[base] LPAREN comma_separated_expressions[arguments] RPAREN { $$ = elex::method_call_expr($base, $arguments); }
    ;

comma_separated_expressions : 
    non_term_expression                                   { $$ = elex::single_Expressions($1); }
  | comma_separated_expressions COMMA non_term_expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  ;

identifier_expression : 
      hier_ref_expression { $$ = $1; }
    ;

id_expr : 
      ID            { $$ = elex::id_expr($1); }
    | me_expression { $$ = $1; }
    | it_expression { $$ = $1; }
    ;

me_expression : 
  ME { $$ = elex::me_expr(); }
  ;

it_expression : 
  IT { $$ = elex::it_expr(); }
  ;


weight_value_pairs:
      terminated_weight_value_pair                    { $$ = elex::single_Cases($1); }
    | weight_value_pairs terminated_weight_value_pair { $$ = elex::append_Cases($1, elex::single_Cases($2)); }
    ;

terminated_weight_value_pair : 
    weight_value_pair SEMICOLON { $$ = $1; }
    ;

weight_value_pair : 
    int_expression[int_] COLON non_term_expression[value] { $$ = elex::distribution_branch_case($int_, $value); } 
    ;

formals:
      %empty               { $$ = elex::nil_Formals(); }
    | formal               { $$ = elex::single_Formals($1); }
    | formals COMMA formal { $$ = elex::append_Formals($1, elex::single_Formals($3)); }
    ;

formal : 
    ID[name] COLON scoped_type_identifier_expression[type_] { $$ = elex::formal($name, $type_); }
    ;

opt_return_type : 
      %empty                            { $$ = elex::no_expr(); } 
    | COLON scoped_type_identifier_expression  { $$ = $2; }

OPT_PACKAGE : 
      PACKAGE  { }
    | %empty { }
    ;

/* OPT_SEMICOLON : 
      SEMICOLON  { }
    | %empty   { }
    ; */
%%

void yy::parser::error(location const& location, std::string const& message){
    cerr << "Syntax error at " << location << ": " << message << endl;
}
