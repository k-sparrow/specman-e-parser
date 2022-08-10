/* 
    Language implementation file for classes used by bison

    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***

 */

#include "tree.hpp"
#include "specman-tree.hpp"
#include "utils.hpp"

namespace elex { 
    

/* implementations for Statements */
auto nil_Statements() -> Statements {
    return Statements(new list_tree_node<Statement>());
}

auto single_Statements(Statement p) -> Statements {
    return Statements(new list_tree_node<Statement>(p));
}

auto append_Statements(Statements p1, Statements p2) -> Statements {
    return Statements(new list_tree_node<Statement>(*p1, *p2));
}

/* implementations for StructMembers */
auto nil_StructMembers() -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>());
}

auto single_StructMembers(StructMember p) -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>(p));
}

auto append_StructMembers(StructMembers p1, StructMembers p2) -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>(*p1, *p2));
}

/* implementations for Actions */
auto nil_Actions() -> Actions {
    return Actions(new list_tree_node<Action>());
}

auto single_Actions(Action p) -> Actions {
    return Actions(new list_tree_node<Action>(p));
}

auto append_Actions(Actions p1, Actions p2) -> Actions {
    return Actions(new list_tree_node<Action>(*p1, *p2));
}

/* implementations for Expressions */
auto nil_Expressions() -> Expressions {
    return Expressions(new list_tree_node<Expression>());
}

auto single_Expressions(Expression p) -> Expressions {
    return Expressions(new list_tree_node<Expression>(p));
}

auto append_Expressions(Expressions p1, Expressions p2) -> Expressions {
    return Expressions(new list_tree_node<Expression>(*p1, *p2));
}

/* implementations for Formals */
auto nil_Formals() -> Formals {
    return Formals(new list_tree_node<Formal>());
}

auto single_Formals(Formal p) -> Formals {
    return Formals(new list_tree_node<Formal>(p));
}

auto append_Formals(Formals p1, Formals p2) -> Formals {
    return Formals(new list_tree_node<Formal>(*p1, *p2));
}

/* implementations for Cases */
auto nil_Cases() -> Cases {
    return Cases(new list_tree_node<Case>());
}

auto single_Cases(Case p) -> Cases {
    return Cases(new list_tree_node<Case>(p));
}

auto append_Cases(Cases p1, Cases p2) -> Cases {
    return Cases(new list_tree_node<Case>(*p1, *p2));
}

/* implementations for SequenceItems */
auto nil_SequenceItems() -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>());
}

auto single_SequenceItems(SequenceItem p) -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>(p));
}

auto append_SequenceItems(SequenceItems p1, SequenceItems p2) -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>(*p1, *p2));
}

/* implementations for CovergroupOptions */
auto nil_CovergroupOptions() -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>());
}

auto single_CovergroupOptions(CovergroupOption p) -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>(p));
}

auto append_CovergroupOptions(CovergroupOptions p1, CovergroupOptions p2) -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>(*p1, *p2));
}

/* implementations for CovergroupItems */
auto nil_CovergroupItems() -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>());
}

auto single_CovergroupItems(CovergroupItem p) -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>(p));
}

auto append_CovergroupItems(CovergroupItems p1, CovergroupItems p2) -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>(*p1, *p2));
}

/* implementations for CovergroupItemOptions */
auto nil_CovergroupItemOptions() -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>());
}

auto single_CovergroupItemOptions(CovergroupItemOption p) -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>(p));
}

auto append_CovergroupItemOptions(CovergroupItemOptions p1, CovergroupItemOptions p2) -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>(*p1, *p2));
}

/* implementations for ActionBlocks */
auto nil_ActionBlocks() -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>());
}

auto single_ActionBlocks(ActionBlock p) -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>(p));
}

auto append_ActionBlocks(ActionBlocks p1, ActionBlocks p2) -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>(*p1, *p2));
}

auto module__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "module_" << std::endl;
    if(stmts)
        stmts->dump(stream, n+2);
}

auto module_(Statements stmts) -> Module {
    return Module(new module__class(stmts));
}

auto package_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "package" << std::endl;
    dump_Symbol_(stream, n+2, pkg_name);
}

auto package(Symbol_ pkg_name) -> Statement {
    return Statement(new package_class(pkg_name));
}

auto unit_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unit_st" << std::endl;
    dump_Symbol_(stream, n+2, unit_name);
    if(members)
        members->dump(stream, n+2);
}

auto unit_st(Symbol_ unit_name, StructMembers members) -> Statement {
    return Statement(new unit_st_class(unit_name, members));
}

auto unit_like_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unit_like_st" << std::endl;
    dump_Symbol_(stream, n+2, unit_name);
    dump_Symbol_(stream, n+2, base_unit_name);
    if(members)
        members->dump(stream, n+2);
}

auto unit_like_st(Symbol_ unit_name, Symbol_ base_unit_name, StructMembers members) -> Statement {
    return Statement(new unit_like_st_class(unit_name, base_unit_name, members));
}

auto struct_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_st" << std::endl;
    dump_Symbol_(stream, n+2, struct_name);
    if(members)
        members->dump(stream, n+2);
}

auto struct_st(Symbol_ struct_name, StructMembers members) -> Statement {
    return Statement(new struct_st_class(struct_name, members));
}

auto struct_like_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_like_st" << std::endl;
    dump_Symbol_(stream, n+2, struct_name);
    dump_Symbol_(stream, n+2, base_struct_name);
    if(members)
        members->dump(stream, n+2);
}

auto struct_like_st(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members) -> Statement {
    return Statement(new struct_like_st_class(struct_name, base_struct_name, members));
}

auto extend_struct_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_struct_st" << std::endl;
    if(struct_type_name)
        struct_type_name->dump(stream, n+2);
    if(members)
        members->dump(stream, n+2);
}

auto extend_struct_st(Expressions struct_type_name, StructMembers members) -> Statement {
    return Statement(new extend_struct_st_class(struct_type_name, members));
}

auto enum_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "enum_type_st" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(type_id)
        type_id->dump(stream, n+2);
}

auto enum_type_st(Symbol_ id, DataType type_id) -> Statement {
    return Statement(new enum_type_st_class(id, type_id));
}

auto extend_enum_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_enum_type_st" << std::endl;
    dump_Symbol_(stream, n+2, type_id);
    if(enum_list_items)
        enum_list_items->dump(stream, n+2);
}

auto extend_enum_type_st(Symbol_ type_id, Expressions enum_list_items) -> Statement {
    return Statement(new extend_enum_type_st_class(type_id, enum_list_items));
}

auto scalar_subtype_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "scalar_subtype_st" << std::endl;
    dump_Symbol_(stream, n+2, subtype_id);
    if(type_id)
        type_id->dump(stream, n+2);
    if(ranges)
        ranges->dump(stream, n+2);
}

auto scalar_subtype_st(Symbol_ subtype_id, Expression type_id, Expressions ranges) -> Statement {
    return Statement(new scalar_subtype_st_class(subtype_id, type_id, ranges));
}

auto scalar_sized_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "scalar_sized_type_st" << std::endl;
    dump_Symbol_(stream, n+2, type_id);
    if(base_type_id)
        base_type_id->dump(stream, n+2);
    if(ranges_expr)
        ranges_expr->dump(stream, n+2);
    if(width_expr)
        width_expr->dump(stream, n+2);
}

