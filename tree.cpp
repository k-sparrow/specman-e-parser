
#include "tree.hpp"

tree_node::tree_node(int lineno) : m_line_number(lineno) {}

auto tree_node::get_line_number() const -> int {
    return m_line_number;
}

auto tree_node::set(tree_node* node_p) -> tree_node* {
    this->m_line_number = node_p->get_line_number();
    return this;
}