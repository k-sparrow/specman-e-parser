

/* implementations for {{ class_name }} */
auto nil_{{ class_name }}() -> {{ class_name }} {
    return {{ class_name }}(new ast::list_tree_node<{{ list_elem }}>());
}

auto single_{{ class_name }}({{ list_elem }} p) -> {{ class_name }} {
    return {{ class_name }}(new ast::list_tree_node<{{ list_elem }}>(p));
}

auto append_{{ class_name }}({{ class_name }} p1, {{ class_name }} p2) -> {{ class_name }} {
    return {{ class_name }}(new ast::list_tree_node<{{ list_elem }}>(*p1, *p2));
}