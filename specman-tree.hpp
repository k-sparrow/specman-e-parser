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

class no_expr_class : public Expression_class {
    protected:
    public:
        no_expr_class() {
        }

        virtual auto dump(std::ostream& stream, int n) -> void;
};

auto no_expr() -> Expression;

 
}