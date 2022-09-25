#ifndef AST_VISITOR_H
#define AST_VISITOR_H
#pragma once

#include <iostream>

#include "ast_visitor_base.hpp"

namespace ast {
    class CtagsNodeVisitor : public IAstNodeVisitor
    {
    private:
        struct ctags_entry
        {
            std::string tag;
            std::string tag_file;
            size_t tag_location; // a short pattern or line number
        };


    protected:
        std::ostream& m_stream;
        ctags_entry m_entry;
    public:
        CtagsNodeVisitor() = delete;
        CtagsNodeVisitor(CtagsNodeVisitor const&) = delete;
        CtagsNodeVisitor(CtagsNodeVisitor&&) = delete;
    public:
        explicit CtagsNodeVisitor(std::ostream&);

        auto visitNode(tree_node&) -> void override final;
        auto visitLeaf(leaf_node&) -> void override final;
        
        // for access to inner class
        friend auto operator<<(std::ostream& stream, CtagsNodeVisitor::ctags_entry const& entry) -> std::ostream&;
    };

    auto operator<<(std::ostream& stream, CtagsNodeVisitor::ctags_entry const& entry) -> std::ostream&;
}

#endif // AST_VISITOR_H