auto scalar_sized_type_st(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr) -> Statement {
    return Statement(new scalar_sized_type_st_class(type_id, base_type_id, ranges_expr, width_expr));
}

auto import_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "import" << std::endl;
    dump_Symbol_(stream, n+2, pkg_id);
}

auto import(Symbol_ pkg_id) -> Statement {
    return Statement(new import_class(pkg_id));
}

auto virtual_sequence_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "virtual_sequence_st" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(seq_options)
        seq_options->dump(stream, n+2);
}

auto virtual_sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement {
    return Statement(new virtual_sequence_st_class(id, seq_options));
}

auto sequence_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_st" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(seq_options)
        seq_options->dump(stream, n+2);
}

auto sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement {
    return Statement(new sequence_st_class(id, seq_options));
}

auto sequence_item_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_item_kind_it" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto sequence_item_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_item_kind_it_class(id));
}

auto sequence_created_kind_name_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_created_kind_name_it" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto sequence_created_kind_name_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_created_kind_name_it_class(id));
}

auto sequence_created_driver_name_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_created_driver_name_it" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto sequence_created_driver_name_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_created_driver_name_it_class(id));
}

auto sequence_base_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_base_kind_it" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto sequence_base_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_base_kind_it_class(id));
}

auto sequence_driver_base_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_driver_base_kind_it" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto sequence_driver_base_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_driver_base_kind_it_class(id));
}

auto formal_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "formal" << std::endl;
    dump_Symbol_(stream, n+2, name);
    if(type_)
        type_->dump(stream, n+2);
}

auto formal(Symbol_ name, DataType type_) -> Formal {
    return Formal(new formal_class(name, type_));
}

auto field_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "field_sm" << std::endl;
    if(field)
        field->dump(stream, n+2);
}

auto field_sm(FieldStructMember field) -> StructMember {
    return StructMember(new field_sm_class(field));
}

auto struct_field_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(type)
        type->dump(stream, n+2);
}

auto struct_field_sm(Symbol_ id, DataType type) -> FieldStructMember {
    return FieldStructMember(new struct_field_sm_class(id, type));
}

auto struct_field_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_list_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(len_expr)
        len_expr->dump(stream, n+2);
    if(type_)
        type_->dump(stream, n+2);
}

auto struct_field_list_sm(Symbol_ id, Expression len_expr, DataType type_) -> FieldStructMember {
    return FieldStructMember(new struct_field_list_sm_class(id, len_expr, type_));
}

auto struct_field_assoc_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_assoc_list_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(type_)
        type_->dump(stream, n+2);
}

auto struct_field_assoc_list_sm(Symbol_ id, DataType type_) -> FieldStructMember {
    return FieldStructMember(new struct_field_assoc_list_sm_class(id, type_));
}

auto method_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto method_dec_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_also_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto method_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_also_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_first_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto method_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_first_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_only_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto method_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_only_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_empty_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
}

auto method_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember {
    return StructMember(new method_dec_empty_sm_class(id, arguments, return_type));
}

auto method_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_undef_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
}

auto method_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember {
    return StructMember(new method_dec_undef_sm_class(id, arguments, return_type));
}

auto tcm_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto tcm_dec_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_also_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_also_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_first_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_first_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_only_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
    if(actions_)
        actions_->dump(stream, n+2);
}

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_only_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_empty_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
}

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_empty_sm_class(id, arguments, return_type, event_id_expr));
}

auto tcm_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_undef_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(arguments)
        arguments->dump(stream, n+2);
    if(return_type)
        return_type->dump(stream, n+2);
    if(event_id_expr)
        event_id_expr->dump(stream, n+2);
}

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_undef_sm_class(id, arguments, return_type, event_id_expr));
}

auto when_subtype_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "when_subtype_sm" << std::endl;
    if(subtype_mods)
        subtype_mods->dump(stream, n+2);
    if(subtype_members)
        subtype_members->dump(stream, n+2);
}

auto when_subtype_sm(Expressions subtype_mods, StructMembers subtype_members) -> StructMember {
    return StructMember(new when_subtype_sm_class(subtype_mods, subtype_members));
}

auto constraint_def_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "constraint_def_sm" << std::endl;
    if(constraint_expr)
        constraint_expr->dump(stream, n+2);
}

auto constraint_def_sm(Expression constraint_expr) -> StructMember {
    return StructMember(new constraint_def_sm_class(constraint_expr));
}

auto on_event_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "on_event_sm" << std::endl;
    if(event_name)
        event_name->dump(stream, n+2);
    if(action_block)
        action_block->dump(stream, n+2);
}

auto on_event_sm(Expression event_name, ActionBlock action_block) -> StructMember {
    return StructMember(new on_event_sm_class(event_name, action_block));
}

auto simple_event_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "simple_event_dec_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto simple_event_dec_sm(Symbol_ id) -> StructMember {
    return StructMember(new simple_event_dec_sm_class(id));
}

auto event_def_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "event_def_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(temporal)
        temporal->dump(stream, n+2);
}

auto event_def_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_sm_class(id, temporal));
}

auto event_def_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "event_def_override_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(temporal)
        temporal->dump(stream, n+2);
}

auto event_def_override_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_override_sm_class(id, temporal));
}

auto temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
    if(sample_event)
        sample_event->dump(stream, n+2);
}

auto temporal_expr(Expression temporal, Expression sample_event) -> Expression {
    return Expression(new temporal_expr_class(temporal, sample_event));
}

auto sampling_event_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sampling_event_expr" << std::endl;
    if(event_expr)
        event_expr->dump(stream, n+2);
}

auto sampling_event_expr(Expression event_expr) -> Expression {
    return Expression(new sampling_event_expr_class(event_expr));
}

auto event_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "event_ref_expr" << std::endl;
    if(event_name)
        event_name->dump(stream, n+2);
}

auto event_ref_expr(Expression event_name) -> Expression {
    return Expression(new event_ref_expr_class(event_name));
}

auto action_attached_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "action_attached_temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto action_attached_temporal_expr(Expression temporal, ActionBlock actions) -> Expression {
    return Expression(new action_attached_temporal_expr_class(temporal, actions));
}

auto not_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "not_temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
}

auto not_temporal_expr(Expression temporal) -> Expression {
    return Expression(new not_temporal_expr_class(temporal));
}

auto fail_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "fail_temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
}

auto fail_temporal_expr(Expression temporal) -> Expression {
    return Expression(new fail_temporal_expr_class(temporal));
}

auto eventually_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "eventually_temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
}

auto eventually_temporal_expr(Expression temporal) -> Expression {
    return Expression(new eventually_temporal_expr_class(temporal));
}

auto detach_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "detach_temporal_expr" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
}

auto detach_temporal_expr(Expression temporal) -> Expression {
    return Expression(new detach_temporal_expr_class(temporal));
}

auto yield_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "yield_temporal_expr" << std::endl;
    if(trigger)
        trigger->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
}

auto yield_temporal_expr(Expression trigger, Expression temporal) -> Expression {
    return Expression(new yield_temporal_expr_class(trigger, temporal));
}

auto true_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "true_temporal_expr" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
}

auto true_temporal_expr(Expression bool_expr) -> Expression {
    return Expression(new true_temporal_expr_class(bool_expr));
}

auto rise_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "rise_temporal_expr" << std::endl;
    if(hdl_path)
        hdl_path->dump(stream, n+2);
}

auto rise_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new rise_temporal_expr_class(hdl_path));
}

