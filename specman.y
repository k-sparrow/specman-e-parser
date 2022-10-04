%skeleton "lalr1.cc"  // -* C++ -*-
%require "3.0.4"
%define api.token.constructor
%define api.value.type variant
%locations
%verbose
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

        enum e_compound_op {
          eAdd = 0,
          eSub,
          eMul,
          eDiv,
          eMod,
          eBoolAnd,
          eBoolOr,
          eBitwiseAnd,
          eBitwiseOr,
          eBitwiseXor,
          eShiftLeft,
          eShiftRight
        };
    };
}

/* goes inside implementation file */
%code top{
    #include <iostream>
    #include <string>
    #include <exception>
    #include <sstream>
    #include <typeinfo>
    #include "scanner.hpp"
    #include "parser.hpp"
    #include "driver.hpp"

    using namespace std;
        // yylex() arguments are defined in parser.y
    static yy::parser::symbol_type yylex(yy::scanner &lexer, yy::driver &driver) {
        return lexer.get_next_token();
    }

    namespace elex {

      auto isConditionExpression(Expression exp) -> bool {
        switch(exp->type()){
          case elex::SpecmanCtorKind::LogicalNotExpr :
          case elex::SpecmanCtorKind::LogicalAndExpr :
          case elex::SpecmanCtorKind::LogicalOrExpr :
          case elex::SpecmanCtorKind::LessThenExpr :
          case elex::SpecmanCtorKind::LessThenOrEqualExpr :
          case elex::SpecmanCtorKind::GreaterThenExpr :
          case elex::SpecmanCtorKind::GreaterThenOrEqualExpr :
          case elex::SpecmanCtorKind::EqualityExpr :
          case elex::SpecmanCtorKind::NonEqualityExpr :
          case elex::SpecmanCtorKind::HdlEqualityExpr :
          case elex::SpecmanCtorKind::HdlNonEqualityExpr :
          case elex::SpecmanCtorKind::StrMatchExpr :
          case elex::SpecmanCtorKind::StrDoesNotMatchExpr :
          case elex::SpecmanCtorKind::InExpr :
          case elex::SpecmanCtorKind::TypeIntrospecExpr :
          case elex::SpecmanCtorKind::TypeIntrospecNegationExpr :
          case elex::SpecmanCtorKind::TrueLiteralExpr :
          case elex::SpecmanCtorKind::FalseLiteralExpr :
          case elex::SpecmanCtorKind::MethodCallExpr :
          case elex::SpecmanCtorKind::IdExpr :
          case elex::SpecmanCtorKind::StructHierRefExpr: 
                   { return true ; }
          default: { return false; }
        }
      };

      auto isIndexItem(Expression exp) -> bool {
        return exp->type() == elex::SpecmanCtorKind::ListIndexItemExpr;
      }

      auto isRangeItem(Expression exp) -> bool {
        return exp->type() == elex::SpecmanCtorKind::RangeModifierItemExpr;
      }

      auto isMethodCallExpression(Expression exp) -> bool {
        // we're supposed to work on hierarchy calls here
        // so if the expression is not of the appropriate class we return false
        if (exp->type() != elex::SpecmanCtorKind::StructHierRefExpr) return false;

        auto hier_ref_expr = std::dynamic_pointer_cast<elex::struct_hier_ref_expr_class>(exp);
        auto hiers = hier_ref_expr->getHiers(); 

        // find the last expression which is not empty
        // and check it a method call expression
        auto exp_iter = std::find_if(hiers->rbegin(), hiers->rend(), 
                                     [](Expression e){ return e != nullptr; });

        if(exp_iter == hiers->rend()) return false;

        return (*exp_iter)->type() == elex::SpecmanCtorKind::MethodCallExpr;
      }
    }

    #define CHECK_COND_ELSE_PARSE_ERROR(cond_func, term, error_action) \
      if (!cond_func(term)) error_action;

}

/* ------------------ Keywords ------------------ */
%token WHILE
%token REPEAT
%token UNTIL
%token FOR
%token REVERSE
%token IN 
%token DO 
%token FROM
%token TO
%token DOWN
%token EMIT	    
%token STEP
%token LINE
%token FILE
%token IN_FILE
%token MATCHING
%token BREAK
%token CONTINUE
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
%token COMPUTE
%token RETURN
%token PRINT
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
%token CHECK
%token THAT
%token ASSUME
%token EXPECT
%token ASSERT
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

%token STATE_MACHINE 
%token C_EXPORT
%token ROUTINE
%token C_ROUTINE

/* Disclaimer: 
    this is a quick and dirty solution
    and I don't like it.

    It's a solution intended to fix the problem of 'sys.time'
    hierarchical reference, where the `time` part 
    is considered by flex as the keyword 'time' representing the 
    predefine time type, represented by the TIME token
*/ 
%token SYS_TIME 

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
%token THEN 
%token ELSE
%token TRY
%token CASE
%token DEFAULT
%token INT 
%token UINT 
%token BIT 
%token BYTE 
%token NIBBLE
%token TIME 
%token BOOL 
%token VAR 
%token FORCE 
%token RELEASE 
%token INSTANCE 

%token DEFINE 
%token<elex::Symbol_> DEFINED_MACRO_CONSTRUCT
%token AS
%token AS_COMPUTED


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

/* ---------- For Lexer -----------------  */
// Those actually don't get used in the praser
// but used by the lexer to ignore anythinhg not inside 
// the code block
%token CODE_OPEN
%token CODE_CLOSE

// this one is caught by the lexer inside a code block
// it's not actually used by the parser, but exists
// in order to prevent the lexer from jamming
%token <std::string> ILLEGAL_TOKEN
/* ---------- For Lexer -----------------  */

/* ---------- Terminal Tokens ------------ */
%token <elex::Symbol_> FILE_PATH
%token <elex::Symbol_> ID
%token <elex::Symbol_> NUMBER

// end of file token
%token END 0 

/* token precedence */
/*
  NON_ELSE    -> needed to resolve dangling else problem
  NON_LPAREN  -> needed to resolve sr-conflict with some optional products starting with LPAREN
  NON_DOT     -> same as NON_LPAREN, but for the DOT token
*/
%precedence LT_error
%precedence error
%precedence LT_ID LT_OP
%precedence NON_DOT NON_LPAREN NON_ELSE NON_THEN
%precedence ID
%left ELSE THEN SEMICOLON
%precedence EXEC  
%precedence TERNARY RBRACKET
%left IN IS OR LOGICAL_OR_OP BTWS_OR_OP XOR_OP XOR LSHIFT RSHIFT IMPLICATION
%left PLUS MINUS
%left DIV MUL REMAINDER
%left AND LOGICAL_AND_OP BTWS_AND_OP
%left EQ NEQ VERILOG_EQ VERILOG_NEQ GT GTE LT LTE
%right LOGICAL_NOT_OP BTWS_NOT_OP NOT DETACH FAIL EVENTUALLY
%left RPAREN LPAREN DOT
%precedence FIRST_MATCH GT_ID BG_OP BG_LPAREN
/* ------------------ helpers ------------------ */
/* %nterm <elex::Symbol_>    OPT_SEMICOLON */
%nterm <elex::Symbol_>    OPT_PACKAGE
%nterm <elex::Boolean>    OPT_REVERSE
%nterm <elex::Boolean>    OPT_DOWN

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
%nterm <elex::Expressions>  subtype_range_list_items

%nterm <elex::Statement>  extend_type_statement
// %nterm <elex::Statement>  routine_statement
// %nterm <elex::Statement>  simulator_statement
%nterm <elex::Statement>  unit_statement
%nterm <elex::Statement>  sequence_statement
%nterm <elex::SequenceItems> sequence_options
%nterm <elex::SequenceItem>  sequence_option
%nterm <elex::e_seq_option>  sequence_item_kwd
%nterm <elex::Statement>  c_export_statement
%nterm <elex::Statement>  c_routine_statement
%nterm <elex::Statement>  define_as_statement
%nterm <elex::Statement>  import_statement
%nterm <elex::FilePaths>  file_paths_expressions

/* Struct Members */
%nterm <elex::StructMembers> struct_member_block
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

%nterm <elex::FieldStructMember>  scalar_field_declaration
%nterm <elex::FieldStructMember>  non_decorated_scalar_field_declaration
%nterm <elex::e_physical_dont_gen>  do_not_gen_physical

/* Actions */
%nterm <elex::Actions>     actions
%nterm <elex::ActionBlock>  action_block
%nterm <elex::ActionBlock>  term_action_block
%nterm <elex::ActionBlocks> action_blocks
%nterm <elex::ActionBlocks> action_blocks_block
/* %nterm <elex::Actions> opt_with_action_block */
%nterm <elex::Action>      action
%nterm <elex::Action>      non_term_action


