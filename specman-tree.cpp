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

auto module__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "module_" << std::endl;
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

auto unit_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unit" << std::endl;
    dump_Symbol_(stream, n+2, unit_name);
    members->dump(stream, n+2);
}

auto unit(Symbol_ unit_name, StructMembers members) -> Statement {
    return Statement(new unit_class(unit_name, members));
}

auto struct__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_" << std::endl;
    dump_Symbol_(stream, n+2, struct_name);
    members->dump(stream, n+2);
}

auto struct_(Symbol_ struct_name, StructMembers members) -> Statement {
    return Statement(new struct__class(struct_name, members));
}

auto extend_like_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_like" << std::endl;
    dump_Symbol_(stream, n+2, uos_name);
    dump_Symbol_(stream, n+2, base_uos_name);
    members->dump(stream, n+2);
}

auto extend_like(Symbol_ uos_name, Symbol_ base_uos_name, StructMembers members) -> Statement {
    return Statement(new extend_like_class(uos_name, base_uos_name, members));
}

auto extend_when_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_when" << std::endl;
    dump_Symbol_(stream, n+2, uos_name);
    members->dump(stream, n+2);
}

auto extend_when(Symbol_ uos_name, StructMembers members) -> Statement {
    return Statement(new extend_when_class(uos_name, members));
}

auto type__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "type_" << std::endl;
    dump_Symbol_(stream, n+2, type_id);
    type_expr->dump(stream, n+2);
}

auto type_(Symbol_ type_id, Expression type_expr) -> Statement {
    return Statement(new type__class(type_id, type_expr));
}

auto import_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "import" << std::endl;
    dump_Symbol_(stream, n+2, pkg_id);
}

auto import(Symbol_ pkg_id) -> Statement {
    return Statement(new import_class(pkg_id));
}

auto formal_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "formal" << std::endl;
    dump_Symbol_(stream, n+2, name);
    dump_Symbol_(stream, n+2, type_);
}

auto formal(Symbol_ name, Symbol_ type_) -> Formal {
    return Formal(new formal_class(name, type_));
}

auto struct_field_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    type->dump(stream, n+2);
}

auto struct_field_sm(Symbol_ id, Expression type) -> StructMember {
    return StructMember(new struct_field_sm_class(id, type));
}

auto struct_field_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_list_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    len_expr->dump(stream, n+2);
    dump_Symbol_(stream, n+2, list_type);
}

auto struct_field_list_sm(Symbol_ id, Expression len_expr, Symbol_ list_type) -> StructMember {
    return StructMember(new struct_field_list_sm_class(id, len_expr, list_type));
}

auto struct_field_assoc_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_field_assoc_list_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    key_type->dump(stream, n+2);
    dump_Symbol_(stream, n+2, list_type);
}

auto struct_field_assoc_list_sm(Symbol_ id, Expression key_type, Symbol_ list_type) -> StructMember {
    return StructMember(new struct_field_assoc_list_sm_class(id, key_type, list_type));
}

auto method_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    actions_->dump(stream, n+2);
}

auto method_dec_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember {
    return StructMember(new method_dec_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_also_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    actions_->dump(stream, n+2);
}

auto method_dec_also_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember {
    return StructMember(new method_dec_also_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_first_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    actions_->dump(stream, n+2);
}

auto method_dec_first_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember {
    return StructMember(new method_dec_first_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_only_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    actions_->dump(stream, n+2);
}

auto method_dec_only_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Actions actions_) -> StructMember {
    return StructMember(new method_dec_only_sm_class(id, arguments, return_type, actions_));
}

auto method_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_empty_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
}

auto method_dec_empty_sm(Symbol_ id, Formals arguments, Symbol_ return_type) -> StructMember {
    return StructMember(new method_dec_empty_sm_class(id, arguments, return_type));
}

auto method_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_dec_undef_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
}

auto method_dec_undef_sm(Symbol_ id, Formals arguments, Symbol_ return_type) -> StructMember {
    return StructMember(new method_dec_undef_sm_class(id, arguments, return_type));
}

auto tcm_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
    actions_->dump(stream, n+2);
}

