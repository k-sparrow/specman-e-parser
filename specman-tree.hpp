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

class no_expr_class : public Expression_class {
    protected:
    public:
        no_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto no_expr() -> Expression;

 
}