auto fall_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "fall_temporal_expr" << std::endl;
    if(hdl_path)
        hdl_path->dump(stream, n+2);
}

auto fall_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new fall_temporal_expr_class(hdl_path));
}

auto change_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "change_temporal_expr" << std::endl;
    if(hdl_path)
        hdl_path->dump(stream, n+2);
}

auto change_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new change_temporal_expr_class(hdl_path));
}

auto and_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "and_temporal_expr" << std::endl;
    if(te1)
        te1->dump(stream, n+2);
    if(te2)
        te2->dump(stream, n+2);
}

auto and_temporal_expr(Expression te1, Expression te2) -> Expression {
    return Expression(new and_temporal_expr_class(te1, te2));
}

auto or_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "or_temporal_expr" << std::endl;
    if(te1)
        te1->dump(stream, n+2);
    if(te2)
        te2->dump(stream, n+2);
}

auto or_temporal_expr(Expression te1, Expression te2) -> Expression {
    return Expression(new or_temporal_expr_class(te1, te2));
}

auto sequence_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sequence_temporal_expr" << std::endl;
    if(temporals)
        temporals->dump(stream, n+2);
}

auto sequence_temporal_expr(Expressions temporals) -> Expression {
    return Expression(new sequence_temporal_expr_class(temporals));
}

auto fixed_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "fixed_repetition_expr" << std::endl;
    if(rep)
        rep->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
}

auto fixed_repetition_expr(Expression rep, Expression temporal) -> Expression {
    return Expression(new fixed_repetition_expr_class(rep, temporal));
}

auto first_match_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "first_match_repetition_expr" << std::endl;
    if(from_rep)
        from_rep->dump(stream, n+2);
    if(to_rep)
        to_rep->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
    if(match_temporal)
        match_temporal->dump(stream, n+2);
}

auto first_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal) -> Expression {
    return Expression(new first_match_repetition_expr_class(from_rep, to_rep, temporal, match_temporal));
}

auto true_match_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "true_match_repetition_expr" << std::endl;
    if(from_rep)
        from_rep->dump(stream, n+2);
    if(to_rep)
        to_rep->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
}

auto true_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal) -> Expression {
    return Expression(new true_match_repetition_expr_class(from_rep, to_rep, temporal));
}

auto zero_repetition_base_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "zero_repetition_base_expr" << std::endl;
}

auto zero_repetition_base_expr() -> Expression {
    return Expression(new zero_repetition_base_expr_class());
}

auto inf_repetition_base_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "inf_repetition_base_expr" << std::endl;
}

auto inf_repetition_base_expr() -> Expression {
    return Expression(new inf_repetition_base_expr_class());
}

auto cycle_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "cycle_temporal_expr" << std::endl;
}

auto cycle_temporal_expr() -> Expression {
    return Expression(new cycle_temporal_expr_class());
}

auto delay_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "delay_temporal_expr" << std::endl;
    if(e)
        e->dump(stream, n+2);
    if(timescale_unit)
        timescale_unit->dump(stream, n+2);
}

auto delay_temporal_expr(Expression e, Expression timescale_unit) -> Expression {
    return Expression(new delay_temporal_expr_class(e, timescale_unit));
}

auto expect_nameless_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "expect_nameless_sm" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto expect_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_nameless_sm_class(temporal, dut_error_call));
}

auto expect_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "expect_sm" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto expect_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_sm_class(id, temporal, dut_error_call));
}

auto expect_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "expect_override_sm" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto expect_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_override_sm_class(id, temporal, dut_error_call));
}

auto assume_nameless_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "assume_nameless_sm" << std::endl;
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto assume_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_nameless_sm_class(temporal, dut_error_call));
}

auto assume_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "assume_sm" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto assume_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_sm_class(id, temporal, dut_error_call));
}

auto assume_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "assume_override_sm" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(temporal)
        temporal->dump(stream, n+2);
    if(dut_error_call)
        dut_error_call->dump(stream, n+2);
}

auto assume_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_override_sm_class(id, temporal, dut_error_call));
}

auto empty_covergroup_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "empty_covergroup_sm" << std::endl;
    dump_Symbol_(stream, n+2, event_id);
}

auto empty_covergroup_sm(Symbol_ event_id) -> StructMember {
    return StructMember(new empty_covergroup_sm_class(event_id));
}

auto covergroup_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "covergroup_sm" << std::endl;
    dump_Symbol_(stream, n+2, event_id);
    if(cg_opts)
        cg_opts->dump(stream, n+2);
    if(cg_items)
        cg_items->dump(stream, n+2);
}

auto covergroup_sm(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember {
    return StructMember(new covergroup_sm_class(event_id, cg_opts, cg_items));
}

auto covergroup_extension_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "covergroup_extension_sm" << std::endl;
    dump_Symbol_(stream, n+2, event_id);
    if(instance_id)
        instance_id->dump(stream, n+2);
    if(cg_opts)
        cg_opts->dump(stream, n+2);
    if(cg_items)
        cg_items->dump(stream, n+2);
}

auto covergroup_extension_sm(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember {
    return StructMember(new covergroup_extension_sm_class(event_id, instance_id, cg_opts, cg_items));
}

auto covergroup_per_type_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "covergroup_per_type_ceid" << std::endl;
}

auto covergroup_per_type_ceid() -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_type_ceid_class());
}

auto covergroup_per_unit_instance_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "covergroup_per_unit_instance_ceid" << std::endl;
    if(e_path)
        e_path->dump(stream, n+2);
}

auto covergroup_per_unit_instance_ceid(Expression e_path) -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_unit_instance_ceid_class(e_path));
}

auto covergroup_per_instance_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "covergroup_per_instance_ceid" << std::endl;
    dump_Symbol_(stream, n+2, item_name);
    dump_Symbol_(stream, n+2, bucket_name);
}

auto covergroup_per_instance_ceid(Symbol_ item_name, Symbol_ bucket_name) -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_instance_ceid_class(item_name, bucket_name));
}

auto global_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "global_cgo" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto global_cgo(Expression bool_litral) -> CovergroupOption {
    return CovergroupOption(new global_cgo_class(bool_litral));
}

auto no_collect_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_collect_cgo" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto no_collect_cgo(Expression bool_litral) -> CovergroupOption {
    return CovergroupOption(new no_collect_cgo_class(bool_litral));
}

auto per_unit_instance_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "per_unit_instance_cgo" << std::endl;
    if(hier_id)
        hier_id->dump(stream, n+2);
}

auto per_unit_instance_cgo(Expression hier_id) -> CovergroupOption {
    return CovergroupOption(new per_unit_instance_cgo_class(hier_id));
}

auto radix_dec_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_dec_cgo" << std::endl;
}

auto radix_dec_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_dec_cgo_class());
}

auto radix_hex_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_hex_cgo" << std::endl;
}

auto radix_hex_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_hex_cgo_class());
}

auto radix_bin_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_bin_cgo" << std::endl;
}

auto radix_bin_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_bin_cgo_class());
}

auto text_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "text_cgo" << std::endl;
    dump_Symbol_(stream, n+2, description);
}

auto text_cgo(Symbol_ description) -> CovergroupOption {
    return CovergroupOption(new text_cgo_class(description));
}

auto weight_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "weight_cgo" << std::endl;
    dump_Symbol_(stream, n+2, value);
}

auto weight_cgo(Symbol_ value) -> CovergroupOption {
    return CovergroupOption(new weight_cgo_class(value));
}

