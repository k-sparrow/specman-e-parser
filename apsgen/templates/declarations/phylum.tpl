class {{ class_name }}_class;
typedef std::shared_ptr<{{ class_name }}_class> {{ class_name }};

class {{ class_name }}_class : public ast::tree_node {
    public:
        {{ class_name }}_class()
            : tree_node()
        {

        }

        auto phytype() const -> {{ lang }}PhylumKind override final;

#ifdef {{ class_name }}_EXTRAS
    {{ class_name }}_EXTRAS
#endif
};

