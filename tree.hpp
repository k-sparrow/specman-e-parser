#pragma once

#include <memory>
#include <iostream>
#include <vector>

using std::begin;
using std::end;
using std::distance;

class tree_node;
typedef std::unique_ptr<tree_node> p_tree_node;

class tree_node {
protected:
    int m_line_number;
public:
    tree_node(int lineno);
    virtual ~tree_node() { }

    virtual auto copy() -> p_tree_node = 0;
    virtual auto dump(std::ostream& stream, int n) -> void = 0;

    auto get_line_number() const -> int;
    auto set(tree_node*) -> tree_node*;
};

// class for listed parser elements
template <class Elem> 
class listed_tree_node : public tree_node
{
private:
    std::vector<Elem> m_elems;
public:
    listed_tree_node() : m_elems({}), tree_node(0) {}
    listed_tree_node(listed_tree_node const& cp) : m_elems(cp.m_elems), tree_node(cp.get_line_number()) {}
    ~listed_tree_node() { m_elems.clear(); }
protected:
    listed_tree_node(listed_tree_node const& base, listed_tree_node const& ext) : m_elems(base.m_elems), tree_node(base.get_line_number()) {
        m_elems.reserve(m_elems.size() + distance(begin(ext), end(ext)));
        m_elems.insert(end(m_elems), begin(ext), end(ext));
    }


public:
    static auto list_tree_node_append(listed_tree_node const& base, listed_tree_node const& ext) -> listed_tree_node* {
        return new listed_tree_node(base, ext); // TODO: potential memory leak, switch to shared_ptr
    }
};