auto when_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "when_cgo" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
}

auto when_cgo(Expression bool_expr) -> CovergroupOption {
    return CovergroupOption(new when_cgo_class(bool_expr));
}

auto simple_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "simple_covergroup_item_cgi" << std::endl;
    dump_Symbol_(stream, n+2, item_id);
    if(cgi_options)
        cgi_options->dump(stream, n+2);
}

auto simple_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new simple_covergroup_item_cgi_class(item_id, cgi_options));
}

auto on_the_fly_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "on_the_fly_covergroup_item_cgi" << std::endl;
    dump_Symbol_(stream, n+2, item_id);
    if(type_)
        type_->dump(stream, n+2);
    if(sampled_val)
        sampled_val->dump(stream, n+2);
    if(cgi_options)
        cgi_options->dump(stream, n+2);
}

auto on_the_fly_covergroup_item_cgi(Symbol_ item_id, DataType type_, Expression sampled_val, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new on_the_fly_covergroup_item_cgi_class(item_id, type_, sampled_val, cgi_options));
}

auto cross_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "cross_covergroup_item_cgi" << std::endl;
    if(cg_items)
        cg_items->dump(stream, n+2);
    if(cgi_options)
        cgi_options->dump(stream, n+2);
}

auto cross_covergroup_item_cgi(Expressions cg_items, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new cross_covergroup_item_cgi_class(cg_items, cgi_options));
}

auto transition_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "transition_covergroup_item_cgi" << std::endl;
    dump_Symbol_(stream, n+2, item_id);
    if(cgi_options)
        cgi_options->dump(stream, n+2);
}

auto transition_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new transition_covergroup_item_cgi_class(item_id, cgi_options));
}

auto at_least_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "at_least_cgio" << std::endl;
    dump_Symbol_(stream, n+2, num);
}

auto at_least_cgio(Symbol_ num) -> CovergroupItemOption {
    return CovergroupItemOption(new at_least_cgio_class(num));
}

auto ignore_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "ignore_cgio" << std::endl;
    if(item_bool_expr)
        item_bool_expr->dump(stream, n+2);
}

auto ignore_cgio(Expression item_bool_expr) -> CovergroupItemOption {
    return CovergroupItemOption(new ignore_cgio_class(item_bool_expr));
}

auto illegal_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "illegal_cgio" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto illegal_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new illegal_cgio_class(bool_litral));
}

auto no_collect_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_collect_cgio" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto no_collect_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new no_collect_cgio_class(bool_litral));
}

auto no_trace_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_trace_cgio" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto no_trace_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new no_trace_cgio_class(bool_litral));
}

auto num_of_buckets_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "num_of_buckets_cgio" << std::endl;
    dump_Symbol_(stream, n+2, num);
}

auto num_of_buckets_cgio(Symbol_ num) -> CovergroupItemOption {
    return CovergroupItemOption(new num_of_buckets_cgio_class(num));
}

auto per_instance_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "per_instance_cgio" << std::endl;
    if(bool_litral)
        bool_litral->dump(stream, n+2);
}

auto per_instance_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new per_instance_cgio_class(bool_litral));
}

auto radix_dec_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_dec_cgio" << std::endl;
}

auto radix_dec_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_dec_cgio_class());
}

auto radix_hex_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_hex_cgio" << std::endl;
}

auto radix_hex_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_hex_cgio_class());
}

auto radix_bin_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "radix_bin_cgio" << std::endl;
}

auto radix_bin_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_bin_cgio_class());
}

auto text_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "text_cgio" << std::endl;
    dump_Symbol_(stream, n+2, description);
}

auto text_cgio(Symbol_ description) -> CovergroupItemOption {
    return CovergroupItemOption(new text_cgio_class(description));
}

auto weight_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "weight_cgio" << std::endl;
    dump_Symbol_(stream, n+2, value);
}

auto weight_cgio(Symbol_ value) -> CovergroupItemOption {
    return CovergroupItemOption(new weight_cgio_class(value));
}

auto when_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "when_cgio" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
}

auto when_cgio(Expression bool_expr) -> CovergroupItemOption {
    return CovergroupItemOption(new when_cgio_class(bool_expr));
}

auto true_literal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "true_literal_expr" << std::endl;
}

auto true_literal_expr() -> Expression {
    return Expression(new true_literal_expr_class());
}

auto false_literal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "false_literal_expr" << std::endl;
}

auto false_literal_expr() -> Expression {
    return Expression(new false_literal_expr_class());
}

auto id_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "id_expr" << std::endl;
    dump_Symbol_(stream, n+2, id);
}

auto id_expr(Symbol_ id) -> Expression {
    return Expression(new id_expr_class(id));
}

auto enum_type_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "enum_type_expr" << std::endl;
    if(enum_list_expr)
        enum_list_expr->dump(stream, n+2);
    if(width_modifier_expr)
        width_modifier_expr->dump(stream, n+2);
}

auto enum_type_expr(Expressions enum_list_expr, Expression width_modifier_expr) -> Expression {
    return Expression(new enum_type_expr_class(enum_list_expr, width_modifier_expr));
}

auto enum_list_item_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "enum_list_item" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(expr)
        expr->dump(stream, n+2);
}

auto enum_list_item(Symbol_ id, Expression expr) -> Expression {
    return Expression(new enum_list_item_class(id, expr));
}

auto bitwise_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_not_expr" << std::endl;
    if(e)
        e->dump(stream, n+2);
}

auto bitwise_not_expr(Expression e) -> Expression {
    return Expression(new bitwise_not_expr_class(e));
}

auto bitwise_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_and_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto bitwise_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_and_expr_class(e1, e2));
}

auto bitwise_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_or_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto bitwise_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_or_expr_class(e1, e2));
}

auto bitwise_xor_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_xor_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto bitwise_xor_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_xor_expr_class(e1, e2));
}

auto shift_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "shift_left_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto shift_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new shift_left_expr_class(e1, e2));
}

auto right_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "right_left_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto right_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new right_left_expr_class(e1, e2));
}

auto logical_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_not_expr" << std::endl;
    if(e)
        e->dump(stream, n+2);
}

auto logical_not_expr(Expression e) -> Expression {
    return Expression(new logical_not_expr_class(e));
}

auto logical_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_and_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto logical_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_and_expr_class(e1, e2));
}

auto logical_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_or_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto logical_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_or_expr_class(e1, e2));
}

auto implication_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "implication_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto implication_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new implication_expr_class(e1, e2));
}

auto unary_positive_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unary_positive_expr" << std::endl;
    if(e)
        e->dump(stream, n+2);
}

auto unary_positive_expr(Expression e) -> Expression {
    return Expression(new unary_positive_expr_class(e));
}

auto unary_negative_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unary_negative_expr" << std::endl;
    if(e)
        e->dump(stream, n+2);
}

auto unary_negative_expr(Expression e) -> Expression {
    return Expression(new unary_negative_expr_class(e));
}

auto binary_add_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_add_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto binary_add_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_add_expr_class(e1, e2));
}

auto binary_sub_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_sub_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto binary_sub_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_sub_expr_class(e1, e2));
}

auto binary_mul_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_mul_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto binary_mul_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_mul_expr_class(e1, e2));
}

auto binary_div_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_div_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto binary_div_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_div_expr_class(e1, e2));
}

auto binary_remainder_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_remainder_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto binary_remainder_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_remainder_expr_class(e1, e2));
}

