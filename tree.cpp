
#include "tree.hpp"
#include "ast_visitor_base.hpp"
#include "driver.hpp"

namespace ast {
    tree_node::tree_node() : m_loc(yy::driver::parse_location()) {
            
        }


    auto tree_node::set(tree_node* node_p) -> tree_node* {
        this->m_loc = node_p->m_loc;
        return this;
    }

    auto tree_node::set_parent(tree_node* parent) -> void {
        this->m_parent = parent;
    }

    auto tree_node::tie(p_tree_node child) -> void {
        // set me as the parent of the child
        child->set_parent(this);

        // add the child to the list of children
        m_children.push_back(child);
    }

    auto tree_node::kind() const -> NodeKind {
        return NodeKind::kNode; // default implementation, leaves will override
    }

}