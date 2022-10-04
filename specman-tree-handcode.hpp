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
    public: \
        auto getRangeItems() -> Expressions { return range_items; }
#endif // range_modifier_expr_EXTRAS

#ifndef struct_hier_ref_expr_EXTRAS
#define struct_hier_ref_expr_EXTRAS \
    public: \
        auto getHiers() -> Expressions { return hiers; }
#endif // struct_hier_ref_expr_EXTRAS

#ifndef id_expr_EXTRAS
#define id_expr_EXTRAS                      \
    public:                                 \
        auto str() const -> std::string {   \
            return id->value().lock()->Str();      \
        }
#endif // id_expr_EXTRAS

#ifndef struct_type_modifier_EXTRAS
#define struct_type_modifier_EXTRAS                                          \
    public:                                                                 \
        auto str() const -> std::string {                                   \
            auto& id_node = dynamic_cast<elex::id_expr_class&>(*id);        \
            auto& value_node = dynamic_cast<elex::id_expr_class&>(*value);  \
                                                                            \
            return value_node.str() + "'" + id_node.str();                  \
        }
#endif // struct_type_modifer_EXTRAS

#ifndef complex_type_modifier_EXTRAS
#define complex_type_modifier_EXTRAS                \
    private:                                        \
    public:                                         \
        auto getFullName() const -> std::string {   \
            std::string full_name = "";                             \
            for(auto& child : modifiers->children()) {       \
                switch(child.lock()->type()) {                      \
                    case elex::SpecmanCtorKind::IdExpr: {           \
                        auto& id_expr_node =                        \
                            dynamic_cast<elex::id_expr_class&>(*child.lock()); \
                                                                    \
                        full_name += id_expr_node.str();            \
                        break;                                      \
                    }                                               \
                    case elex::SpecmanCtorKind::StructTypeModifier: { \
                        auto& struct_type_modifier_node =           \
                            dynamic_cast<elex::struct_type_modifier_class&>(*child.lock()); \
                                                                    \
                        full_name += struct_type_modifier_node.str(); \
                        break;                                      \
                    }                                               \
                    default: break;                                 \
                }                                                   \
                                                                    \
                full_name += " ";                                   \
            }                                                       \
            trim(full_name);                                        \
            return full_name;                                       \
        }
#endif // complex_type_modifier_EXTRAS

namespace elex {
    using Boolean = bool;
}
#endif // SPECMAN_TREE_HANDCODE_HPP