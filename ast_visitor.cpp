
#include "ast_visitor_base.hpp"
#include "ast_visitor.hpp"
#include "tree.hpp"
#include "specman-tree.hpp"


namespace ast {

    // Ctags printer
    CtagsNodeVisitor::CtagsNodeVisitor(std::ostream& stream) : m_stream(stream){}

    auto CtagsNodeVisitor::visitNode(tree_node& node) -> void {
        // clear the ctags entry at earch new node visit
        m_entry = {};

        switch (node.type())
        {
        // stop condition
        // handle only Identifier nodes

        // NOTE: the natural stop condition is a leaf node
        //  this is an additional stop condition
        case elex::SpecmanCtorKind::StructSt:
        {
            auto& struct_stmt_node = dynamic_cast<elex::struct_st_class &>(node);
            auto struct_name = struct_stmt_node.get_child_by_name("struct_name");
            auto& struct_name_id = dynamic_cast<ast::Symbol__leaf_node &>(*struct_name);

            // populate the entry
            const auto& tag_location = struct_name_id.get_source_location();
            if (tag_location.begin.filename == nullptr){
                throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
            }
            
            m_entry.tag_file     = *tag_location.begin.filename;
            m_entry.tag_location = tag_location.begin.line;
            m_entry.tag          = struct_name_id.value().lock()->Str();

            // dump the entry to of the struct header to the stream
            m_stream << m_entry << std::endl;

            // then, recurse through the struct members
            auto members_node = struct_stmt_node.get_child_by_name("members");
            
            // raise in case of nullptr, and reference to the aps file for the correct name

            // recurse through the struct members
            members_node->accept(*this);
            break;
        }

        case elex::SpecmanCtorKind::FieldSm : {
            auto field = node.get_child_by_name("field");
            if (field != nullptr) {
                switch (field->type())
                {
                // scalar
                case elex::SpecmanCtorKind::StructFieldSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_sm_class&>(*field);
                    auto field_id  = field_sm.get_child_by_name("id");
                    auto& field_id_leaf = dynamic_cast<ast::Symbol__leaf_node&>(*field_id);

                    // populate the entry
                    const auto& tag_location = field_id_leaf.get_source_location();
                    if (tag_location.begin.filename == nullptr){
                        throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
                    }
                    m_entry.tag_file     = *tag_location.begin.filename;
                    m_entry.tag_location = tag_location.begin.line;
                    m_entry.tag = field_id_leaf.value().lock()->Str();

                    break;
                }
                
                // listed 
                case elex::SpecmanCtorKind::StructFieldListSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_list_sm_class&>(*field);
                    auto field_id  = field_sm.get_child_by_name("id");
                    auto& field_id_leaf = dynamic_cast<ast::Symbol__leaf_node&>(*field_id);

                    // populate the entry
                    const auto& tag_location = field_id_leaf.get_source_location();
                    if (tag_location.begin.filename == nullptr){
                        throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
                    }
                    m_entry.tag_file     = *tag_location.begin.filename;
                    m_entry.tag_location = tag_location.begin.line;
                    m_entry.tag = field_id_leaf.value().lock()->Str();

                    break;
                }

                // associative listed
                case elex::SpecmanCtorKind::StructFieldAssocListSm: {
                    auto& field_sm = dynamic_cast<elex::struct_field_list_sm_class&>(*field);
                    auto field_id  = field_sm.get_child_by_name("id");
                    auto& field_id_leaf = dynamic_cast<ast::Symbol__leaf_node&>(*field_id);

                    // populate the entry
                    const auto& tag_location = field_id_leaf.get_source_location();
                    if (tag_location.begin.filename == nullptr){
                        throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
                    }
                    m_entry.tag_file     = *tag_location.begin.filename;
                    m_entry.tag_location = tag_location.begin.line;
                    m_entry.tag = field_id_leaf.value().lock()->Str();

                    break;
                }
                default: // do noting, and return
                    return;
                }
            }
            // dump field info
            m_stream << m_entry << std::endl;
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

    auto CtagsNodeVisitor::visitLeaf(leaf_node& node) -> void {
        // do nothing right now
    }

    auto operator<<(std::ostream& stream, CtagsNodeVisitor::ctags_entry const& entry) -> std::ostream& {
        stream << entry.tag << "\t" << entry.tag_file << "\t" << entry.tag_location;
        return stream;
    }
}