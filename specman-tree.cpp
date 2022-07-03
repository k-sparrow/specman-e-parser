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

auto str_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "str_expr" << std::endl;
    dump_Symbol_(stream, n+2, str);
}

auto str_expr(Symbol_ str) -> Expression {
    return Expression(new str_expr_class(str));
}

auto no_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_expr" << std::endl;
}

auto no_expr() -> Expression {
    return Expression(new no_expr_class());
} 
}