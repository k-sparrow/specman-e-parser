
#include "ast_visitor_base.hpp"
#include "ast_visitor.hpp"
#include "tree.hpp"
#include "specman-tree.hpp"

namespace ast {

    // Ctags printer
    CtagsNodeVisitor::CtagsNodeVisitor(std::ostream& stream) : m_stream(stream){}

    auto CtagsNodeVisitor::visitNode(tree_node& node) -> void {
        switch (node.type())
        {
        // stop condition
        // handle only Identifier nodes

        // NOTE: the natural stop condition is a leaf node
        //  this is an additional stop condition
        case elex::SpecmanCtorKind::IdExpr:
            m_stream << "Found id expression at <" << node.get_source_location() << ">" << std::endl;
            break;

        // recursive step
        // run through all children
        default:
            for (pw_tree_node& child : node.children()){
                child.lock()->accept(*this);
            }
            break;
        }
    }

    auto CtagsNodeVisitor::visitLeaf(tree_node& node) -> void {
        // do nothing right now
    }
}