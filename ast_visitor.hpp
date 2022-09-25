#ifndef AST_VISITOR_H
#define AST_VISITOR_H
#pragma once

#include <iostream>

#include "ast_visitor_base.hpp"

namespace ast {
    class CtagsNodeVisitor : public IAstNodeVisitor
    {
    protected:
        std::ostream& m_stream;
    public:
        CtagsNodeVisitor() = delete;
        CtagsNodeVisitor(CtagsNodeVisitor const&) = delete;
        CtagsNodeVisitor(CtagsNodeVisitor&&) = delete;
    public:
        explicit CtagsNodeVisitor(std::ostream&);

        auto visitNode(tree_node&) -> void override final;
        auto visitLeaf(leaf_node&) -> void override final;
    };
}

#endif // AST_VISITOR_H