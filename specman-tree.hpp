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

class Expression_class;
typedef std::shared_ptr<Expression_class> Expression;

class Expression_class : public tree_node {
    public:
};

typedef list_tree_node<Expression> Expressions_class;
typedef std::shared_ptr<Expressions_class> Expressions;

class module__class : public Module_class {
    protected:
        Statement stmt;
    public:
        module__class(Statement stmt) {
            this->stmt = stmt;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto module_(Statement stmt) -> Module;

class unit_class : public Statement_class {
    protected:
        Symbol_ unit_name;
    public:
        unit_class(Symbol_ unit_name) {
            this->unit_name = unit_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto unit(Symbol_ unit_name) -> Statement;

class struct__class : public Statement_class {
    protected:
        Symbol_ struct_name;
    public:
        struct__class(Symbol_ struct_name) {
            this->struct_name = struct_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto struct_(Symbol_ struct_name) -> Statement;

class extend_like_class : public Statement_class {
    protected:
        Symbol_ uos_name;
        Symbol_ base_uos_name;
    public:
        extend_like_class(Symbol_ uos_name, Symbol_ base_uos_name) {
            this->uos_name = uos_name;
            this->base_uos_name = base_uos_name;
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto extend_like(Symbol_ uos_name, Symbol_ base_uos_name) -> Statement;

 
}