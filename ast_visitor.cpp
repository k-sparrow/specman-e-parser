
#include "ast_visitor_base.hpp"
#include "ast_visitor.hpp"
#include "tree.hpp"
#include "specman-tree.hpp"


namespace ast {

    // initialization of static map
    CtagsNodeVisitor::kind_lookup_t 
        CtagsNodeVisitor::elex_to_ctags_type_map = {
        { elex::SpecmanCtorKind::ImportSt,      "I" },
        { elex::SpecmanCtorKind::Package,       "P" },
        { elex::SpecmanCtorKind::StructSt,      "S" },
        { elex::SpecmanCtorKind::StructLikeSt,  "S" },
        { elex::SpecmanCtorKind::UnitSt,        "U" },
        { elex::SpecmanCtorKind::UnitLikeSt,    "U" },
        { elex::SpecmanCtorKind::ExtendStructSt,"E" },
        { elex::SpecmanCtorKind::EnumTypeSt,    "T" },
        { elex::SpecmanCtorKind::ExtendEnumTypeSt,    "T" },
        { elex::SpecmanCtorKind::ScalarSubtypeSt,     "T" },
        { elex::SpecmanCtorKind::ScalarSizedTypeSt,   "T" },
        { elex::SpecmanCtorKind::VirtualSequenceSt,   "Q" },
        { elex::SpecmanCtorKind::SequenceSt,          "Q" },
        { elex::SpecmanCtorKind::DefineAsSt,          "D" },
        { elex::SpecmanCtorKind::DefineAsComputedSt,  "D" },
        { elex::SpecmanCtorKind::CExportSt,           "e" },
        { elex::SpecmanCtorKind::CRoutineSt,          "R" },
        
        // struct members
        // fields
        { elex::SpecmanCtorKind::StructFieldSm,         "p" },
        { elex::SpecmanCtorKind::StructFieldListSm,     "p" },
        { elex::SpecmanCtorKind::StructFieldAssocListSm,"p" },

        // functions
        { elex::SpecmanCtorKind::MethodDecSm,      "f" },
        { elex::SpecmanCtorKind::MethodDecAlsoSm,  "f" },
        { elex::SpecmanCtorKind::MethodDecOnlySm,  "f" },
        { elex::SpecmanCtorKind::MethodDecFirstSm, "f" },
        { elex::SpecmanCtorKind::MethodDecEmptySm, "f" },
        { elex::SpecmanCtorKind::MethodDecUndefSm, "f" },

        // tcm
        { elex::SpecmanCtorKind::TcmDecSm,      "t" },
        { elex::SpecmanCtorKind::TcmDecAlsoSm,  "t" },
        { elex::SpecmanCtorKind::TcmDecOnlySm,  "t" },
        { elex::SpecmanCtorKind::TcmDecFirstSm, "t" },
        { elex::SpecmanCtorKind::TcmDecEmptySm, "t" },
        { elex::SpecmanCtorKind::TcmDecUndefSm, "t" },

        // events
        { elex::SpecmanCtorKind::EventDefSm,         "v" },
        { elex::SpecmanCtorKind::EventDefOverrideSm, "v" },
        
        { elex::SpecmanCtorKind::ExpectSm,         "x" },
        { elex::SpecmanCtorKind::ExpectNamelessSm, "x" },
        { elex::SpecmanCtorKind::ExpectOverrideSm, "x" },

    };

    // printing operator for helper attribute
    auto operator<<(std::ostream& stream, ctags_entry_extra_attribute const& extra) -> std::ostream& {
        stream << extra.key << ":" << extra.value;
        return stream;
    }

    auto operator<<(std::ostream& stream, ctags_extras_suite const& extra) -> std::ostream& {
        stream << extra.cls;
        for (auto const& extra_attribute : extra.extras)
            stream << "\t" << extra_attribute;
        
        return stream;
    }

    // stores ctags entry data
    struct ctags_entry
    {
        std::string tag = "";
        std::string tag_file = "";
        size_t tag_location = 0; // a short pattern or line number

