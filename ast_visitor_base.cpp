#include "ast_visitor_base.hpp" // for IAstNodeVisitor::visit imp
#include "tree.hpp"             // for tree_node::accept imp

namespace ast {
    
    /*
    *   Implementation of the visitor acception mechanism
    *   
    *   Takes the visitor, passes itself to it and lets it
    *   do its job
    */
    auto tree_node_base::accept(IAstNodeVisitor& visitor) -> void {
        visitor.visit(*this);
    }

    /* 
    *  Default implementation for ast visitor base
    *  
    *  - Concrete implentation of visitors that follow different
    *    treatment for a node and a leaf should only implement 
    *    ConcreteVisitor::visitNode && ConcreteVisitor::visitLeaf
    * 
    *  - Concrete implentation of visitors that do not follow this
    *    separation should also override IAstNodeVisitor::visit function 
    *    and implement it as they wish
    */
    auto IAstNodeVisitor::visit(tree_node_base& node) -> void {
        switch (node.kind())
        {
        case ast::NodeKind::kNode:
            this->visitNode(dynamic_cast<ast::tree_node&>(node));
            break;
        
        case ast::NodeKind::kLeaf:
            this->visitLeaf(dynamic_cast<ast::leaf_node&>(node));
            break;
        }
    }
}