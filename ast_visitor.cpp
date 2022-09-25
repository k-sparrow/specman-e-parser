
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
        case elex::SpecmanCtorKind::StructSt:
        {
            auto& struct_stmt_node = dynamic_cast<elex::struct_st_class &>(node);
            m_stream << "Found struct expression at <" << node.get_source_location() << ">" << std::endl;
            node.dump(m_stream, 0);
            break;
        }

        // recursive step
        // run through all children
        default:
            {
                for (pw_tree_node& child : node.children()){
                    child.lock()->accept(*this);
                }
                break;
            }
        }
    }

    auto CtagsNodeVisitor::visitLeaf(leaf_node& node) -> void {
        // do nothing right now
    }
}