auto less_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "less_then_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto less_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_expr_class(e1, e2));
}

auto greater_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "greater_then_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto greater_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_expr_class(e1, e2));
}

auto less_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "less_then_or_equal_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto less_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_or_equal_expr_class(e1, e2));
}

auto greater_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "greater_then_or_equal_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto greater_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_or_equal_expr_class(e1, e2));
}

auto equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "equality_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new equality_expr_class(e1, e2));
}

auto non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "non_equality_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new non_equality_expr_class(e1, e2));
}

auto hdl_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_equality_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto hdl_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_equality_expr_class(e1, e2));
}

auto hdl_non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_non_equality_expr" << std::endl;
    if(e1)
        e1->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto hdl_non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_non_equality_expr_class(e1, e2));
}

auto str_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_match_expr" << std::endl;
    if(str_expr)
        str_expr->dump(stream, n+2);
    if(pattern_expr)
        pattern_expr->dump(stream, n+2);
}

auto str_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_match_expr_class(str_expr, pattern_expr));
}

auto str_does_not_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_does_not_match_expr" << std::endl;
    if(str_expr)
        str_expr->dump(stream, n+2);
    if(pattern_expr)
        pattern_expr->dump(stream, n+2);
}

auto str_does_not_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_does_not_match_expr_class(str_expr, pattern_expr));
}

auto in_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "in_expr" << std::endl;
    if(exp)
        exp->dump(stream, n+2);
    if(inside)
        inside->dump(stream, n+2);
}

auto in_expr(Expression exp, Expression inside) -> Expression {
    return Expression(new in_expr_class(exp, inside));
}

auto type_introspec_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "type_introspec_expr" << std::endl;
    if(field_id)
        field_id->dump(stream, n+2);
    if(type_id)
        type_id->dump(stream, n+2);
}

auto type_introspec_expr(Expression field_id, DataType type_id) -> Expression {
    return Expression(new type_introspec_expr_class(field_id, type_id));
}

auto type_introspec_negation_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "type_introspec_negation_expr" << std::endl;
    if(field_id)
        field_id->dump(stream, n+2);
    if(type_id)
        type_id->dump(stream, n+2);
}

auto type_introspec_negation_expr(Expression field_id, DataType type_id) -> Expression {
    return Expression(new type_introspec_negation_expr_class(field_id, type_id));
}

auto in_enum_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "in_enum_expr" << std::endl;
    if(exp)
        exp->dump(stream, n+2);
    if(inside)
        inside->dump(stream, n+2);
}

auto in_enum_expr(Expression exp, DataType inside) -> Expression {
    return Expression(new in_enum_expr_class(exp, inside));
}

auto list_indexing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_indexing_expr" << std::endl;
    if(list_exp)
        list_exp->dump(stream, n+2);
    if(idx_expr)
        idx_expr->dump(stream, n+2);
}

auto list_indexing_expr(Expression list_exp, Expression idx_expr) -> Expression {
    return Expression(new list_indexing_expr_class(list_exp, idx_expr));
}

auto list_slicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_slicing_expr" << std::endl;
    if(list_exp)
        list_exp->dump(stream, n+2);
    if(range_expr)
        range_expr->dump(stream, n+2);
}

auto list_slicing_expr(Expression list_exp, Expression range_expr) -> Expression {
    return Expression(new list_slicing_expr_class(list_exp, range_expr));
}

auto bit_slicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bit_slicing_expr" << std::endl;
    if(list_exp)
        list_exp->dump(stream, n+2);
    if(bit_slice_expr)
        bit_slice_expr->dump(stream, n+2);
}

auto bit_slicing_expr(Expression list_exp, Expression bit_slice_expr) -> Expression {
    return Expression(new bit_slicing_expr_class(list_exp, bit_slice_expr));
}

auto list_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_concat_expr" << std::endl;
    if(list_concat_items)
        list_concat_items->dump(stream, n+2);
}

auto list_concat_expr(Expressions list_concat_items) -> Expression {
    return Expression(new list_concat_expr_class(list_concat_items));
}

auto bit_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bit_concat_expr" << std::endl;
    if(bit_concat_items)
        bit_concat_items->dump(stream, n+2);
}

auto bit_concat_expr(Expressions bit_concat_items) -> Expression {
    return Expression(new bit_concat_expr_class(bit_concat_items));
}

auto bit_slice_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bit_slice_expr" << std::endl;
    if(bottom)
        bottom->dump(stream, n+2);
    if(top)
        top->dump(stream, n+2);
}

auto bit_slice_expr(Expression bottom, Expression top) -> Expression {
    return Expression(new bit_slice_expr_class(bottom, top));
}

auto range_modifier_item_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "range_modifier_item_expr" << std::endl;
    if(bottom)
        bottom->dump(stream, n+2);
    if(top)
        top->dump(stream, n+2);
}

auto range_modifier_item_expr(Expression bottom, Expression top) -> Expression {
    return Expression(new range_modifier_item_expr_class(bottom, top));
}

auto range_modifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "range_modifier_expr" << std::endl;
    if(range_items)
        range_items->dump(stream, n+2);
}

auto range_modifier_expr(Expressions range_items) -> Expression {
    return Expression(new range_modifier_expr_class(range_items));
}

auto ranges_modifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "ranges_modifier_expr" << std::endl;
    if(ranges)
        ranges->dump(stream, n+2);
}

auto ranges_modifier_expr(Expressions ranges) -> Expression {
    return Expression(new ranges_modifier_expr_class(ranges));
}

auto sized_bits_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sized_bits_scalar_expr" << std::endl;
    if(width_expr)
        width_expr->dump(stream, n+2);
}

auto sized_bits_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bits_scalar_expr_class(width_expr));
}

auto sized_bytes_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sized_bytes_scalar_expr" << std::endl;
    if(width_expr)
        width_expr->dump(stream, n+2);
}

auto sized_bytes_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bytes_scalar_expr_class(width_expr));
}

auto new_allocate_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "new_allocate_expr" << std::endl;
    if(struct_type_block)
        struct_type_block->dump(stream, n+2);
    dump_Symbol_(stream, n+2, scoped_name);
    if(actions)
        actions->dump(stream, n+2);
}

auto new_allocate_expr(Expression struct_type_block, Symbol_ scoped_name, ActionBlock actions) -> Expression {
    return Expression(new new_allocate_expr_class(struct_type_block, scoped_name, actions));
}

auto new_nameless_allocate_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "new_nameless_allocate_expr" << std::endl;
    if(struct_type_block)
        struct_type_block->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto new_nameless_allocate_expr(Expression struct_type_block, ActionBlock actions) -> Expression {
    return Expression(new new_nameless_allocate_expr_class(struct_type_block, actions));
}

auto struct_type_expr_with_opt_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_expr_with_opt_action_block" << std::endl;
    if(struct_id_expr)
        struct_id_expr->dump(stream, n+2);
    if(opt_action_block_expt)
        opt_action_block_expt->dump(stream, n+2);
}

auto struct_type_expr_with_opt_action_block(Expression struct_id_expr, Expression opt_action_block_expt) -> Expression {
    return Expression(new struct_type_expr_with_opt_action_block_class(struct_id_expr, opt_action_block_expt));
}

auto named_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "named_action_block" << std::endl;
    if(struct_id_expr)
        struct_id_expr->dump(stream, n+2);
    if(action_block)
        action_block->dump(stream, n+2);
}

