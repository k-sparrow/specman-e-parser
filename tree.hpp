#pragma once

#include <initializer_list>
#include <memory>
#include <iostream>
#include <vector>

#include "utils.hpp"
#include "location.hh"

using std::begin;
using std::end;
using std::distance;
using std::size;

class tree_node;
typedef std::shared_ptr<tree_node> p_tree_node;
typedef std::shared_ptr<tree_node> pw_tree_node;

namespace elex {
    enum class SpecmanCtorKind : int;
}

class tree_node {
    using source_location_t = yy::location;
protected:

    int               m_line_number;
    source_location_t m_loc;

    // list of weak observers to the childrem
    std::vector<pw_tree_node> m_children = {};
    
    // and observer pointer to the parent
    // we do not allocate this pointer, nor do we release it's memory

    // std::expreimental::observer_ptr is not used as it's expermintal code
    tree_node* m_parent = nullptr;
public:
    tree_node();
    virtual ~tree_node() { }

    //virtual auto copy() -> p_tree_node = 0;
    virtual auto dump(std::ostream& stream, int n) -> void = 0;
    virtual auto type() const -> elex::SpecmanCtorKind = 0;
    auto get_source_location() const -> source_location_t { return m_loc; }
    auto set(tree_node*) -> tree_node*;
    auto set_parent(tree_node*) -> void;
};

// class for listed parser elements
template <class Elem> 
class list_tree_node : public tree_node
{
private:
    std::vector<Elem> m_elems;
public:
    list_tree_node() : tree_node(), m_elems({}){}
    list_tree_node(Elem elem) : tree_node() {
        m_elems.push_back(elem);
    }
    list_tree_node(std::initializer_list<Elem> elems) : tree_node(), m_elems(elems){}
    list_tree_node(list_tree_node<Elem> const& cp) : tree_node(), m_elems(cp.m_elems){ this->m_loc = cp.m_loc; }
    list_tree_node(list_tree_node<Elem> const& base, 
                   list_tree_node<Elem> const& ext) : list_tree_node(base) {

        m_elems.reserve(std::size(m_elems) + distance(std::begin(ext.m_elems), std::end(ext.m_elems)));
        m_elems.insert(std::end(m_elems), std::begin(ext.m_elems), std::end(ext.m_elems));
    }
    ~list_tree_node() { m_elems.clear(); }

    virtual auto copy() -> p_tree_node {
        return p_tree_node(new list_tree_node<Elem>(*this));
    }

    virtual auto dump(std::ostream& stream, int n) -> void {
        if (this->size() == 0)
        {
            stream << pad(n) << "nil" << std::endl;
        }
        else {
            stream << pad(n) << "list" << std::endl;
            for (Elem const& elem : m_elems) {
                if(elem){
                    elem->dump(stream, n+2);
                }
            }
            stream << pad(n) << "endlist" << std::endl;
        }
    }

    auto type() const -> elex::SpecmanCtorKind override {
        return static_cast<elex::SpecmanCtorKind>(-1);
    }
    auto size() const -> size_t { return std::size(m_elems); }

    // iterators for container
    using iterator               = typename std::vector<Elem>::iterator;
    using const_iterator         = typename std::vector<Elem>::const_iterator;
    using reverse_iterator       = typename std::vector<Elem>::reverse_iterator;
    using const_reverse_iterator = typename std::vector<Elem>::const_reverse_iterator;

    auto begin()   -> iterator               { return m_elems.begin(); }
    auto end()     -> iterator               { return m_elems.end(); }
    auto cbegin()  -> const_iterator         { return m_elems.cbegin(); }
    auto cend()    -> const_iterator         { return m_elems.cend(); }
    auto rbegin()  -> reverse_iterator       { return m_elems.rbegin(); }
    auto rend()    -> reverse_iterator       { return m_elems.rend(); }
    auto crbegin() -> const_reverse_iterator { return m_elems.crbegin(); }
    auto crend()   -> const_reverse_iterator { return m_elems.crend(); }
};
