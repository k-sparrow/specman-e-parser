

auto {{ class_name }}_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\{{ class_name }}: " << "<" << get_source_location() << ">" << std::endl;
    {%- for formal in formals %}
        {%- if formal.type_name in root.types.keys() %}
    stream << pad(n+2) << "{{ formal.name }}: ";
    {{ formal.name }}->dump(stream, 0);
        {%- else %}
    if({{ formal.name }}){
        stream << pad(n+2) << "{{ formal.name }}: " << std::endl;
        {{ formal.name }}->dump(stream, n+4);
    }
        {%- endif %}
    {%- endfor %}
}

auto {{ class_name }}_class::type() const -> {{ lang }}CtorKind {
    return {{ lang }}CtorKind::{{ class_name | snake_case_to_pascal_case }};
}

auto {{ class_name }}({% for formal in formals %}{{ formal }}{{ ', ' if not loop.last else '' }}{% endfor %}) -> {{ return_type }} {
    return {{ return_type }}(new {{ class_name }}_class({% for formal in formals %}{{ formal.name }}{{ ', ' if not loop.last else '' }}{% endfor %}));
}

