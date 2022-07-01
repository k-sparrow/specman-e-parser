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

auto unit_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unit" << std::endl;
    dump_Symbol_(stream, n+2, unit_name);
}

auto unit(Symbol_ unit_name) -> Statement {
    return Statement(new unit_class(unit_name));
}

auto struct__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_" << std::endl;
    dump_Symbol_(stream, n+2, struct_name);
}

auto struct_(Symbol_ struct_name) -> Statement {
    return Statement(new struct__class(struct_name));
}

auto extend_like_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_like" << std::endl;
    dump_Symbol_(stream, n+2, uos_name);
    dump_Symbol_(stream, n+2, base_uos_name);
}

auto extend_like(Symbol_ uos_name, Symbol_ base_uos_name) -> Statement {
    return Statement(new extend_like_class(uos_name, base_uos_name));
} 
}