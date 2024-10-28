typedef ast::list_tree_node<{{ list_elem }}> {{ class_name }}_class;
typedef std::shared_ptr<{{ class_name }}_class> {{ class_name }};

auto nil_{{ class_name }}() -> {{ class_name }};
auto single_{{ class_name }}({{ list_elem }}) -> {{ class_name }};
auto append_{{ class_name }}({{ class_name }}, {{ class_name }}) -> {{ class_name }};