%nterm <elex::Action>      variable_creation_or_modification_action
%nterm <elex::Action>      variable_declaration_action
%nterm <elex::Action>      variable_assignment_action
%nterm <elex::Action>      compound_assignment_action
%nterm <elex::e_compound_op>  compound_op
%nterm <elex::Action>  force_action
%nterm <elex::Action>  release_action


/* Conditional Actions */
%nterm <elex::Action>  conditional_action
%nterm <elex::Action>  if_then_else_action
%nterm <elex::Expression>  if_branch
%nterm <elex::Action>  case_bool_action
%nterm <elex::Cases>   case_bool_case_branches
%nterm <elex::Case>    case_bool_case_branch
%nterm <elex::Case>    non_term_case_bool_case_branch

%nterm <elex::Action>  case_labeled_action
%nterm <elex::Cases>   case_labeled_case_branches
%nterm <elex::Case>    case_labeled_case_branch
%nterm <elex::Case>    non_term_case_labeled_case_branch
%nterm <elex::Expression> label_case_item_expression

/* Method & TCM execution actions */
%nterm <elex::Action>  method_call_action

/* Iterative Actions */
%nterm <elex::Action>      iterative_action

/*------ While ------*/
%nterm <elex::Action>      while_loop_action

/*------ REPEAT -----*/
%nterm <elex::Action>      repeat_until_loop_action

/*------ FOR-EACH -----*/
%nterm <elex::Action>      for_each_loop_action

/*------ FOR-FROM -----*/
%nterm <elex::Action>      for_from_to_loop_action
%nterm <elex::Expression>  opt_step

/*-------- FOR --------*/
%nterm <elex::Action>      for_loop_action

/*----- FOR-FILE ------*/
%nterm <elex::Action>      for_line_in_file_action
%nterm <elex::Expression>  file_identifier_expression

/*----- FOR-FILES -----*/
%nterm <elex::Action>      for_file_in_files_action


/* Time Consuming Actions */
%nterm <elex::Action>      time_consuming_action
/*------- EMIT -------*/
%nterm <elex::Action>      emit_action
/*------- SYNC -------*/
%nterm <elex::Action>      sync_action
/*------- WAIT -------*/
%nterm <elex::Action>      wait_action
/*--- ALL/FIRST-OF ---*/
%nterm <elex::Action>      multi_threaded_action


/* Control Flow Actions */
%nterm <elex::Action>      control_flow_action

/* Generation Actions   */
%nterm <elex::Action>      gen_action
%nterm <elex::Expressions> opt_keeping_constraints_branch

/* Do Sequence Actions   */
%nterm <elex::Action>      do_action

/* Error Handling Actions */
%nterm <elex::Action>      error_handling_action
%nterm <elex::Action>      immediate_check_action
%nterm <elex::Action>      assert_action
%nterm <elex::Action>      try_else_action

/* State Machine Action */
%nterm <elex::Action>      state_machine_action  
%nterm <elex::FSMStates>   states_block
%nterm <elex::FSMStates>   states
%nterm <elex::FSMState>    fsm_state
%nterm <elex::FSMState>    non_terminated_fsm_state
%nterm <elex::FSMState>    fsm_state_transition  
%nterm <elex::FSMState>    fsm_state_action

/* Expressions */
%nterm <elex::Expression>   expression
%nterm <elex::Expression>   operator_expression
%nterm <elex::Expression>   non_operator_expression


%nterm <elex::Expressions>  comma_separated_expressions 

/* Bitwise Expressions */
%nterm <elex::Expression>   bitwise_operator_expression
%nterm <elex::Expression>   unary_bitwise_operator_expression
%nterm <elex::Expression>   binary_bitwise_operator_expression
%nterm <elex::Expression>   shift_operator_expression

/* Logical (Boolean) Expressions */
%nterm <elex::Expression>   logical_operator_expression
%nterm <elex::Expression>   unary_logical_operator_expression
%nterm <elex::Expression>   binary_logical_operator_expression
%nterm <elex::Expression>   implication_operator_expression
%nterm <elex::Expression>   comparison_operator_expression
%nterm <elex::Expression>   inclusion_operator_expression
%nterm <elex::Expression>   type_instrospection_operator_expression

/* Arithmetic Expressions */ 
%nterm <elex::Expression>   arithmetic_operator_expression
%nterm <elex::Expression>   unary_arithmetic_operator_expression
%nterm <elex::Expression>   binary_arithmetic_operator_expression

/* Ternary Expression */
%nterm <elex::Expression>   ternary_assignment_operator_expression

/* Hardware Port Access Expression */
%nterm <elex::Expression>   hwp_access_operator_expression


/* Temporal Expressions */
%nterm <elex::Expression>   temporal_expression
%nterm <elex::Expression>   temporal_expression_base
%nterm <elex::Expressions>  temporal_expression_base_items
%nterm <elex::Expression>   sampling_event_expression
%nterm <elex::Expression>   unary_temporal_expression_base
%nterm <elex::Expression>   binary_temporal_expression_base
%nterm <elex::Expression>   edge_triggered_temporal_expression_base
%nterm <elex::Expression>   delay_temporal_expression_base
%nterm <elex::Expression>   consume_temporal_expression_base
%nterm <elex::Expression>   timescale_expression

%nterm <elex::Expression>   sequence_temporal_expression_base
%nterm <elex::Expression>   fixed_repetition_temporal_expression_base
%nterm <elex::Expression>   first_match_repetition_temporal_expression_base
%nterm <elex::Expression>   true_match_repetition_temporal_expression_base
%nterm <elex::Expression>   fixed_repetition_rep_base_expr
%nterm <elex::Expression>   opt_fixed_repetition_rep_base_expr

/* Object Expressions */
%nterm <elex::Expression>   struct_allocate_expression
%nterm <elex::Expression>   list_concatenation_operator_expression
%nterm <elex::Expressions>  list_concat_expressions
%nterm <elex::Expression>   bit_concatenation_operator_expression
%nterm <elex::Expression>   bit_slicing_expression
%nterm <elex::Expression>   range_modifier_expression
%nterm <elex::Expression>   range_modifier_expression_base
%nterm <elex::Expression>   width_modifier_expression

/* Data Types */
%nterm <elex::DataType>     scalar_or_enum_data_type
%nterm <elex::DataType>     scalar_subtype_datatype
%nterm <elex::DataType>     enum_datatype

%nterm <elex::DataType>     scoped_type_identifier_data_type
%nterm <elex::DataType>     scoped_scalar_type_identifier_data_type

%nterm <elex::Expression>   complex_type_modifier 
%nterm <elex::Expressions>  struct_type_modifiers
%nterm <elex::Expression>   struct_type_modifier
%nterm <elex::Expression>   opt_iterated_id_expr
%nterm <elex::Expression>   iterated_id_expr

%nterm <elex::Expression>   id_expr
%nterm <elex::Expression>   scoped_id_expr
%nterm <elex::Expression>   identifier_expression
%nterm <elex::Expressions>  enum_list_exprs
%nterm <elex::Expression>   enum_list_item

%nterm <elex::Expression>   hdl_pathname_expression 
%nterm <elex::Expression>   hier_ref_expression
%nterm <elex::Expressions>  dot_separated_expressions

%nterm <elex::DataType>     predefined_scalar_datatype   

%nterm <elex::Expression>   constraint_expression
%nterm <elex::Expression>   terminated_constraint_expression
%nterm <elex::Expressions>  constraints_list
%nterm <elex::Expressions>  constraint_expression_block
%nterm <elex::Expression>   method_call_operator_expression


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

%nterm <elex::DataType>      opt_return_type
%nterm <elex::e_method_int_mod> opt_method_introduction_modifier
%nterm <elex::e_method_ext_mod> opt_method_extension_modifier

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
statement : 
    non_term_statement SEMICOLON 
    { $$ = $1; }

  /* error recovery rules */
  // badly constructed statement teminated by a semicolon
  | error SEMICOLON
    { yyerrok; $$ = nullptr; }

  // last non terminated statement
  // since statement is the highest level syntactic element there is
  // if the last one is not terminated we reach the end of the file
  // so we need to handle it
  | error END
    { yyerrok; $$ = nullptr; }

  ;

non_term_statement : 
    package_statement            { $$ = $1; }
  | struct_statement             { $$ = $1; }
  | unit_statement               { $$ = $1; }
  | extend_struct_unit_statement { $$ = $1; }
  | type_statement               { $$ = $1; }
  | extend_type_statement        { $$ = $1; }
  | import_statement             { $$ = $1; }
  | sequence_statement           { $$ = $1; }
  | define_as_statement          { $$ = $1; }
  | c_export_statement           { $$ = $1; }
  | c_routine_statement          { $$ = $1; }
  ;