        // extras 
        ctags_extras_suite tag_extras = {};

        // validator
        operator bool() const {
            return !tag.empty() && !tag_file.empty() && tag_location > 0;
        }
    };

    // printing operator for helper entry
    auto operator<<(std::ostream& stream, ctags_entry const& entry) -> std::ostream& {
        stream << entry.tag                   << "\t" << 
                  entry.tag_file              << "\t" << 
                  entry.tag_location << ";\"" << "\t" << 
                  entry.tag_extras;
        return stream;
    }

    // Ctags printer
    CtagsNodeVisitor::CtagsNodeVisitor(std::ostream& stream) : m_stream(stream){}

    // override implementation of base interface
    // as opposed to the interface which handles leaves directly,
    // we let the visitor to handle leaves selectively, only when visiting 
    // specific node types
    auto CtagsNodeVisitor::visit(tree_node_base& node) -> void {

        // visit only nodes
        switch (node.kind())
        {
        case ast::NodeKind::kNode: {
            this->visitNode(dynamic_cast<ast::tree_node&>(node));
            break;
        }
        
        default: // handling leaf nodes as a part of specific node types
            break;
        }

    }
    auto CtagsNodeVisitor::visitNode(tree_node& node) -> void {
        // reset attributes
        m_attributes = {
            .cls = elex_to_ctags_type_map[node.type()]
        };

        switch (node.phytype())
        {
        // stop condition
        case elex::SpecmanPhylumKind::Statement: {
            visitStatmentNode(node);
            break;
        }
        // members
        // handle a struct field/function/tcm/event/cg/temporals
        case elex::SpecmanPhylumKind::FieldStructMember:
        case elex::SpecmanPhylumKind::StructMember: {
            visitMemberNode(node);
            break;
        }

        // recursive step
        // run through all children
        default:
            {
                for (pw_tree_node& child : node.children()){
                    child.lock()->accept(*this);
                }
                break;
            }
        }
    }

