#ifndef SPECMAN_TREE_HANDCODE_HPP
#define SPECMAN_TREE_HANDCODE_HPP

// virtual declarations for functions of shared by all FieldStructMember
// mainly used by bison actions to set boolean flags of the field (is physical, do/do not generate, is/is not instance)
#ifndef FieldStructMember_EXTRAS 
#define FieldStructMember_EXTRAS \
    protected: \
        elex::Boolean is_physical, do_not_gen, is_instance; \
    public: \
        auto set_is_physical(elex::Boolean is_physical) { this->is_physical = is_physical; } \
        auto set_do_not_gen(elex::Boolean do_not_gen)   { this->do_not_gen = do_not_gen;   } \
        auto set_is_instance(elex::Boolean is_instance) { this->is_instance = is_instance; }
#endif // FieldStructMember_EXTRAS 

// needed for accessing the expression list items
// to determine
#ifndef range_modifier_expr_EXTRAS
#define range_modifier_expr_EXTRAS \
    auto getRangeItems() -> Expressions { return range_items; }
#endif // range_modifier_expr_EXTRAS

namespace elex {
    using Boolean = bool;
}
#endif // SPECMAN_TREE_HANDCODE_HPP