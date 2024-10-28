class {{ class_name }}_class : public {{ return_type }}_class {
    protected:
    {%- for formal in formals %}
        {%- if formal.type_name in root.types.keys() %}
        ast::{{ formal.type_name }}_leaf {{ formal.name }};
        {%- else %}
        {{ formal }};
        {%- endif %}
    {%- endfor %}
    public:
        {{ class_name }}_class({% for formal in formals %}{{ formal }}{{ ', ' if not loop.last else '' }}{% endfor %}){
            // initialize the members & tie them to me (the parent)
            {%- for formal in formals %}
                {%- if formal.type_name in root.types.keys() %}
            this->{{ formal.name }} = ast::{{ formal.type_name }}_leaf(new ast::{{ formal.type_name }}_leaf_node({{ formal.name }}));
            this->tie(this->{{ formal.name }});
            {%- else %}
            this->{{ formal.name }} = {{ formal.name }};
            if({{ formal.name }}){ // non-terminal might be null due to error reduction rules
                this->tie(this->{{ formal.name }});
            }
            {%- endif %}
            {%- endfor %}

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            {%- for formal in formals %}
                THIS_MAPIFY({{ formal.name }}),
            {%- endfor %}
            };
        }

        // -------------- Getters ------------------ //
        {%- for formal in formals %}
        auto get{{ formal.name | snake_case_to_pascal_case }}() const ->
        {%- if formal.type_name in root.types.keys() %}
            ast::{{ formal.type_name }}_leaf
        {%- else %}
            {{ formal.type_name }}
        {%- endif %}
        {
            return {{ formal.name }};
        }
        {%- endfor %}
        // -------------- Getters ------------------ //

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> {{ lang }}CtorKind override;

#ifdef {{ return_type }}_SHARED_EXTRAS
    {{ return_type }}_SHARED_EXTRAS
#endif
#ifdef {{ class_name }}_EXTRAS
    {{ class_name }}_EXTRAS
#endif
};

auto {{ class_name }}({% for formal in formals %}{{ formal }}{{ ', ' if not loop.last else '' }}{% endfor %}) -> {{ return_type }};