    // private specific methods
    auto CtagsNodeVisitor::visitStatmentNode(tree_node& node) -> void {
        switch (node.type())
        {
        // stop condition
        case elex::SpecmanCtorKind::Package: {
            auto& pkg_node = dynamic_cast<elex::package_class&>(node);
            auto pkg_id = pkg_node.getPkgName();

            visitLeaf(*pkg_id);
            break;
        }

        case elex::SpecmanCtorKind::ImportSt: {
            auto& import_node = dynamic_cast<elex::import_st_class&>(node);
            auto import_id = import_node.getPaths();

            // dump all file paths as separate
            for (auto& path : import_id->children()){
                auto& path_node = dynamic_cast<elex::file_path_fp_class&>(*(path.lock()));
                auto path_id = path_node.getFilePath();

                visitLeaf(*path_id);
            }
            break;
        }

        // NOTE: the natural stop condition is a leaf node
        case elex::SpecmanCtorKind::StructSt: {
            auto& struct_stmt_node = dynamic_cast<elex::struct_st_class &>(node);
            auto struct_name = struct_stmt_node.getStructName();

            // dump the struct name
            visitLeaf(*struct_name);

            // then, recurse through the struct members
            auto members_node = struct_stmt_node.getMembers();
            
            // recurse through the struct members
            members_node->accept(*this);
            break;
        }

        case elex::SpecmanCtorKind::StructLikeSt: {
            auto& struct_stmt_node = dynamic_cast<elex::struct_like_st_class &>(node);
            auto struct_name = struct_stmt_node.getStructName();

            // dump the struct name
            visitLeaf(*struct_name);

            // then, recurse through the struct members
            auto members_node = struct_stmt_node.getMembers();
            
            // recurse through the struct members
            members_node->accept(*this);
            break;
        }

        case elex::SpecmanCtorKind::UnitSt: {
            auto& unit_stmt_node = dynamic_cast<elex::unit_st_class &>(node);
            auto unit_name = unit_stmt_node.getUnitName();

            // dump the struct name
            visitLeaf(*unit_name);

            // then, recurse through the struct members
            auto members_node = unit_stmt_node.getMembers();
            
            // recurse through the struct members
            members_node->accept(*this);
            break;
        }

        case elex::SpecmanCtorKind::UnitLikeSt: {
            auto& unit_stmt_node = dynamic_cast<elex::unit_like_st_class &>(node);
            auto unit_name = unit_stmt_node.getUnitName();

            // dump the struct name
            visitLeaf(*unit_name);

            // then, recurse through the struct members
            auto members_node = unit_stmt_node.getMembers();
            
            // recurse through the struct members
            members_node->accept(*this);
            break;
        }

        case elex::SpecmanCtorKind::ExtendStructSt: {
            auto& extend_stmt = dynamic_cast<elex::extend_struct_st_class&>(node);
            
            // TODO: refactor this out to a function, it will come around again
            auto extend_id_tag = extend_stmt.getFullStructName();
            auto tag_location = extend_stmt.getStructTypeName()->get_source_location();

            ctags_entry entry = {
                extend_id_tag,
                *tag_location.begin.filename,
                tag_location.begin.line,
                m_attributes
            };

            m_stream << entry << std::endl;

            // then, recurse through the struct members
            auto members_node = extend_stmt.getMembers();
            
            // recurse through the struct members
            members_node->accept(*this);
            break;
        }    

        case elex::SpecmanCtorKind::EnumTypeSt: {
            auto& type_node = dynamic_cast<elex::enum_type_st_class&>(node);
            auto type_id = type_node.getId();

            visitLeaf(*type_id);
            break;
        }

        case elex::SpecmanCtorKind::ExtendEnumTypeSt: {
            auto& type_node = dynamic_cast<elex::extend_enum_type_st_class&>(node);
            auto type_id = type_node.getTypeId();

            visitLeaf(*type_id);
            break;
        }

        case elex::SpecmanCtorKind::ScalarSubtypeSt: {
            auto& type_node = dynamic_cast<elex::scalar_subtype_st_class&>(node);
            auto type_id = type_node.getSubtypeId();

            visitLeaf(*type_id);
            break;
        }

        case elex::SpecmanCtorKind::ScalarSizedTypeSt: {
            auto& type_node = dynamic_cast<elex::scalar_sized_type_st_class&>(node);
            auto type_id = type_node.getTypeId();

            visitLeaf(*type_id);
            break;
        }

        case elex::SpecmanCtorKind::VirtualSequenceSt: {
            auto& vseq_node = dynamic_cast<elex::virtual_sequence_st_class&>(node);
            auto vseq_id = vseq_node.getId();

            // handle id
            visitLeaf(*vseq_id);
            break;
        }

        case elex::SpecmanCtorKind::SequenceSt: {
            auto& seq_node = dynamic_cast<elex::sequence_st_class&>(node);
            auto seq_id = seq_node.getId();

            // handle id
            visitLeaf(*seq_id);
            break;        
        }

        case elex::SpecmanCtorKind::DefineAsSt: {
            break;
        }

        case elex::SpecmanCtorKind::DefineAsComputedSt: {
            break;
        }

        case elex::SpecmanCtorKind::CExportSt: {
            break;
        }

        case elex::SpecmanCtorKind::CRoutineSt: {
            auto& c_routine_node = dynamic_cast<elex::c_routine_st_class&>(node);
            auto routine_name = c_routine_node.getERoutineName();

            visitLeaf(*routine_name);
            break;
        }

        default:
            break;
        }
    }

