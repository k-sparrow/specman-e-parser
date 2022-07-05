/* 
    Language declaration file for classes used by bison
    
    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***
     
 */
 
#pragma once

#include "tree.hpp"
#include "strtab.hpp"

namespace elex { 
    

class Module_class;
typedef std::shared_ptr<Module_class> Module;

class Module_class : public tree_node {
    public:
};

class Statement_class;
typedef std::shared_ptr<Statement_class> Statement;

class Statement_class : public tree_node {
    public:
};

typedef list_tree_node<Statement> Statements_class;
typedef std::shared_ptr<Statements_class> Statements;

auto nil_Statements() -> Statements;
auto single_Statements(Statement) -> Statements;
auto append_Statements(Statements, Statements) -> Statements;

class StructMember_class;
typedef std::shared_ptr<StructMember_class> StructMember;

class StructMember_class : public tree_node {
    public:
};

typedef list_tree_node<StructMember> StructMembers_class;
typedef std::shared_ptr<StructMembers_class> StructMembers;

auto nil_StructMembers() -> StructMembers;
auto single_StructMembers(StructMember) -> StructMembers;
auto append_StructMembers(StructMembers, StructMembers) -> StructMembers;

class Action_class;
typedef std::shared_ptr<Action_class> Action;

class Action_class : public tree_node {
    public:
};

typedef list_tree_node<Action> Actions_class;
typedef std::shared_ptr<Actions_class> Actions;

auto nil_Actions() -> Actions;
auto single_Actions(Action) -> Actions;
auto append_Actions(Actions, Actions) -> Actions;

class Expression_class;
typedef std::shared_ptr<Expression_class> Expression;

class Expression_class : public tree_node {
    public:
};

typedef list_tree_node<Expression> Expressions_class;
typedef std::shared_ptr<Expressions_class> Expressions;

auto nil_Expressions() -> Expressions;
auto single_Expressions(Expression) -> Expressions;
auto append_Expressions(Expressions, Expressions) -> Expressions;

class Formal_class;
typedef std::shared_ptr<Formal_class> Formal;

class Formal_class : public tree_node {
    public:
};

typedef list_tree_node<Formal> Formals_class;
typedef std::shared_ptr<Formals_class> Formals;

auto nil_Formals() -> Formals;
auto single_Formals(Formal) -> Formals;
auto append_Formals(Formals, Formals) -> Formals;

class module__class : public Module_class {
    protected:
        Statements stmts;
    public:
        module__class(Statements stmts) {
            this->stmts = stmts;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto module_(Statements stmts) -> Module;

class package_class : public Statement_class {
    protected:
        Symbol_ pkg_name;
    public:
        package_class(Symbol_ pkg_name) {
            this->pkg_name = pkg_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto package(Symbol_ pkg_name) -> Statement;

class unit_class : public Statement_class {
    protected:
        Symbol_ unit_name;
        StructMembers members;
    public:
        unit_class(Symbol_ unit_name, StructMembers members) {
            this->unit_name = unit_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto unit(Symbol_ unit_name, StructMembers members) -> Statement;

class struct__class : public Statement_class {
    protected:
        Symbol_ struct_name;
        StructMembers members;
    public:
        struct__class(Symbol_ struct_name, StructMembers members) {
            this->struct_name = struct_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_(Symbol_ struct_name, StructMembers members) -> Statement;

class extend_like_class : public Statement_class {
    protected:
        Symbol_ uos_name;
        Symbol_ base_uos_name;
        StructMembers members;
    public:
        extend_like_class(Symbol_ uos_name, Symbol_ base_uos_name, StructMembers members) {
            this->uos_name = uos_name;
            this->base_uos_name = base_uos_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto extend_like(Symbol_ uos_name, Symbol_ base_uos_name, StructMembers members) -> Statement;

class extend_when_class : public Statement_class {
    protected:
        Symbol_ uos_name;
        StructMembers members;
    public:
        extend_when_class(Symbol_ uos_name, StructMembers members) {
            this->uos_name = uos_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto extend_when(Symbol_ uos_name, StructMembers members) -> Statement;

class type__class : public Statement_class {
    protected:
        Symbol_ type_id;
        Expression type_expr;
    public:
        type__class(Symbol_ type_id, Expression type_expr) {
            this->type_id = type_id;
            this->type_expr = type_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto type_(Symbol_ type_id, Expression type_expr) -> Statement;

class import_class : public Statement_class {
    protected:
        Symbol_ pkg_id;
    public:
        import_class(Symbol_ pkg_id) {
            this->pkg_id = pkg_id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto import(Symbol_ pkg_id) -> Statement;

class formal_class : public Formal_class {
    protected:
        Symbol_ name;
        Symbol_ type_;
    public:
        formal_class(Symbol_ name, Symbol_ type_) {
            this->name = name;
            this->type_ = type_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto formal(Symbol_ name, Symbol_ type_) -> Formal;

class struct_field_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Symbol_ type;
    public:
        struct_field_sm_class(Symbol_ id, Symbol_ type) {
            this->id = id;
            this->type = type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_field_sm(Symbol_ id, Symbol_ type) -> StructMember;

class struct_field_list_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression len_expr;
        Symbol_ list_type;
    public:
        struct_field_list_sm_class(Symbol_ id, Expression len_expr, Symbol_ list_type) {
            this->id = id;
            this->len_expr = len_expr;
            this->list_type = list_type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_field_list_sm(Symbol_ id, Expression len_expr, Symbol_ list_type) -> StructMember;

class struct_field_assoc_list_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression key_type;
        Symbol_ list_type;
    public:
        struct_field_assoc_list_sm_class(Symbol_ id, Expression key_type, Symbol_ list_type) {
            this->id = id;
            this->key_type = key_type;
            this->list_type = list_type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_field_assoc_list_sm(Symbol_ id, Expression key_type, Symbol_ list_type) -> StructMember;

class method_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Actions actions_;
    public:
        method_dec_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember;

class method_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Actions actions_;
    public:
        method_dec_also_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_also_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember;

class method_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Actions actions_;
    public:
        method_dec_first_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_first_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember;

class method_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Actions actions_;
    public:
        method_dec_only_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_only_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember;

class method_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
    public:
        method_dec_empty_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_empty_sm(Symbol_ id, Formals arguments, Symbol_ return_type) -> StructMember;

class method_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
    public:
        method_dec_undef_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_dec_undef_sm(Symbol_ id, Formals arguments, Symbol_ return_type) -> StructMember;

class tcm_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_also_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_first_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_only_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
            this->actions_ = actions_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
    public:
        tcm_dec_empty_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) -> StructMember;

class tcm_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Symbol_ return_type;
        Expression event_id_expr;
    public:
        tcm_dec_undef_sm_class(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) {
            this->id = id;
            this->arguments = arguments;
            this->return_type = return_type;
            this->event_id_expr = event_id_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) -> StructMember;

class when_subtype_sm_class : public StructMember_class {
    protected:
        Expressions subtype_mods;
        StructMembers subtype_members;
    public:
        when_subtype_sm_class(Expressions subtype_mods, StructMembers subtype_members) {
            this->subtype_mods = subtype_mods;
            this->subtype_members = subtype_members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto when_subtype_sm(Expressions subtype_mods, StructMembers subtype_members) -> StructMember;

class constraint_def_sm_class : public StructMember_class {
    protected:
        Expression constraint_expr;
    public:
        constraint_def_sm_class(Expression constraint_expr) {
            this->constraint_expr = constraint_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto constraint_def_sm(Expression constraint_expr) -> StructMember;

class no_action_class : public Action_class {
    protected:
    public:
        no_action_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto no_action() -> Action;

class id_expr_class : public Expression_class {
    protected:
        Symbol_ id;
    public:
        id_expr_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto id_expr(Symbol_ id) -> Expression;

class enum_type_expr_class : public Expression_class {
    protected:
        Expressions enum_list_expr;
    public:
        enum_type_expr_class(Expressions enum_list_expr) {
            this->enum_list_expr = enum_list_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto enum_type_expr(Expressions enum_list_expr) -> Expression;

class enum_list_item_class : public Expression_class {
    protected:
        Symbol_ id;
        Expression expr;
    public:
        enum_list_item_class(Symbol_ id, Expression expr) {
            this->id = id;
            this->expr = expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto enum_list_item(Symbol_ id, Expression expr) -> Expression;

class bitwise_not_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        bitwise_not_expr_class(Expression e) {
            this->e = e;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto bitwise_not_expr(Expression e) -> Expression;

class bitwise_and_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_and_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto bitwise_and_expr(Expression e1, Expression e2) -> Expression;

class bitwise_or_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_or_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto bitwise_or_expr(Expression e1, Expression e2) -> Expression;

class bitwise_xor_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_xor_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto bitwise_xor_expr(Expression e1, Expression e2) -> Expression;

class shift_left_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        shift_left_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto shift_left_expr(Expression e1, Expression e2) -> Expression;

class right_left_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        right_left_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto right_left_expr(Expression e1, Expression e2) -> Expression;

class logical_not_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        logical_not_expr_class(Expression e) {
            this->e = e;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto logical_not_expr(Expression e) -> Expression;

class logical_and_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        logical_and_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto logical_and_expr(Expression e1, Expression e2) -> Expression;

class logical_or_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        logical_or_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto logical_or_expr(Expression e1, Expression e2) -> Expression;

class implication_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        implication_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto implication_expr(Expression e1, Expression e2) -> Expression;

class unary_positive_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        unary_positive_expr_class(Expression e) {
            this->e = e;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto unary_positive_expr(Expression e) -> Expression;

class unary_negative_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        unary_negative_expr_class(Expression e) {
            this->e = e;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto unary_negative_expr(Expression e) -> Expression;

class binary_add_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_add_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto binary_add_expr(Expression e1, Expression e2) -> Expression;

class binary_sub_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_sub_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto binary_sub_expr(Expression e1, Expression e2) -> Expression;

class binary_mul_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_mul_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto binary_mul_expr(Expression e1, Expression e2) -> Expression;

class binary_remainder_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_remainder_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto binary_remainder_expr(Expression e1, Expression e2) -> Expression;

class less_then_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        less_then_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto less_then_expr(Expression e1, Expression e2) -> Expression;

class greater_then_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        greater_then_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto greater_then_expr(Expression e1, Expression e2) -> Expression;

class less_then_or_equal_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        less_then_or_equal_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto less_then_or_equal_expr(Expression e1, Expression e2) -> Expression;

class greater_then_or_equal_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        greater_then_or_equal_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto greater_then_or_equal_expr(Expression e1, Expression e2) -> Expression;

class equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        equality_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto equality_expr(Expression e1, Expression e2) -> Expression;

class non_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        non_equality_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto non_equality_expr(Expression e1, Expression e2) -> Expression;

class hdl_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        hdl_equality_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto hdl_equality_expr(Expression e1, Expression e2) -> Expression;

class hdl_non_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        hdl_non_equality_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto hdl_non_equality_expr(Expression e1, Expression e2) -> Expression;

class str_match_expr_class : public Expression_class {
    protected:
        Expression str_expr;
        Expression pattern_expr;
    public:
        str_match_expr_class(Expression str_expr, Expression pattern_expr) {
            this->str_expr = str_expr;
            this->pattern_expr = pattern_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto str_match_expr(Expression str_expr, Expression pattern_expr) -> Expression;

class str_does_not_match_expr_class : public Expression_class {
    protected:
        Expression str_expr;
        Expression pattern_expr;
    public:
        str_does_not_match_expr_class(Expression str_expr, Expression pattern_expr) {
            this->str_expr = str_expr;
            this->pattern_expr = pattern_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto str_does_not_match_expr(Expression str_expr, Expression pattern_expr) -> Expression;

class in_expr_class : public Expression_class {
    protected:
        Expression exp;
        Expression inside;
    public:
        in_expr_class(Expression exp, Expression inside) {
            this->exp = exp;
            this->inside = inside;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto in_expr(Expression exp, Expression inside) -> Expression;

class list_indexing_expr_class : public Expression_class {
    protected:
        Expression list_exp;
        Expression idx_expr;
    public:
        list_indexing_expr_class(Expression list_exp, Expression idx_expr) {
            this->list_exp = list_exp;
            this->idx_expr = idx_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto list_indexing_expr(Expression list_exp, Expression idx_expr) -> Expression;

class list_slicing_expr_class : public Expression_class {
    protected:
        Expression list_exp;
        Expression high_expr;
        Expression low_expr;
        Expression slice_expr;
    public:
        list_slicing_expr_class(Expression list_exp, Expression high_expr, Expression low_expr, Expression slice_expr) {
            this->list_exp = list_exp;
            this->high_expr = high_expr;
            this->low_expr = low_expr;
            this->slice_expr = slice_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto list_slicing_expr(Expression list_exp, Expression high_expr, Expression low_expr, Expression slice_expr) -> Expression;

class list_splicing_expr_class : public Expression_class {
    protected:
        Expression list_exp;
        Expression low_expr;
        Expression high_expr;
    public:
        list_splicing_expr_class(Expression list_exp, Expression low_expr, Expression high_expr) {
            this->list_exp = list_exp;
            this->low_expr = low_expr;
            this->high_expr = high_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto list_splicing_expr(Expression list_exp, Expression low_expr, Expression high_expr) -> Expression;

class list_concat_expr_class : public Expression_class {
    protected:
        Expressions list_concat_items;
    public:
        list_concat_expr_class(Expressions list_concat_items) {
            this->list_concat_items = list_concat_items;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto list_concat_expr(Expressions list_concat_items) -> Expression;

class bit_concat_expr_class : public Expression_class {
    protected:
        Expressions bit_concat_items;
    public:
        bit_concat_expr_class(Expressions bit_concat_items) {
            this->bit_concat_items = bit_concat_items;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto bit_concat_expr(Expressions bit_concat_items) -> Expression;

class range_modifier_expr_class : public Expression_class {
    protected:
        Expressions range_modifier_elements_list;
    public:
        range_modifier_expr_class(Expressions range_modifier_elements_list) {
            this->range_modifier_elements_list = range_modifier_elements_list;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto range_modifier_expr(Expressions range_modifier_elements_list) -> Expression;

class sized_bits_scalar_expr_class : public Expression_class {
    protected:
        Expression width_expr;
    public:
        sized_bits_scalar_expr_class(Expression width_expr) {
            this->width_expr = width_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto sized_bits_scalar_expr(Expression width_expr) -> Expression;

class sized_bytes_scalar_expr_class : public Expression_class {
    protected:
        Expression width_expr;
    public:
        sized_bytes_scalar_expr_class(Expression width_expr) {
            this->width_expr = width_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto sized_bytes_scalar_expr(Expression width_expr) -> Expression;

class allocate_expr_class : public Expression_class {
    protected:
        Expression opt_struct_type_block;
    public:
        allocate_expr_class(Expression opt_struct_type_block) {
            this->opt_struct_type_block = opt_struct_type_block;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto allocate_expr(Expression opt_struct_type_block) -> Expression;

class struct_type_expr_with_opt_action_block_class : public Expression_class {
    protected:
        Expression struct_id_expr;
        Expression opt_action_block_expt;
    public:
        struct_type_expr_with_opt_action_block_class(Expression struct_id_expr, Expression opt_action_block_expt) {
            this->struct_id_expr = struct_id_expr;
            this->opt_action_block_expt = opt_action_block_expt;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_type_expr_with_opt_action_block(Expression struct_id_expr, Expression opt_action_block_expt) -> Expression;

class named_action_block_class : public Expression_class {
    protected:
        Expression struct_id_expr;
        Actions action_block;
    public:
        named_action_block_class(Expression struct_id_expr, Actions action_block) {
            this->struct_id_expr = struct_id_expr;
            this->action_block = action_block;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto named_action_block(Expression struct_id_expr, Actions action_block) -> Expression;

class struct_type_id_class : public Expression_class {
    protected:
        Expressions struct_type_modifiers;
        Expression struct_id_expr;
    public:
        struct_type_id_class(Expressions struct_type_modifiers, Expression struct_id_expr) {
            this->struct_type_modifiers = struct_type_modifiers;
            this->struct_id_expr = struct_id_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_type_id(Expressions struct_type_modifiers, Expression struct_id_expr) -> Expression;

class struct_type_modifier_class : public Expression_class {
    protected:
        Expression value;
        Expression id;
    public:
        struct_type_modifier_class(Expression value, Expression id) {
            this->value = value;
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_type_modifier(Expression value, Expression id) -> Expression;

class struct_hier_ref_expr_class : public Expression_class {
    protected:
        Expressions hiers;
    public:
        struct_hier_ref_expr_class(Expressions hiers) {
            this->hiers = hiers;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_hier_ref_expr(Expressions hiers) -> Expression;

class hdl_path_name_expr_class : public Expression_class {
    protected:
        Expressions hdl_hiers;
    public:
        hdl_path_name_expr_class(Expressions hdl_hiers) {
            this->hdl_hiers = hdl_hiers;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto hdl_path_name_expr(Expressions hdl_hiers) -> Expression;

class ternary_operator_expr_class : public Expression_class {
    protected:
        Expression condition;
        Expression true_expr;
        Expression false_expr;
    public:
        ternary_operator_expr_class(Expression condition, Expression true_expr, Expression false_expr) {
            this->condition = condition;
            this->true_expr = true_expr;
            this->false_expr = false_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto ternary_operator_expr(Expression condition, Expression true_expr, Expression false_expr) -> Expression;

class cast_operator_expr_class : public Expression_class {
    protected:
        Expression casted_expr;
        Expression dest_type_expr;
    public:
        cast_operator_expr_class(Expression casted_expr, Expression dest_type_expr) {
            this->casted_expr = casted_expr;
            this->dest_type_expr = dest_type_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto cast_operator_expr(Expression casted_expr, Expression dest_type_expr) -> Expression;

class constraint_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        constraint_expr_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto constraint_expr(Expression bool_expr) -> Expression;

class soft_constraint_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        soft_constraint_expr_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto soft_constraint_expr(Expression bool_expr) -> Expression;

class method_call_expr_class : public Expression_class {
    protected:
        Expression base;
        Expressions arguments;
    public:
        method_call_expr_class(Expression base, Expressions arguments) {
            this->base = base;
            this->arguments = arguments;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto method_call_expr(Expression base, Expressions arguments) -> Expression;

class me_expr_class : public Expression_class {
    protected:
    public:
        me_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto me_expr() -> Expression;

class it_expr_class : public Expression_class {
    protected:
    public:
        it_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto it_expr() -> Expression;

class str_expr_class : public Expression_class {
    protected:
        Symbol_ str;
    public:
        str_expr_class(Symbol_ str) {
            this->str = str;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto str_expr(Symbol_ str) -> Expression;

class int_expr_class : public Expression_class {
    protected:
        Symbol_ int_;
    public:
        int_expr_class(Symbol_ int_) {
            this->int_ = int_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto int_expr(Symbol_ int_) -> Expression;

class no_expr_class : public Expression_class {
    protected:
    public:
        no_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto no_expr() -> Expression;

 
}