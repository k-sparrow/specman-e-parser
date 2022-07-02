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

auto no_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "no_expr" << std::endl;
}

auto no_expr() -> Expression {
    return Expression(new no_expr_class());
} 
}