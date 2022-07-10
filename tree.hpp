#pragma once

#include <initializer_list>
#include <memory>
#include <iostream>
#include <vector>

#include "utils.hpp"

using std::begin;
using std::end;
using std::distance;
using std::size;

class tree_node;
typedef std::shared_ptr<tree_node> p_tree_node;

class tree_node {
protected:
    int m_line_number;
public:
    tree_node(int lineno = 1);
    virtual ~tree_node() { }

    //virtual auto copy() -> p_tree_node = 0;
    virtual auto dump(std::ostream& stream, int n) -> void = 0;

    auto get_line_number() const -> int;
    auto set(tree_node*) -> tree_node*;
};

// class for listed parser elements
template <class Elem> 
class list_tree_node : public tree_node
{
    // iterators for container
private:
    std::vector<Elem> m_elems;
public:
    list_tree_node() : tree_node(0), m_elems({}){}
    list_tree_node(Elem elem) : tree_node(0) {
        m_elems.push_back(elem);
    }
    list_tree_node(std::initializer_list<Elem> elems) : tree_node(0), m_elems(elems){}
    list_tree_node(list_tree_node<Elem> const& cp) : tree_node(cp.get_line_number()), m_elems(cp.m_elems){}
    list_tree_node(list_tree_node<Elem> const& base, 
                   list_tree_node<Elem> const& ext) : list_tree_node(base) {

        m_elems.reserve(size(m_elems) + distance(begin(ext.m_elems), end(ext.m_elems)));
        m_elems.insert(end(m_elems), begin(ext.m_elems), end(ext.m_elems));
    }
    ~list_tree_node() { m_elems.clear(); }

    virtual auto copy() -> p_tree_node {
        return p_tree_node(new list_tree_node<Elem>(*this));
    }

    virtual auto dump(std::ostream& stream, int n) -> void {
        if (size(m_elems) == 0)
        {
            stream << pad(n) << "nil" << std::endl;
        }
        else {
            stream << pad(n) << "list" << std::endl;
            for (Elem const& elem : m_elems)
                elem->dump(stream, n+2);
            stream << pad(n) << "endlist" << std::endl;
        }
    }

};
