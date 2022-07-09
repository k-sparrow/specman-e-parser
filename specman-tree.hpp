/* 
    Language declaration file for classes used by bison
    
    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***
     
 */
 
#pragma once

#include "tree.hpp"
#include "specman-tree-handcode.hpp"
#include "strtab.hpp"

namespace elex { 
    

class Module_class;
typedef std::shared_ptr<Module_class> Module;

class Module_class : public tree_node {
    public:

#ifdef Module_EXTRAS
    Module_EXTRAS
#endif
};

class Statement_class;
typedef std::shared_ptr<Statement_class> Statement;

class Statement_class : public tree_node {
    public:

#ifdef Statement_EXTRAS
    Statement_EXTRAS
#endif
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

#ifdef StructMember_EXTRAS
    StructMember_EXTRAS
#endif
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

#ifdef Action_EXTRAS
    Action_EXTRAS
#endif
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

#ifdef Expression_EXTRAS
    Expression_EXTRAS
#endif
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

#ifdef Formal_EXTRAS
    Formal_EXTRAS
#endif
};

typedef list_tree_node<Formal> Formals_class;
typedef std::shared_ptr<Formals_class> Formals;

auto nil_Formals() -> Formals;
auto single_Formals(Formal) -> Formals;
auto append_Formals(Formals, Formals) -> Formals;

class Case_class;
typedef std::shared_ptr<Case_class> Case;

class Case_class : public tree_node {
    public:

#ifdef Case_EXTRAS
    Case_EXTRAS
#endif
};

typedef list_tree_node<Case> Cases_class;
typedef std::shared_ptr<Cases_class> Cases;

auto nil_Cases() -> Cases;
auto single_Cases(Case) -> Cases;
auto append_Cases(Cases, Cases) -> Cases;

class module__class : public Module_class {
    protected:
        Statements stmts;
    public:
        module__class(Statements stmts) {
            this->stmts = stmts;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Module_SHARED_EXTRAS
    Module_SHARED_EXTRAS
#endif
#ifdef module__EXTRAS
    module__EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef package_EXTRAS
    package_EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef unit_EXTRAS
    unit_EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef struct__EXTRAS
    struct__EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef extend_like_EXTRAS
    extend_like_EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef extend_when_EXTRAS
    extend_when_EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef type__EXTRAS
    type__EXTRAS
#endif
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

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef import_EXTRAS
    import_EXTRAS
#endif
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

#ifdef Formal_SHARED_EXTRAS
    Formal_SHARED_EXTRAS
#endif
#ifdef formal_EXTRAS
    formal_EXTRAS
#endif
};

auto formal(Symbol_ name, Symbol_ type_) -> Formal;

class struct_field_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression type;
    public:
        struct_field_sm_class(Symbol_ id, Expression type) {
            this->id = id;
            this->type = type;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_sm_EXTRAS
    struct_field_sm_EXTRAS
#endif
};

auto struct_field_sm(Symbol_ id, Expression type) -> StructMember;

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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_list_sm_EXTRAS
    struct_field_list_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_assoc_list_sm_EXTRAS
    struct_field_assoc_list_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_sm_EXTRAS
    method_dec_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_also_sm_EXTRAS
    method_dec_also_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_first_sm_EXTRAS
    method_dec_first_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_only_sm_EXTRAS
    method_dec_only_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_empty_sm_EXTRAS
    method_dec_empty_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_undef_sm_EXTRAS
    method_dec_undef_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_sm_EXTRAS
    tcm_dec_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_also_sm_EXTRAS
    tcm_dec_also_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_first_sm_EXTRAS
    tcm_dec_first_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_only_sm_EXTRAS
    tcm_dec_only_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_empty_sm_EXTRAS
    tcm_dec_empty_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_undef_sm_EXTRAS
    tcm_dec_undef_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef when_subtype_sm_EXTRAS
    when_subtype_sm_EXTRAS
#endif
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

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef constraint_def_sm_EXTRAS
    constraint_def_sm_EXTRAS
#endif
};

auto constraint_def_sm(Expression constraint_expr) -> StructMember;

class on_event_sm_class : public StructMember_class {
    protected:
        Expression event_name;
        Actions action_block;
    public:
        on_event_sm_class(Expression event_name, Actions action_block) {
            this->event_name = event_name;
            this->action_block = action_block;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef on_event_sm_EXTRAS
    on_event_sm_EXTRAS
#endif
};

auto on_event_sm(Expression event_name, Actions action_block) -> StructMember;

class simple_event_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
    public:
        simple_event_dec_sm_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef simple_event_dec_sm_EXTRAS
    simple_event_dec_sm_EXTRAS
#endif
};

auto simple_event_dec_sm(Symbol_ id) -> StructMember;

class event_def_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression temporal;
    public:
        event_def_sm_class(Symbol_ id, Expression temporal) {
            this->id = id;
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef event_def_sm_EXTRAS
    event_def_sm_EXTRAS
#endif
};

auto event_def_sm(Symbol_ id, Expression temporal) -> StructMember;

class event_def_override_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression temporal;
    public:
        event_def_override_sm_class(Symbol_ id, Expression temporal) {
            this->id = id;
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef event_def_override_sm_EXTRAS
    event_def_override_sm_EXTRAS
#endif
};

auto event_def_override_sm(Symbol_ id, Expression temporal) -> StructMember;

class temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
        Expression sample_event;
    public:
        temporal_expr_class(Expression temporal, Expression sample_event) {
            this->temporal = temporal;
            this->sample_event = sample_event;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef temporal_expr_EXTRAS
    temporal_expr_EXTRAS
#endif
};

auto temporal_expr(Expression temporal, Expression sample_event) -> Expression;

class event_ref_expr_class : public Expression_class {
    protected:
        Expression event_name;
    public:
        event_ref_expr_class(Expression event_name) {
            this->event_name = event_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef event_ref_expr_EXTRAS
    event_ref_expr_EXTRAS
#endif
};

auto event_ref_expr(Expression event_name) -> Expression;

class not_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        not_temporal_expr_class(Expression temporal) {
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef not_temporal_expr_EXTRAS
    not_temporal_expr_EXTRAS
#endif
};

auto not_temporal_expr(Expression temporal) -> Expression;

class fail_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        fail_temporal_expr_class(Expression temporal) {
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fail_temporal_expr_EXTRAS
    fail_temporal_expr_EXTRAS
#endif
};

auto fail_temporal_expr(Expression temporal) -> Expression;

class eventually_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        eventually_temporal_expr_class(Expression temporal) {
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef eventually_temporal_expr_EXTRAS
    eventually_temporal_expr_EXTRAS
#endif
};

auto eventually_temporal_expr(Expression temporal) -> Expression;

class detach_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        detach_temporal_expr_class(Expression temporal) {
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef detach_temporal_expr_EXTRAS
    detach_temporal_expr_EXTRAS
#endif
};

auto detach_temporal_expr(Expression temporal) -> Expression;

class yield_temporal_expr_class : public Expression_class {
    protected:
        Expression trigger;
        Expression temporal;
    public:
        yield_temporal_expr_class(Expression trigger, Expression temporal) {
            this->trigger = trigger;
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef yield_temporal_expr_EXTRAS
    yield_temporal_expr_EXTRAS
#endif
};

auto yield_temporal_expr(Expression trigger, Expression temporal) -> Expression;

class true_temporal_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        true_temporal_expr_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_temporal_expr_EXTRAS
    true_temporal_expr_EXTRAS
#endif
};

auto true_temporal_expr(Expression bool_expr) -> Expression;

class rise_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        rise_temporal_expr_class(Expression hdl_path) {
            this->hdl_path = hdl_path;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef rise_temporal_expr_EXTRAS
    rise_temporal_expr_EXTRAS
#endif
};

auto rise_temporal_expr(Expression hdl_path) -> Expression;

class fall_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        fall_temporal_expr_class(Expression hdl_path) {
            this->hdl_path = hdl_path;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fall_temporal_expr_EXTRAS
    fall_temporal_expr_EXTRAS
#endif
};

auto fall_temporal_expr(Expression hdl_path) -> Expression;

class change_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        change_temporal_expr_class(Expression hdl_path) {
            this->hdl_path = hdl_path;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef change_temporal_expr_EXTRAS
    change_temporal_expr_EXTRAS
#endif
};

auto change_temporal_expr(Expression hdl_path) -> Expression;

class and_temporal_expr_class : public Expression_class {
    protected:
        Expression te1;
        Expression te2;
    public:
        and_temporal_expr_class(Expression te1, Expression te2) {
            this->te1 = te1;
            this->te2 = te2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef and_temporal_expr_EXTRAS
    and_temporal_expr_EXTRAS
#endif
};

auto and_temporal_expr(Expression te1, Expression te2) -> Expression;

class or_temporal_expr_class : public Expression_class {
    protected:
        Expression te1;
        Expression te2;
    public:
        or_temporal_expr_class(Expression te1, Expression te2) {
            this->te1 = te1;
            this->te2 = te2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef or_temporal_expr_EXTRAS
    or_temporal_expr_EXTRAS
#endif
};

auto or_temporal_expr(Expression te1, Expression te2) -> Expression;

class sequence_temporal_expr_class : public Expression_class {
    protected:
        Expressions temporals;
    public:
        sequence_temporal_expr_class(Expressions temporals) {
            this->temporals = temporals;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sequence_temporal_expr_EXTRAS
    sequence_temporal_expr_EXTRAS
#endif
};

auto sequence_temporal_expr(Expressions temporals) -> Expression;

class fixed_repetition_expr_class : public Expression_class {
    protected:
        Expression rep;
        Expression temporal;
    public:
        fixed_repetition_expr_class(Expression rep, Expression temporal) {
            this->rep = rep;
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fixed_repetition_expr_EXTRAS
    fixed_repetition_expr_EXTRAS
#endif
};

auto fixed_repetition_expr(Expression rep, Expression temporal) -> Expression;

class cycle_temporal_expr_class : public Expression_class {
    protected:
    public:
        cycle_temporal_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef cycle_temporal_expr_EXTRAS
    cycle_temporal_expr_EXTRAS
#endif
};

auto cycle_temporal_expr() -> Expression;

class no_action_class : public Action_class {
    protected:
    public:
        no_action_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef no_action_EXTRAS
    no_action_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef id_expr_EXTRAS
    id_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef enum_type_expr_EXTRAS
    enum_type_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef enum_list_item_EXTRAS
    enum_list_item_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_not_expr_EXTRAS
    bitwise_not_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_and_expr_EXTRAS
    bitwise_and_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_or_expr_EXTRAS
    bitwise_or_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_xor_expr_EXTRAS
    bitwise_xor_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef shift_left_expr_EXTRAS
    shift_left_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef right_left_expr_EXTRAS
    right_left_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_not_expr_EXTRAS
    logical_not_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_and_expr_EXTRAS
    logical_and_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_or_expr_EXTRAS
    logical_or_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef implication_expr_EXTRAS
    implication_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef unary_positive_expr_EXTRAS
    unary_positive_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef unary_negative_expr_EXTRAS
    unary_negative_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_add_expr_EXTRAS
    binary_add_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_sub_expr_EXTRAS
    binary_sub_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_mul_expr_EXTRAS
    binary_mul_expr_EXTRAS
#endif
};

auto binary_mul_expr(Expression e1, Expression e2) -> Expression;

class binary_div_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_div_expr_class(Expression e1, Expression e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_div_expr_EXTRAS
    binary_div_expr_EXTRAS
#endif
};

auto binary_div_expr(Expression e1, Expression e2) -> Expression;

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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_remainder_expr_EXTRAS
    binary_remainder_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef less_then_expr_EXTRAS
    less_then_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef greater_then_expr_EXTRAS
    greater_then_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef less_then_or_equal_expr_EXTRAS
    less_then_or_equal_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef greater_then_or_equal_expr_EXTRAS
    greater_then_or_equal_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef equality_expr_EXTRAS
    equality_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef non_equality_expr_EXTRAS
    non_equality_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_equality_expr_EXTRAS
    hdl_equality_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_non_equality_expr_EXTRAS
    hdl_non_equality_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_match_expr_EXTRAS
    str_match_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_does_not_match_expr_EXTRAS
    str_does_not_match_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef in_expr_EXTRAS
    in_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_indexing_expr_EXTRAS
    list_indexing_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_slicing_expr_EXTRAS
    list_slicing_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_splicing_expr_EXTRAS
    list_splicing_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_concat_expr_EXTRAS
    list_concat_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bit_concat_expr_EXTRAS
    bit_concat_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef range_modifier_expr_EXTRAS
    range_modifier_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sized_bits_scalar_expr_EXTRAS
    sized_bits_scalar_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sized_bytes_scalar_expr_EXTRAS
    sized_bytes_scalar_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef allocate_expr_EXTRAS
    allocate_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_expr_with_opt_action_block_EXTRAS
    struct_type_expr_with_opt_action_block_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef named_action_block_EXTRAS
    named_action_block_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_id_EXTRAS
    struct_type_id_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_modifier_EXTRAS
    struct_type_modifier_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_hier_ref_expr_EXTRAS
    struct_hier_ref_expr_EXTRAS
#endif
};

auto struct_hier_ref_expr(Expressions hiers) -> Expression;

class hdl_path_name_expr_class : public Expression_class {
    protected:
        Symbol_ hdl_hier_ref;
    public:
        hdl_path_name_expr_class(Symbol_ hdl_hier_ref) {
            this->hdl_hier_ref = hdl_hier_ref;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_path_name_expr_EXTRAS
    hdl_path_name_expr_EXTRAS
#endif
};

auto hdl_path_name_expr(Symbol_ hdl_hier_ref) -> Expression;

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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef ternary_operator_expr_EXTRAS
    ternary_operator_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef cast_operator_expr_EXTRAS
    cast_operator_expr_EXTRAS
#endif
};

auto cast_operator_expr(Expression casted_expr, Expression dest_type_expr) -> Expression;

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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef method_call_expr_EXTRAS
    method_call_expr_EXTRAS
#endif
};

auto method_call_expr(Expression base, Expressions arguments) -> Expression;

class constraint_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        constraint_expr_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef constraint_expr_EXTRAS
    constraint_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef soft_constraint_expr_EXTRAS
    soft_constraint_expr_EXTRAS
#endif
};

auto soft_constraint_expr(Expression bool_expr) -> Expression;

class all_of_constraint_expr_class : public Expression_class {
    protected:
        Expressions constraints;
    public:
        all_of_constraint_expr_class(Expressions constraints) {
            this->constraints = constraints;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef all_of_constraint_expr_EXTRAS
    all_of_constraint_expr_EXTRAS
#endif
};

auto all_of_constraint_expr(Expressions constraints) -> Expression;

class list_items_constraint_expr_class : public Expression_class {
    protected:
        Expression item_name;
        Expression gen_item;
        Expression constraint;
    public:
        list_items_constraint_expr_class(Expression item_name, Expression gen_item, Expression constraint) {
            this->item_name = item_name;
            this->gen_item = gen_item;
            this->constraint = constraint;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_items_constraint_expr_EXTRAS
    list_items_constraint_expr_EXTRAS
#endif
};

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expression constraint) -> Expression;

class distribution_constraint_expr_class : public Expression_class {
    protected:
        Expression gen_item;
        Cases distribution;
    public:
        distribution_constraint_expr_class(Expression gen_item, Cases distribution) {
            this->gen_item = gen_item;
            this->distribution = distribution;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef distribution_constraint_expr_EXTRAS
    distribution_constraint_expr_EXTRAS
#endif
};

auto distribution_constraint_expr(Expression gen_item, Cases distribution) -> Expression;

class distribution_branch_case_class : public Case_class {
    protected:
        Expression int_;
        Expression value;
    public:
        distribution_branch_case_class(Expression int_, Expression value) {
            this->int_ = int_;
            this->value = value;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef distribution_branch_case_EXTRAS
    distribution_branch_case_EXTRAS
#endif
};

auto distribution_branch_case(Expression int_, Expression value) -> Case;

class me_expr_class : public Expression_class {
    protected:
    public:
        me_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef me_expr_EXTRAS
    me_expr_EXTRAS
#endif
};

auto me_expr() -> Expression;

class it_expr_class : public Expression_class {
    protected:
    public:
        it_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef it_expr_EXTRAS
    it_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_expr_EXTRAS
    str_expr_EXTRAS
#endif
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

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef int_expr_EXTRAS
    int_expr_EXTRAS
#endif
};

auto int_expr(Symbol_ int_) -> Expression;

class predefined_type_int_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_int_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_int_expr_EXTRAS
    predefined_type_int_expr_EXTRAS
#endif
};

auto predefined_type_int_expr() -> Expression;

class predefined_type_uint_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_uint_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_uint_expr_EXTRAS
    predefined_type_uint_expr_EXTRAS
#endif
};

auto predefined_type_uint_expr() -> Expression;

class predefined_type_bool_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_bool_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_bool_expr_EXTRAS
    predefined_type_bool_expr_EXTRAS
#endif
};

auto predefined_type_bool_expr() -> Expression;

class predefined_type_bit_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_bit_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_bit_expr_EXTRAS
    predefined_type_bit_expr_EXTRAS
#endif
};

auto predefined_type_bit_expr() -> Expression;

class predefined_type_byte_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_byte_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_byte_expr_EXTRAS
    predefined_type_byte_expr_EXTRAS
#endif
};

auto predefined_type_byte_expr() -> Expression;

class predefined_type_nibble_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_nibble_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_nibble_expr_EXTRAS
    predefined_type_nibble_expr_EXTRAS
#endif
};

auto predefined_type_nibble_expr() -> Expression;

class predefined_type_time_expr_class : public Expression_class {
    protected:
    public:
        predefined_type_time_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef predefined_type_time_expr_EXTRAS
    predefined_type_time_expr_EXTRAS
#endif
};

auto predefined_type_time_expr() -> Expression;

class no_expr_class : public Expression_class {
    protected:
    public:
        no_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef no_expr_EXTRAS
    no_expr_EXTRAS
#endif
};

auto no_expr() -> Expression;

 
}