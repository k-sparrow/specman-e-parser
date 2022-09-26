
#include "ast_visitor_base.hpp"
#include "ast_visitor.hpp"
#include "tree.hpp"
#include "specman-tree.hpp"


namespace ast {

    // helper struct
    // stores ctags entry data
    struct ctags_entry
    {
        std::string tag = "";
        std::string tag_file = "";
        size_t tag_location = 0; // a short pattern or line number

        operator bool() const {
            return !tag.empty() && !tag_file.empty() && tag_location > 0;
        }
    };

    // printing operator for helper entry
    auto operator<<(std::ostream& stream, ctags_entry const& entry) -> std::ostream& {
        stream << entry.tag << "\t" << entry.tag_file << "\t" << entry.tag_location;
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
        switch (node.type())
        {
        // stop condition

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

        case elex::SpecmanCtorKind::FieldSm : {
            auto field = node.get_child_by_name("field");
            if (field != nullptr) {
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
                    auto& field_sm = dynamic_cast<elex::struct_field_list_sm_class&>(*field);
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

        case elex::SpecmanCtorKind::TcmDecOnlySm: {
            auto& tcm_only_node = dynamic_cast<elex::tcm_dec_only_sm_class&>(node);
            auto tcm_name = tcm_only_node.getId();

            // fill the entry for the node name
            visitLeaf(*tcm_name);
            break;
        }

        case elex::SpecmanCtorKind::MethodDecAlsoSm: {
            auto& method_decl_also_node = dynamic_cast<elex::method_dec_also_sm_class&>(node);
            auto method_name = method_decl_also_node.getId();
            
            // fill the entry for the node name
            visitLeaf(*method_name);
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
        ctags_entry entry = {};

        switch (node.leaf_type())
        {
        case elex::LeafNodeValueType::symbol: {
            // dump the symbol location
            auto tag_location = node.get_source_location();
            if (tag_location.begin.filename == nullptr){
                throw std::runtime_error("Missing source file path for input. Please check a file path is supplied to the lexer!");
            }
            entry.tag_location  = tag_location.begin.line;
            entry.tag_file      = *tag_location.begin.filename;

            // get the concrete leaf type
            auto& symbol_leaf = dynamic_cast<ast::Symbol__leaf_node&>(node);

            // dump the symbol
            entry.tag = symbol_leaf.value().lock()->Str();
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