auto tcm_dec_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember {
    return StructMember(new tcm_dec_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_also_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
    actions_->dump(stream, n+2);
}

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember {
    return StructMember(new tcm_dec_also_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_first_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
    actions_->dump(stream, n+2);
}

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember {
    return StructMember(new tcm_dec_first_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_only_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
    actions_->dump(stream, n+2);
}

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr, Actions actions_) -> StructMember {
    return StructMember(new tcm_dec_only_sm_class(id, arguments, return_type, event_id_expr, actions_));
}

auto tcm_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_empty_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
}

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_empty_sm_class(id, arguments, return_type, event_id_expr));
}

auto tcm_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "tcm_dec_undef_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    arguments->dump(stream, n+2);
    dump_Symbol_(stream, n+2, return_type);
    event_id_expr->dump(stream, n+2);
}

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, Symbol_ return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_undef_sm_class(id, arguments, return_type, event_id_expr));
}

auto when_subtype_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "when_subtype_sm" << std::endl;
    subtype_mods->dump(stream, n+2);
    subtype_members->dump(stream, n+2);
}

auto when_subtype_sm(Expressions subtype_mods, StructMembers subtype_members) -> StructMember {
    return StructMember(new when_subtype_sm_class(subtype_mods, subtype_members));
}

auto constraint_def_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "constraint_def_sm" << std::endl;
    constraint_expr->dump(stream, n+2);
}

auto constraint_def_sm(Expression constraint_expr) -> StructMember {
    return StructMember(new constraint_def_sm_class(constraint_expr));
}

auto on_event_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "on_event_sm" << std::endl;
    event_name->dump(stream, n+2);
    action_block->dump(stream, n+2);
}

auto on_event_sm(Expression event_name, Actions action_block) -> StructMember {
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
    temporal->dump(stream, n+2);
}

auto event_def_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_sm_class(id, temporal));
}

auto event_def_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "event_def_override_sm" << std::endl;
    dump_Symbol_(stream, n+2, id);
    temporal->dump(stream, n+2);
}

auto event_def_override_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_override_sm_class(id, temporal));
}

auto temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "temporal_expr" << std::endl;
    temporal->dump(stream, n+2);
    sample_event->dump(stream, n+2);
}

auto temporal_expr(Expression temporal, Expression sample_event) -> Expression {
    return Expression(new temporal_expr_class(temporal, sample_event));
}

auto not_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "not_temporal_expr" << std::endl;
    temporal->dump(stream, n+2);
}

auto not_temporal_expr(Expression temporal) -> Expression {
    return Expression(new not_temporal_expr_class(temporal));
}

auto fail_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "fail_temporal_expr" << std::endl;
    temporal->dump(stream, n+2);
}

auto fail_temporal_expr(Expression temporal) -> Expression {
    return Expression(new fail_temporal_expr_class(temporal));
}

auto eventually_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "eventually_temporal_expr" << std::endl;
    temporal->dump(stream, n+2);
}

auto eventually_temporal_expr(Expression temporal) -> Expression {
    return Expression(new eventually_temporal_expr_class(temporal));
}

auto detach_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "detach_temporal_expr" << std::endl;
    temporal->dump(stream, n+2);
}

auto detach_temporal_expr(Expression temporal) -> Expression {
    return Expression(new detach_temporal_expr_class(temporal));
}

auto yield_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "yield_temporal_expr" << std::endl;
    trigger->dump(stream, n+2);
    temporal->dump(stream, n+2);
}

auto yield_temporal_expr(Expression trigger, Expression temporal) -> Expression {
    return Expression(new yield_temporal_expr_class(trigger, temporal));
}

auto event_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "event_ref_expr" << std::endl;
    event_name->dump(stream, n+2);
}

auto event_ref_expr(Expression event_name) -> Expression {
    return Expression(new event_ref_expr_class(event_name));
}

auto cycle_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "cycle_temporal_expr" << std::endl;
}

auto cycle_temporal_expr() -> Expression {
    return Expression(new cycle_temporal_expr_class());
}

auto no_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_action" << std::endl;
}

auto no_action() -> Action {
    return Action(new no_action_class());
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
    enum_list_expr->dump(stream, n+2);
}