    auto CtagsNodeVisitor::visitMemberNode(tree_node& node) -> void {
        // start with filling the class attribute
        m_attributes = {
            .cls = elex_to_ctags_type_map[node.type()]
        };

        // continue with filling the enclosing unit (parent) information 
        visitMemberParentNode(node);

        // work directly to extract the tag from the node
        switch (node.type())
        {
        
        // handle a field
        case elex::SpecmanCtorKind::FieldSm : {
            auto field = node.get_child_by_name("field");
            if (field != nullptr) {
                m_attributes.cls = elex_to_ctags_type_map[field->type()];
                //
                switch (field->type())
                {
                // scalar
                case elex::SpecmanCtorKind::StructFieldSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_sm_class&>(*field);
                    auto field_id = field_sm.getId();

                    // fill the entry for the node name
                    visitLeaf(*field_id);
                    break;
                }
                
                // listed 
                case elex::SpecmanCtorKind::StructFieldListSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_list_sm_class&>(*field);
                    auto field_id = field_sm.getId();

                    // fill the entry for the node name
                    visitLeaf(*field_id);
                    break;
                }

                // associative listed
                case elex::SpecmanCtorKind::StructFieldAssocListSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_assoc_list_sm_class&>(*field);
                    auto field_id = field_sm.getId();

                    // fill the entry for the node name
                    visitLeaf(*field_id);
                    break;
                }
                default: // do noting, and return
                    return;
                }
            }
            break;
        }

        case elex::SpecmanCtorKind::MethodDecSm: {
            auto& method_dec_node = dynamic_cast<elex::method_dec_sm_class&>(node);
            auto method_name = method_dec_node.getId();

            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecOnlySm: {
            auto& method_only_node = dynamic_cast<elex::method_dec_only_sm_class&>(node);
            auto method_name = method_only_node.getId();

            // fill the entry for the node name
            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecAlsoSm: {
            auto& method_also_node = dynamic_cast<elex::method_dec_also_sm_class&>(node);
            auto method_name = method_also_node.getId();

            // fill the entry for the node name
            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecFirstSm: {
            auto& method_first_node = dynamic_cast<elex::method_dec_first_sm_class&>(node);
            auto method_name = method_first_node.getId();

            // fill the entry for the node name
            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecEmptySm: {
            auto& method_empty_node = dynamic_cast<elex::method_dec_empty_sm_class&>(node);
            auto method_name = method_empty_node.getId();

            // fill the entry for the node name
            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecUndefSm: {
            auto& method_undef_node = dynamic_cast<elex::method_dec_undef_sm_class&>(node);
            auto method_name = method_undef_node.getId();

            // fill the entry for the node name
            visitLeaf(*method_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecSm: {
            auto& tcm_dec_node = dynamic_cast<elex::tcm_dec_sm_class&>(node);
            auto tcm_name = tcm_dec_node.getId();

            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecOnlySm: {
            auto& tcm_only_node = dynamic_cast<elex::tcm_dec_only_sm_class&>(node);
            auto tcm_name = tcm_only_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecAlsoSm: {
            auto& tcm_also_node = dynamic_cast<elex::tcm_dec_also_sm_class&>(node);
            auto tcm_name = tcm_also_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecFirstSm: {
            auto& tcm_first_node = dynamic_cast<elex::tcm_dec_first_sm_class&>(node);
            auto tcm_name = tcm_first_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecEmptySm: {
            auto& tcm_empty_node = dynamic_cast<elex::tcm_dec_empty_sm_class&>(node);
            auto tcm_name = tcm_empty_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::TcmDecUndefSm: {
            auto& tcm_undef_node = dynamic_cast<elex::tcm_dec_undef_sm_class&>(node);
            auto tcm_name = tcm_undef_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::EventDefSm : {
            auto& event_def_node = dynamic_cast<elex::event_def_sm_class&>(node);
            auto event_def_id    = event_def_node.getId();

            visitLeaf(*event_def_id);
            break;
        }

        case elex::SpecmanCtorKind::EventDefOverrideSm : {
            auto& event_def_node = dynamic_cast<elex::event_def_override_sm_class&>(node);
            auto event_def_id    = event_def_node.getId();

            visitLeaf(*event_def_id);
            break;
        }
        
        case elex::SpecmanCtorKind::CovergroupSm : {
            // covergroup name is actually 
            // the event name that it is triggered upon
            // like on callback, this should be linked to the id 
        }

        case elex::SpecmanCtorKind::CovergroupExtensionSm : {
            // covergroup name is actually 
            // the event name that it is triggered upon
            // like on callback, this should be linked to the id 
            break;
        }
        
        // WHEN subtype is a special struct member
        // it's actually a struct level statement equivalent member
        // and we'll treat it as such
        // so, for each of the member nodes, recurse
        case elex::SpecmanCtorKind::WhenSubtypeSm: {
            auto& when_subtype_node = dynamic_cast<elex::when_subtype_sm_class&>(node);

            // find the name of the subtype and dump it
            // TODO: do the above

            // recurse through the members of the when subtype
            auto members = when_subtype_node.getSubtypeMembers();

            members->accept(*this);
            return;
        }
        default:
            return;
        }

    }

    auto CtagsNodeVisitor::visitMemberParentNode(tree_node& node) -> void {
        ast::ctags_extra_attributes extras = {};

        // get the parent 
        auto parent = node.get_parent();
        if(!parent) return;

        // ... and start working
        switch (parent->type())
        {
        case elex::SpecmanCtorKind::StructSt: {
            auto& struct_parent = dynamic_cast<elex::struct_st_class&>(*parent);
            auto struct_parent_id = struct_parent.getStructName();

            extras = {
                {.key = "struct", .value = struct_parent_id->value().lock()->Str()},
            };
            break;
        }
        case elex::SpecmanCtorKind::StructLikeSt: {
            auto& struct_parent = dynamic_cast<elex::struct_like_st_class&>(*parent);
            auto struct_parent_id = struct_parent.getStructName();

            extras = {
                {.key = "struct", .value = struct_parent_id->value().lock()->Str()},
            };
            break;
        }

        case elex::SpecmanCtorKind::UnitSt: {
            auto& unit_parent = dynamic_cast<elex::unit_st_class&>(*parent);
            auto unit_parent_id = unit_parent.getUnitName();

            extras = {
                {.key = "unit", .value = unit_parent_id->value().lock()->Str()},
            };
            break;
        }

        case elex::SpecmanCtorKind::UnitLikeSt: {
            auto& unit_parent = dynamic_cast<elex::unit_like_st_class&>(*parent);
            auto unit_parent_id = unit_parent.getUnitName();

            extras = {
                {.key = "unit", .value = unit_parent_id->value().lock()->Str()},
            };
            break;
        }
        
        case elex::SpecmanCtorKind::ExtendStructSt: {
            auto& extend_parent = dynamic_cast<elex::extend_struct_st_class&>(*parent);
            auto extend_parent_id = extend_parent.getFullStructName();

            extras = {
                {.key = "unit", .value = extend_parent_id },
            };
            break;
        }

        case elex::SpecmanCtorKind::WhenSubtypeSm: {
            auto& when_parent = dynamic_cast<elex::when_subtype_sm_class&>(*parent);
            auto when_parent_id = when_parent.getSubtypeMods();

            break;
        }

        default:
            return;
        }

        // a bit more readable for the following lines
        auto& attribute_extras = m_attributes.extras;

        // extend the extra attributes vector
        attribute_extras.reserve(attribute_extras.size() + extras.size());
        attribute_extras.insert(std::end(attribute_extras), std::begin(extras), std::end(extras));
    }

    auto CtagsNodeVisitor::visitLeaf(leaf_node& node) -> void {
        ctags_entry entry = {};

        switch (node.leaf_type())
        {
        case elex::LeafNodeValueType::symbol: {
            // dump the symbol location
            auto tag_location = node.get_source_location();
            if (tag_location.begin.filename == nullptr){
                throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
            }

            // get the concrete leaf type
            auto& symbol_leaf = dynamic_cast<ast::Symbol__leaf_node&>(node);

            entry = {
                .tag          = symbol_leaf.value().lock()->Str(),
                .tag_file     = *tag_location.begin.filename,
                .tag_location =  tag_location.begin.line,
                .tag_extras   =  m_attributes
            };
            break;
        }
        
        default:
            break;
        }

        // dump the node entry (if the leaf is a symbol one)
        if (entry){
            m_stream << entry << std::endl;
        }
    }

}