import_statement : 
    IMPORT file_paths_expressions[files] 
    { 
      elex::Boolean is_cyclic_import = false;
      $$ = elex::import_st($files, is_cyclic_import); 
    }

  | IMPORT LPAREN file_paths_expressions[files] RPAREN
    { 
      elex::Boolean is_cyclic_import = true;
      $$ = elex::import_st($files, is_cyclic_import); 
    }

  ;

file_paths_expressions :
    FILE_PATH
    { $$ = elex::single_FilePaths(elex::file_path_fp($1)); }
  
  | file_paths_expressions COMMA FILE_PATH
    { $$ = elex::append_FilePaths($1, elex::single_FilePaths(elex::file_path_fp($3))); }

define_as_statement :
    DEFINE DEFINED_MACRO_CONSTRUCT[macro] AS LBRACE RBRACE
    { $$ = elex::define_as_st($macro); }

  | DEFINE DEFINED_MACRO_CONSTRUCT[macro] AS_COMPUTED LBRACE RBRACE
    { $$ = elex::define_as_computed_st($macro); }

  ;

c_export_statement : 
  C_EXPORT hier_ref_expression
  { $$ = elex::c_export_st($2); }
  ;

c_routine_statement : 
    ROUTINE ID[e_routine_name] LPAREN formals[parameters_list] RPAREN opt_return_type[result_type] IS C_ROUTINE 
    { $$ = elex::c_routine_st($e_routine_name, $parameters_list, $result_type, $e_routine_name); }
  | 
    ROUTINE ID[e_routine_name] LPAREN formals[parameters_list] RPAREN opt_return_type[result_type] IS C_ROUTINE ID[c_routine_name]
    { $$ = elex::c_routine_st($e_routine_name, $parameters_list, $result_type, $c_routine_name); }
  ;

struct_statement : 
    STRUCT ID[struct_type] 
    struct_member_block[members]
    { $$ = elex::struct_st($struct_type, $members); }

  | STRUCT ID[struct_type] LIKE ID[base_struct_type] 
    struct_member_block[members]
    { $$ = elex::struct_like_st($struct_type, $base_struct_type, $members); }
  ;

unit_statement   : 
    UNIT ID[unit_type] 
    struct_member_block[members]
    { $$ = elex::unit_st($unit_type, $members); }

  | UNIT ID[unit_type] LIKE ID[base_unit_type] 
    struct_member_block[members]
    { $$ = elex::unit_like_st($unit_type, $base_unit_type, $members); }
    ;

package_statement : 
    PACKAGE ID { $$ = elex::package($2); }
    ;

extend_struct_unit_statement : 
    EXTEND complex_type_modifier[modifiers] 
    struct_member_block[members]
    { $$ = elex::extend_struct_st($modifiers, $members); }
    ;

type_statement : 
  OPT_PACKAGE inner_type_statement
  { $$ = $2; }
  ;

inner_type_statement : 
    enumerated_type_statement
    { $$ = $1; }
  ;

// all type statements are unrolled as long productions
// in order to avoid astonishing, annoying and difficult rr & rs conflicts
enumerated_type_statement:
    TYPE ID[id] COLON scalar_or_enum_data_type[type_]
    { 
      $$ = elex::enum_type_st($id, $type_); 
    }
  ;

enum_datatype : 
    LBRACKET enum_list_exprs[items] RBRACKET %prec NON_LPAREN
    {
      $$ = elex::enum_dt($items, nullptr);
    }

  | LBRACKET enum_list_exprs[items] RBRACKET 
    width_modifier_expression[width]
    {
      $$ = elex::enum_dt($items, $width);
    }
  ;

scalar_or_enum_data_type : 
    enum_datatype { $$ = $1; }
  | scalar_subtype_datatype { $$ = $1; }
  ;

scalar_subtype_datatype :
    // add a rule for ID alone (needs to solve reduce/reduce conflict with id_expr)

    // type-id[min..max]
    ID[type_id] range_modifier_expression[range] 
    { $$ = elex::defined_subtype_dt($type_id, $range); }
  
    // int|uint|bit|nibble|time|bool
  | predefined_scalar_datatype %prec NON_LPAREN
    { $$ = $1; }

    // int(bits|bytes: width)
  | predefined_scalar_datatype[type_id]
    width_modifier_expression[width]
    { $$ = elex::predefined_subtype_dt($type_id, nullptr, $width); }

    // int[range, ...]
  | predefined_scalar_datatype[type_id]
    range_modifier_expression[range] %prec NON_LPAREN
    { $$ = elex::predefined_subtype_dt($type_id, $range, nullptr); }

    // int[range, ...](bits|bytes: width)
  | predefined_scalar_datatype[type_id]
    range_modifier_expression[range]
    width_modifier_expression[width]
    { $$ = elex::predefined_subtype_dt($type_id, $range, $width); }

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
struct_member_block :
    LBRACE struct_members RBRACE
    { $$ = $2; }

  // incolmplete (unbalanced) struct member block
  | LBRACE error
    { yyerrok; $$ = nullptr; }

  ;


struct_members : 
    %empty %prec LT_error          { $$ = elex::nil_StructMembers();  }
  | struct_members struct_member   { $$ = elex::append_StructMembers($1, elex::single_StructMembers($2)); }
  /* error recovery*/
  | struct_members error  { $$ = $1; }
  ;

struct_member : 
    non_term_struct_member SEMICOLON 
    { $$ = $1; }
  
  /* error recovery rules */

  // badly constructed struct member
  // panic mode will shift until it finds a SEMICOLON
  // and then reduce
  | error SEMICOLON
    { 
      yyerrok;
      $$ = nullptr;
    }

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
  WHEN ASSIGN logical_operator_expression { $$ = elex::when_cgo($3); }
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
    
  | ITEM ID[id] COLON scoped_type_identifier_data_type[type_] ASSIGN expression[value] opt_coverage_group_item_options[options] 
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
  IGNORE ASSIGN logical_operator_expression { $$ = elex::ignore_cgio($3); }
  ;

illegal_cg_item_option : 
  ILLEGAL ASSIGN logical_operator_expression { $$ = elex::illegal_cgio($3); }
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
  WHEN ASSIGN logical_operator_expression { $$ = elex::when_cgio($3); }
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
    %empty                      
    { $$ = elex::no_expr(); }

  // can't use method_call_operator_expression here
  // since dut_error is not a locally referenced method identifier
  | ELSE id_expr[base] LPAREN comma_separated_expressions[arguments] RPAREN
    { $$ = elex::method_call_expr($base, $arguments); }
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
    scalar_field_declaration      
    { 
      $1->set_is_instance(false);
      $$ = elex::field_sm($1); 
    }

  | scalar_field_declaration IS INSTANCE 
    { 
      $1->set_is_instance(true);
      $$ = elex::field_sm($1); 
    }
  
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
      @$ = @1;
      // TODO: consider using enum-tagged classes, can save bad coding errors and redundant downcasting
      auto scalar_field     = std::dynamic_pointer_cast<elex::struct_field_sm_class>($field_decl);  
      auto list_field       = std::dynamic_pointer_cast<elex::struct_field_list_sm_class>($field_decl);  
      auto assoc_list_field = std::dynamic_pointer_cast<elex::struct_field_assoc_list_sm_class>($field_decl);  

      auto is_physical = static_cast<elex::Boolean>(ePhysical & $gen_phy);
      auto do_not_gen  = static_cast<elex::Boolean>(eDoNotGen & $gen_phy);

      // handle scalar|list field declaration
      if(scalar_field != nullptr || list_field != nullptr){
        $$->set_is_physical(is_physical);
        $$->set_do_not_gen(do_not_gen);
      }

      // handle associative list field declaration
      else if(assoc_list_field){
        if(do_not_gen){
          $$->set_is_physical(is_physical);
        }
        else {
          error(@1, "Associative lists must not be generatable!");
          $$ = nullptr;
        }
      }

      // error
      else {
        error(@1, "Bad pointer cast");
        $$ = nullptr;
      }

    }
  ;

