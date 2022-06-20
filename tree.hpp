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
private:
    std::vector<Elem> m_elems;
public:
    list_tree_node() : tree_node(0), m_elems({}){}
    list_tree_node(list_tree_node<Elem> const& cp) : tree_node(cp.get_line_number()), m_elems(cp.m_elems){}
    ~list_tree_node() { m_elems.clear(); }

    virtual auto copy() -> p_tree_node {
        return p_tree_node(new list_tree_node<Elem>(*this));
    }

    virtual auto dump(std::ostream& stream, int n) -> void {
        for (auto const& elem : m_elems)
        {
            stream << elem << std::endl;
        }
        
    }
protected:
    list_tree_node(list_tree_node<Elem> const& base, 
                     list_tree_node<Elem> const& ext) : tree_node(base.get_line_number()), m_elems(base.m_elems){
        m_elems.reserve(m_elems.size() + distance(begin(ext), end(ext)));
        m_elems.insert(end(m_elems), begin(ext), end(ext));
    }


public:
    static auto list_tree_node_append(list_tree_node<Elem> const& base,
                                      list_tree_node<Elem> const& ext) -> list_tree_node* {
        return new list_tree_node<Elem>(base, ext); // TODO: potential memory leak, switch to shared_ptr
    }
};
