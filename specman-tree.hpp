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

class SequenceItem_class;
typedef std::shared_ptr<SequenceItem_class> SequenceItem;

class SequenceItem_class : public tree_node {
    public:

#ifdef SequenceItem_EXTRAS
    SequenceItem_EXTRAS
#endif
};

typedef list_tree_node<SequenceItem> SequenceItems_class;
typedef std::shared_ptr<SequenceItems_class> SequenceItems;

auto nil_SequenceItems() -> SequenceItems;
auto single_SequenceItems(SequenceItem) -> SequenceItems;
auto append_SequenceItems(SequenceItems, SequenceItems) -> SequenceItems;

class CovergroupOption_class;
typedef std::shared_ptr<CovergroupOption_class> CovergroupOption;

class CovergroupOption_class : public tree_node {
    public:

#ifdef CovergroupOption_EXTRAS
    CovergroupOption_EXTRAS
#endif
};

typedef list_tree_node<CovergroupOption> CovergroupOptions_class;
typedef std::shared_ptr<CovergroupOptions_class> CovergroupOptions;

auto nil_CovergroupOptions() -> CovergroupOptions;
auto single_CovergroupOptions(CovergroupOption) -> CovergroupOptions;
auto append_CovergroupOptions(CovergroupOptions, CovergroupOptions) -> CovergroupOptions;

class CovergroupItem_class;
typedef std::shared_ptr<CovergroupItem_class> CovergroupItem;

class CovergroupItem_class : public tree_node {
    public:

#ifdef CovergroupItem_EXTRAS
    CovergroupItem_EXTRAS
#endif
};

typedef list_tree_node<CovergroupItem> CovergroupItems_class;
typedef std::shared_ptr<CovergroupItems_class> CovergroupItems;

auto nil_CovergroupItems() -> CovergroupItems;
auto single_CovergroupItems(CovergroupItem) -> CovergroupItems;
auto append_CovergroupItems(CovergroupItems, CovergroupItems) -> CovergroupItems;

class CovergroupItemOption_class;
typedef std::shared_ptr<CovergroupItemOption_class> CovergroupItemOption;

class CovergroupItemOption_class : public tree_node {
    public:

#ifdef CovergroupItemOption_EXTRAS
    CovergroupItemOption_EXTRAS
#endif
};

typedef list_tree_node<CovergroupItemOption> CovergroupItemOptions_class;
typedef std::shared_ptr<CovergroupItemOptions_class> CovergroupItemOptions;

auto nil_CovergroupItemOptions() -> CovergroupItemOptions;
auto single_CovergroupItemOptions(CovergroupItemOption) -> CovergroupItemOptions;
auto append_CovergroupItemOptions(CovergroupItemOptions, CovergroupItemOptions) -> CovergroupItemOptions;

class CovergroupExtensionID_class;
typedef std::shared_ptr<CovergroupExtensionID_class> CovergroupExtensionID;

class CovergroupExtensionID_class : public tree_node {
    public:

#ifdef CovergroupExtensionID_EXTRAS
    CovergroupExtensionID_EXTRAS
#endif
};

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