auto named_action_block(Expression struct_id_expr, Actions action_block) -> Expression {
    return Expression(new named_action_block_class(struct_id_expr, action_block));
}

auto struct_type_id_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_id" << std::endl;
    if(struct_type_modifiers)
        struct_type_modifiers->dump(stream, n+2);
    if(struct_id_expr)
        struct_id_expr->dump(stream, n+2);
}

auto struct_type_id(Expressions struct_type_modifiers, Expression struct_id_expr) -> Expression {
    return Expression(new struct_type_id_class(struct_type_modifiers, struct_id_expr));
}

auto struct_type_modifier_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_modifier" << std::endl;
    if(value)
        value->dump(stream, n+2);
    if(id)
        id->dump(stream, n+2);
}

auto struct_type_modifier(Expression value, Expression id) -> Expression {
    return Expression(new struct_type_modifier_class(value, id));
}

auto defined_type_identifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "defined_type_identifier_expr" << std::endl;
    if(modifiers)
        modifiers->dump(stream, n+2);
}

auto defined_type_identifier_expr(Expressions modifiers) -> Expression {
    return Expression(new defined_type_identifier_expr_class(modifiers));
}

auto struct_hier_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_hier_ref_expr" << std::endl;
    if(hiers)
        hiers->dump(stream, n+2);
}

auto struct_hier_ref_expr(Expressions hiers) -> Expression {
    return Expression(new struct_hier_ref_expr_class(hiers));
}

auto hdl_path_name_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_path_name_expr" << std::endl;
    dump_Symbol_(stream, n+2, hdl_hier_ref);
}

auto hdl_path_name_expr(Symbol_ hdl_hier_ref) -> Expression {
    return Expression(new hdl_path_name_expr_class(hdl_hier_ref));
}

auto ternary_assign_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "ternary_assign_expr" << std::endl;
    if(bool_exp)
        bool_exp->dump(stream, n+2);
    if(true_expr)
        true_expr->dump(stream, n+2);
    if(false_expr)
        false_expr->dump(stream, n+2);
}

auto ternary_assign_expr(Expression bool_exp, Expression true_expr, Expression false_expr) -> Expression {
    return Expression(new ternary_assign_expr_class(bool_exp, true_expr, false_expr));
}

auto cast_operator_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "cast_operator_expr" << std::endl;
    if(casted_expr)
        casted_expr->dump(stream, n+2);
    if(dest_type_expr)
        dest_type_expr->dump(stream, n+2);
}

auto cast_operator_expr(Expression casted_expr, Expression dest_type_expr) -> Expression {
    return Expression(new cast_operator_expr_class(casted_expr, dest_type_expr));
}

auto method_call_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_call_expr" << std::endl;
    if(base)
        base->dump(stream, n+2);
    if(arguments)
        arguments->dump(stream, n+2);
}

auto method_call_expr(Expression base, Expressions arguments) -> Expression {
    return Expression(new method_call_expr_class(base, arguments));
}

auto constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "constraint_expr" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
}

auto constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new constraint_expr_class(bool_expr));
}

auto soft_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "soft_constraint_expr" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
}

auto soft_constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new soft_constraint_expr_class(bool_expr));
}

auto all_of_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "all_of_constraint_expr" << std::endl;
    if(constraints)
        constraints->dump(stream, n+2);
}

auto all_of_constraint_expr(Expressions constraints) -> Expression {
    return Expression(new all_of_constraint_expr_class(constraints));
}

auto list_items_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_items_constraint_expr" << std::endl;
    if(item_name)
        item_name->dump(stream, n+2);
    if(gen_item)
        gen_item->dump(stream, n+2);
    if(constraints)
        constraints->dump(stream, n+2);
}

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expressions constraints) -> Expression {
    return Expression(new list_items_constraint_expr_class(item_name, gen_item, constraints));
}

auto field_type_constraint_by_type_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "field_type_constraint_by_type_expr" << std::endl;
    if(field_)
        field_->dump(stream, n+2);
    if(type_)
        type_->dump(stream, n+2);
}

auto field_type_constraint_by_type_expr(Expression field_, DataType type_) -> Expression {
    return Expression(new field_type_constraint_by_type_expr_class(field_, type_));
}

auto field_type_constraint_by_field_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "field_type_constraint_by_field_expr" << std::endl;
    if(field_)
        field_->dump(stream, n+2);
    if(field)
        field->dump(stream, n+2);
}

auto field_type_constraint_by_field_expr(Expression field_, Expression field) -> Expression {
    return Expression(new field_type_constraint_by_field_expr_class(field_, field));
}

auto distribution_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "distribution_constraint_expr" << std::endl;
    if(gen_item)
        gen_item->dump(stream, n+2);
    if(distribution)
        distribution->dump(stream, n+2);
}

auto distribution_constraint_expr(Expression gen_item, Cases distribution) -> Expression {
    return Expression(new distribution_constraint_expr_class(gen_item, distribution));
}

auto distribution_branch_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "distribution_branch_case" << std::endl;
    if(int_)
        int_->dump(stream, n+2);
    if(value)
        value->dump(stream, n+2);
}

auto distribution_branch_case(Expression int_, Expression value) -> Case {
    return Case(new distribution_branch_case_class(int_, value));
}

auto me_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "me_expr" << std::endl;
}

auto me_expr() -> Expression {
    return Expression(new me_expr_class());
}

auto it_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "it_expr" << std::endl;
}

auto it_expr() -> Expression {
    return Expression(new it_expr_class());
}

auto str_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_expr" << std::endl;
    dump_Symbol_(stream, n+2, str);
}

auto str_expr(Symbol_ str) -> Expression {
    return Expression(new str_expr_class(str));
}

auto int_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "int_expr" << std::endl;
    dump_Symbol_(stream, n+2, int_);
}

auto int_expr(Symbol_ int_) -> Expression {
    return Expression(new int_expr_class(int_));
}

auto enum_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "enum_dt" << std::endl;
    if(enum_list_items)
        enum_list_items->dump(stream, n+2);
    if(width_modifier)
        width_modifier->dump(stream, n+2);
}

auto enum_dt(Expressions enum_list_items, Expression width_modifier) -> DataType {
    return DataType(new enum_dt_class(enum_list_items, width_modifier));
}

auto scalar_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "scalar_subtype_dt" << std::endl;
    if(predefined_base_type)
        predefined_base_type->dump(stream, n+2);
    if(range_modifier)
        range_modifier->dump(stream, n+2);
    if(width_modifier)
        width_modifier->dump(stream, n+2);
}

auto scalar_subtype_dt(DataType predefined_base_type, Expression range_modifier, Expression width_modifier) -> DataType {
    return DataType(new scalar_subtype_dt_class(predefined_base_type, range_modifier, width_modifier));
}

auto defined_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "defined_dt" << std::endl;
    if(enum_list_items)
        enum_list_items->dump(stream, n+2);
    if(width_modifier)
        width_modifier->dump(stream, n+2);
}

auto defined_dt(Expressions enum_list_items, Expression width_modifier) -> DataType {
    return DataType(new defined_dt_class(enum_list_items, width_modifier));
}

auto defined_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "defined_subtype_dt" << std::endl;
    dump_Symbol_(stream, n+2, id);
    if(range_modifier)
        range_modifier->dump(stream, n+2);
}

auto defined_subtype_dt(Symbol_ id, Expression range_modifier) -> DataType {
    return DataType(new defined_subtype_dt_class(id, range_modifier));
}

