
#include "tree.hpp"
#include "driver.hpp"

tree_node::tree_node() : m_loc(yy::driver::parse_location()) {
        
    }


auto tree_node::set(tree_node* node_p) -> tree_node* {
    this->m_loc = node_p->m_loc;
    return this;
}

auto tree_node::set_parent(tree_node* parent) -> void {
    this->m_parent = parent;
}