class struct_st_class : public Statement_class {
    protected:
        Symbol_ struct_name;
        StructMembers members;
    public:
        struct_st_class(Symbol_ struct_name, StructMembers members) {
            this->struct_name = struct_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef struct_st_EXTRAS
    struct_st_EXTRAS
#endif
};

auto struct_st(Symbol_ struct_name, StructMembers members) -> Statement;

class struct_like_st_class : public Statement_class {
    protected:
        Symbol_ struct_name;
        Symbol_ base_struct_name;
        StructMembers members;
    public:
        struct_like_st_class(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members) {
            this->struct_name = struct_name;
            this->base_struct_name = base_struct_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef struct_like_st_EXTRAS
    struct_like_st_EXTRAS
#endif
};

auto struct_like_st(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members) -> Statement;

class extend_struct_st_class : public Statement_class {
    protected:
        Expressions struct_type_name;
        StructMembers members;
    public:
        extend_struct_st_class(Expressions struct_type_name, StructMembers members) {
            this->struct_type_name = struct_type_name;
            this->members = members;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef extend_struct_st_EXTRAS
    extend_struct_st_EXTRAS
#endif
};

auto extend_struct_st(Expressions struct_type_name, StructMembers members) -> Statement;

class enum_type_st_class : public Statement_class {
    protected:
        Symbol_ type_id;
        Expressions enum_list_items;
        Expression width_expr;
    public:
        enum_type_st_class(Symbol_ type_id, Expressions enum_list_items, Expression width_expr) {
            this->type_id = type_id;
            this->enum_list_items = enum_list_items;
            this->width_expr = width_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef enum_type_st_EXTRAS
    enum_type_st_EXTRAS
#endif
};

auto enum_type_st(Symbol_ type_id, Expressions enum_list_items, Expression width_expr) -> Statement;

class scalar_subtype_st_class : public Statement_class {
    protected:
        Symbol_ subtype_id;
        Expression type_id;
        Expressions ranges;
    public:
        scalar_subtype_st_class(Symbol_ subtype_id, Expression type_id, Expressions ranges) {
            this->subtype_id = subtype_id;
            this->type_id = type_id;
            this->ranges = ranges;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef scalar_subtype_st_EXTRAS
    scalar_subtype_st_EXTRAS
#endif
};

auto scalar_subtype_st(Symbol_ subtype_id, Expression type_id, Expressions ranges) -> Statement;

class scalar_sized_type_st_class : public Statement_class {
    protected:
        Symbol_ type_id;
        Expression base_type_id;
        Expressions ranges_expr;
        Expression width_expr;
    public:
        scalar_sized_type_st_class(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr) {
            this->type_id = type_id;
            this->base_type_id = base_type_id;
            this->ranges_expr = ranges_expr;
            this->width_expr = width_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef scalar_sized_type_st_EXTRAS
    scalar_sized_type_st_EXTRAS
#endif
};

auto scalar_sized_type_st(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr) -> Statement;

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

class virtual_sequence_st_class : public Statement_class {
    protected:
        Symbol_ id;
        SequenceItems seq_options;
    public:
        virtual_sequence_st_class(Symbol_ id, SequenceItems seq_options) {
            this->id = id;
            this->seq_options = seq_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef virtual_sequence_st_EXTRAS
    virtual_sequence_st_EXTRAS
#endif
};

auto virtual_sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement;

class sequence_st_class : public Statement_class {
    protected:
        Symbol_ id;
        SequenceItems seq_options;
    public:
        sequence_st_class(Symbol_ id, SequenceItems seq_options) {
            this->id = id;
            this->seq_options = seq_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef sequence_st_EXTRAS
    sequence_st_EXTRAS
#endif
};

auto sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement;

class sequence_item_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_item_kind_it_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_item_kind_it_EXTRAS
    sequence_item_kind_it_EXTRAS
#endif
};

auto sequence_item_kind_it(Symbol_ id) -> SequenceItem;

class sequence_created_kind_name_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_created_kind_name_it_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_created_kind_name_it_EXTRAS
    sequence_created_kind_name_it_EXTRAS
#endif
};

auto sequence_created_kind_name_it(Symbol_ id) -> SequenceItem;

class sequence_created_driver_name_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_created_driver_name_it_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_created_driver_name_it_EXTRAS
    sequence_created_driver_name_it_EXTRAS
#endif
};

auto sequence_created_driver_name_it(Symbol_ id) -> SequenceItem;

class sequence_base_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_base_kind_it_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_base_kind_it_EXTRAS
    sequence_base_kind_it_EXTRAS
#endif
};

auto sequence_base_kind_it(Symbol_ id) -> SequenceItem;

class sequence_driver_base_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_driver_base_kind_it_class(Symbol_ id) {
            this->id = id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_driver_base_kind_it_EXTRAS
    sequence_driver_base_kind_it_EXTRAS
#endif
};

auto sequence_driver_base_kind_it(Symbol_ id) -> SequenceItem;

class formal_class : public Formal_class {
    protected:
        Symbol_ name;
        Expression type_;
    public:
        formal_class(Symbol_ name, Expression type_) {
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

auto formal(Symbol_ name, Expression type_) -> Formal;

class struct_field_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression type;
        Boolean is_physical;
        Boolean do_not_gen;
    public:
        struct_field_sm_class(Symbol_ id, Expression type, Boolean is_physical, Boolean do_not_gen) {
            this->id = id;
            this->type = type;
            this->is_physical = is_physical;
            this->do_not_gen = do_not_gen;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_sm_EXTRAS
    struct_field_sm_EXTRAS
#endif
};

auto struct_field_sm(Symbol_ id, Expression type, Boolean is_physical, Boolean do_not_gen) -> StructMember;

class struct_field_list_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression len_expr;
        Expression list_base_type;
        Boolean is_physical;
        Boolean do_not_gen;
    public:
        struct_field_list_sm_class(Symbol_ id, Expression len_expr, Expression list_base_type, Boolean is_physical, Boolean do_not_gen) {
            this->id = id;
            this->len_expr = len_expr;
            this->list_base_type = list_base_type;
            this->is_physical = is_physical;
            this->do_not_gen = do_not_gen;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_list_sm_EXTRAS
    struct_field_list_sm_EXTRAS
#endif
};

auto struct_field_list_sm(Symbol_ id, Expression len_expr, Expression list_base_type, Boolean is_physical, Boolean do_not_gen) -> StructMember;

class struct_field_assoc_list_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression key_type;
        Expression list_base_type;
        Boolean is_physical;
    public:
        struct_field_assoc_list_sm_class(Symbol_ id, Expression key_type, Expression list_base_type, Boolean is_physical) {
            this->id = id;
            this->key_type = key_type;
            this->list_base_type = list_base_type;
            this->is_physical = is_physical;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_assoc_list_sm_EXTRAS
    struct_field_assoc_list_sm_EXTRAS
#endif
};

auto struct_field_assoc_list_sm(Symbol_ id, Expression key_type, Expression list_base_type, Boolean is_physical) -> StructMember;

class method_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Actions actions_;
    public:
        method_dec_sm_class(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) {
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

auto method_dec_sm(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) -> StructMember;

class method_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Actions actions_;
    public:
        method_dec_also_sm_class(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) {
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

auto method_dec_also_sm(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) -> StructMember;

class method_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Actions actions_;
    public:
        method_dec_first_sm_class(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) {
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

auto method_dec_first_sm(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) -> StructMember;

class method_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Actions actions_;
    public:
        method_dec_only_sm_class(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) {
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

auto method_dec_only_sm(Symbol_ id, Formals arguments, Expression return_type, Actions actions_) -> StructMember;

class method_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
    public:
        method_dec_empty_sm_class(Symbol_ id, Formals arguments, Expression return_type) {
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

auto method_dec_empty_sm(Symbol_ id, Formals arguments, Expression return_type) -> StructMember;

class method_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
    public:
        method_dec_undef_sm_class(Symbol_ id, Formals arguments, Expression return_type) {
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

auto method_dec_undef_sm(Symbol_ id, Formals arguments, Expression return_type) -> StructMember;

class tcm_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) {
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

auto tcm_dec_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_also_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) {
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

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_first_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) {
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

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
        Actions actions_;
    public:
        tcm_dec_only_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) {
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

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr, Actions actions_) -> StructMember;

class tcm_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
    public:
        tcm_dec_empty_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr) {
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

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr) -> StructMember;

class tcm_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        Expression return_type;
        Expression event_id_expr;
    public:
        tcm_dec_undef_sm_class(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr) {
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

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, Expression return_type, Expression event_id_expr) -> StructMember;

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

class action_attached_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
        Actions actions;
    public:
        action_attached_temporal_expr_class(Expression temporal, Actions actions) {
            this->temporal = temporal;
            this->actions = actions;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef action_attached_temporal_expr_EXTRAS
    action_attached_temporal_expr_EXTRAS
#endif
};

auto action_attached_temporal_expr(Expression temporal, Actions actions) -> Expression;

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

class first_match_repetition_expr_class : public Expression_class {
    protected:
        Expression from_rep;
        Expression to_rep;
        Expression temporal;
        Expression match_temporal;
    public:
        first_match_repetition_expr_class(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal) {
            this->from_rep = from_rep;
            this->to_rep = to_rep;
            this->temporal = temporal;
            this->match_temporal = match_temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef first_match_repetition_expr_EXTRAS
    first_match_repetition_expr_EXTRAS
#endif
};

auto first_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal) -> Expression;

class true_match_repetition_expr_class : public Expression_class {
    protected:
        Expression from_rep;
        Expression to_rep;
        Expression temporal;
    public:
        true_match_repetition_expr_class(Expression from_rep, Expression to_rep, Expression temporal) {
            this->from_rep = from_rep;
            this->to_rep = to_rep;
            this->temporal = temporal;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_match_repetition_expr_EXTRAS
    true_match_repetition_expr_EXTRAS
#endif
};

auto true_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal) -> Expression;

class zero_repetition_base_expr_class : public Expression_class {
    protected:
    public:
        zero_repetition_base_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef zero_repetition_base_expr_EXTRAS
    zero_repetition_base_expr_EXTRAS
#endif
};

auto zero_repetition_base_expr() -> Expression;

class inf_repetition_base_expr_class : public Expression_class {
    protected:
    public:
        inf_repetition_base_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef inf_repetition_base_expr_EXTRAS
    inf_repetition_base_expr_EXTRAS
#endif
};

auto inf_repetition_base_expr() -> Expression;

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

class expect_nameless_sm_class : public StructMember_class {
    protected:
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_nameless_sm_class(Expression temporal, Expression dut_error_call) {
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_nameless_sm_EXTRAS
    expect_nameless_sm_EXTRAS
#endif
};

auto expect_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember;

class expect_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_sm_class(Expression id, Expression temporal, Expression dut_error_call) {
            this->id = id;
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_sm_EXTRAS
    expect_sm_EXTRAS
#endif
};

auto expect_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class expect_override_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_override_sm_class(Expression id, Expression temporal, Expression dut_error_call) {
            this->id = id;
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_override_sm_EXTRAS
    expect_override_sm_EXTRAS
#endif
};

auto expect_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class assume_nameless_sm_class : public StructMember_class {
    protected:
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_nameless_sm_class(Expression temporal, Expression dut_error_call) {
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_nameless_sm_EXTRAS
    assume_nameless_sm_EXTRAS
#endif
};

auto assume_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember;

class assume_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_sm_class(Expression id, Expression temporal, Expression dut_error_call) {
            this->id = id;
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_sm_EXTRAS
    assume_sm_EXTRAS
#endif
};

auto assume_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class assume_override_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_override_sm_class(Expression id, Expression temporal, Expression dut_error_call) {
            this->id = id;
            this->temporal = temporal;
            this->dut_error_call = dut_error_call;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_override_sm_EXTRAS
    assume_override_sm_EXTRAS
#endif
};

auto assume_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class empty_covergroup_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
    public:
        empty_covergroup_sm_class(Symbol_ event_id) {
            this->event_id = event_id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef empty_covergroup_sm_EXTRAS
    empty_covergroup_sm_EXTRAS
#endif
};

auto empty_covergroup_sm(Symbol_ event_id) -> StructMember;

class covergroup_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_sm_class(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items) {
            this->event_id = event_id;
            this->cg_opts = cg_opts;
            this->cg_items = cg_items;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef covergroup_sm_EXTRAS
    covergroup_sm_EXTRAS
#endif
};

auto covergroup_sm(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember;

class covergroup_extension_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
        CovergroupExtensionID instance_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_extension_sm_class(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items) {
            this->event_id = event_id;
            this->instance_id = instance_id;
            this->cg_opts = cg_opts;
            this->cg_items = cg_items;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef covergroup_extension_sm_EXTRAS
    covergroup_extension_sm_EXTRAS
#endif
};

auto covergroup_extension_sm(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember;

class covergroup_per_type_ceid_class : public CovergroupExtensionID_class {
    protected:
    public:
        covergroup_per_type_ceid_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_type_ceid_EXTRAS
    covergroup_per_type_ceid_EXTRAS
#endif
};

auto covergroup_per_type_ceid() -> CovergroupExtensionID;

class covergroup_per_unit_instance_ceid_class : public CovergroupExtensionID_class {
    protected:
        Expression e_path;
    public:
        covergroup_per_unit_instance_ceid_class(Expression e_path) {
            this->e_path = e_path;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_unit_instance_ceid_EXTRAS
    covergroup_per_unit_instance_ceid_EXTRAS
#endif
};

auto covergroup_per_unit_instance_ceid(Expression e_path) -> CovergroupExtensionID;

class covergroup_per_instance_ceid_class : public CovergroupExtensionID_class {
    protected:
        Symbol_ item_name;
        Symbol_ bucket_name;
    public:
        covergroup_per_instance_ceid_class(Symbol_ item_name, Symbol_ bucket_name) {
            this->item_name = item_name;
            this->bucket_name = bucket_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_instance_ceid_EXTRAS
    covergroup_per_instance_ceid_EXTRAS
#endif
};

auto covergroup_per_instance_ceid(Symbol_ item_name, Symbol_ bucket_name) -> CovergroupExtensionID;

class global_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_litral;
    public:
        global_cgo_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef global_cgo_EXTRAS
    global_cgo_EXTRAS
#endif
};

auto global_cgo(Expression bool_litral) -> CovergroupOption;

class no_collect_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_litral;
    public:
        no_collect_cgo_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef no_collect_cgo_EXTRAS
    no_collect_cgo_EXTRAS
#endif
};

auto no_collect_cgo(Expression bool_litral) -> CovergroupOption;

class per_unit_instance_cgo_class : public CovergroupOption_class {
    protected:
        Expression hier_id;
    public:
        per_unit_instance_cgo_class(Expression hier_id) {
            this->hier_id = hier_id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef per_unit_instance_cgo_EXTRAS
    per_unit_instance_cgo_EXTRAS
#endif
};

auto per_unit_instance_cgo(Expression hier_id) -> CovergroupOption;

class radix_dec_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_dec_cgo_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_dec_cgo_EXTRAS
    radix_dec_cgo_EXTRAS
#endif
};

auto radix_dec_cgo() -> CovergroupOption;

class radix_hex_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_hex_cgo_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_hex_cgo_EXTRAS
    radix_hex_cgo_EXTRAS
#endif
};

auto radix_hex_cgo() -> CovergroupOption;

class radix_bin_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_bin_cgo_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_bin_cgo_EXTRAS
    radix_bin_cgo_EXTRAS
#endif
};

auto radix_bin_cgo() -> CovergroupOption;

class text_cgo_class : public CovergroupOption_class {
    protected:
        Symbol_ description;
    public:
        text_cgo_class(Symbol_ description) {
            this->description = description;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef text_cgo_EXTRAS
    text_cgo_EXTRAS
#endif
};

auto text_cgo(Symbol_ description) -> CovergroupOption;

class weight_cgo_class : public CovergroupOption_class {
    protected:
        Symbol_ value;
    public:
        weight_cgo_class(Symbol_ value) {
            this->value = value;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef weight_cgo_EXTRAS
    weight_cgo_EXTRAS
#endif
};

auto weight_cgo(Symbol_ value) -> CovergroupOption;

class when_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_expr;
    public:
        when_cgo_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef when_cgo_EXTRAS
    when_cgo_EXTRAS
#endif
};

auto when_cgo(Expression bool_expr) -> CovergroupOption;

class simple_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        CovergroupItemOptions cgi_options;
    public:
        simple_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options) {
            this->item_id = item_id;
            this->cgi_options = cgi_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef simple_covergroup_item_cgi_EXTRAS
    simple_covergroup_item_cgi_EXTRAS
#endif
};

auto simple_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem;

class on_the_fly_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        Expression type_;
        Expression sampled_val;
        CovergroupItemOptions cgi_options;
    public:
        on_the_fly_covergroup_item_cgi_class(Symbol_ item_id, Expression type_, Expression sampled_val, CovergroupItemOptions cgi_options) {
            this->item_id = item_id;
            this->type_ = type_;
            this->sampled_val = sampled_val;
            this->cgi_options = cgi_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef on_the_fly_covergroup_item_cgi_EXTRAS
    on_the_fly_covergroup_item_cgi_EXTRAS
#endif
};

auto on_the_fly_covergroup_item_cgi(Symbol_ item_id, Expression type_, Expression sampled_val, CovergroupItemOptions cgi_options) -> CovergroupItem;

class cross_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Expressions cg_items;
        CovergroupItemOptions cgi_options;
    public:
        cross_covergroup_item_cgi_class(Expressions cg_items, CovergroupItemOptions cgi_options) {
            this->cg_items = cg_items;
            this->cgi_options = cgi_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef cross_covergroup_item_cgi_EXTRAS
    cross_covergroup_item_cgi_EXTRAS
#endif
};

auto cross_covergroup_item_cgi(Expressions cg_items, CovergroupItemOptions cgi_options) -> CovergroupItem;

class transition_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        CovergroupItemOptions cgi_options;
    public:
        transition_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options) {
            this->item_id = item_id;
            this->cgi_options = cgi_options;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef transition_covergroup_item_cgi_EXTRAS
    transition_covergroup_item_cgi_EXTRAS
#endif
};

auto transition_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem;

class at_least_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ num;
    public:
        at_least_cgio_class(Symbol_ num) {
            this->num = num;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef at_least_cgio_EXTRAS
    at_least_cgio_EXTRAS
#endif
};

auto at_least_cgio(Symbol_ num) -> CovergroupItemOption;

class ignore_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression item_bool_expr;
    public:
        ignore_cgio_class(Expression item_bool_expr) {
            this->item_bool_expr = item_bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef ignore_cgio_EXTRAS
    ignore_cgio_EXTRAS
#endif
};

auto ignore_cgio(Expression item_bool_expr) -> CovergroupItemOption;

class illegal_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        illegal_cgio_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef illegal_cgio_EXTRAS
    illegal_cgio_EXTRAS
#endif
};

auto illegal_cgio(Expression bool_litral) -> CovergroupItemOption;

class no_collect_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        no_collect_cgio_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef no_collect_cgio_EXTRAS
    no_collect_cgio_EXTRAS
#endif
};

auto no_collect_cgio(Expression bool_litral) -> CovergroupItemOption;

class no_trace_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        no_trace_cgio_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef no_trace_cgio_EXTRAS
    no_trace_cgio_EXTRAS
#endif
};

auto no_trace_cgio(Expression bool_litral) -> CovergroupItemOption;

class num_of_buckets_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ num;
    public:
        num_of_buckets_cgio_class(Symbol_ num) {
            this->num = num;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef num_of_buckets_cgio_EXTRAS
    num_of_buckets_cgio_EXTRAS
#endif
};

auto num_of_buckets_cgio(Symbol_ num) -> CovergroupItemOption;

class per_instance_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        per_instance_cgio_class(Expression bool_litral) {
            this->bool_litral = bool_litral;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef per_instance_cgio_EXTRAS
    per_instance_cgio_EXTRAS
#endif
};

auto per_instance_cgio(Expression bool_litral) -> CovergroupItemOption;

class radix_dec_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_dec_cgio_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_dec_cgio_EXTRAS
    radix_dec_cgio_EXTRAS
#endif
};

auto radix_dec_cgio() -> CovergroupItemOption;

class radix_hex_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_hex_cgio_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_hex_cgio_EXTRAS
    radix_hex_cgio_EXTRAS
#endif
};

auto radix_hex_cgio() -> CovergroupItemOption;

class radix_bin_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_bin_cgio_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_bin_cgio_EXTRAS
    radix_bin_cgio_EXTRAS
#endif
};

auto radix_bin_cgio() -> CovergroupItemOption;

class text_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ description;
    public:
        text_cgio_class(Symbol_ description) {
            this->description = description;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef text_cgio_EXTRAS
    text_cgio_EXTRAS
#endif
};

auto text_cgio(Symbol_ description) -> CovergroupItemOption;

class weight_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ value;
    public:
        weight_cgio_class(Symbol_ value) {
            this->value = value;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef weight_cgio_EXTRAS
    weight_cgio_EXTRAS
#endif
};

auto weight_cgio(Symbol_ value) -> CovergroupItemOption;

class when_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_expr;
    public:
        when_cgio_class(Expression bool_expr) {
            this->bool_expr = bool_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef when_cgio_EXTRAS
    when_cgio_EXTRAS
#endif
};

auto when_cgio(Expression bool_expr) -> CovergroupItemOption;

class true_literal_expr_class : public Expression_class {
    protected:
    public:
        true_literal_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_literal_expr_EXTRAS
    true_literal_expr_EXTRAS
#endif
};

auto true_literal_expr() -> Expression;

class false_literal_expr_class : public Expression_class {
    protected:
    public:
        false_literal_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef false_literal_expr_EXTRAS
    false_literal_expr_EXTRAS
#endif
};

auto false_literal_expr() -> Expression;

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
        Expression width_modifier_expr;
    public:
        enum_type_expr_class(Expressions enum_list_expr, Expression width_modifier_expr) {
            this->enum_list_expr = enum_list_expr;
            this->width_modifier_expr = width_modifier_expr;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef enum_type_expr_EXTRAS
    enum_type_expr_EXTRAS
#endif
};

auto enum_type_expr(Expressions enum_list_expr, Expression width_modifier_expr) -> Expression;

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
        Expression bottom;
        Expression top;
    public:
        range_modifier_expr_class(Expression bottom, Expression top) {
            this->bottom = bottom;
            this->top = top;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef range_modifier_expr_EXTRAS
    range_modifier_expr_EXTRAS
#endif
};

auto range_modifier_expr(Expression bottom, Expression top) -> Expression;

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

class type_identifier_expr_class : public Expression_class {
    protected:
        Expressions modifiers;
    public:
        type_identifier_expr_class(Expressions modifiers) {
            this->modifiers = modifiers;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef type_identifier_expr_EXTRAS
    type_identifier_expr_EXTRAS
#endif
};

auto type_identifier_expr(Expressions modifiers) -> Expression;

class type_introspec_expr_class : public Expression_class {
    protected:
        Expression field_id;
        Expression type_id;
    public:
        type_introspec_expr_class(Expression field_id, Expression type_id) {
            this->field_id = field_id;
            this->type_id = type_id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef type_introspec_expr_EXTRAS
    type_introspec_expr_EXTRAS
#endif
};

auto type_introspec_expr(Expression field_id, Expression type_id) -> Expression;

class type_introspec_negation_expr_class : public Expression_class {
    protected:
        Expression field_id;
        Expression type_id;
    public:
        type_introspec_negation_expr_class(Expression field_id, Expression type_id) {
            this->field_id = field_id;
            this->type_id = type_id;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef type_introspec_negation_expr_EXTRAS
    type_introspec_negation_expr_EXTRAS
#endif
};

auto type_introspec_negation_expr(Expression field_id, Expression type_id) -> Expression;

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
        Expressions constraints;
    public:
        list_items_constraint_expr_class(Expression item_name, Expression gen_item, Expressions constraints) {
            this->item_name = item_name;
            this->gen_item = gen_item;
            this->constraints = constraints;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_items_constraint_expr_EXTRAS
    list_items_constraint_expr_EXTRAS
#endif
};

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expressions constraints) -> Expression;

class field_type_constraint_by_type_expr_class : public Expression_class {
    protected:
        Expression field_;
        Expression type_;
    public:
        field_type_constraint_by_type_expr_class(Expression field_, Expression type_) {
            this->field_ = field_;
            this->type_ = type_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef field_type_constraint_by_type_expr_EXTRAS
    field_type_constraint_by_type_expr_EXTRAS
#endif
};

auto field_type_constraint_by_type_expr(Expression field_, Expression type_) -> Expression;

class field_type_constraint_by_field_expr_class : public Expression_class {
    protected:
        Expression field_;
        Expression type_;
    public:
        field_type_constraint_by_field_expr_class(Expression field_, Expression type_) {
            this->field_ = field_;
            this->type_ = type_;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef field_type_constraint_by_field_expr_EXTRAS
    field_type_constraint_by_field_expr_EXTRAS
#endif
};

auto field_type_constraint_by_field_expr(Expression field_, Expression type_) -> Expression;

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

class scalar_subtype_expr_class : public Expression_class {
    protected:
        Expression predefined_base_type;
        Expression range_modifier;
        Expression width_modifier;
    public:
        scalar_subtype_expr_class(Expression predefined_base_type, Expression range_modifier, Expression width_modifier) {
            this->predefined_base_type = predefined_base_type;
            this->range_modifier = range_modifier;
            this->width_modifier = width_modifier;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef scalar_subtype_expr_EXTRAS
    scalar_subtype_expr_EXTRAS
#endif
};

auto scalar_subtype_expr(Expression predefined_base_type, Expression range_modifier, Expression width_modifier) -> Expression;

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