auto enum_type_expr(Expressions enum_list_expr) -> Expression {
    return Expression(new enum_type_expr_class(enum_list_expr));
}

auto enum_list_item_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "enum_list_item" << std::endl;
    dump_Symbol_(stream, n+2, id);
    expr->dump(stream, n+2);
}

auto enum_list_item(Symbol_ id, Expression expr) -> Expression {
    return Expression(new enum_list_item_class(id, expr));
}

auto bitwise_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_not_expr" << std::endl;
    e->dump(stream, n+2);
}

auto bitwise_not_expr(Expression e) -> Expression {
    return Expression(new bitwise_not_expr_class(e));
}

auto bitwise_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_and_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto bitwise_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_and_expr_class(e1, e2));
}

auto bitwise_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_or_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto bitwise_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_or_expr_class(e1, e2));
}

auto bitwise_xor_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bitwise_xor_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto bitwise_xor_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_xor_expr_class(e1, e2));
}

auto shift_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "shift_left_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto shift_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new shift_left_expr_class(e1, e2));
}

auto right_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "right_left_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto right_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new right_left_expr_class(e1, e2));
}

auto logical_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_not_expr" << std::endl;
    e->dump(stream, n+2);
}

auto logical_not_expr(Expression e) -> Expression {
    return Expression(new logical_not_expr_class(e));
}

auto logical_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_and_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto logical_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_and_expr_class(e1, e2));
}

auto logical_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "logical_or_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto logical_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_or_expr_class(e1, e2));
}

auto implication_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "implication_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto implication_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new implication_expr_class(e1, e2));
}

auto unary_positive_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unary_positive_expr" << std::endl;
    e->dump(stream, n+2);
}

auto unary_positive_expr(Expression e) -> Expression {
    return Expression(new unary_positive_expr_class(e));
}

auto unary_negative_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unary_negative_expr" << std::endl;
    e->dump(stream, n+2);
}

auto unary_negative_expr(Expression e) -> Expression {
    return Expression(new unary_negative_expr_class(e));
}

auto binary_add_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_add_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto binary_add_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_add_expr_class(e1, e2));
}

auto binary_sub_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_sub_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto binary_sub_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_sub_expr_class(e1, e2));
}

auto binary_mul_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_mul_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto binary_mul_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_mul_expr_class(e1, e2));
}

auto binary_div_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_div_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto binary_div_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_div_expr_class(e1, e2));
}

auto binary_remainder_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "binary_remainder_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto binary_remainder_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_remainder_expr_class(e1, e2));
}

auto less_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "less_then_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto less_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_expr_class(e1, e2));
}

auto greater_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "greater_then_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto greater_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_expr_class(e1, e2));
}

auto less_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "less_then_or_equal_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto less_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_or_equal_expr_class(e1, e2));
}

auto greater_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "greater_then_or_equal_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto greater_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_or_equal_expr_class(e1, e2));
}

auto equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "equality_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new equality_expr_class(e1, e2));
}

auto non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "non_equality_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new non_equality_expr_class(e1, e2));
}

auto hdl_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_equality_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto hdl_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_equality_expr_class(e1, e2));
}

auto hdl_non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_non_equality_expr" << std::endl;
    e1->dump(stream, n+2);
    e2->dump(stream, n+2);
}

auto hdl_non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_non_equality_expr_class(e1, e2));
}

auto str_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_match_expr" << std::endl;
    str_expr->dump(stream, n+2);
    pattern_expr->dump(stream, n+2);
}

auto str_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_match_expr_class(str_expr, pattern_expr));
}

auto str_does_not_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_does_not_match_expr" << std::endl;
    str_expr->dump(stream, n+2);
    pattern_expr->dump(stream, n+2);
}

auto str_does_not_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_does_not_match_expr_class(str_expr, pattern_expr));
}

auto in_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "in_expr" << std::endl;
    exp->dump(stream, n+2);
    inside->dump(stream, n+2);
}

auto in_expr(Expression exp, Expression inside) -> Expression {
    return Expression(new in_expr_class(exp, inside));
}