auto predefined_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_subtype_dt" << std::endl;
    if(pred_type)
        pred_type->dump(stream, n+2);
    if(range_modifier)
        range_modifier->dump(stream, n+2);
    if(width_modifier)
        width_modifier->dump(stream, n+2);
}

auto predefined_subtype_dt(DataType pred_type, Expression range_modifier, Expression width_modifier) -> DataType {
    return DataType(new predefined_subtype_dt_class(pred_type, range_modifier, width_modifier));
}

auto defined_struct_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "defined_struct_type_dt" << std::endl;
    if(struct_type_modifiers)
        struct_type_modifiers->dump(stream, n+2);
}

auto defined_struct_type_dt(Expressions struct_type_modifiers) -> DataType {
    return DataType(new defined_struct_type_dt_class(struct_type_modifiers));
}

auto list_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_type_dt" << std::endl;
    if(base_type)
        base_type->dump(stream, n+2);
}

auto list_type_dt(DataType base_type) -> DataType {
    return DataType(new list_type_dt_class(base_type));
}

auto assoc_list_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "assoc_list_type_dt" << std::endl;
    dump_Symbol_(stream, n+2, key_id);
    if(base_type)
        base_type->dump(stream, n+2);
}

auto assoc_list_type_dt(Symbol_ key_id, DataType base_type) -> DataType {
    return DataType(new assoc_list_type_dt_class(key_id, base_type));
}

auto int_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "int_predefined_type" << std::endl;
}

auto int_predefined_type() -> DataType {
    return DataType(new int_predefined_type_class());
}

auto uint_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "uint_predefined_type" << std::endl;
}

auto uint_predefined_type() -> DataType {
    return DataType(new uint_predefined_type_class());
}

auto bool_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bool_predefined_type" << std::endl;
}

auto bool_predefined_type() -> DataType {
    return DataType(new bool_predefined_type_class());
}

auto bit_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bit_predefined_type" << std::endl;
}

auto bit_predefined_type() -> DataType {
    return DataType(new bit_predefined_type_class());
}

auto byte_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "byte_predefined_type" << std::endl;
}

auto byte_predefined_type() -> DataType {
    return DataType(new byte_predefined_type_class());
}

auto nibble_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "nibble_predefined_type" << std::endl;
}

auto nibble_predefined_type() -> DataType {
    return DataType(new nibble_predefined_type_class());
}

auto time_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "time_predefined_type" << std::endl;
}

auto time_predefined_type() -> DataType {
    return DataType(new time_predefined_type_class());
}

auto no_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_expr" << std::endl;
}

auto no_expr() -> Expression {
    return Expression(new no_expr_class());
}

auto var_decl_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "var_decl_act" << std::endl;
    dump_Symbol_(stream, n+2, name);
    if(type_id)
        type_id->dump(stream, n+2);
    if(init_expr)
        init_expr->dump(stream, n+2);
}

auto var_decl_act(Symbol_ name, DataType type_id, Expression init_expr) -> Action {
    return Action(new var_decl_act_class(name, type_id, init_expr));
}

auto var_assign_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "var_assign_act" << std::endl;
    if(id_expr)
        id_expr->dump(stream, n+2);
    if(assign_expr)
        assign_expr->dump(stream, n+2);
}

auto var_assign_act(Expression id_expr, Expression assign_expr) -> Action {
    return Action(new var_assign_act_class(id_expr, assign_expr));
}

auto compound_add_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_add_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_add_act(Expression id, Expression e2) -> Action {
    return Action(new compound_add_act_class(id, e2));
}

auto compound_sub_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_sub_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_sub_act(Expression id, Expression e2) -> Action {
    return Action(new compound_sub_act_class(id, e2));
}

auto compound_mul_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_mul_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_mul_act(Expression id, Expression e2) -> Action {
    return Action(new compound_mul_act_class(id, e2));
}

auto compound_div_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_div_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_div_act(Expression id, Expression e2) -> Action {
    return Action(new compound_div_act_class(id, e2));
}

auto compound_mod_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_mod_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_mod_act(Expression id, Expression e2) -> Action {
    return Action(new compound_mod_act_class(id, e2));
}

auto compound_bool_and_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_bool_and_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_bool_and_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bool_and_act_class(id, e2));
}

auto compound_bool_or_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_bool_or_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_bool_or_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bool_or_act_class(id, e2));
}

auto compound_bit_and_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_bit_and_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_bit_and_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_and_act_class(id, e2));
}

auto compound_bit_or_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_bit_or_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_bit_or_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_or_act_class(id, e2));
}

auto compound_bit_xor_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_bit_xor_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_bit_xor_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_xor_act_class(id, e2));
}

auto compound_shift_left_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_shift_left_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_shift_left_act(Expression id, Expression e2) -> Action {
    return Action(new compound_shift_left_act_class(id, e2));
}

auto compound_right_left_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compound_right_left_act" << std::endl;
    if(id)
        id->dump(stream, n+2);
    if(e2)
        e2->dump(stream, n+2);
}

auto compound_right_left_act(Expression id, Expression e2) -> Action {
    return Action(new compound_right_left_act_class(id, e2));
}

auto force_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "force_act" << std::endl;
    if(hdl_or_port)
        hdl_or_port->dump(stream, n+2);
    if(exp)
        exp->dump(stream, n+2);
}

auto force_act(Expression hdl_or_port, Expression exp) -> Action {
    return Action(new force_act_class(hdl_or_port, exp));
}

auto release_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "release_act" << std::endl;
    if(hdl_or_port)
        hdl_or_port->dump(stream, n+2);
}

auto release_act(Expression hdl_or_port) -> Action {
    return Action(new release_act_class(hdl_or_port));
}

auto if_then_else_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "if_then_else_act" << std::endl;
    if(condition)
        condition->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
    if(else_clause)
        else_clause->dump(stream, n+2);
}

auto if_then_else_act(Expression condition, ActionBlock actions, ActionBlock else_clause) -> Action {
    return Action(new if_then_else_act_class(condition, actions, else_clause));
}

auto non_term_if_then_else_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "non_term_if_then_else_act" << std::endl;
    if(condition)
        condition->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
    if(else_clause)
        else_clause->dump(stream, n+2);
}

auto non_term_if_then_else_act(Expression condition, ActionBlock actions, Action else_clause) -> Action {
    return Action(new non_term_if_then_else_act_class(condition, actions, else_clause));
}

auto case_bool_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "case_bool_act" << std::endl;
    if(bool_case_branch_items)
        bool_case_branch_items->dump(stream, n+2);
}

auto case_bool_act(Cases bool_case_branch_items) -> Action {
    return Action(new case_bool_act_class(bool_case_branch_items));
}

auto case_bool_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "case_bool_branch_item_case" << std::endl;
    if(bool_exp)
        bool_exp->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto case_bool_branch_item_case(Expression bool_exp, ActionBlock actions) -> Case {
    return Case(new case_bool_branch_item_case_class(bool_exp, actions));
}

auto case_labeled_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "case_labeled_act" << std::endl;
    if(exp)
        exp->dump(stream, n+2);
    if(labeled_case_branch_items)
        labeled_case_branch_items->dump(stream, n+2);
}

auto case_labeled_act(Expression exp, Cases labeled_case_branch_items) -> Action {
    return Action(new case_labeled_act_class(exp, labeled_case_branch_items));
}