non_decorated_scalar_field_declaration : 
    ID[name] COLON scoped_type_identifier_data_type[type_] 
    { 
      // if its a list type
      if(std::dynamic_pointer_cast<list_type_dt_class>($type_)) 
        $$ = elex::struct_field_list_sm($name, nullptr, $type_);

      // or else its a associative list type
      else if (std::dynamic_pointer_cast<assoc_list_type_dt_class>($type_)) 
        $$ = elex::struct_field_assoc_list_sm($name, $type_);
      
      // else it's just a scalar field
      else // construct a scalar struct field
        $$ = elex::struct_field_sm($name, $type_); 
    }

  // additional syntax specialization for listed fields
  | ID[name] LBRACKET id_expr[len] RBRACKET COLON scoped_type_identifier_data_type[type_] 
    { 
      if(std::dynamic_pointer_cast<list_type_dt_class>($type_)) {
        $$ = elex::struct_field_list_sm($name, $len, $type_);
      }
      else {
        error(@1, "Badly constructed list struct field, expecting list base type, got scalar or associative list!");
        $$ = nullptr;
      }
    }

  | ID[name] LBRACKET int_expression[len] RBRACKET COLON scoped_type_identifier_data_type[type_] 
    {  
      if(std::dynamic_pointer_cast<list_type_dt_class>($type_)) {
        $$ = elex::struct_field_list_sm($name, $len, $type_);
      }
      else {
        error(@1, "Badly constructed list struct field, expecting list base type, got scalar or associative list!");
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
    
      /*
        method([arguments]) [: return_type] is [only] C routine c_method_name 
      */
    | ID[e_method_name] LPAREN formals[parameters_list] RPAREN opt_return_type[return_type] 
      IS opt_method_extension_modifier[method_modifier] C_ROUTINE ID[c_method_name]
      {
        switch($method_modifier) {
          case eEmpty : {
            $$ = elex::c_method_dec_sm($e_method_name, $parameters_list, $return_type, $c_method_name);
            break; 
          }
          case eOnly : {
            $$ = elex::c_method_dec_only_sm($e_method_name, $parameters_list, $return_type, $c_method_name);
            break;
          }
          default: { // only `is` or `is only` is allowed for C routine struct member
            $$ = nullptr; 
            error(@method_modifier, "Method modifier of C method struct member must be none or only\n");
            YYERROR;
          }
        }
      }

      /*
        method([arguments]) [: return_type] is [only] C routine 
      */
    | ID[e_method_name] LPAREN formals[parameters_list] RPAREN opt_return_type[return_type] 
      IS opt_method_extension_modifier[method_modifier] C_ROUTINE 
      {
        switch($method_modifier) {
          case eEmpty : {
            $$ = elex::c_method_dec_sm($e_method_name, $parameters_list, $return_type, $e_method_name);
            break; 
          }
          case eOnly : {
            $$ = elex::c_method_dec_only_sm($e_method_name, $parameters_list, $return_type, $e_method_name);
            break;
          }
          default: { // only `is` or `is only` is allowed for C routine struct member
            $$ = nullptr; 
            error(@method_modifier, "Method modifier of C method struct member must be none or only\n");
            YYERROR;
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
    WHEN complex_type_modifier[subtype_mods] LBRACE struct_members[members] RBRACE 
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
  ON hier_ref_expression[event_name] action_block[actions] 
  { $$ = elex::on_event_sm($event_name, $actions); }
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
  
  | temporal_expression_base[temporal] 
    { 
        $$ = elex::temporal_expr($temporal, nullptr); 
    }
  ;

sampling_event_expression : 
    hier_ref_expression { $$ = elex::sampling_event_expr($1); }
    ;

temporal_expression_base: 
      unary_temporal_expression_base
      { $$ = $1; }

    | binary_temporal_expression_base 
      { $$ = $1; }

    | edge_triggered_temporal_expression_base
      { $$ = $1; }

    | delay_temporal_expression_base
      { $$ = $1; }

    | consume_temporal_expression_base
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
    
    | TRUE LPAREN logical_operator_expression RPAREN 
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

delay_temporal_expression_base :
  DELAY LPAREN expression[exp] RPAREN
  { $$ = elex::delay_temporal_expr($exp, nullptr); }

/*   | DELAY LPAREN expression[exp] timescale_expression[tms] RPAREN
    { $$ = elex::delay_temporal_expr($exp, $tms); } */
  ;

/* timescale_expression :
    FS 
  | PS 
  | NS 
  | US
  | MS
  ; */

consume_temporal_expression_base :
  CONSUME LPAREN temporal_expression_base RPAREN
  { $$ = elex::consume_temporal_expr($3);}
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
  | arithmetic_operator_expression { $$ = $1; }
  ;

struct_allocate_expression :
    NEW %prec LT_ID
    { $$ = elex::new_nameless_allocate_expr(nullptr, nullptr); }

  | NEW WITH action_block[actions]
    { $$ = elex::new_nameless_allocate_expr(nullptr, $actions); }

    // NON_LPAREN is used here in order to solve the shift reduce conflict with the 
    // LPAREN of the next two rules when lookahead token is LPAREN, and since NON_LPAREN < LPAREN, the action
    // will be to shift LPAREN
  | NEW complex_type_modifier %prec NON_LPAREN
    { 
      auto struct_type_id = elex::defined_type_identifier_expr($2);
      $$ = elex::new_nameless_allocate_expr(struct_type_id, nullptr);   
    }
  
  | NEW complex_type_modifier[type_id] WITH action_block[actions]
    { 
      auto struct_type_id = elex::defined_type_identifier_expr($type_id);
      $$ = elex::new_nameless_allocate_expr(struct_type_id, $actions);
    }

  | NEW complex_type_modifier[type_id] LPAREN ID[name] RPAREN WITH action_block[actions]
    {  
      auto struct_type_id = elex::defined_type_identifier_expr($type_id);
      $$ = elex::new_allocate_expr(struct_type_id, $name, $actions);
    }
  ;

/* Actions */ 
actions : 
    action
    { $$ = elex::single_Actions($1); }
  
  | actions action 
    { $$ = elex::append_Actions($1, elex::single_Actions($2)); }
  
  ;

action_block : 
    LBRACE RBRACE
    { $$ = elex::action_block(elex::nil_Actions()); }

  | LBRACE actions RBRACE 
    { $$ = elex::action_block($2); }

  | LBRACE non_term_action RBRACE
    { $$ = elex::action_block(elex::single_Actions($2)); }
  
  /* error recovery */
  // catching an error where an action block with a single action 
  // was expected 
  | LBRACE error RBRACE 
    {
      yyerrok; 
      $$ = elex::action_block(elex::nil_Actions()); 
    }
  ;

term_action_block :
  action_block SEMICOLON { $$ = $1; }
  ;

action_blocks : 
    term_action_block               
    { $$ = elex::single_ActionBlocks($1); }

  | action_blocks term_action_block 
    { $$ = elex::append_ActionBlocks($1, elex::single_ActionBlocks($2)); }
  ;

action_blocks_block :
  LBRACE action_blocks RBRACE 
  { $$ = $2; }
  ;

action : 
    non_term_action SEMICOLON 
    { $$ = $1; } 

  | error           SEMICOLON 
    { 
      yyerrok; 
      $$ = nullptr; 
    }
  ;

non_term_action : 
    variable_creation_or_modification_action 
    { $$ = $1; }

  | conditional_action
    { $$ = $1; } 

  | iterative_action
    { $$ = $1; }

  | control_flow_action
    { $$ = $1; }

  | time_consuming_action
    { $$ = $1; }

  | method_call_action 
    { 
      $$ = $1; 
    }
  
  | gen_action
    { $$ = $1; }
  
  | do_action 
    { $$ = $1; }
  
  | error_handling_action
    { $$ = $1; }

  | state_machine_action 
    { $$ = $1; }
  ;

variable_creation_or_modification_action : 
    variable_declaration_action
    { $$ = $1; }

  | variable_assignment_action
    { $$ = $1; }
  
  | compound_assignment_action
    { $$ = $1; }

  | force_action 
    { $$ = $1; }

  | release_action 
    { $$ = $1; }
  ;

variable_declaration_action :
    // var name
    VAR ID 
    { $$ = elex::var_decl_act($2, nullptr, nullptr); }
  
    // var name : type
  | VAR ID[id] COLON scoped_type_identifier_data_type[type_]
    { $$ = elex::var_decl_act($id, $type_, nullptr); }
  
    // var name : type = exp
  | VAR ID[id] COLON scoped_type_identifier_data_type[type_] ASSIGN expression[exp]
    { $$ = elex::var_decl_act($id, $type_, $exp);}

    // var name := exp
  | VAR ID[id] COLON ASSIGN expression[exp]
    { $$ = elex::var_decl_act($id, nullptr, $exp);}
  
  // this expansion for the file type is needed in order to avoid adding FILE as a type to the 
  // 'scoped_type_identifier_data_type' non-terminal, which causes clashes between the two for-each loop actions
  // (for-each-file-matching is overriden by for-each-type-in)
    // var name : type
  | VAR ID[id] COLON FILE
    { $$ = elex::var_decl_act($id, elex::file_dt(), nullptr); }
  
    // var name : type = exp
  | VAR ID[id] COLON FILE ASSIGN expression[exp]
    { $$ = elex::var_decl_act($id, elex::file_dt(), $exp);}
  ;

variable_assignment_action : 
    identifier_expression ASSIGN expression
    { $$ = elex::var_assign_act($1, $3); }

  | hdl_pathname_expression ASSIGN expression
    { $$ = elex::var_assign_act($1, $3); }
  ;

compound_assignment_action : 
  identifier_expression[lhs_exp] compound_op[op] ASSIGN expression[exp]
  {
     switch($op) {
     /* binary arithmetic operators */
     case eAdd: { $$ = elex::compound_add_act($lhs_exp, $exp); break; }
     case eSub: { $$ = elex::compound_sub_act($lhs_exp, $exp); break; }
     case eMul: { $$ = elex::compound_mul_act($lhs_exp, $exp); break; }
     case eDiv: { $$ = elex::compound_div_act($lhs_exp, $exp); break; }
     case eMod: { $$ = elex::compound_mod_act($lhs_exp, $exp); break; }

     /* boolean operators */
     case eBoolAnd: { $$ = elex::compound_bool_and_act($lhs_exp, $exp); break; }
     case eBoolOr:  { $$ = elex::compound_bool_or_act($lhs_exp, $exp);  break; }

     /* bitwise operators */
     case eBitwiseAnd: { $$ = elex::compound_bit_and_act($lhs_exp, $exp);    break; }
     case eBitwiseOr:  { $$ = elex::compound_bit_or_act($lhs_exp, $exp);     break; }
     case eBitwiseXor: { $$ = elex::compound_bit_xor_act($lhs_exp, $exp);    break; }
     case eShiftLeft:  { $$ = elex::compound_shift_left_act($lhs_exp, $exp); break; }
     case eShiftRight: { $$ = elex::compound_right_left_act($lhs_exp, $exp); break; }
    }
  } 
  ;

compound_op :
    PLUS           { $$ = eAdd; }
  | MINUS          { $$ = eSub; }
  | DIV            { $$ = eDiv; }
  | MUL            { $$ = eMul; }
  | REMAINDER      { $$ = eMod; }

  | LOGICAL_AND_OP { $$ = eBoolAnd; }
  | LOGICAL_OR_OP  { $$ = eBoolOr;  }

  | BTWS_AND_OP    { $$ = eBitwiseAnd; }
  | BTWS_OR_OP     { $$ = eBitwiseOr;  }
  | XOR_OP         { $$ = eBitwiseXor; }

  | LSHIFT         { $$ = eShiftLeft;  }
  | RSHIFT         { $$ = eShiftRight; }
  ;

force_action : 
  FORCE hdl_pathname_expression ASSIGN expression
  { $$ = elex::force_act($2, $4); }
  ;

release_action : 
  RELEASE hdl_pathname_expression
  { $$ = elex::release_act($2); }
  ;

conditional_action :
    if_then_else_action 
    { $$ = $1; }
  
  | case_bool_action
    { $$ = $1; }  
  
  | case_labeled_action
    { $$ = $1; }
  ;

if_then_else_action :
    // if condition then {action; ...}
    if_branch[condition] action_block[actions] %prec NON_ELSE
    { $$ = elex::if_then_else_act($condition, $actions, nullptr); }

    // if condition then {action; ...} else {action; ...} 
  | if_branch[condition] action_block[actions]
    ELSE action_block[else_clause]
    { $$ = elex::if_then_else_act($condition, $actions, $else_clause); }
  
    // if condition then {action; ...} else if ...
  | if_branch[condition] action_block[actions]
    ELSE if_then_else_action[else_clause]
    { $$ = elex::non_term_if_then_else_act($condition, $actions, $else_clause); }
  ;

if_branch : 
    IF expression THEN
    { 
      CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $2, { error(@1, "Conditional expression must be boolean expression!"); YYERROR; })
      $$ = $2; 
    }

  | IF expression 
    { 
      CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $2, { error(@1, "Conditional expression must be boolean expression!"); YYERROR; })
      $$ = $2; 
    }
  ;  


case_bool_action :
    CASE LBRACE 
      case_bool_case_branches 
    RBRACE 
    { $$ = elex::case_bool_act($3); }
  ;

case_bool_case_branches : 
    case_bool_case_branch 
    { $$ = elex::single_Cases($1); }

  | case_bool_case_branches case_bool_case_branch 
    { $$ = elex::append_Cases($1, elex::single_Cases($2)); }
  ;

case_bool_case_branch :
    expression[bool_exp] COLON action_block[actions] SEMICOLON
    { 
      CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp, { error(@1, "Conditional expression must be boolean expression!"); })
      $$ = elex::case_bool_branch_item_case($bool_exp, $actions); 
    }

  | DEFAULT COLON action_block[actions] SEMICOLON
    { $$ = elex::default_case_branch_item_case($actions); }
  ; 

case_labeled_action :
  CASE expression[exp] LBRACE 
    case_labeled_case_branches[branches]
  RBRACE
  { $$ = elex::case_labeled_act($exp, $branches); }
  ;

case_labeled_case_branches : 
    case_labeled_case_branch 
    { $$ = elex::single_Cases($1); }

  | case_labeled_case_branches case_labeled_case_branch 
    { $$ = elex::append_Cases($1, elex::single_Cases($2)); }
  ;

case_labeled_case_branch :
    label_case_item_expression[label_exp] COLON action_block[actions] SEMICOLON
    { $$ = elex::case_labeled_branch_item_case($label_exp, $actions); }

  | DEFAULT COLON action_block[actions] SEMICOLON
    { $$ = elex::default_case_branch_item_case($actions); }
  ; 

label_case_item_expression : 
    int_expression 
    { $$ = $1; }

  | range_modifier_expression
    { $$ = $1; }
  ;

iterative_action : 
    while_loop_action 
    { $$ = $1; }
  
  | repeat_until_loop_action
    { $$ = $1; }

  | for_each_loop_action
    { $$ = $1; }

  | for_from_to_loop_action
    { $$ = $1;}
  
  | for_loop_action 
    { $$ = $1; }

  | for_line_in_file_action
    { $$ = $1;}
  
  | for_file_in_files_action 
    { $$ = $1; }
  ;

// while bool-exp [do] {action; ...}
while_loop_action :
  WHILE expression[bool_exp] OPT_DO action_block[actions]
  { 
    CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp, { error(@1, "Conditional expression must be boolean expression!"); })
    $$ = elex::while_loop_act($bool_exp, $actions); 
  }
  ;

// repeat {action; ...} until bool-exp 
repeat_until_loop_action :
  REPEAT action_block[actions] UNTIL expression[bool_exp]
  { 
    CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp, { error(@1, "Conditional expression must be boolean expression!"); })
    $$ = elex::repeat_until_loop_act($bool_exp, $actions); 
  }
  ;

