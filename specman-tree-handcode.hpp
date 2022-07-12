#ifndef SPECMAN_TREE_HANDCODE_HPP
#define SPECMAN_TREE_HANDCODE_HPP

#ifndef struct_field_sm_EXTRAS
#define struct_field_sm_EXTRAS \
    auto set_is_physical(elex::Boolean is_physical) -> void { this->is_physical = is_physical; } \
    auto set_do_not_gen(elex::Boolean do_not_gen)   -> void { this->do_not_gen = do_not_gen; } 
#endif 

#ifndef struct_field_list_sm_EXTRAS
#define struct_field_list_sm_EXTRAS \
    auto set_is_physical(elex::Boolean is_physical) -> void { this->is_physical = is_physical; } \
    auto set_do_not_gen(elex::Boolean do_not_gen)   -> void { this->do_not_gen = do_not_gen; } 
#endif 

namespace elex {
    using Boolean = bool;
}
#endif // SPECMAN_TREE_HANDCODE_HPP