auto list_indexing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_indexing_expr" << std::endl;
    list_exp->dump(stream, n+2);
    idx_expr->dump(stream, n+2);
}

auto list_indexing_expr(Expression list_exp, Expression idx_expr) -> Expression {
    return Expression(new list_indexing_expr_class(list_exp, idx_expr));
}

auto list_slicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_slicing_expr" << std::endl;
    list_exp->dump(stream, n+2);
    high_expr->dump(stream, n+2);
    low_expr->dump(stream, n+2);
    slice_expr->dump(stream, n+2);
}

auto list_slicing_expr(Expression list_exp, Expression high_expr, Expression low_expr, Expression slice_expr) -> Expression {
    return Expression(new list_slicing_expr_class(list_exp, high_expr, low_expr, slice_expr));
}

auto list_splicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_splicing_expr" << std::endl;
    list_exp->dump(stream, n+2);
    low_expr->dump(stream, n+2);
    high_expr->dump(stream, n+2);
}

auto list_splicing_expr(Expression list_exp, Expression low_expr, Expression high_expr) -> Expression {
    return Expression(new list_splicing_expr_class(list_exp, low_expr, high_expr));
}

auto list_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_concat_expr" << std::endl;
    list_concat_items->dump(stream, n+2);
}

auto list_concat_expr(Expressions list_concat_items) -> Expression {
    return Expression(new list_concat_expr_class(list_concat_items));
}

auto bit_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "bit_concat_expr" << std::endl;
    bit_concat_items->dump(stream, n+2);
}

auto bit_concat_expr(Expressions bit_concat_items) -> Expression {
    return Expression(new bit_concat_expr_class(bit_concat_items));
}

auto range_modifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "range_modifier_expr" << std::endl;
    range_modifier_elements_list->dump(stream, n+2);
}

auto range_modifier_expr(Expressions range_modifier_elements_list) -> Expression {
    return Expression(new range_modifier_expr_class(range_modifier_elements_list));
}

auto sized_bits_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sized_bits_scalar_expr" << std::endl;
    width_expr->dump(stream, n+2);
}

auto sized_bits_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bits_scalar_expr_class(width_expr));
}

auto sized_bytes_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "sized_bytes_scalar_expr" << std::endl;
    width_expr->dump(stream, n+2);
}

auto sized_bytes_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bytes_scalar_expr_class(width_expr));
}

auto allocate_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "allocate_expr" << std::endl;
    opt_struct_type_block->dump(stream, n+2);
}

auto allocate_expr(Expression opt_struct_type_block) -> Expression {
    return Expression(new allocate_expr_class(opt_struct_type_block));
}

auto struct_type_expr_with_opt_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_expr_with_opt_action_block" << std::endl;
    struct_id_expr->dump(stream, n+2);
    opt_action_block_expt->dump(stream, n+2);
}

auto struct_type_expr_with_opt_action_block(Expression struct_id_expr, Expression opt_action_block_expt) -> Expression {
    return Expression(new struct_type_expr_with_opt_action_block_class(struct_id_expr, opt_action_block_expt));
}

auto named_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "named_action_block" << std::endl;
    struct_id_expr->dump(stream, n+2);
    action_block->dump(stream, n+2);
}

auto named_action_block(Expression struct_id_expr, Actions action_block) -> Expression {
    return Expression(new named_action_block_class(struct_id_expr, action_block));
}

auto struct_type_id_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_id" << std::endl;
    struct_type_modifiers->dump(stream, n+2);
    struct_id_expr->dump(stream, n+2);
}

auto struct_type_id(Expressions struct_type_modifiers, Expression struct_id_expr) -> Expression {
    return Expression(new struct_type_id_class(struct_type_modifiers, struct_id_expr));
}

auto struct_type_modifier_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_type_modifier" << std::endl;
    value->dump(stream, n+2);
    id->dump(stream, n+2);
}

auto struct_type_modifier(Expression value, Expression id) -> Expression {
    return Expression(new struct_type_modifier_class(value, id));
}

auto struct_hier_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_hier_ref_expr" << std::endl;
    hiers->dump(stream, n+2);
}

