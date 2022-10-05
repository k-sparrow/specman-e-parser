#ifndef AST_VISITOR_H
#define AST_VISITOR_H
#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <memory>
#include "tree.hpp" // for forward declaration of elex::SPecmanCtorNode
#include "ast_visitor_base.hpp"

namespace ast {

    // helper recordings 
    struct ctags_entry_extra_attribute
    {
        std::string key     = "";
        std::string value   = "";

        operator bool() const {
            return !(key.empty() || value.empty());
        }
    };
    auto operator<<(std::ostream& stream, ctags_entry_extra_attribute const& extra) -> std::ostream&;
    using ctags_extra_attributes = std::vector<ctags_entry_extra_attribute>;

    struct ctags_extras_suite
    {
        std::string            cls;
        ctags_extra_attributes extras;
    };
    auto operator<<(std::ostream& stream, ctags_extras_suite const& extra) -> std::ostream&;


    class CtagsNodeVisitor : public IAstNodeVisitor
    {
    private: 
        // used to populate information when visiting concrete nodes
        ctags_extras_suite m_attributes;

        using kind_lookup_t = std::map<elex::SpecmanCtorKind, std::string>;
        static kind_lookup_t elex_to_ctags_type_map;

    protected:
        // the stream we dump our ctags info to
        std::ostream& m_stream;

        // the stream that holds the source code
        std::istream* m_source_stream;
    public:
        CtagsNodeVisitor() = delete;
        CtagsNodeVisitor(CtagsNodeVisitor const&) = delete;
        CtagsNodeVisitor(CtagsNodeVisitor&&) = delete;
    public:
        explicit CtagsNodeVisitor(std::ostream&);
        explicit CtagsNodeVisitor(std::ostream&, std::istream*);

        auto switch_source_stream(std::istream&) -> void;

        auto visit(tree_node_base&) -> void override final;
        auto visitNode(tree_node&)  -> void override final;
        auto visitLeaf(leaf_node&)  -> void override final;
    
    private:
        auto visitStatmentNode(tree_node&)      -> void ;
        auto visitMemberNode(tree_node&)        -> void ;
        auto visitMemberParentNode(tree_node&)  -> void ;
        auto visitMemberDataTypeRefNode(tree_node&)   -> void ;
        auto visitDataTypeRefNode(tree_node&)   -> void ;

        auto extractTagPattern(int) -> std::string;
    };
}

#endif // AST_VISITOR_H