// for each [type] [(item-name)] [using index (index-name)]
//    in [reverse] list-exp [do] {action; ...}

// The type and index are unrolled in order to avoid shift reduce conflicts and 
// reduce collision with the for-each-line in file opt_iterated_id non term
for_each_loop_action :
    // for each [(item-name)] in [reverse] list-exp [do] {action; ...}
    FOR EACH opt_iterated_id_expr[item_name] 
    IN OPT_REVERSE[reverse] identifier_expression[list_expr] OPT_DO action_block[actions] 
    { $$ = elex::for_each_loop_act(nullptr, $item_name, $reverse, $list_expr, nullptr, $actions); }
   
    // for each type-element [(item-name)] in [reverse] list-exp [do] {action; ...}
  | FOR EACH scoped_scalar_type_identifier_data_type[type_] opt_iterated_id_expr[item_name] 
    IN OPT_REVERSE[reverse] identifier_expression[list_expr] OPT_DO action_block[actions] 
    { $$ = elex::for_each_loop_act($type_, $item_name, $reverse, $list_expr, nullptr, $actions); }

    // for each [(item-name)] using index (idx) in [reverse] list-exp [do] {action; ...}
  | FOR EACH opt_iterated_id_expr[item_name] 
    USING INDEX iterated_id_expr[idx]
    IN OPT_REVERSE[reverse] identifier_expression[list_expr] OPT_DO action_block[actions] 
    { $$ = elex::for_each_loop_act(nullptr, $item_name, $reverse, $list_expr, $idx, $actions); }
   
    // for each type-element [(item-name)] using index (idx) in [reverse] list-exp [do] {action; ...}
  | FOR EACH scoped_scalar_type_identifier_data_type[type_] opt_iterated_id_expr[item_name]
    USING INDEX iterated_id_expr[idx]
    IN OPT_REVERSE[reverse] identifier_expression[list_expr] OPT_DO action_block[actions] 
    { $$ = elex::for_each_loop_act($type_, $item_name, $reverse, $list_expr, $idx, $actions); }
  ;