auto struct_hier_ref_expr(Expressions hiers) -> Expression {
    return Expression(new struct_hier_ref_expr_class(hiers));
}

auto hdl_path_name_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "hdl_path_name_expr" << std::endl;
    hdl_hiers->dump(stream, n+2);
}

auto hdl_path_name_expr(Expressions hdl_hiers) -> Expression {
    return Expression(new hdl_path_name_expr_class(hdl_hiers));
}

auto ternary_operator_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "ternary_operator_expr" << std::endl;
    condition->dump(stream, n+2);
    true_expr->dump(stream, n+2);
    false_expr->dump(stream, n+2);
}

auto ternary_operator_expr(Expression condition, Expression true_expr, Expression false_expr) -> Expression {
    return Expression(new ternary_operator_expr_class(condition, true_expr, false_expr));
}

auto cast_operator_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "cast_operator_expr" << std::endl;
    casted_expr->dump(stream, n+2);
    dest_type_expr->dump(stream, n+2);
}

auto cast_operator_expr(Expression casted_expr, Expression dest_type_expr) -> Expression {
    return Expression(new cast_operator_expr_class(casted_expr, dest_type_expr));
}

auto method_call_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "method_call_expr" << std::endl;
    base->dump(stream, n+2);
    arguments->dump(stream, n+2);
}

auto method_call_expr(Expression base, Expressions arguments) -> Expression {
    return Expression(new method_call_expr_class(base, arguments));
}

auto constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "constraint_expr" << std::endl;
    bool_expr->dump(stream, n+2);
}

auto constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new constraint_expr_class(bool_expr));
}

auto soft_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "soft_constraint_expr" << std::endl;
    bool_expr->dump(stream, n+2);
}

auto soft_constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new soft_constraint_expr_class(bool_expr));
}

auto all_of_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "all_of_constraint_expr" << std::endl;
    constraints->dump(stream, n+2);
}

auto all_of_constraint_expr(Expressions constraints) -> Expression {
    return Expression(new all_of_constraint_expr_class(constraints));
}

auto list_items_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "list_items_constraint_expr" << std::endl;
    item_name->dump(stream, n+2);
    gen_item->dump(stream, n+2);
    constraint->dump(stream, n+2);
}

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expression constraint) -> Expression {
    return Expression(new list_items_constraint_expr_class(item_name, gen_item, constraint));
}

auto distribution_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "distribution_constraint_expr" << std::endl;
    gen_item->dump(stream, n+2);
    distribution->dump(stream, n+2);
}

auto distribution_constraint_expr(Expression gen_item, Cases distribution) -> Expression {
    return Expression(new distribution_constraint_expr_class(gen_item, distribution));
}

auto distribution_branch_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "distribution_branch_case" << std::endl;
    int_->dump(stream, n+2);
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

auto predefined_type_int_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_int_expr" << std::endl;
}

auto predefined_type_int_expr() -> Expression {
    return Expression(new predefined_type_int_expr_class());
}

auto predefined_type_uint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_uint_expr" << std::endl;
}

auto predefined_type_uint_expr() -> Expression {
    return Expression(new predefined_type_uint_expr_class());
}

auto predefined_type_bool_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_bool_expr" << std::endl;
}

auto predefined_type_bool_expr() -> Expression {
    return Expression(new predefined_type_bool_expr_class());
}

auto predefined_type_bit_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_bit_expr" << std::endl;
}

auto predefined_type_bit_expr() -> Expression {
    return Expression(new predefined_type_bit_expr_class());
}

auto predefined_type_byte_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_byte_expr" << std::endl;
}

auto predefined_type_byte_expr() -> Expression {
    return Expression(new predefined_type_byte_expr_class());
}

auto predefined_type_nibble_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_nibble_expr" << std::endl;
}

auto predefined_type_nibble_expr() -> Expression {
    return Expression(new predefined_type_nibble_expr_class());
}

auto predefined_type_time_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "predefined_type_time_expr" << std::endl;
}

auto predefined_type_time_expr() -> Expression {
    return Expression(new predefined_type_time_expr_class());
}

auto no_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_expr" << std::endl;
}

auto no_expr() -> Expression {
    return Expression(new no_expr_class());
} 
}