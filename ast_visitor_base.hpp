#ifndef AST_VISITOR_BASE_HH
#define AST_VISITOR_BASE_HH

#pragma once

namespace ast {
    class tree_node;

    class IAstNodeVisitor
    {
    public:
        IAstNodeVisitor() = default;
        IAstNodeVisitor(IAstNodeVisitor const&) = delete;
        virtual ~IAstNodeVisitor(){}

        virtual auto visit(tree_node&) -> void;

    protected:
        virtual auto visitNode(tree_node&) -> void = 0;
        virtual auto visitLeaf(tree_node&) -> void = 0;
    };
}; 
#endif // AST_VISITOR_BASE_HH