// [REVERSE]
OPT_REVERSE : 
    %empty  { $$ = false; } 
  | REVERSE { $$ = true;  }
  ;

// [DO]
OPT_DO : %empty | DO ;

// for var-name from from-exp to [down] to-exp [step step-exp] [do] {action; ...}
for_from_to_loop_action :
  FOR ID[var_name] FROM expression[from_exp] OPT_DOWN[down] TO expression[to_exp] opt_step[step] OPT_DO action_block[actions]
  { $$ = elex::for_range_loop_act($var_name, $from_exp, $to_exp, $step, $down, $actions); }
  ;

OPT_DOWN : 
    %empty { $$ = false; }
  | DOWN   { $$ = true; }
  ;

opt_step : 
    %empty 
    { $$ = nullptr; }
  
  | STEP expression
    { $$ = $2; }
  ;

// for { initial-action; bool-exp; step-action } [do] {action; ...}
for_loop_action : 
  FOR 
  LBRACE 
    non_term_action[init_action] SEMICOLON logical_operator_expression[bool_exp] SEMICOLON non_term_action[step_action] 
  RBRACE OPT_DO action_block[actions]
  { 
    CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp, { error(@1, "Conditional expression must be boolean expression!"); })
    $$ = elex::for_loop_act($init_action, $bool_exp, $step_action, $actions); 
  }
  ;

// this for-each action is unrolled in order to avoid reduce-reduce conflicts with the (actually used) non-file for-each action
// for each [line] [(name)] in file file-name-exp [do] {action; ...}
for_line_in_file_action :
    FOR EACH opt_iterated_id_expr[line_it_name] IN FILE file_identifier_expression[file_name_exp] OPT_DO action_block[actions] 
    { $$ = elex::for_each_line_in_file_act($line_it_name, $file_name_exp, $actions); }

  | FOR EACH LINE opt_iterated_id_expr[line_it_name] IN FILE file_identifier_expression[file_name_exp] OPT_DO action_block[actions] 
    { $$ = elex::for_each_line_in_file_act($line_it_name, $file_name_exp, $actions); }
  ;

file_identifier_expression :
    identifier_expression 
    { $$ = $1; }  
  
  | str_expression
    { $$ = $1; }
  ;

// this for-each action is unrolled in order to avoid reduce-reduce conflicts with the (actually used) non-file for-each action
// for each file [(name)] matching file-name-exp [do] {action; ...}
for_file_in_files_action :
  FOR EACH FILE opt_iterated_id_expr[name] MATCHING str_expression[file_pattern] OPT_DO action_block[actions]
  { $$ = elex::for_each_file_in_files_act($name, $file_pattern, $actions); }
  ;


control_flow_action : 
    BREAK 
    { $$ = elex::break_act(); }

  | CONTINUE
    { $$ = elex::continue_act(); }
  ;

time_consuming_action : 
    emit_action
    { $$ = $1; }
  
  | sync_action
    { $$ = $1; }

  | wait_action
    { $$ = $1; }
  
  | multi_threaded_action
    { $$ = $1; }
  ;

emit_action :
  EMIT identifier_expression
  { $$ = elex::emit_act($2); }
  ;


sync_action :
    SYNC temporal_expression
    { $$ = elex::sync_act($2); }

  | SYNC 
    { $$ = elex::sync_act(nullptr); }
  ;

wait_action : 
    WAIT
    { $$ = elex::wait_act(nullptr); }

  | WAIT temporal_expression
    { $$ = elex::wait_act($2); }

  | WAIT UNTIL temporal_expression
    { $$ = elex::wait_act($3); }
  ;

multi_threaded_action : 
    ALL   OF action_blocks_block { $$ = elex::all_of_act($3); }
  | FIRST OF action_blocks_block { $$ = elex::first_of_act($3); }
  ;

method_call_action : 
    method_call_operator_expression 
    { $$ = elex::method_call_act($1); }

  | START method_call_operator_expression 
    { $$ = elex::start_tcm_call_act($2); }
  
  | COMPUTE method_call_operator_expression
    { $$ = elex::compute_method_call_act($2); }
  
  | RETURN expression
    { $$ = elex::return_act($2); }

  | RETURN 
    { $$ = elex::return_act(nullptr); }

  | PRINT comma_separated_expressions
    { $$ = elex::print_call_act($2); }
  ;

gen_action :
  GEN identifier_expression[gen_item] opt_keeping_constraints_branch[constraints]
  { $$ = elex::gen_act($gen_item, $constraints); }
  ;

do_action : 
  DO complex_type_modifier[seq_item] opt_keeping_constraints_branch[constraints]
  { $$ = elex::do_seq_act($seq_item, $constraints); }
  ;

opt_keeping_constraints_branch :
    %empty 
    { $$ = nullptr; }

  | KEEPING 
    constraint_expression_block 
    { $$ = $2; }
  ;

error_handling_action :
    immediate_check_action
    { $$ = $1; }
  
  | assert_action
    { $$ = $1; }  
  
  | try_else_action
    { $$ = $1; }
  ;

// check [that] bool-exp [else dut_error(...);]
//
// simple enough to unroll
immediate_check_action :
    CHECK expression[bool_exp] opt_dut_error_call[dut_error]
    { 
      CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp,  { error(@bool_exp, "Condition expression must be boolean/identifier/casting/method call expressions"); });
      $$ = elex::check_that_action($bool_exp, $dut_error); 
    }
  
  | CHECK THAT expression[bool_exp] opt_dut_error_call[dut_error]
    { 
      CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp,  { error(@bool_exp, "Condition expression must be boolean/identifier/casting/method call expressions"); });
      $$ = elex::check_that_action($bool_exp, $dut_error); 
    }
  ;

// assert bool-exp [else error(...)]
assert_action :
  ASSERT expression[bool_exp] opt_dut_error_call[error_]
  {
    CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp,  { error(@bool_exp, "Condition expression must be boolean/identifier/casting/method call expressions"); });
    $$ = elex::assert_action($bool_exp, $error_); 
  }
  ;

try_else_action :
    TRY action_block[actions] 
    { $$ = elex::try_else_action($actions, nullptr); }
  
  | TRY action_block[try_actions] ELSE action_block[else_actions]
    { $$ = elex::try_else_action($try_actions, $else_actions); }
  ;

state_machine_action : 
    STATE_MACHINE hier_ref_expression[state_var] states_block[states]
    { $$ = elex::state_machine_act($state_var, nullptr, $states); }

  | STATE_MACHINE hier_ref_expression[state_var] UNTIL ID[final_st] states_block[states]
    { $$ = elex::state_machine_act($state_var, elex::id_expr($final_st), $states); }
  ;

states_block : 
    LBRACE non_terminated_fsm_state RBRACE
    { $$ = elex::single_FSMStates($2); }
  
  | LBRACE states RBRACE
    { $$ = $2; }
  ;

states : 
    fsm_state 
    { $$ = elex::single_FSMStates($1); }

  | states fsm_state 
    { $$ = elex::append_FSMStates($1, elex::single_FSMStates($2)); }

  ;

fsm_state :
  non_terminated_fsm_state SEMICOLON
  { $$ = $1; }
  ;

non_terminated_fsm_state : 
    fsm_state_action     { $$ = $1; }
  | fsm_state_transition { $$ = $1; }
  ;

fsm_state_action:
  ID[state] action_block[actions] 
  { $$ = elex::state_action_fsm($state, $actions); }
  ;

fsm_state_transition : 
    ID[cur_state] IMPLICATION ID[next_state] action_block[actions]
    { $$ = elex::state_transition_fsm($cur_state, $next_state, $actions); }
  
  | MUL IMPLICATION ID[dest_state] action_block[actions]
    { $$ = elex::state_any_transition_fsm($dest_state, $actions); }
  ;

expression : 
    operator_expression                
    { $$ = $1; }

  | non_operator_expression                
    { $$ = $1; }

  ;

non_operator_expression :
    struct_allocate_expression 
    { $$ = $1; }
  ;

operator_expression :  
    LPAREN operator_expression RPAREN   { $$ = $2; }

  | bitwise_operator_expression         
    { $$ = $1; }

  | logical_operator_expression %prec NON_LPAREN        
    { $$ = $1; }

  | arithmetic_operator_expression
    { $$ = $1; }
  
  | ternary_assignment_operator_expression
    { $$ = $1; }

  | hwp_access_operator_expression
    { $$ = $1; }

  | identifier_expression %prec LT_OP 
   { $$ = $1; }
  
  | list_concatenation_operator_expression 
    { $$ = $1; }

  | bit_concatenation_operator_expression  
    { $$ = $1; }

  | str_expression             
    { $$ = $1; }

  | int_expression             
    { $$ = $1; }

  | bool_literal_expression    
    { $$ = $1; }

  | hdl_pathname_expression
    { $$ = $1; } 
  
  | SYS_TIME
    { $$ = elex::sys_time_ref_expr(); }
  ; 


