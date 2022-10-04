
#include "tree.hpp"
#include "ast_visitor_base.hpp"
#include "driver.hpp"

namespace ast {
    tree_node_base::tree_node_base() : m_loc(yy::driver::parse_location()) {
            
        }


    auto tree_node_base::set(tree_node_base* node_p) -> tree_node_base* {
        this->m_loc = node_p->m_loc;
        return this;
    }

    auto tree_node_base::set_parent(tree_node_base* parent) -> void {
        this->m_parent = parent;
    }

    auto tree_node_base::get_direct_parent() const -> tree_node_base* {
        return this->m_parent;
    }

    auto tree_node_base::get_parent() const -> tree_node_base* {
        // track to the concrete parent which isn't a listed node

        // often, and especially for struct fields,
        // they will be direct children of a list node which is
        // on itself a direct child of their concrete enclosing unit/struct/extend statment
        // so we need to backtrack up the AST hierarchy in order to get 
        // the REAL parent
        tree_node_base* parent = this->m_parent;
        while (parent != nullptr && 
               static_cast<int>(parent->type()) < 0) {
            parent = parent->get_direct_parent();
        } ;
        
        return parent;
    }

    auto tree_node_base::kind() const -> NodeKind {
        return NodeKind::kNode; // default implementation, leaves will override
    }

    auto tree_node::tie(p_tree_node child) -> void {
        // set me as the parent of the child
        child->set_parent(this);

        // add the child to the list of children
        m_children.push_back(child);
    }

    auto tree_node::get_child_by_name(std::string child_name) const -> p_tree_node {
        try 
        {
            // child is found, return a pointer to the child
            return m_children_pool.at(child_name).lock();
        }
        catch(const std::out_of_range& e) 
        { 
            // no child with requested name, return nullptr
            return nullptr;
        }
        
    }  
}