auto case_labeled_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "case_labeled_branch_item_case" << std::endl;
    if(label_exp)
        label_exp->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto case_labeled_branch_item_case(Expression label_exp, ActionBlock actions) -> Case {
    return Case(new case_labeled_branch_item_case_class(label_exp, actions));
}

auto default_case_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "default_case_branch_item_case" << std::endl;
    if(actions)
        actions->dump(stream, n+2);
}

auto default_case_branch_item_case(ActionBlock actions) -> Case {
    return Case(new default_case_branch_item_case_class(actions));
}

auto method_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_call_act" << std::endl;
    if(method_call_expr)
        method_call_expr->dump(stream, n+2);
}

auto method_call_act(Expression method_call_expr) -> Action {
    return Action(new method_call_act_class(method_call_expr));
}

auto start_tcm_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "start_tcm_call_act" << std::endl;
    if(method_call_expr)
        method_call_expr->dump(stream, n+2);
}

auto start_tcm_call_act(Expression method_call_expr) -> Action {
    return Action(new start_tcm_call_act_class(method_call_expr));
}

auto compute_method_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "compute_method_call_act" << std::endl;
    if(method_call_expr)
        method_call_expr->dump(stream, n+2);
}

auto compute_method_call_act(Expression method_call_expr) -> Action {
    return Action(new compute_method_call_act_class(method_call_expr));
}

auto return_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "return_act" << std::endl;
    if(exp)
        exp->dump(stream, n+2);
}

auto return_act(Expression exp) -> Action {
    return Action(new return_act_class(exp));
}

auto while_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "while_loop_act" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto while_loop_act(Expression bool_expr, ActionBlock actions) -> Action {
    return Action(new while_loop_act_class(bool_expr, actions));
}

auto repeat_until_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "repeat_until_loop_act" << std::endl;
    if(bool_expr)
        bool_expr->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto repeat_until_loop_act(Expression bool_expr, ActionBlock actions) -> Action {
    return Action(new repeat_until_loop_act_class(bool_expr, actions));
}

auto for_each_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "for_each_loop_act" << std::endl;
    if(type_id)
        type_id->dump(stream, n+2);
    if(iterated_name)
        iterated_name->dump(stream, n+2);
    dump_Boolean(stream, n+2, is_reverese);
    if(list_exp)
        list_exp->dump(stream, n+2);
    if(idx_exp)
        idx_exp->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto for_each_loop_act(DataType type_id, Expression iterated_name, Boolean is_reverese, Expression list_exp, Expression idx_exp, ActionBlock actions) -> Action {
    return Action(new for_each_loop_act_class(type_id, iterated_name, is_reverese, list_exp, idx_exp, actions));
}

auto for_range_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "for_range_loop_act" << std::endl;
    dump_Symbol_(stream, n+2, var_id);
    if(from_expr)
        from_expr->dump(stream, n+2);
    if(to_expr)
        to_expr->dump(stream, n+2);
    if(step_expr)
        step_expr->dump(stream, n+2);
    dump_Boolean(stream, n+2, is_down);
    if(actions)
        actions->dump(stream, n+2);
}

auto for_range_loop_act(Symbol_ var_id, Expression from_expr, Expression to_expr, Expression step_expr, Boolean is_down, ActionBlock actions) -> Action {
    return Action(new for_range_loop_act_class(var_id, from_expr, to_expr, step_expr, is_down, actions));
}

auto for_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "for_loop_act" << std::endl;
    if(init_act)
        init_act->dump(stream, n+2);
    if(bool_expr)
        bool_expr->dump(stream, n+2);
    if(step_act)
        step_act->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto for_loop_act(Action init_act, Expression bool_expr, Action step_act, ActionBlock actions) -> Action {
    return Action(new for_loop_act_class(init_act, bool_expr, step_act, actions));
}

auto for_each_line_in_file_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "for_each_line_in_file_act" << std::endl;
    if(line_it_name)
        line_it_name->dump(stream, n+2);
    if(file_path_expr)
        file_path_expr->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto for_each_line_in_file_act(Expression line_it_name, Expression file_path_expr, ActionBlock actions) -> Action {
    return Action(new for_each_line_in_file_act_class(line_it_name, file_path_expr, actions));
}

auto for_each_file_in_files_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "for_each_file_in_files_act" << std::endl;
    if(line_it_name)
        line_it_name->dump(stream, n+2);
    if(file_pattern_exp)
        file_pattern_exp->dump(stream, n+2);
    if(actions)
        actions->dump(stream, n+2);
}

auto for_each_file_in_files_act(Expression line_it_name, Expression file_pattern_exp, ActionBlock actions) -> Action {
    return Action(new for_each_file_in_files_act_class(line_it_name, file_pattern_exp, actions));
}

auto break_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "break_act" << std::endl;
}

auto break_act() -> Action {
    return Action(new break_act_class());
}

auto continue_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "continue_act" << std::endl;
}

auto continue_act() -> Action {
    return Action(new continue_act_class());
}

auto emit_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "emit_act" << std::endl;
    if(event_id)
        event_id->dump(stream, n+2);
}

auto emit_act(Expression event_id) -> Action {
    return Action(new emit_act_class(event_id));
}

auto sync_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sync_act" << std::endl;
    if(event_id)
        event_id->dump(stream, n+2);
}

auto sync_act(Expression event_id) -> Action {
    return Action(new sync_act_class(event_id));
}

auto wait_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "wait_act" << std::endl;
    if(event_id)
        event_id->dump(stream, n+2);
}

auto wait_act(Expression event_id) -> Action {
    return Action(new wait_act_class(event_id));
}

auto all_of_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "all_of_act" << std::endl;
    if(action_blocks)
        action_blocks->dump(stream, n+2);
}

auto all_of_act(ActionBlocks action_blocks) -> Action {
    return Action(new all_of_act_class(action_blocks));
}

auto first_of_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "first_of_act" << std::endl;
    if(action_blocks)
        action_blocks->dump(stream, n+2);
}

auto first_of_act(ActionBlocks action_blocks) -> Action {
    return Action(new first_of_act_class(action_blocks));
}

auto gen_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "gen_act" << std::endl;
    if(gen_expr)
        gen_expr->dump(stream, n+2);
    if(constraints)
        constraints->dump(stream, n+2);
}

auto gen_act(Expression gen_expr, Expressions constraints) -> Action {
    return Action(new gen_act_class(gen_expr, constraints));
}

auto do_seq_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "do_seq_act" << std::endl;
    if(gen_expr)
        gen_expr->dump(stream, n+2);
    if(constraints)
        constraints->dump(stream, n+2);
}

auto do_seq_act(Expression gen_expr, Expressions constraints) -> Action {
    return Action(new do_seq_act_class(gen_expr, constraints));
}

auto check_that_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "check_that_action" << std::endl;
    if(condition)
        condition->dump(stream, n+2);
    if(dut_error_block)
        dut_error_block->dump(stream, n+2);
}

auto check_that_action(Expression condition, Expression dut_error_block) -> Action {
    return Action(new check_that_action_class(condition, dut_error_block));
}

auto no_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_action" << std::endl;
}

auto no_action() -> Action {
    return Action(new no_action_class());
}

auto action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "action_block" << std::endl;
    if(actions)
        actions->dump(stream, n+2);
}

auto action_block(Actions actions) -> ActionBlock {
    return ActionBlock(new action_block_class(actions));
} 
}