enum_list_exprs :     
    enum_list_item                       { $$ = elex::single_Expressions($1); }
  | enum_list_exprs COMMA enum_list_item { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  | %empty                               { $$ = elex::nil_Expressions(); }
  ;

enum_list_item : 
      ID ASSIGN int_expression  { $$ = elex::enum_list_item($1, $3); }
    | ID                        { $$ = elex::enum_list_item($1, nullptr); }
    ;

bitwise_operator_expression : 
    unary_bitwise_operator_expression  { $$ = $1; }
  | binary_bitwise_operator_expression { $$ = $1; }
  | shift_operator_expression          { $$ = $1; } 
  ;

unary_bitwise_operator_expression : 
  BTWS_NOT_OP operator_expression { $$ = elex::bitwise_not_expr($2); }
  ;

binary_bitwise_operator_expression : 
    operator_expression BTWS_AND_OP operator_expression { $$ = elex::bitwise_and_expr($1, $3); }
  | operator_expression BTWS_OR_OP  operator_expression { $$ = elex::bitwise_or_expr($1, $3); }
  | operator_expression XOR_OP      operator_expression { $$ = elex::bitwise_xor_expr($1, $3); }
  ;

shift_operator_expression : 
    operator_expression LSHIFT operator_expression { $$ = elex::shift_left_expr($1, $3); }
  | operator_expression RSHIFT operator_expression { $$ = elex::right_left_expr($1, $3); }
  ;

logical_operator_expression : 
    LPAREN logical_operator_expression RPAREN  { $$ = $2; }
  | unary_logical_operator_expression          { $$ = $1; }
  | binary_logical_operator_expression         { $$ = $1; }
  | implication_operator_expression            { $$ = $1; }
  | comparison_operator_expression             { $$ = $1; }
  | inclusion_operator_expression              { $$ = $1; }
  | type_instrospection_operator_expression    { $$ = $1; } 
  ;

unary_logical_operator_expression : 
    LOGICAL_NOT_OP operator_expression   { $$ = elex::logical_not_expr($2); }
  | NOT            operator_expression   { $$ = elex::logical_not_expr($2); }
  ;

binary_logical_operator_expression : 
    operator_expression LOGICAL_AND_OP operator_expression { $$ = elex::logical_and_expr($1, $3); }
  | operator_expression AND operator_expression            { $$ = elex::logical_and_expr($1, $3); }
  | operator_expression LOGICAL_OR_OP operator_expression  { $$ = elex::logical_or_expr($1, $3); }
  | operator_expression OR operator_expression             { $$ = elex::logical_or_expr($1, $3); }
  ;

implication_operator_expression : 
  operator_expression IMPLICATION operator_expression { $$ = elex::implication_expr($1, $3); }
  ;

comparison_operator_expression : 
    operator_expression GT  operator_expression { $$ = elex::greater_then_expr($1, $3); }
  | operator_expression LT  operator_expression { $$ = elex::less_then_expr($1, $3); }
  | operator_expression GTE operator_expression { $$ = elex::greater_then_or_equal_expr($1, $3); }
  | operator_expression LTE operator_expression { $$ = elex::less_then_or_equal_expr($1, $3); }
  | operator_expression EQ  operator_expression { $$ = elex::equality_expr($1, $3); }
  | operator_expression NEQ operator_expression { $$ = elex::non_equality_expr($1, $3); }
  | operator_expression VERILOG_EQ operator_expression  { $$ = elex::hdl_equality_expr($1, $3); }
  | operator_expression VERILOG_NEQ operator_expression { $$ = elex::hdl_non_equality_expr($1, $3); }
  | operator_expression BTWS_NOT_OP operator_expression                { $$ = elex::str_match_expr($1, $3); } // "str" ~ "pattern"
  | operator_expression LOGICAL_NOT_OP BTWS_NOT_OP operator_expression { $$ = elex::str_does_not_match_expr($1, $4); } // "str" !~ "pattern"
  ;

inclusion_operator_expression : 
    operator_expression IN operator_expression 
    { $$ = elex::in_expr($1, $3); }

/*   | operator_expression IN enum_datatype       
    { $$ = elex::in_enum_expr($1, $3); } */

  | operator_expression IN range_modifier_expression       
    { $$ = elex::in_expr($1, $3); }
  ;

/* 
    struct-field is a subtype
    struct-field is not a subtype

   as opposed to other low level fundamental expressions,
   type introspection cannot be used with expression
   as a building block since it only accepts hiearachy id and type id expressions
   
*/
type_instrospection_operator_expression :
    hier_ref_expression[field] IS_A scoped_type_identifier_data_type[type_] 
    { $$ = elex::type_introspec_expr($field, $type_); }

  | hier_ref_expression[field] IS_NOT_A scoped_type_identifier_data_type[type_] 
  { $$ = elex::type_introspec_negation_expr($field, $type_); }
  ;

arithmetic_operator_expression : 
      unary_arithmetic_operator_expression  { $$ = $1; }
    | binary_arithmetic_operator_expression { $$ = $1; }
    ;

unary_arithmetic_operator_expression : 
      PLUS operator_expression  { $$ = elex::unary_positive_expr($2); }
    | MINUS operator_expression { $$ = elex::unary_negative_expr($2); }
    ;

binary_arithmetic_operator_expression : 
      operator_expression PLUS      operator_expression { $$ = elex::binary_add_expr($1, $3); }
    | operator_expression MINUS     operator_expression { $$ = elex::binary_sub_expr($1, $3); }
    | operator_expression MUL       operator_expression { $$ = elex::binary_mul_expr($1, $3); }
    | operator_expression DIV       operator_expression { $$ = elex::binary_div_expr($1, $3); }
    | operator_expression REMAINDER operator_expression { $$ = elex::binary_remainder_expr($1, $3); }
    ;

ternary_assignment_operator_expression : 
  operator_expression[bool_exp] TERNARY operator_expression[if_choice_exp] COLON operator_expression[else_choice_exp] %prec LT_OP
  { 
    CHECK_COND_ELSE_PARSE_ERROR(elex::isConditionExpression, $bool_exp, { error(@1, "Conditional expression must be a boolean operator_expression!"); YYABORT; })
    $$ = elex::ternary_assign_expr($bool_exp, $if_choice_exp, $else_choice_exp); 
  }
  ;

hwp_access_operator_expression :
  identifier_expression[base] HWP
  { $$ = elex::hwp_access_expr($base); }
  ;

list_concatenation_operator_expression : 
  LBRACE list_concat_expressions RBRACE { $$ = elex::list_concat_expr($2); }
  ;

list_concat_expressions : 
    operator_expression                                   { $$ = elex::single_Expressions($1); }
  | list_concat_expressions SEMICOLON operator_expression { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  ;

bit_concatenation_operator_expression : 
  REMAINDER LBRACE comma_separated_expressions RBRACE { $$ = elex::bit_concat_expr($3); }
  ;

/* 

sized_scalar_expr : 
      LPAREN BITS  COLON expression RPAREN      { $$ = elex::sized_bits_scalar_expr($4); }
    | LPAREN BYTES COLON expression RPAREN      { $$ = elex::sized_bytes_scalar_expr($4); }
    ;


    ; */


predefined_scalar_datatype : 
    INT     { $$ = elex::int_predefined_type(); }
  | UINT    { $$ = elex::uint_predefined_type(); }
  | BOOL    { $$ = elex::bool_predefined_type(); }
  | BIT     { $$ = elex::bit_predefined_type(); }
  | BYTE    { $$ = elex::byte_predefined_type(); }
  | NIBBLE  { $$ = elex::nibble_predefined_type(); }
  | TIME    { $$ = elex::time_predefined_type(); }
  ;


// VALUE1'id1|id1 VALUE1'id2|id2 ...
// concrete (not listed) node 
complex_type_modifier :
  struct_type_modifiers { $$ = elex::complex_type_modifier($1); }
  ;

struct_type_modifiers : // VALUE1'id1|id1 VALUE1'id2|id2 ...
    struct_type_modifier                       { $$ = elex::single_Expressions($1); }
  | struct_type_modifiers struct_type_modifier { $$ = elex::append_Expressions($1, elex::single_Expressions($2)); }
  ;

struct_type_modifier : // VALUE'id | id
    id_expr[value] SNG_QUOTE id_expr[id] { $$ = elex::struct_type_modifier($value, $id); }
  | id_expr                              { $$ = $1; }
  ;

iterated_id_expr : LPAREN id_expr RPAREN { $$ = $2; };

opt_iterated_id_expr : // [[ (name) ]]
    %empty           { $$ = nullptr; }
  | iterated_id_expr { $$ = $1; }
  ;

/*
opt_slice_expr : // [[: slice]]
      %empty            { $$ = elex::no_expr(); }
    | COLON expression  { $$ = $2; }  */

/* opt_expr :  // [[ expr ]]
      %empty        { $$ = elex::no_expr(); }
    | expression    { $$ = $1; }
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
    dot_separated_expressions %prec NON_DOT
    { $$ = elex::struct_hier_ref_expr($1); }

  | DOT dot_separated_expressions  %prec NON_DOT
    { 
      auto it_expr = elex::it_expr();
      auto complete_hierarchy = elex::append_Expressions(elex::single_Expressions(it_expr), $2);
      $$ = elex::struct_hier_ref_expr(complete_hierarchy);
    }
  ;

dot_separated_expressions : 
      scoped_id_expr                    
      { $$ = elex::single_Expressions($1); }

    | dot_separated_expressions DOT scoped_id_expr  
      { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
    ;

scoped_id_expr : 
    me_expression 
    { $$ = $1; }

  | it_expression 
    { $$ = $1; }

  // simple identifier
  // id
  | id_expr %prec NON_LPAREN
    { $$ = $1; }

  // method call
  // id(...)
  | id_expr[base] LPAREN comma_separated_expressions[arguments] RPAREN
    { $$ = elex::method_call_expr($base, $arguments); }

  // casting operator
  | AS_A LPAREN scoped_type_identifier_data_type[type_] RPAREN
    { $$ = elex::cast_operator_expr($type_); }

    // bit slicing expression
    // id[top:bot]
  | id_expr[id] bit_slicing_expression[slice]
    { $$ = elex::bit_slicing_expr($id, $slice); }

    // list slicing or indexing expression
    // id[idx] | id[bot..top]
  | id_expr[id] range_modifier_expression[range]
    { 
      // cast the range pointer from Expression to range_modifier_expr so we can work on its insides
      auto range_modifier = std::dynamic_pointer_cast<elex::range_modifier_expr_class>($range);
      
      // if the range expression is not of type range_modifier_expr, the programmer screwed up and the 
      // rule action of range_modifier_expr should be examined and re-written
      if(range_modifier == nullptr) {
        error(@range, "Programming error: range expression node must be of type range_modifier_expr");
        YYABORT;
      }

      elex::Expressions range_items = range_modifier->getRangeItems();

      // When indexing or slicing a list, only a single index or a single range expression is allowed
      if(range_items->size() != 1) {
        error(@range, "Programming error: range expression node for list slicing or indexing must have only a single index/range item!");
        YYABORT;
      }
      elex::Expression item = *(range_items->begin());

      if(elex::isIndexItem(item))
        $$ = elex::list_index_expr($id, item); 
      
      else if (elex::isRangeItem(item))
        $$ = elex::list_slicing_expr($id, item);
      
      else {        
        std::stringstream ss;
        ss << "Programming error: range expression item node must be of type (list_index_item_expr_class | range_modifier_item_expr_class) "
           << "But got " << typeid(*item).name() << std::endl;
        error(@range, ss.str());
        YYABORT;
      }

    }  
  ;


/* ternary_operator_expression :
    expression[cond] TERNARY expression[true_exp] COLON expression[false_exp] { $$ = elex::ternary_operator_expr($cond, $true_exp, $false_exp); }
    ;   

casting_operator_expression :
    expression[casted] DOT AS_A LPAREN expression[dest_type] RPAREN { $$ = elex::cast_operator_expr($casted, $dest_type); }
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
      logical_operator_expression                               
      { $$ = elex::constraint_expr($1); }

    | SOFT constraint_expression                       
      { $$ = elex::soft_constraint_expr($2); }

    | TYPE hier_ref_expression[field] IS_A scoped_type_identifier_data_type[type_] 
      { $$ = elex::field_type_constraint_by_type_expr($field, $type_); }
    
    | TYPE hier_ref_expression[lhs] EQ hier_ref_expression[rhs]
      { $$ = elex::field_type_constraint_by_field_expr($lhs, $rhs); }
    
    | ALL OF constraint_expression_block 
      { $$ = elex::all_of_constraint_expr($3); } 
    
    | FOR EACH opt_iterated_id_expr[item_name] IN hier_ref_expression[gen_item] constraint_expression_block[constraint]
      { $$ = elex::list_items_constraint_expr($item_name, $gen_item, $constraint); }

    | SOFT hier_ref_expression[gen_item] SELECT LBRACE weight_value_pairs[distribution] RBRACE 
      // in order to avoid shift/reduce conflicts with `hier_ref_expression . EQ -> identifier_expression`
      // the SELECT keyword was changed to EQ[WS]SELECT (see scanner .l file)
      { $$ = elex::distribution_constraint_expr($gen_item, $distribution); }
    ;

scoped_type_identifier_data_type: 
    scoped_scalar_type_identifier_data_type
    { $$ = $1; }

  | LIST OF scoped_type_identifier_data_type
    { $$ = elex::list_type_dt($3); }

  // associative list isn't allowed to have a listed type as a base type
  | LIST LPAREN KEY COLON ID[key_id] RPAREN OF scoped_scalar_type_identifier_data_type[base_type]
    { $$ = elex::assoc_list_type_dt($key_id, $base_type); }
  ;

scoped_scalar_type_identifier_data_type :
    complex_type_modifier %prec LT_ID       
    { $$ = elex::defined_struct_type_dt($1); }

  | scalar_or_enum_data_type
    { $$ = $1; }
  ;

range_modifier_expression :
    LBRACKET 
      subtype_range_list_items
    RBRACKET 
    { $$ = elex::range_modifier_expr($2); }
  ;

subtype_range_list_items : 
    range_modifier_expression_base 
    { $$ = elex::single_Expressions($1); }

  | subtype_range_list_items COMMA range_modifier_expression_base 
    { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }
  ;

range_modifier_expression_base : 
    opt_fixed_repetition_rep_base_expr[bot] DDOT opt_fixed_repetition_rep_base_expr[top] 
    { $$ = elex::range_modifier_item_expr($bot, $top); }

  | fixed_repetition_rep_base_expr[bot] %prec LT_OP
    { $$ = elex::list_index_item_expr($bot); }
  ;

bit_slicing_expression :
  LBRACKET opt_fixed_repetition_rep_base_expr[top] COLON opt_fixed_repetition_rep_base_expr[bot] RBRACKET
  { $$ = elex::list_slicing_expr($bot, $top); }
  ;


constraint_expression_block : 
    LBRACE constraint_expression RBRACE
    { $$ = elex::single_Expressions($2); }
  
  | LBRACE constraints_list RBRACE
    { $$ = $2; }
  ;

constraints_list :
    terminated_constraint_expression { 
        $$ = elex::single_Expressions($1); 
    }
  | constraints_list terminated_constraint_expression {
      $$ = elex::append_Expressions($1, elex::single_Expressions($2));
    }
  ;

terminated_constraint_expression : 
    constraint_expression SEMICOLON { $$ = $1; }
    ;


method_call_operator_expression : 
  identifier_expression
  { 
    CHECK_COND_ELSE_PARSE_ERROR(elex::isMethodCallExpression, $1, 
                                { 
                                  std::stringstream ss;
                                  ss << "Reduced identifier expression for method call action is faulty" << std::endl;
                                  error(@1, ss.str()); 
                                  YYERROR; 
                                })
    $$ = $1; 
  }
  ;

comma_separated_expressions : 
    operator_expression                                   
    { $$ = elex::single_Expressions($1); }

  | comma_separated_expressions COMMA operator_expression 
    { $$ = elex::append_Expressions($1, elex::single_Expressions($3)); }

  | %empty 
    { $$ = elex::nil_Expressions(); }
  ;

identifier_expression : 
    hier_ref_expression { $$ = $1; }
  ;

id_expr : 
  ID { $$ = elex::id_expr($1); }
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
    int_expression[int_] COLON expression[value] { $$ = elex::distribution_branch_case($int_, $value); } 
    ;

formals:
    %empty               { $$ = elex::nil_Formals(); }
  | formal               { $$ = elex::single_Formals($1); }
  | formals COMMA formal { $$ = elex::append_Formals($1, elex::single_Formals($3)); }
  ;

formal : 
  ID[name] COLON scoped_type_identifier_data_type[type_] 
  { $$ = elex::formal($name, $type_); }
  ;

opt_return_type : 
      %empty                            
      { $$ = nullptr; } 

    | COLON scoped_type_identifier_data_type  
      { $$ = $2; }

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
