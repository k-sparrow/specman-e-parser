/* 
    Language implementation file for classes used by bison

    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***

 */

#include "tree.hpp"
#include "specman-tree.hpp"
#include "utils.hpp"

namespace elex { 
    

/* implementations for Statements */
auto nil_Statements() -> Statements {
    return Statements(new list_tree_node<Statement>());
}

auto single_Statements(Statement p) -> Statements {
    return Statements(new list_tree_node<Statement>(p));
}

auto append_Statements(Statements p1, Statements p2) -> Statements {
    return Statements(new list_tree_node<Statement>(*p1, *p2));
}

/* implementations for StructMembers */
auto nil_StructMembers() -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>());
}

auto single_StructMembers(StructMember p) -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>(p));
}

auto append_StructMembers(StructMembers p1, StructMembers p2) -> StructMembers {
    return StructMembers(new list_tree_node<StructMember>(*p1, *p2));
}

/* implementations for Actions */
auto nil_Actions() -> Actions {
    return Actions(new list_tree_node<Action>());
}

auto single_Actions(Action p) -> Actions {
    return Actions(new list_tree_node<Action>(p));
}

auto append_Actions(Actions p1, Actions p2) -> Actions {
    return Actions(new list_tree_node<Action>(*p1, *p2));
}

/* implementations for Expressions */
auto nil_Expressions() -> Expressions {
    return Expressions(new list_tree_node<Expression>());
}

auto single_Expressions(Expression p) -> Expressions {
    return Expressions(new list_tree_node<Expression>(p));
}

auto append_Expressions(Expressions p1, Expressions p2) -> Expressions {
    return Expressions(new list_tree_node<Expression>(*p1, *p2));
}

/* implementations for Formals */
auto nil_Formals() -> Formals {
    return Formals(new list_tree_node<Formal>());
}

auto single_Formals(Formal p) -> Formals {
    return Formals(new list_tree_node<Formal>(p));
}

auto append_Formals(Formals p1, Formals p2) -> Formals {
    return Formals(new list_tree_node<Formal>(*p1, *p2));
}

/* implementations for Cases */
auto nil_Cases() -> Cases {
    return Cases(new list_tree_node<Case>());
}

auto single_Cases(Case p) -> Cases {
    return Cases(new list_tree_node<Case>(p));
}

auto append_Cases(Cases p1, Cases p2) -> Cases {
    return Cases(new list_tree_node<Case>(*p1, *p2));
}

/* implementations for SequenceItems */
auto nil_SequenceItems() -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>());
}

auto single_SequenceItems(SequenceItem p) -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>(p));
}

auto append_SequenceItems(SequenceItems p1, SequenceItems p2) -> SequenceItems {
    return SequenceItems(new list_tree_node<SequenceItem>(*p1, *p2));
}

/* implementations for CovergroupOptions */
auto nil_CovergroupOptions() -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>());
}

auto single_CovergroupOptions(CovergroupOption p) -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>(p));
}

auto append_CovergroupOptions(CovergroupOptions p1, CovergroupOptions p2) -> CovergroupOptions {
    return CovergroupOptions(new list_tree_node<CovergroupOption>(*p1, *p2));
}

/* implementations for CovergroupItems */
auto nil_CovergroupItems() -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>());
}

auto single_CovergroupItems(CovergroupItem p) -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>(p));
}

auto append_CovergroupItems(CovergroupItems p1, CovergroupItems p2) -> CovergroupItems {
    return CovergroupItems(new list_tree_node<CovergroupItem>(*p1, *p2));
}

/* implementations for CovergroupItemOptions */
auto nil_CovergroupItemOptions() -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>());
}

auto single_CovergroupItemOptions(CovergroupItemOption p) -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>(p));
}

auto append_CovergroupItemOptions(CovergroupItemOptions p1, CovergroupItemOptions p2) -> CovergroupItemOptions {
    return CovergroupItemOptions(new list_tree_node<CovergroupItemOption>(*p1, *p2));
}

/* implementations for ActionBlocks */
auto nil_ActionBlocks() -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>());
}

auto single_ActionBlocks(ActionBlock p) -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>(p));
}

auto append_ActionBlocks(ActionBlocks p1, ActionBlocks p2) -> ActionBlocks {
    return ActionBlocks(new list_tree_node<ActionBlock>(*p1, *p2));
}

/* implementations for FSMStates */
auto nil_FSMStates() -> FSMStates {
    return FSMStates(new list_tree_node<FSMState>());
}

auto single_FSMStates(FSMState p) -> FSMStates {
    return FSMStates(new list_tree_node<FSMState>(p));
}

auto append_FSMStates(FSMStates p1, FSMStates p2) -> FSMStates {
    return FSMStates(new list_tree_node<FSMState>(*p1, *p2));
}

/* implementations for FilePaths */
auto nil_FilePaths() -> FilePaths {
    return FilePaths(new list_tree_node<FilePath>());
}

auto single_FilePaths(FilePath p) -> FilePaths {
    return FilePaths(new list_tree_node<FilePath>(p));
}

auto append_FilePaths(FilePaths p1, FilePaths p2) -> FilePaths {
    return FilePaths(new list_tree_node<FilePath>(*p1, *p2));
}

auto module__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\module_" << std::endl;
    if(stmts){
        stream << pad(n+2) << "stmts: " << std::endl;
        stmts->dump(stream, n+4);
    }
}

auto module__class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::Module;
}

auto module_(Statements stmts) -> Module {
    return Module(new module__class(stmts));
}


auto package_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\package" << std::endl;
    stream << pad(n+2) << "pkg_name: ";
    dump_Symbol_(stream, 0, pkg_name);
}

auto package_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::Package;
}

auto package(Symbol_ pkg_name) -> Statement {
    return Statement(new package_class(pkg_name));
}


auto unit_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\unit_st" << std::endl;
    stream << pad(n+2) << "unit_name: ";
    dump_Symbol_(stream, 0, unit_name);
    if(members){
        stream << pad(n+2) << "members: " << std::endl;
        members->dump(stream, n+4);
    }
}

auto unit_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::UnitSt;
}

auto unit_st(Symbol_ unit_name, StructMembers members) -> Statement {
    return Statement(new unit_st_class(unit_name, members));
}


auto unit_like_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\unit_like_st" << std::endl;
    stream << pad(n+2) << "unit_name: ";
    dump_Symbol_(stream, 0, unit_name);
    stream << pad(n+2) << "base_unit_name: ";
    dump_Symbol_(stream, 0, base_unit_name);
    if(members){
        stream << pad(n+2) << "members: " << std::endl;
        members->dump(stream, n+4);
    }
}

auto unit_like_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::UnitLikeSt;
}

auto unit_like_st(Symbol_ unit_name, Symbol_ base_unit_name, StructMembers members) -> Statement {
    return Statement(new unit_like_st_class(unit_name, base_unit_name, members));
}


auto struct_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_st" << std::endl;
    stream << pad(n+2) << "struct_name: ";
    dump_Symbol_(stream, 0, struct_name);
    if(members){
        stream << pad(n+2) << "members: " << std::endl;
        members->dump(stream, n+4);
    }
}

auto struct_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructSt;
}

auto struct_st(Symbol_ struct_name, StructMembers members) -> Statement {
    return Statement(new struct_st_class(struct_name, members));
}


auto struct_like_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_like_st" << std::endl;
    stream << pad(n+2) << "struct_name: ";
    dump_Symbol_(stream, 0, struct_name);
    stream << pad(n+2) << "base_struct_name: ";
    dump_Symbol_(stream, 0, base_struct_name);
    if(members){
        stream << pad(n+2) << "members: " << std::endl;
        members->dump(stream, n+4);
    }
}

auto struct_like_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructLikeSt;
}

auto struct_like_st(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members) -> Statement {
    return Statement(new struct_like_st_class(struct_name, base_struct_name, members));
}


auto extend_struct_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\extend_struct_st" << std::endl;
    if(struct_type_name){
        stream << pad(n+2) << "struct_type_name: " << std::endl;
        struct_type_name->dump(stream, n+4);
    }
    if(members){
        stream << pad(n+2) << "members: " << std::endl;
        members->dump(stream, n+4);
    }
}

auto extend_struct_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ExtendStructSt;
}

auto extend_struct_st(Expressions struct_type_name, StructMembers members) -> Statement {
    return Statement(new extend_struct_st_class(struct_type_name, members));
}


auto enum_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\enum_type_st" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
}

auto enum_type_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EnumTypeSt;
}

auto enum_type_st(Symbol_ id, DataType type_id) -> Statement {
    return Statement(new enum_type_st_class(id, type_id));
}


auto extend_enum_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\extend_enum_type_st" << std::endl;
    stream << pad(n+2) << "type_id: ";
    dump_Symbol_(stream, 0, type_id);
    if(enum_list_items){
        stream << pad(n+2) << "enum_list_items: " << std::endl;
        enum_list_items->dump(stream, n+4);
    }
}

auto extend_enum_type_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ExtendEnumTypeSt;
}

auto extend_enum_type_st(Symbol_ type_id, Expressions enum_list_items) -> Statement {
    return Statement(new extend_enum_type_st_class(type_id, enum_list_items));
}


auto scalar_subtype_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\scalar_subtype_st" << std::endl;
    stream << pad(n+2) << "subtype_id: ";
    dump_Symbol_(stream, 0, subtype_id);
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
    if(ranges){
        stream << pad(n+2) << "ranges: " << std::endl;
        ranges->dump(stream, n+4);
    }
}

auto scalar_subtype_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ScalarSubtypeSt;
}

auto scalar_subtype_st(Symbol_ subtype_id, Expression type_id, Expressions ranges) -> Statement {
    return Statement(new scalar_subtype_st_class(subtype_id, type_id, ranges));
}


auto scalar_sized_type_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\scalar_sized_type_st" << std::endl;
    stream << pad(n+2) << "type_id: ";
    dump_Symbol_(stream, 0, type_id);
    if(base_type_id){
        stream << pad(n+2) << "base_type_id: " << std::endl;
        base_type_id->dump(stream, n+4);
    }
    if(ranges_expr){
        stream << pad(n+2) << "ranges_expr: " << std::endl;
        ranges_expr->dump(stream, n+4);
    }
    if(width_expr){
        stream << pad(n+2) << "width_expr: " << std::endl;
        width_expr->dump(stream, n+4);
    }
}

auto scalar_sized_type_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ScalarSizedTypeSt;
}

auto scalar_sized_type_st(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr) -> Statement {
    return Statement(new scalar_sized_type_st_class(type_id, base_type_id, ranges_expr, width_expr));
}


auto import_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\import_st" << std::endl;
    if(paths){
        stream << pad(n+2) << "paths: " << std::endl;
        paths->dump(stream, n+4);
    }
    stream << pad(n+2) << "is_cyclic: ";
    dump_Boolean(stream, 0, is_cyclic);
}

auto import_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ImportSt;
}

auto import_st(FilePaths paths, Boolean is_cyclic) -> Statement {
    return Statement(new import_st_class(paths, is_cyclic));
}


auto file_path_fp_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\file_path_fp" << std::endl;
    stream << pad(n+2) << "file_path: ";
    dump_Symbol_(stream, 0, file_path);
}

auto file_path_fp_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FilePathFp;
}

auto file_path_fp(Symbol_ file_path) -> FilePath {
    return FilePath(new file_path_fp_class(file_path));
}


auto virtual_sequence_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\virtual_sequence_st" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(seq_options){
        stream << pad(n+2) << "seq_options: " << std::endl;
        seq_options->dump(stream, n+4);
    }
}

auto virtual_sequence_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::VirtualSequenceSt;
}

auto virtual_sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement {
    return Statement(new virtual_sequence_st_class(id, seq_options));
}


auto sequence_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_st" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(seq_options){
        stream << pad(n+2) << "seq_options: " << std::endl;
        seq_options->dump(stream, n+4);
    }
}

auto sequence_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceSt;
}

auto sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement {
    return Statement(new sequence_st_class(id, seq_options));
}


auto sequence_item_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_item_kind_it" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto sequence_item_kind_it_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceItemKindIt;
}

auto sequence_item_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_item_kind_it_class(id));
}


auto sequence_created_kind_name_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_created_kind_name_it" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto sequence_created_kind_name_it_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceCreatedKindNameIt;
}

auto sequence_created_kind_name_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_created_kind_name_it_class(id));
}


auto sequence_created_driver_name_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_created_driver_name_it" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto sequence_created_driver_name_it_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceCreatedDriverNameIt;
}

auto sequence_created_driver_name_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_created_driver_name_it_class(id));
}


auto sequence_base_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_base_kind_it" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto sequence_base_kind_it_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceBaseKindIt;
}

auto sequence_base_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_base_kind_it_class(id));
}


auto sequence_driver_base_kind_it_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_driver_base_kind_it" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto sequence_driver_base_kind_it_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceDriverBaseKindIt;
}

auto sequence_driver_base_kind_it(Symbol_ id) -> SequenceItem {
    return SequenceItem(new sequence_driver_base_kind_it_class(id));
}


auto define_as_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\define_as_st" << std::endl;
    stream << pad(n+2) << "macro: ";
    dump_Symbol_(stream, 0, macro);
}

auto define_as_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefineAsSt;
}

auto define_as_st(Symbol_ macro) -> Statement {
    return Statement(new define_as_st_class(macro));
}


auto define_as_computed_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\define_as_computed_st" << std::endl;
    stream << pad(n+2) << "macro: ";
    dump_Symbol_(stream, 0, macro);
}

auto define_as_computed_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefineAsComputedSt;
}

auto define_as_computed_st(Symbol_ macro) -> Statement {
    return Statement(new define_as_computed_st_class(macro));
}


auto formal_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\formal" << std::endl;
    stream << pad(n+2) << "name: ";
    dump_Symbol_(stream, 0, name);
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
}

auto formal_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::Formal;
}

auto formal(Symbol_ name, DataType type_) -> Formal {
    return Formal(new formal_class(name, type_));
}


auto c_export_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\c_export_st" << std::endl;
    if(element){
        stream << pad(n+2) << "element: " << std::endl;
        element->dump(stream, n+4);
    }
}

auto c_export_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CExportSt;
}

auto c_export_st(Expression element) -> Statement {
    return Statement(new c_export_st_class(element));
}


auto c_routine_st_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\c_routine_st" << std::endl;
    stream << pad(n+2) << "e_routine_name: ";
    dump_Symbol_(stream, 0, e_routine_name);
    if(parameters_list){
        stream << pad(n+2) << "parameters_list: " << std::endl;
        parameters_list->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    stream << pad(n+2) << "c_routine_name: ";
    dump_Symbol_(stream, 0, c_routine_name);
}

auto c_routine_st_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CRoutineSt;
}

auto c_routine_st(Symbol_ e_routine_name, Formals parameters_list, DataType return_type, Symbol_ c_routine_name) -> Statement {
    return Statement(new c_routine_st_class(e_routine_name, parameters_list, return_type, c_routine_name));
}


auto field_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\field_sm" << std::endl;
    if(field){
        stream << pad(n+2) << "field: " << std::endl;
        field->dump(stream, n+4);
    }
}

auto field_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FieldSm;
}

auto field_sm(FieldStructMember field) -> StructMember {
    return StructMember(new field_sm_class(field));
}


auto struct_field_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_field_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
}

auto struct_field_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructFieldSm;
}

auto struct_field_sm(Symbol_ id, DataType type_) -> FieldStructMember {
    return FieldStructMember(new struct_field_sm_class(id, type_));
}


auto struct_field_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_field_list_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(len_expr){
        stream << pad(n+2) << "len_expr: " << std::endl;
        len_expr->dump(stream, n+4);
    }
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
}

auto struct_field_list_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructFieldListSm;
}

auto struct_field_list_sm(Symbol_ id, Expression len_expr, DataType type_) -> FieldStructMember {
    return FieldStructMember(new struct_field_list_sm_class(id, len_expr, type_));
}


auto struct_field_assoc_list_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_field_assoc_list_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
}

auto struct_field_assoc_list_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructFieldAssocListSm;
}

auto struct_field_assoc_list_sm(Symbol_ id, DataType type_) -> FieldStructMember {
    return FieldStructMember(new struct_field_assoc_list_sm_class(id, type_));
}


auto method_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto method_dec_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecSm;
}

auto method_dec_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_sm_class(id, arguments, return_type, actions_));
}


auto method_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_also_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto method_dec_also_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecAlsoSm;
}

auto method_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_also_sm_class(id, arguments, return_type, actions_));
}


auto method_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_first_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto method_dec_first_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecFirstSm;
}

auto method_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_first_sm_class(id, arguments, return_type, actions_));
}


auto method_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_only_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto method_dec_only_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecOnlySm;
}

auto method_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember {
    return StructMember(new method_dec_only_sm_class(id, arguments, return_type, actions_));
}


auto method_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_empty_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
}

auto method_dec_empty_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecEmptySm;
}

auto method_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember {
    return StructMember(new method_dec_empty_sm_class(id, arguments, return_type));
}


auto method_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_dec_undef_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
}

auto method_dec_undef_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodDecUndefSm;
}

auto method_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember {
    return StructMember(new method_dec_undef_sm_class(id, arguments, return_type));
}


auto tcm_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto tcm_dec_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecSm;
}

auto tcm_dec_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_sm_class(id, arguments, return_type, event_id_expr, actions_));
}


auto tcm_dec_also_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_also_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto tcm_dec_also_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecAlsoSm;
}

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_also_sm_class(id, arguments, return_type, event_id_expr, actions_));
}


auto tcm_dec_first_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_first_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto tcm_dec_first_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecFirstSm;
}

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_first_sm_class(id, arguments, return_type, event_id_expr, actions_));
}


auto tcm_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_only_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
    if(actions_){
        stream << pad(n+2) << "actions_: " << std::endl;
        actions_->dump(stream, n+4);
    }
}

auto tcm_dec_only_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecOnlySm;
}

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember {
    return StructMember(new tcm_dec_only_sm_class(id, arguments, return_type, event_id_expr, actions_));
}


auto tcm_dec_empty_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_empty_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
}

auto tcm_dec_empty_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecEmptySm;
}

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_empty_sm_class(id, arguments, return_type, event_id_expr));
}


auto tcm_dec_undef_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\tcm_dec_undef_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    if(event_id_expr){
        stream << pad(n+2) << "event_id_expr: " << std::endl;
        event_id_expr->dump(stream, n+4);
    }
}

auto tcm_dec_undef_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TcmDecUndefSm;
}

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember {
    return StructMember(new tcm_dec_undef_sm_class(id, arguments, return_type, event_id_expr));
}


auto c_method_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\c_method_dec_sm" << std::endl;
    stream << pad(n+2) << "e_method_name: ";
    dump_Symbol_(stream, 0, e_method_name);
    if(parameters_list){
        stream << pad(n+2) << "parameters_list: " << std::endl;
        parameters_list->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    stream << pad(n+2) << "c_method_name: ";
    dump_Symbol_(stream, 0, c_method_name);
}

auto c_method_dec_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CMethodDecSm;
}

auto c_method_dec_sm(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name) -> StructMember {
    return StructMember(new c_method_dec_sm_class(e_method_name, parameters_list, return_type, c_method_name));
}


auto c_method_dec_only_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\c_method_dec_only_sm" << std::endl;
    stream << pad(n+2) << "e_method_name: ";
    dump_Symbol_(stream, 0, e_method_name);
    if(parameters_list){
        stream << pad(n+2) << "parameters_list: " << std::endl;
        parameters_list->dump(stream, n+4);
    }
    if(return_type){
        stream << pad(n+2) << "return_type: " << std::endl;
        return_type->dump(stream, n+4);
    }
    stream << pad(n+2) << "c_method_name: ";
    dump_Symbol_(stream, 0, c_method_name);
}

auto c_method_dec_only_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CMethodDecOnlySm;
}

auto c_method_dec_only_sm(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name) -> StructMember {
    return StructMember(new c_method_dec_only_sm_class(e_method_name, parameters_list, return_type, c_method_name));
}


auto when_subtype_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\when_subtype_sm" << std::endl;
    if(subtype_mods){
        stream << pad(n+2) << "subtype_mods: " << std::endl;
        subtype_mods->dump(stream, n+4);
    }
    if(subtype_members){
        stream << pad(n+2) << "subtype_members: " << std::endl;
        subtype_members->dump(stream, n+4);
    }
}

auto when_subtype_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WhenSubtypeSm;
}

auto when_subtype_sm(Expressions subtype_mods, StructMembers subtype_members) -> StructMember {
    return StructMember(new when_subtype_sm_class(subtype_mods, subtype_members));
}


auto constraint_def_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\constraint_def_sm" << std::endl;
    if(constraint_expr){
        stream << pad(n+2) << "constraint_expr: " << std::endl;
        constraint_expr->dump(stream, n+4);
    }
}

auto constraint_def_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ConstraintDefSm;
}

auto constraint_def_sm(Expression constraint_expr) -> StructMember {
    return StructMember(new constraint_def_sm_class(constraint_expr));
}


auto on_event_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\on_event_sm" << std::endl;
    if(event_name){
        stream << pad(n+2) << "event_name: " << std::endl;
        event_name->dump(stream, n+4);
    }
    if(action_block){
        stream << pad(n+2) << "action_block: " << std::endl;
        action_block->dump(stream, n+4);
    }
}

auto on_event_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::OnEventSm;
}

auto on_event_sm(Expression event_name, ActionBlock action_block) -> StructMember {
    return StructMember(new on_event_sm_class(event_name, action_block));
}


auto simple_event_dec_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\simple_event_dec_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto simple_event_dec_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SimpleEventDecSm;
}

auto simple_event_dec_sm(Symbol_ id) -> StructMember {
    return StructMember(new simple_event_dec_sm_class(id));
}


auto event_def_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\event_def_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto event_def_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EventDefSm;
}

auto event_def_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_sm_class(id, temporal));
}


auto event_def_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\event_def_override_sm" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto event_def_override_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EventDefOverrideSm;
}

auto event_def_override_sm(Symbol_ id, Expression temporal) -> StructMember {
    return StructMember(new event_def_override_sm_class(id, temporal));
}


auto temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(sample_event){
        stream << pad(n+2) << "sample_event: " << std::endl;
        sample_event->dump(stream, n+4);
    }
}

auto temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TemporalExpr;
}

auto temporal_expr(Expression temporal, Expression sample_event) -> Expression {
    return Expression(new temporal_expr_class(temporal, sample_event));
}


auto sampling_event_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sampling_event_expr" << std::endl;
    if(event_expr){
        stream << pad(n+2) << "event_expr: " << std::endl;
        event_expr->dump(stream, n+4);
    }
}

auto sampling_event_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SamplingEventExpr;
}

auto sampling_event_expr(Expression event_expr) -> Expression {
    return Expression(new sampling_event_expr_class(event_expr));
}


auto event_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\event_ref_expr" << std::endl;
    if(event_name){
        stream << pad(n+2) << "event_name: " << std::endl;
        event_name->dump(stream, n+4);
    }
}

auto event_ref_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EventRefExpr;
}

auto event_ref_expr(Expression event_name) -> Expression {
    return Expression(new event_ref_expr_class(event_name));
}


auto action_attached_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\action_attached_temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto action_attached_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ActionAttachedTemporalExpr;
}

auto action_attached_temporal_expr(Expression temporal, ActionBlock actions) -> Expression {
    return Expression(new action_attached_temporal_expr_class(temporal, actions));
}


auto not_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\not_temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto not_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NotTemporalExpr;
}

auto not_temporal_expr(Expression temporal) -> Expression {
    return Expression(new not_temporal_expr_class(temporal));
}


auto fail_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\fail_temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto fail_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FailTemporalExpr;
}

auto fail_temporal_expr(Expression temporal) -> Expression {
    return Expression(new fail_temporal_expr_class(temporal));
}


auto eventually_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\eventually_temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto eventually_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EventuallyTemporalExpr;
}

auto eventually_temporal_expr(Expression temporal) -> Expression {
    return Expression(new eventually_temporal_expr_class(temporal));
}


auto detach_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\detach_temporal_expr" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto detach_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DetachTemporalExpr;
}

auto detach_temporal_expr(Expression temporal) -> Expression {
    return Expression(new detach_temporal_expr_class(temporal));
}


auto yield_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\yield_temporal_expr" << std::endl;
    if(trigger){
        stream << pad(n+2) << "trigger: " << std::endl;
        trigger->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto yield_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::YieldTemporalExpr;
}

auto yield_temporal_expr(Expression trigger, Expression temporal) -> Expression {
    return Expression(new yield_temporal_expr_class(trigger, temporal));
}


auto true_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\true_temporal_expr" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
}

auto true_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TrueTemporalExpr;
}

auto true_temporal_expr(Expression bool_expr) -> Expression {
    return Expression(new true_temporal_expr_class(bool_expr));
}


auto rise_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\rise_temporal_expr" << std::endl;
    if(hdl_path){
        stream << pad(n+2) << "hdl_path: " << std::endl;
        hdl_path->dump(stream, n+4);
    }
}

auto rise_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RiseTemporalExpr;
}

auto rise_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new rise_temporal_expr_class(hdl_path));
}


auto fall_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\fall_temporal_expr" << std::endl;
    if(hdl_path){
        stream << pad(n+2) << "hdl_path: " << std::endl;
        hdl_path->dump(stream, n+4);
    }
}

auto fall_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FallTemporalExpr;
}

auto fall_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new fall_temporal_expr_class(hdl_path));
}


auto change_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\change_temporal_expr" << std::endl;
    if(hdl_path){
        stream << pad(n+2) << "hdl_path: " << std::endl;
        hdl_path->dump(stream, n+4);
    }
}

auto change_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ChangeTemporalExpr;
}

auto change_temporal_expr(Expression hdl_path) -> Expression {
    return Expression(new change_temporal_expr_class(hdl_path));
}


auto and_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\and_temporal_expr" << std::endl;
    if(te1){
        stream << pad(n+2) << "te1: " << std::endl;
        te1->dump(stream, n+4);
    }
    if(te2){
        stream << pad(n+2) << "te2: " << std::endl;
        te2->dump(stream, n+4);
    }
}

auto and_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AndTemporalExpr;
}

auto and_temporal_expr(Expression te1, Expression te2) -> Expression {
    return Expression(new and_temporal_expr_class(te1, te2));
}


auto or_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\or_temporal_expr" << std::endl;
    if(te1){
        stream << pad(n+2) << "te1: " << std::endl;
        te1->dump(stream, n+4);
    }
    if(te2){
        stream << pad(n+2) << "te2: " << std::endl;
        te2->dump(stream, n+4);
    }
}

auto or_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::OrTemporalExpr;
}

auto or_temporal_expr(Expression te1, Expression te2) -> Expression {
    return Expression(new or_temporal_expr_class(te1, te2));
}


auto sequence_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sequence_temporal_expr" << std::endl;
    if(temporals){
        stream << pad(n+2) << "temporals: " << std::endl;
        temporals->dump(stream, n+4);
    }
}

auto sequence_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SequenceTemporalExpr;
}

auto sequence_temporal_expr(Expressions temporals) -> Expression {
    return Expression(new sequence_temporal_expr_class(temporals));
}


auto fixed_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\fixed_repetition_expr" << std::endl;
    if(rep){
        stream << pad(n+2) << "rep: " << std::endl;
        rep->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto fixed_repetition_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FixedRepetitionExpr;
}

auto fixed_repetition_expr(Expression rep, Expression temporal) -> Expression {
    return Expression(new fixed_repetition_expr_class(rep, temporal));
}


auto first_match_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\first_match_repetition_expr" << std::endl;
    if(from_rep){
        stream << pad(n+2) << "from_rep: " << std::endl;
        from_rep->dump(stream, n+4);
    }
    if(to_rep){
        stream << pad(n+2) << "to_rep: " << std::endl;
        to_rep->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(match_temporal){
        stream << pad(n+2) << "match_temporal: " << std::endl;
        match_temporal->dump(stream, n+4);
    }
}

auto first_match_repetition_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FirstMatchRepetitionExpr;
}

auto first_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal) -> Expression {
    return Expression(new first_match_repetition_expr_class(from_rep, to_rep, temporal, match_temporal));
}


auto true_match_repetition_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\true_match_repetition_expr" << std::endl;
    if(from_rep){
        stream << pad(n+2) << "from_rep: " << std::endl;
        from_rep->dump(stream, n+4);
    }
    if(to_rep){
        stream << pad(n+2) << "to_rep: " << std::endl;
        to_rep->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
}

auto true_match_repetition_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TrueMatchRepetitionExpr;
}

auto true_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal) -> Expression {
    return Expression(new true_match_repetition_expr_class(from_rep, to_rep, temporal));
}


auto zero_repetition_base_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\zero_repetition_base_expr" << std::endl;
}

auto zero_repetition_base_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ZeroRepetitionBaseExpr;
}

auto zero_repetition_base_expr() -> Expression {
    return Expression(new zero_repetition_base_expr_class());
}


auto inf_repetition_base_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\inf_repetition_base_expr" << std::endl;
}

auto inf_repetition_base_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::InfRepetitionBaseExpr;
}

auto inf_repetition_base_expr() -> Expression {
    return Expression(new inf_repetition_base_expr_class());
}


auto cycle_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\cycle_temporal_expr" << std::endl;
}

auto cycle_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CycleTemporalExpr;
}

auto cycle_temporal_expr() -> Expression {
    return Expression(new cycle_temporal_expr_class());
}


auto delay_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\delay_temporal_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
    if(timescale_unit){
        stream << pad(n+2) << "timescale_unit: " << std::endl;
        timescale_unit->dump(stream, n+4);
    }
}

auto delay_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DelayTemporalExpr;
}

auto delay_temporal_expr(Expression e, Expression timescale_unit) -> Expression {
    return Expression(new delay_temporal_expr_class(e, timescale_unit));
}


auto consume_temporal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\consume_temporal_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
}

auto consume_temporal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ConsumeTemporalExpr;
}

auto consume_temporal_expr(Expression e) -> Expression {
    return Expression(new consume_temporal_expr_class(e));
}


auto expect_nameless_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\expect_nameless_sm" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto expect_nameless_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ExpectNamelessSm;
}

auto expect_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_nameless_sm_class(temporal, dut_error_call));
}


auto expect_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\expect_sm" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto expect_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ExpectSm;
}

auto expect_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_sm_class(id, temporal, dut_error_call));
}


auto expect_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\expect_override_sm" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto expect_override_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ExpectOverrideSm;
}

auto expect_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new expect_override_sm_class(id, temporal, dut_error_call));
}


auto assume_nameless_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\assume_nameless_sm" << std::endl;
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto assume_nameless_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AssumeNamelessSm;
}

auto assume_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_nameless_sm_class(temporal, dut_error_call));
}


auto assume_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\assume_sm" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto assume_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AssumeSm;
}

auto assume_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_sm_class(id, temporal, dut_error_call));
}


auto assume_override_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\assume_override_sm" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(temporal){
        stream << pad(n+2) << "temporal: " << std::endl;
        temporal->dump(stream, n+4);
    }
    if(dut_error_call){
        stream << pad(n+2) << "dut_error_call: " << std::endl;
        dut_error_call->dump(stream, n+4);
    }
}

auto assume_override_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AssumeOverrideSm;
}

auto assume_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember {
    return StructMember(new assume_override_sm_class(id, temporal, dut_error_call));
}


auto empty_covergroup_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\empty_covergroup_sm" << std::endl;
    stream << pad(n+2) << "event_id: ";
    dump_Symbol_(stream, 0, event_id);
}

auto empty_covergroup_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EmptyCovergroupSm;
}

auto empty_covergroup_sm(Symbol_ event_id) -> StructMember {
    return StructMember(new empty_covergroup_sm_class(event_id));
}


auto covergroup_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\covergroup_sm" << std::endl;
    stream << pad(n+2) << "event_id: ";
    dump_Symbol_(stream, 0, event_id);
    if(cg_opts){
        stream << pad(n+2) << "cg_opts: " << std::endl;
        cg_opts->dump(stream, n+4);
    }
    if(cg_items){
        stream << pad(n+2) << "cg_items: " << std::endl;
        cg_items->dump(stream, n+4);
    }
}

auto covergroup_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CovergroupSm;
}

auto covergroup_sm(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember {
    return StructMember(new covergroup_sm_class(event_id, cg_opts, cg_items));
}


auto covergroup_extension_sm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\covergroup_extension_sm" << std::endl;
    stream << pad(n+2) << "event_id: ";
    dump_Symbol_(stream, 0, event_id);
    if(instance_id){
        stream << pad(n+2) << "instance_id: " << std::endl;
        instance_id->dump(stream, n+4);
    }
    if(cg_opts){
        stream << pad(n+2) << "cg_opts: " << std::endl;
        cg_opts->dump(stream, n+4);
    }
    if(cg_items){
        stream << pad(n+2) << "cg_items: " << std::endl;
        cg_items->dump(stream, n+4);
    }
}

auto covergroup_extension_sm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CovergroupExtensionSm;
}

auto covergroup_extension_sm(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember {
    return StructMember(new covergroup_extension_sm_class(event_id, instance_id, cg_opts, cg_items));
}


auto covergroup_per_type_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\covergroup_per_type_ceid" << std::endl;
}

auto covergroup_per_type_ceid_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CovergroupPerTypeCeid;
}

auto covergroup_per_type_ceid() -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_type_ceid_class());
}


auto covergroup_per_unit_instance_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\covergroup_per_unit_instance_ceid" << std::endl;
    if(e_path){
        stream << pad(n+2) << "e_path: " << std::endl;
        e_path->dump(stream, n+4);
    }
}

auto covergroup_per_unit_instance_ceid_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CovergroupPerUnitInstanceCeid;
}

auto covergroup_per_unit_instance_ceid(Expression e_path) -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_unit_instance_ceid_class(e_path));
}


auto covergroup_per_instance_ceid_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\covergroup_per_instance_ceid" << std::endl;
    stream << pad(n+2) << "item_name: ";
    dump_Symbol_(stream, 0, item_name);
    stream << pad(n+2) << "bucket_name: ";
    dump_Symbol_(stream, 0, bucket_name);
}

auto covergroup_per_instance_ceid_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CovergroupPerInstanceCeid;
}

auto covergroup_per_instance_ceid(Symbol_ item_name, Symbol_ bucket_name) -> CovergroupExtensionID {
    return CovergroupExtensionID(new covergroup_per_instance_ceid_class(item_name, bucket_name));
}


auto global_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\global_cgo" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto global_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::GlobalCgo;
}

auto global_cgo(Expression bool_litral) -> CovergroupOption {
    return CovergroupOption(new global_cgo_class(bool_litral));
}


auto no_collect_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\no_collect_cgo" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto no_collect_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NoCollectCgo;
}

auto no_collect_cgo(Expression bool_litral) -> CovergroupOption {
    return CovergroupOption(new no_collect_cgo_class(bool_litral));
}


auto per_unit_instance_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\per_unit_instance_cgo" << std::endl;
    if(hier_id){
        stream << pad(n+2) << "hier_id: " << std::endl;
        hier_id->dump(stream, n+4);
    }
}

auto per_unit_instance_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::PerUnitInstanceCgo;
}

auto per_unit_instance_cgo(Expression hier_id) -> CovergroupOption {
    return CovergroupOption(new per_unit_instance_cgo_class(hier_id));
}


auto radix_dec_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_dec_cgo" << std::endl;
}

auto radix_dec_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixDecCgo;
}

auto radix_dec_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_dec_cgo_class());
}


auto radix_hex_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_hex_cgo" << std::endl;
}

auto radix_hex_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixHexCgo;
}

auto radix_hex_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_hex_cgo_class());
}


auto radix_bin_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_bin_cgo" << std::endl;
}

auto radix_bin_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixBinCgo;
}

auto radix_bin_cgo() -> CovergroupOption {
    return CovergroupOption(new radix_bin_cgo_class());
}


auto text_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\text_cgo" << std::endl;
    stream << pad(n+2) << "description: ";
    dump_Symbol_(stream, 0, description);
}

auto text_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TextCgo;
}

auto text_cgo(Symbol_ description) -> CovergroupOption {
    return CovergroupOption(new text_cgo_class(description));
}


auto weight_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\weight_cgo" << std::endl;
    stream << pad(n+2) << "value: ";
    dump_Symbol_(stream, 0, value);
}

auto weight_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WeightCgo;
}

auto weight_cgo(Symbol_ value) -> CovergroupOption {
    return CovergroupOption(new weight_cgo_class(value));
}


auto when_cgo_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\when_cgo" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
}

auto when_cgo_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WhenCgo;
}

auto when_cgo(Expression bool_expr) -> CovergroupOption {
    return CovergroupOption(new when_cgo_class(bool_expr));
}


auto simple_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\simple_covergroup_item_cgi" << std::endl;
    stream << pad(n+2) << "item_id: ";
    dump_Symbol_(stream, 0, item_id);
    if(cgi_options){
        stream << pad(n+2) << "cgi_options: " << std::endl;
        cgi_options->dump(stream, n+4);
    }
}

auto simple_covergroup_item_cgi_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SimpleCovergroupItemCgi;
}

auto simple_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new simple_covergroup_item_cgi_class(item_id, cgi_options));
}


auto on_the_fly_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\on_the_fly_covergroup_item_cgi" << std::endl;
    stream << pad(n+2) << "item_id: ";
    dump_Symbol_(stream, 0, item_id);
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
    if(sampled_val){
        stream << pad(n+2) << "sampled_val: " << std::endl;
        sampled_val->dump(stream, n+4);
    }
    if(cgi_options){
        stream << pad(n+2) << "cgi_options: " << std::endl;
        cgi_options->dump(stream, n+4);
    }
}

auto on_the_fly_covergroup_item_cgi_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::OnTheFlyCovergroupItemCgi;
}

auto on_the_fly_covergroup_item_cgi(Symbol_ item_id, DataType type_, Expression sampled_val, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new on_the_fly_covergroup_item_cgi_class(item_id, type_, sampled_val, cgi_options));
}


auto cross_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\cross_covergroup_item_cgi" << std::endl;
    if(cg_items){
        stream << pad(n+2) << "cg_items: " << std::endl;
        cg_items->dump(stream, n+4);
    }
    if(cgi_options){
        stream << pad(n+2) << "cgi_options: " << std::endl;
        cgi_options->dump(stream, n+4);
    }
}

auto cross_covergroup_item_cgi_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CrossCovergroupItemCgi;
}

auto cross_covergroup_item_cgi(Expressions cg_items, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new cross_covergroup_item_cgi_class(cg_items, cgi_options));
}


auto transition_covergroup_item_cgi_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\transition_covergroup_item_cgi" << std::endl;
    stream << pad(n+2) << "item_id: ";
    dump_Symbol_(stream, 0, item_id);
    if(cgi_options){
        stream << pad(n+2) << "cgi_options: " << std::endl;
        cgi_options->dump(stream, n+4);
    }
}

auto transition_covergroup_item_cgi_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TransitionCovergroupItemCgi;
}

auto transition_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem {
    return CovergroupItem(new transition_covergroup_item_cgi_class(item_id, cgi_options));
}


auto at_least_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\at_least_cgio" << std::endl;
    stream << pad(n+2) << "num: ";
    dump_Symbol_(stream, 0, num);
}

auto at_least_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AtLeastCgio;
}

auto at_least_cgio(Symbol_ num) -> CovergroupItemOption {
    return CovergroupItemOption(new at_least_cgio_class(num));
}


auto ignore_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\ignore_cgio" << std::endl;
    if(item_bool_expr){
        stream << pad(n+2) << "item_bool_expr: " << std::endl;
        item_bool_expr->dump(stream, n+4);
    }
}

auto ignore_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IgnoreCgio;
}

auto ignore_cgio(Expression item_bool_expr) -> CovergroupItemOption {
    return CovergroupItemOption(new ignore_cgio_class(item_bool_expr));
}


auto illegal_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\illegal_cgio" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto illegal_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IllegalCgio;
}

auto illegal_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new illegal_cgio_class(bool_litral));
}


auto no_collect_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\no_collect_cgio" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto no_collect_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NoCollectCgio;
}

auto no_collect_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new no_collect_cgio_class(bool_litral));
}


auto no_trace_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\no_trace_cgio" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto no_trace_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NoTraceCgio;
}

auto no_trace_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new no_trace_cgio_class(bool_litral));
}


auto num_of_buckets_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\num_of_buckets_cgio" << std::endl;
    stream << pad(n+2) << "num: ";
    dump_Symbol_(stream, 0, num);
}

auto num_of_buckets_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NumOfBucketsCgio;
}

auto num_of_buckets_cgio(Symbol_ num) -> CovergroupItemOption {
    return CovergroupItemOption(new num_of_buckets_cgio_class(num));
}


auto per_instance_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\per_instance_cgio" << std::endl;
    if(bool_litral){
        stream << pad(n+2) << "bool_litral: " << std::endl;
        bool_litral->dump(stream, n+4);
    }
}

auto per_instance_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::PerInstanceCgio;
}

auto per_instance_cgio(Expression bool_litral) -> CovergroupItemOption {
    return CovergroupItemOption(new per_instance_cgio_class(bool_litral));
}


auto radix_dec_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_dec_cgio" << std::endl;
}

auto radix_dec_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixDecCgio;
}

auto radix_dec_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_dec_cgio_class());
}


auto radix_hex_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_hex_cgio" << std::endl;
}

auto radix_hex_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixHexCgio;
}

auto radix_hex_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_hex_cgio_class());
}


auto radix_bin_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\radix_bin_cgio" << std::endl;
}

auto radix_bin_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RadixBinCgio;
}

auto radix_bin_cgio() -> CovergroupItemOption {
    return CovergroupItemOption(new radix_bin_cgio_class());
}


auto text_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\text_cgio" << std::endl;
    stream << pad(n+2) << "description: ";
    dump_Symbol_(stream, 0, description);
}

auto text_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TextCgio;
}

auto text_cgio(Symbol_ description) -> CovergroupItemOption {
    return CovergroupItemOption(new text_cgio_class(description));
}


auto weight_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\weight_cgio" << std::endl;
    stream << pad(n+2) << "value: ";
    dump_Symbol_(stream, 0, value);
}

auto weight_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WeightCgio;
}

auto weight_cgio(Symbol_ value) -> CovergroupItemOption {
    return CovergroupItemOption(new weight_cgio_class(value));
}


auto when_cgio_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\when_cgio" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
}

auto when_cgio_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WhenCgio;
}

auto when_cgio(Expression bool_expr) -> CovergroupItemOption {
    return CovergroupItemOption(new when_cgio_class(bool_expr));
}


auto true_literal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\true_literal_expr" << std::endl;
}

auto true_literal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TrueLiteralExpr;
}

auto true_literal_expr() -> Expression {
    return Expression(new true_literal_expr_class());
}


auto false_literal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\false_literal_expr" << std::endl;
}

auto false_literal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FalseLiteralExpr;
}

auto false_literal_expr() -> Expression {
    return Expression(new false_literal_expr_class());
}


auto id_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\id_expr" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
}

auto id_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IdExpr;
}

auto id_expr(Symbol_ id) -> Expression {
    return Expression(new id_expr_class(id));
}


auto enum_type_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\enum_type_expr" << std::endl;
    if(enum_list_expr){
        stream << pad(n+2) << "enum_list_expr: " << std::endl;
        enum_list_expr->dump(stream, n+4);
    }
    if(width_modifier_expr){
        stream << pad(n+2) << "width_modifier_expr: " << std::endl;
        width_modifier_expr->dump(stream, n+4);
    }
}

auto enum_type_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EnumTypeExpr;
}

auto enum_type_expr(Expressions enum_list_expr, Expression width_modifier_expr) -> Expression {
    return Expression(new enum_type_expr_class(enum_list_expr, width_modifier_expr));
}


auto enum_list_item_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\enum_list_item" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(expr){
        stream << pad(n+2) << "expr: " << std::endl;
        expr->dump(stream, n+4);
    }
}

auto enum_list_item_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EnumListItem;
}

auto enum_list_item(Symbol_ id, Expression expr) -> Expression {
    return Expression(new enum_list_item_class(id, expr));
}


auto bitwise_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bitwise_not_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
}

auto bitwise_not_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitwiseNotExpr;
}

auto bitwise_not_expr(Expression e) -> Expression {
    return Expression(new bitwise_not_expr_class(e));
}


auto bitwise_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bitwise_and_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto bitwise_and_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitwiseAndExpr;
}

auto bitwise_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_and_expr_class(e1, e2));
}


auto bitwise_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bitwise_or_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto bitwise_or_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitwiseOrExpr;
}

auto bitwise_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_or_expr_class(e1, e2));
}


auto bitwise_xor_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bitwise_xor_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto bitwise_xor_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitwiseXorExpr;
}

auto bitwise_xor_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new bitwise_xor_expr_class(e1, e2));
}


auto shift_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\shift_left_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto shift_left_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ShiftLeftExpr;
}

auto shift_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new shift_left_expr_class(e1, e2));
}


auto right_left_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\right_left_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto right_left_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RightLeftExpr;
}

auto right_left_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new right_left_expr_class(e1, e2));
}


auto logical_not_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\logical_not_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
}

auto logical_not_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::LogicalNotExpr;
}

auto logical_not_expr(Expression e) -> Expression {
    return Expression(new logical_not_expr_class(e));
}


auto logical_and_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\logical_and_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto logical_and_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::LogicalAndExpr;
}

auto logical_and_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_and_expr_class(e1, e2));
}


auto logical_or_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\logical_or_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto logical_or_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::LogicalOrExpr;
}

auto logical_or_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new logical_or_expr_class(e1, e2));
}


auto implication_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\implication_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto implication_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ImplicationExpr;
}

auto implication_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new implication_expr_class(e1, e2));
}


auto unary_positive_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\unary_positive_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
}

auto unary_positive_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::UnaryPositiveExpr;
}

auto unary_positive_expr(Expression e) -> Expression {
    return Expression(new unary_positive_expr_class(e));
}


auto unary_negative_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\unary_negative_expr" << std::endl;
    if(e){
        stream << pad(n+2) << "e: " << std::endl;
        e->dump(stream, n+4);
    }
}

auto unary_negative_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::UnaryNegativeExpr;
}

auto unary_negative_expr(Expression e) -> Expression {
    return Expression(new unary_negative_expr_class(e));
}


auto binary_add_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\binary_add_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto binary_add_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BinaryAddExpr;
}

auto binary_add_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_add_expr_class(e1, e2));
}


auto binary_sub_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\binary_sub_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto binary_sub_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BinarySubExpr;
}

auto binary_sub_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_sub_expr_class(e1, e2));
}


auto binary_mul_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\binary_mul_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto binary_mul_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BinaryMulExpr;
}

auto binary_mul_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_mul_expr_class(e1, e2));
}


auto binary_div_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\binary_div_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto binary_div_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BinaryDivExpr;
}

auto binary_div_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_div_expr_class(e1, e2));
}


auto binary_remainder_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\binary_remainder_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto binary_remainder_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BinaryRemainderExpr;
}

auto binary_remainder_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new binary_remainder_expr_class(e1, e2));
}


auto less_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\less_then_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto less_then_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::LessThenExpr;
}

auto less_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_expr_class(e1, e2));
}


auto greater_then_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\greater_then_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto greater_then_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::GreaterThenExpr;
}

auto greater_then_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_expr_class(e1, e2));
}


auto less_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\less_then_or_equal_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto less_then_or_equal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::LessThenOrEqualExpr;
}

auto less_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new less_then_or_equal_expr_class(e1, e2));
}


auto greater_then_or_equal_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\greater_then_or_equal_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto greater_then_or_equal_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::GreaterThenOrEqualExpr;
}

auto greater_then_or_equal_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new greater_then_or_equal_expr_class(e1, e2));
}


auto equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\equality_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto equality_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EqualityExpr;
}

auto equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new equality_expr_class(e1, e2));
}


auto non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\non_equality_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto non_equality_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NonEqualityExpr;
}

auto non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new non_equality_expr_class(e1, e2));
}


auto hdl_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\hdl_equality_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto hdl_equality_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::HdlEqualityExpr;
}

auto hdl_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_equality_expr_class(e1, e2));
}


auto hdl_non_equality_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\hdl_non_equality_expr" << std::endl;
    if(e1){
        stream << pad(n+2) << "e1: " << std::endl;
        e1->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto hdl_non_equality_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::HdlNonEqualityExpr;
}

auto hdl_non_equality_expr(Expression e1, Expression e2) -> Expression {
    return Expression(new hdl_non_equality_expr_class(e1, e2));
}


auto str_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\str_match_expr" << std::endl;
    if(str_expr){
        stream << pad(n+2) << "str_expr: " << std::endl;
        str_expr->dump(stream, n+4);
    }
    if(pattern_expr){
        stream << pad(n+2) << "pattern_expr: " << std::endl;
        pattern_expr->dump(stream, n+4);
    }
}

auto str_match_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StrMatchExpr;
}

auto str_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_match_expr_class(str_expr, pattern_expr));
}


auto str_does_not_match_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\str_does_not_match_expr" << std::endl;
    if(str_expr){
        stream << pad(n+2) << "str_expr: " << std::endl;
        str_expr->dump(stream, n+4);
    }
    if(pattern_expr){
        stream << pad(n+2) << "pattern_expr: " << std::endl;
        pattern_expr->dump(stream, n+4);
    }
}

auto str_does_not_match_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StrDoesNotMatchExpr;
}

auto str_does_not_match_expr(Expression str_expr, Expression pattern_expr) -> Expression {
    return Expression(new str_does_not_match_expr_class(str_expr, pattern_expr));
}


auto in_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\in_expr" << std::endl;
    if(exp){
        stream << pad(n+2) << "exp: " << std::endl;
        exp->dump(stream, n+4);
    }
    if(inside){
        stream << pad(n+2) << "inside: " << std::endl;
        inside->dump(stream, n+4);
    }
}

auto in_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::InExpr;
}

auto in_expr(Expression exp, Expression inside) -> Expression {
    return Expression(new in_expr_class(exp, inside));
}


auto type_introspec_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\type_introspec_expr" << std::endl;
    if(field_id){
        stream << pad(n+2) << "field_id: " << std::endl;
        field_id->dump(stream, n+4);
    }
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
}

auto type_introspec_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TypeIntrospecExpr;
}

auto type_introspec_expr(Expression field_id, DataType type_id) -> Expression {
    return Expression(new type_introspec_expr_class(field_id, type_id));
}


auto type_introspec_negation_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\type_introspec_negation_expr" << std::endl;
    if(field_id){
        stream << pad(n+2) << "field_id: " << std::endl;
        field_id->dump(stream, n+4);
    }
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
}

auto type_introspec_negation_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TypeIntrospecNegationExpr;
}

auto type_introspec_negation_expr(Expression field_id, DataType type_id) -> Expression {
    return Expression(new type_introspec_negation_expr_class(field_id, type_id));
}


auto in_enum_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\in_enum_expr" << std::endl;
    if(exp){
        stream << pad(n+2) << "exp: " << std::endl;
        exp->dump(stream, n+4);
    }
    if(inside){
        stream << pad(n+2) << "inside: " << std::endl;
        inside->dump(stream, n+4);
    }
}

auto in_enum_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::InEnumExpr;
}

auto in_enum_expr(Expression exp, DataType inside) -> Expression {
    return Expression(new in_enum_expr_class(exp, inside));
}


auto list_index_item_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_index_item_expr" << std::endl;
    if(idx_expr){
        stream << pad(n+2) << "idx_expr: " << std::endl;
        idx_expr->dump(stream, n+4);
    }
}

auto list_index_item_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListIndexItemExpr;
}

auto list_index_item_expr(Expression idx_expr) -> Expression {
    return Expression(new list_index_item_expr_class(idx_expr));
}


auto list_index_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_index_expr" << std::endl;
    if(base_id){
        stream << pad(n+2) << "base_id: " << std::endl;
        base_id->dump(stream, n+4);
    }
    if(idx_expr){
        stream << pad(n+2) << "idx_expr: " << std::endl;
        idx_expr->dump(stream, n+4);
    }
}

auto list_index_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListIndexExpr;
}

auto list_index_expr(Expression base_id, Expression idx_expr) -> Expression {
    return Expression(new list_index_expr_class(base_id, idx_expr));
}


auto list_slicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_slicing_expr" << std::endl;
    if(list_exp){
        stream << pad(n+2) << "list_exp: " << std::endl;
        list_exp->dump(stream, n+4);
    }
    if(range_expr){
        stream << pad(n+2) << "range_expr: " << std::endl;
        range_expr->dump(stream, n+4);
    }
}

auto list_slicing_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListSlicingExpr;
}

auto list_slicing_expr(Expression list_exp, Expression range_expr) -> Expression {
    return Expression(new list_slicing_expr_class(list_exp, range_expr));
}


auto bit_slicing_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bit_slicing_expr" << std::endl;
    if(list_exp){
        stream << pad(n+2) << "list_exp: " << std::endl;
        list_exp->dump(stream, n+4);
    }
    if(bit_slice_expr){
        stream << pad(n+2) << "bit_slice_expr: " << std::endl;
        bit_slice_expr->dump(stream, n+4);
    }
}

auto bit_slicing_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitSlicingExpr;
}

auto bit_slicing_expr(Expression list_exp, Expression bit_slice_expr) -> Expression {
    return Expression(new bit_slicing_expr_class(list_exp, bit_slice_expr));
}


auto list_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_concat_expr" << std::endl;
    if(list_concat_items){
        stream << pad(n+2) << "list_concat_items: " << std::endl;
        list_concat_items->dump(stream, n+4);
    }
}

auto list_concat_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListConcatExpr;
}

auto list_concat_expr(Expressions list_concat_items) -> Expression {
    return Expression(new list_concat_expr_class(list_concat_items));
}


auto bit_concat_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bit_concat_expr" << std::endl;
    if(bit_concat_items){
        stream << pad(n+2) << "bit_concat_items: " << std::endl;
        bit_concat_items->dump(stream, n+4);
    }
}

auto bit_concat_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitConcatExpr;
}

auto bit_concat_expr(Expressions bit_concat_items) -> Expression {
    return Expression(new bit_concat_expr_class(bit_concat_items));
}


auto bit_slice_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bit_slice_expr" << std::endl;
    if(bottom){
        stream << pad(n+2) << "bottom: " << std::endl;
        bottom->dump(stream, n+4);
    }
    if(top){
        stream << pad(n+2) << "top: " << std::endl;
        top->dump(stream, n+4);
    }
}

auto bit_slice_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitSliceExpr;
}

auto bit_slice_expr(Expression bottom, Expression top) -> Expression {
    return Expression(new bit_slice_expr_class(bottom, top));
}


auto range_modifier_item_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\range_modifier_item_expr" << std::endl;
    if(bottom){
        stream << pad(n+2) << "bottom: " << std::endl;
        bottom->dump(stream, n+4);
    }
    if(top){
        stream << pad(n+2) << "top: " << std::endl;
        top->dump(stream, n+4);
    }
}

auto range_modifier_item_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RangeModifierItemExpr;
}

auto range_modifier_item_expr(Expression bottom, Expression top) -> Expression {
    return Expression(new range_modifier_item_expr_class(bottom, top));
}


auto range_modifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\range_modifier_expr" << std::endl;
    if(range_items){
        stream << pad(n+2) << "range_items: " << std::endl;
        range_items->dump(stream, n+4);
    }
}

auto range_modifier_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RangeModifierExpr;
}

auto range_modifier_expr(Expressions range_items) -> Expression {
    return Expression(new range_modifier_expr_class(range_items));
}


auto ranges_modifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\ranges_modifier_expr" << std::endl;
    if(ranges){
        stream << pad(n+2) << "ranges: " << std::endl;
        ranges->dump(stream, n+4);
    }
}

auto ranges_modifier_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RangesModifierExpr;
}

auto ranges_modifier_expr(Expressions ranges) -> Expression {
    return Expression(new ranges_modifier_expr_class(ranges));
}


auto sized_bits_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sized_bits_scalar_expr" << std::endl;
    if(width_expr){
        stream << pad(n+2) << "width_expr: " << std::endl;
        width_expr->dump(stream, n+4);
    }
}

auto sized_bits_scalar_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SizedBitsScalarExpr;
}

auto sized_bits_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bits_scalar_expr_class(width_expr));
}


auto sized_bytes_scalar_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sized_bytes_scalar_expr" << std::endl;
    if(width_expr){
        stream << pad(n+2) << "width_expr: " << std::endl;
        width_expr->dump(stream, n+4);
    }
}

auto sized_bytes_scalar_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SizedBytesScalarExpr;
}

auto sized_bytes_scalar_expr(Expression width_expr) -> Expression {
    return Expression(new sized_bytes_scalar_expr_class(width_expr));
}


auto new_allocate_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\new_allocate_expr" << std::endl;
    if(struct_type_block){
        stream << pad(n+2) << "struct_type_block: " << std::endl;
        struct_type_block->dump(stream, n+4);
    }
    stream << pad(n+2) << "scoped_name: ";
    dump_Symbol_(stream, 0, scoped_name);
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto new_allocate_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NewAllocateExpr;
}

auto new_allocate_expr(Expression struct_type_block, Symbol_ scoped_name, ActionBlock actions) -> Expression {
    return Expression(new new_allocate_expr_class(struct_type_block, scoped_name, actions));
}


auto new_nameless_allocate_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\new_nameless_allocate_expr" << std::endl;
    if(struct_type_block){
        stream << pad(n+2) << "struct_type_block: " << std::endl;
        struct_type_block->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto new_nameless_allocate_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NewNamelessAllocateExpr;
}

auto new_nameless_allocate_expr(Expression struct_type_block, ActionBlock actions) -> Expression {
    return Expression(new new_nameless_allocate_expr_class(struct_type_block, actions));
}


auto struct_type_expr_with_opt_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_type_expr_with_opt_action_block" << std::endl;
    if(struct_id_expr){
        stream << pad(n+2) << "struct_id_expr: " << std::endl;
        struct_id_expr->dump(stream, n+4);
    }
    if(opt_action_block_expt){
        stream << pad(n+2) << "opt_action_block_expt: " << std::endl;
        opt_action_block_expt->dump(stream, n+4);
    }
}

auto struct_type_expr_with_opt_action_block_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructTypeExprWithOptActionBlock;
}

auto struct_type_expr_with_opt_action_block(Expression struct_id_expr, Expression opt_action_block_expt) -> Expression {
    return Expression(new struct_type_expr_with_opt_action_block_class(struct_id_expr, opt_action_block_expt));
}


auto named_action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\named_action_block" << std::endl;
    if(struct_id_expr){
        stream << pad(n+2) << "struct_id_expr: " << std::endl;
        struct_id_expr->dump(stream, n+4);
    }
    if(action_block){
        stream << pad(n+2) << "action_block: " << std::endl;
        action_block->dump(stream, n+4);
    }
}

auto named_action_block_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NamedActionBlock;
}

auto named_action_block(Expression struct_id_expr, Actions action_block) -> Expression {
    return Expression(new named_action_block_class(struct_id_expr, action_block));
}


auto struct_type_id_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_type_id" << std::endl;
    if(struct_type_modifiers){
        stream << pad(n+2) << "struct_type_modifiers: " << std::endl;
        struct_type_modifiers->dump(stream, n+4);
    }
    if(struct_id_expr){
        stream << pad(n+2) << "struct_id_expr: " << std::endl;
        struct_id_expr->dump(stream, n+4);
    }
}

auto struct_type_id_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructTypeId;
}

auto struct_type_id(Expressions struct_type_modifiers, Expression struct_id_expr) -> Expression {
    return Expression(new struct_type_id_class(struct_type_modifiers, struct_id_expr));
}


auto struct_type_modifier_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_type_modifier" << std::endl;
    if(value){
        stream << pad(n+2) << "value: " << std::endl;
        value->dump(stream, n+4);
    }
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
}

auto struct_type_modifier_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructTypeModifier;
}

auto struct_type_modifier(Expression value, Expression id) -> Expression {
    return Expression(new struct_type_modifier_class(value, id));
}


auto defined_type_identifier_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\defined_type_identifier_expr" << std::endl;
    if(modifiers){
        stream << pad(n+2) << "modifiers: " << std::endl;
        modifiers->dump(stream, n+4);
    }
}

auto defined_type_identifier_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefinedTypeIdentifierExpr;
}

auto defined_type_identifier_expr(Expressions modifiers) -> Expression {
    return Expression(new defined_type_identifier_expr_class(modifiers));
}


auto struct_hier_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\struct_hier_ref_expr" << std::endl;
    if(hiers){
        stream << pad(n+2) << "hiers: " << std::endl;
        hiers->dump(stream, n+4);
    }
}

auto struct_hier_ref_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StructHierRefExpr;
}

auto struct_hier_ref_expr(Expressions hiers) -> Expression {
    return Expression(new struct_hier_ref_expr_class(hiers));
}


auto hdl_path_name_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\hdl_path_name_expr" << std::endl;
    stream << pad(n+2) << "hdl_hier_ref: ";
    dump_Symbol_(stream, 0, hdl_hier_ref);
}

auto hdl_path_name_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::HdlPathNameExpr;
}

auto hdl_path_name_expr(Symbol_ hdl_hier_ref) -> Expression {
    return Expression(new hdl_path_name_expr_class(hdl_hier_ref));
}


auto ternary_assign_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\ternary_assign_expr" << std::endl;
    if(bool_exp){
        stream << pad(n+2) << "bool_exp: " << std::endl;
        bool_exp->dump(stream, n+4);
    }
    if(true_expr){
        stream << pad(n+2) << "true_expr: " << std::endl;
        true_expr->dump(stream, n+4);
    }
    if(false_expr){
        stream << pad(n+2) << "false_expr: " << std::endl;
        false_expr->dump(stream, n+4);
    }
}

auto ternary_assign_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TernaryAssignExpr;
}

auto ternary_assign_expr(Expression bool_exp, Expression true_expr, Expression false_expr) -> Expression {
    return Expression(new ternary_assign_expr_class(bool_exp, true_expr, false_expr));
}


auto hwp_access_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\hwp_access_expr" << std::endl;
    if(base){
        stream << pad(n+2) << "base: " << std::endl;
        base->dump(stream, n+4);
    }
}

auto hwp_access_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::HwpAccessExpr;
}

auto hwp_access_expr(Expression base) -> Expression {
    return Expression(new hwp_access_expr_class(base));
}


auto cast_operator_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\cast_operator_expr" << std::endl;
    if(dest_type_expr){
        stream << pad(n+2) << "dest_type_expr: " << std::endl;
        dest_type_expr->dump(stream, n+4);
    }
}

auto cast_operator_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CastOperatorExpr;
}

auto cast_operator_expr(DataType dest_type_expr) -> Expression {
    return Expression(new cast_operator_expr_class(dest_type_expr));
}


auto sys_time_ref_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sys_time_ref_expr" << std::endl;
}

auto sys_time_ref_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SysTimeRefExpr;
}

auto sys_time_ref_expr() -> Expression {
    return Expression(new sys_time_ref_expr_class());
}


auto method_call_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_call_expr" << std::endl;
    if(base){
        stream << pad(n+2) << "base: " << std::endl;
        base->dump(stream, n+4);
    }
    if(arguments){
        stream << pad(n+2) << "arguments: " << std::endl;
        arguments->dump(stream, n+4);
    }
}

auto method_call_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodCallExpr;
}

auto method_call_expr(Expression base, Expressions arguments) -> Expression {
    return Expression(new method_call_expr_class(base, arguments));
}


auto constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\constraint_expr" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
}

auto constraint_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ConstraintExpr;
}

auto constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new constraint_expr_class(bool_expr));
}


auto soft_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\soft_constraint_expr" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
}

auto soft_constraint_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SoftConstraintExpr;
}

auto soft_constraint_expr(Expression bool_expr) -> Expression {
    return Expression(new soft_constraint_expr_class(bool_expr));
}


auto all_of_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\all_of_constraint_expr" << std::endl;
    if(constraints){
        stream << pad(n+2) << "constraints: " << std::endl;
        constraints->dump(stream, n+4);
    }
}

auto all_of_constraint_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AllOfConstraintExpr;
}

auto all_of_constraint_expr(Expressions constraints) -> Expression {
    return Expression(new all_of_constraint_expr_class(constraints));
}


auto list_items_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_items_constraint_expr" << std::endl;
    if(item_name){
        stream << pad(n+2) << "item_name: " << std::endl;
        item_name->dump(stream, n+4);
    }
    if(gen_item){
        stream << pad(n+2) << "gen_item: " << std::endl;
        gen_item->dump(stream, n+4);
    }
    if(constraints){
        stream << pad(n+2) << "constraints: " << std::endl;
        constraints->dump(stream, n+4);
    }
}

auto list_items_constraint_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListItemsConstraintExpr;
}

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expressions constraints) -> Expression {
    return Expression(new list_items_constraint_expr_class(item_name, gen_item, constraints));
}


auto field_type_constraint_by_type_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\field_type_constraint_by_type_expr" << std::endl;
    if(field_){
        stream << pad(n+2) << "field_: " << std::endl;
        field_->dump(stream, n+4);
    }
    if(type_){
        stream << pad(n+2) << "type_: " << std::endl;
        type_->dump(stream, n+4);
    }
}

auto field_type_constraint_by_type_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FieldTypeConstraintByTypeExpr;
}

auto field_type_constraint_by_type_expr(Expression field_, DataType type_) -> Expression {
    return Expression(new field_type_constraint_by_type_expr_class(field_, type_));
}


auto field_type_constraint_by_field_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\field_type_constraint_by_field_expr" << std::endl;
    if(field_){
        stream << pad(n+2) << "field_: " << std::endl;
        field_->dump(stream, n+4);
    }
    if(field){
        stream << pad(n+2) << "field: " << std::endl;
        field->dump(stream, n+4);
    }
}

auto field_type_constraint_by_field_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FieldTypeConstraintByFieldExpr;
}

auto field_type_constraint_by_field_expr(Expression field_, Expression field) -> Expression {
    return Expression(new field_type_constraint_by_field_expr_class(field_, field));
}


auto distribution_constraint_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\distribution_constraint_expr" << std::endl;
    if(gen_item){
        stream << pad(n+2) << "gen_item: " << std::endl;
        gen_item->dump(stream, n+4);
    }
    if(distribution){
        stream << pad(n+2) << "distribution: " << std::endl;
        distribution->dump(stream, n+4);
    }
}

auto distribution_constraint_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DistributionConstraintExpr;
}

auto distribution_constraint_expr(Expression gen_item, Cases distribution) -> Expression {
    return Expression(new distribution_constraint_expr_class(gen_item, distribution));
}


auto distribution_branch_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\distribution_branch_case" << std::endl;
    if(int_){
        stream << pad(n+2) << "int_: " << std::endl;
        int_->dump(stream, n+4);
    }
    if(value){
        stream << pad(n+2) << "value: " << std::endl;
        value->dump(stream, n+4);
    }
}

auto distribution_branch_case_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DistributionBranchCase;
}

auto distribution_branch_case(Expression int_, Expression value) -> Case {
    return Case(new distribution_branch_case_class(int_, value));
}


auto me_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\me_expr" << std::endl;
}

auto me_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MeExpr;
}

auto me_expr() -> Expression {
    return Expression(new me_expr_class());
}


auto it_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\it_expr" << std::endl;
}

auto it_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ItExpr;
}

auto it_expr() -> Expression {
    return Expression(new it_expr_class());
}


auto str_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\str_expr" << std::endl;
    stream << pad(n+2) << "str: ";
    dump_Symbol_(stream, 0, str);
}

auto str_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StrExpr;
}

auto str_expr(Symbol_ str) -> Expression {
    return Expression(new str_expr_class(str));
}


auto int_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\int_expr" << std::endl;
    stream << pad(n+2) << "int_: ";
    dump_Symbol_(stream, 0, int_);
}

auto int_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IntExpr;
}

auto int_expr(Symbol_ int_) -> Expression {
    return Expression(new int_expr_class(int_));
}


auto enum_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\enum_dt" << std::endl;
    if(enum_list_items){
        stream << pad(n+2) << "enum_list_items: " << std::endl;
        enum_list_items->dump(stream, n+4);
    }
    if(width_modifier){
        stream << pad(n+2) << "width_modifier: " << std::endl;
        width_modifier->dump(stream, n+4);
    }
}

auto enum_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EnumDt;
}

auto enum_dt(Expressions enum_list_items, Expression width_modifier) -> DataType {
    return DataType(new enum_dt_class(enum_list_items, width_modifier));
}


auto scalar_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\scalar_subtype_dt" << std::endl;
    if(predefined_base_type){
        stream << pad(n+2) << "predefined_base_type: " << std::endl;
        predefined_base_type->dump(stream, n+4);
    }
    if(range_modifier){
        stream << pad(n+2) << "range_modifier: " << std::endl;
        range_modifier->dump(stream, n+4);
    }
    if(width_modifier){
        stream << pad(n+2) << "width_modifier: " << std::endl;
        width_modifier->dump(stream, n+4);
    }
}

auto scalar_subtype_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ScalarSubtypeDt;
}

auto scalar_subtype_dt(DataType predefined_base_type, Expression range_modifier, Expression width_modifier) -> DataType {
    return DataType(new scalar_subtype_dt_class(predefined_base_type, range_modifier, width_modifier));
}


auto defined_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\defined_dt" << std::endl;
    if(enum_list_items){
        stream << pad(n+2) << "enum_list_items: " << std::endl;
        enum_list_items->dump(stream, n+4);
    }
    if(width_modifier){
        stream << pad(n+2) << "width_modifier: " << std::endl;
        width_modifier->dump(stream, n+4);
    }
}

auto defined_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefinedDt;
}

auto defined_dt(Expressions enum_list_items, Expression width_modifier) -> DataType {
    return DataType(new defined_dt_class(enum_list_items, width_modifier));
}


auto defined_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\defined_subtype_dt" << std::endl;
    stream << pad(n+2) << "id: ";
    dump_Symbol_(stream, 0, id);
    if(range_modifier){
        stream << pad(n+2) << "range_modifier: " << std::endl;
        range_modifier->dump(stream, n+4);
    }
}

auto defined_subtype_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefinedSubtypeDt;
}

auto defined_subtype_dt(Symbol_ id, Expression range_modifier) -> DataType {
    return DataType(new defined_subtype_dt_class(id, range_modifier));
}


auto predefined_subtype_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\predefined_subtype_dt" << std::endl;
    if(pred_type){
        stream << pad(n+2) << "pred_type: " << std::endl;
        pred_type->dump(stream, n+4);
    }
    if(range_modifier){
        stream << pad(n+2) << "range_modifier: " << std::endl;
        range_modifier->dump(stream, n+4);
    }
    if(width_modifier){
        stream << pad(n+2) << "width_modifier: " << std::endl;
        width_modifier->dump(stream, n+4);
    }
}

auto predefined_subtype_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::PredefinedSubtypeDt;
}

auto predefined_subtype_dt(DataType pred_type, Expression range_modifier, Expression width_modifier) -> DataType {
    return DataType(new predefined_subtype_dt_class(pred_type, range_modifier, width_modifier));
}


auto defined_struct_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\defined_struct_type_dt" << std::endl;
    if(struct_type_modifiers){
        stream << pad(n+2) << "struct_type_modifiers: " << std::endl;
        struct_type_modifiers->dump(stream, n+4);
    }
}

auto defined_struct_type_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefinedStructTypeDt;
}

auto defined_struct_type_dt(Expressions struct_type_modifiers) -> DataType {
    return DataType(new defined_struct_type_dt_class(struct_type_modifiers));
}


auto list_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\list_type_dt" << std::endl;
    if(base_type){
        stream << pad(n+2) << "base_type: " << std::endl;
        base_type->dump(stream, n+4);
    }
}

auto list_type_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ListTypeDt;
}

auto list_type_dt(DataType base_type) -> DataType {
    return DataType(new list_type_dt_class(base_type));
}


auto assoc_list_type_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\assoc_list_type_dt" << std::endl;
    stream << pad(n+2) << "key_id: ";
    dump_Symbol_(stream, 0, key_id);
    if(base_type){
        stream << pad(n+2) << "base_type: " << std::endl;
        base_type->dump(stream, n+4);
    }
}

auto assoc_list_type_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AssocListTypeDt;
}

auto assoc_list_type_dt(Symbol_ key_id, DataType base_type) -> DataType {
    return DataType(new assoc_list_type_dt_class(key_id, base_type));
}


auto file_dt_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\file_dt" << std::endl;
}

auto file_dt_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FileDt;
}

auto file_dt() -> DataType {
    return DataType(new file_dt_class());
}


auto int_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\int_predefined_type" << std::endl;
}

auto int_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IntPredefinedType;
}

auto int_predefined_type() -> DataType {
    return DataType(new int_predefined_type_class());
}


auto uint_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\uint_predefined_type" << std::endl;
}

auto uint_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::UintPredefinedType;
}

auto uint_predefined_type() -> DataType {
    return DataType(new uint_predefined_type_class());
}


auto bool_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bool_predefined_type" << std::endl;
}

auto bool_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BoolPredefinedType;
}

auto bool_predefined_type() -> DataType {
    return DataType(new bool_predefined_type_class());
}


auto bit_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\bit_predefined_type" << std::endl;
}

auto bit_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BitPredefinedType;
}

auto bit_predefined_type() -> DataType {
    return DataType(new bit_predefined_type_class());
}


auto byte_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\byte_predefined_type" << std::endl;
}

auto byte_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BytePredefinedType;
}

auto byte_predefined_type() -> DataType {
    return DataType(new byte_predefined_type_class());
}


auto nibble_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\nibble_predefined_type" << std::endl;
}

auto nibble_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NibblePredefinedType;
}

auto nibble_predefined_type() -> DataType {
    return DataType(new nibble_predefined_type_class());
}


auto time_predefined_type_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\time_predefined_type" << std::endl;
}

auto time_predefined_type_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TimePredefinedType;
}

auto time_predefined_type() -> DataType {
    return DataType(new time_predefined_type_class());
}


auto no_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\no_expr" << std::endl;
}

auto no_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NoExpr;
}

auto no_expr() -> Expression {
    return Expression(new no_expr_class());
}


auto var_decl_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\var_decl_act" << std::endl;
    stream << pad(n+2) << "name: ";
    dump_Symbol_(stream, 0, name);
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
    if(init_expr){
        stream << pad(n+2) << "init_expr: " << std::endl;
        init_expr->dump(stream, n+4);
    }
}

auto var_decl_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::VarDeclAct;
}

auto var_decl_act(Symbol_ name, DataType type_id, Expression init_expr) -> Action {
    return Action(new var_decl_act_class(name, type_id, init_expr));
}


auto var_assign_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\var_assign_act" << std::endl;
    if(id_expr){
        stream << pad(n+2) << "id_expr: " << std::endl;
        id_expr->dump(stream, n+4);
    }
    if(assign_expr){
        stream << pad(n+2) << "assign_expr: " << std::endl;
        assign_expr->dump(stream, n+4);
    }
}

auto var_assign_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::VarAssignAct;
}

auto var_assign_act(Expression id_expr, Expression assign_expr) -> Action {
    return Action(new var_assign_act_class(id_expr, assign_expr));
}


auto compound_add_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_add_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_add_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundAddAct;
}

auto compound_add_act(Expression id, Expression e2) -> Action {
    return Action(new compound_add_act_class(id, e2));
}


auto compound_sub_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_sub_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_sub_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundSubAct;
}

auto compound_sub_act(Expression id, Expression e2) -> Action {
    return Action(new compound_sub_act_class(id, e2));
}


auto compound_mul_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_mul_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_mul_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundMulAct;
}

auto compound_mul_act(Expression id, Expression e2) -> Action {
    return Action(new compound_mul_act_class(id, e2));
}


auto compound_div_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_div_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_div_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundDivAct;
}

auto compound_div_act(Expression id, Expression e2) -> Action {
    return Action(new compound_div_act_class(id, e2));
}


auto compound_mod_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_mod_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_mod_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundModAct;
}

auto compound_mod_act(Expression id, Expression e2) -> Action {
    return Action(new compound_mod_act_class(id, e2));
}


auto compound_bool_and_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_bool_and_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_bool_and_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundBoolAndAct;
}

auto compound_bool_and_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bool_and_act_class(id, e2));
}


auto compound_bool_or_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_bool_or_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_bool_or_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundBoolOrAct;
}

auto compound_bool_or_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bool_or_act_class(id, e2));
}


auto compound_bit_and_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_bit_and_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_bit_and_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundBitAndAct;
}

auto compound_bit_and_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_and_act_class(id, e2));
}


auto compound_bit_or_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_bit_or_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_bit_or_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundBitOrAct;
}

auto compound_bit_or_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_or_act_class(id, e2));
}


auto compound_bit_xor_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_bit_xor_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_bit_xor_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundBitXorAct;
}

auto compound_bit_xor_act(Expression id, Expression e2) -> Action {
    return Action(new compound_bit_xor_act_class(id, e2));
}


auto compound_shift_left_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_shift_left_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_shift_left_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundShiftLeftAct;
}

auto compound_shift_left_act(Expression id, Expression e2) -> Action {
    return Action(new compound_shift_left_act_class(id, e2));
}


auto compound_right_left_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compound_right_left_act" << std::endl;
    if(id){
        stream << pad(n+2) << "id: " << std::endl;
        id->dump(stream, n+4);
    }
    if(e2){
        stream << pad(n+2) << "e2: " << std::endl;
        e2->dump(stream, n+4);
    }
}

auto compound_right_left_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CompoundRightLeftAct;
}

auto compound_right_left_act(Expression id, Expression e2) -> Action {
    return Action(new compound_right_left_act_class(id, e2));
}


auto force_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\force_act" << std::endl;
    if(hdl_or_port){
        stream << pad(n+2) << "hdl_or_port: " << std::endl;
        hdl_or_port->dump(stream, n+4);
    }
    if(exp){
        stream << pad(n+2) << "exp: " << std::endl;
        exp->dump(stream, n+4);
    }
}

auto force_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForceAct;
}

auto force_act(Expression hdl_or_port, Expression exp) -> Action {
    return Action(new force_act_class(hdl_or_port, exp));
}


auto release_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\release_act" << std::endl;
    if(hdl_or_port){
        stream << pad(n+2) << "hdl_or_port: " << std::endl;
        hdl_or_port->dump(stream, n+4);
    }
}

auto release_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ReleaseAct;
}

auto release_act(Expression hdl_or_port) -> Action {
    return Action(new release_act_class(hdl_or_port));
}


auto if_then_else_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\if_then_else_act" << std::endl;
    if(condition){
        stream << pad(n+2) << "condition: " << std::endl;
        condition->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
    if(else_clause){
        stream << pad(n+2) << "else_clause: " << std::endl;
        else_clause->dump(stream, n+4);
    }
}

auto if_then_else_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::IfThenElseAct;
}

auto if_then_else_act(Expression condition, ActionBlock actions, ActionBlock else_clause) -> Action {
    return Action(new if_then_else_act_class(condition, actions, else_clause));
}


auto non_term_if_then_else_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\non_term_if_then_else_act" << std::endl;
    if(condition){
        stream << pad(n+2) << "condition: " << std::endl;
        condition->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
    if(else_clause){
        stream << pad(n+2) << "else_clause: " << std::endl;
        else_clause->dump(stream, n+4);
    }
}

auto non_term_if_then_else_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NonTermIfThenElseAct;
}

auto non_term_if_then_else_act(Expression condition, ActionBlock actions, Action else_clause) -> Action {
    return Action(new non_term_if_then_else_act_class(condition, actions, else_clause));
}


auto case_bool_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\case_bool_act" << std::endl;
    if(bool_case_branch_items){
        stream << pad(n+2) << "bool_case_branch_items: " << std::endl;
        bool_case_branch_items->dump(stream, n+4);
    }
}

auto case_bool_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CaseBoolAct;
}

auto case_bool_act(Cases bool_case_branch_items) -> Action {
    return Action(new case_bool_act_class(bool_case_branch_items));
}


auto case_bool_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\case_bool_branch_item_case" << std::endl;
    if(bool_exp){
        stream << pad(n+2) << "bool_exp: " << std::endl;
        bool_exp->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto case_bool_branch_item_case_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CaseBoolBranchItemCase;
}

auto case_bool_branch_item_case(Expression bool_exp, ActionBlock actions) -> Case {
    return Case(new case_bool_branch_item_case_class(bool_exp, actions));
}


auto case_labeled_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\case_labeled_act" << std::endl;
    if(exp){
        stream << pad(n+2) << "exp: " << std::endl;
        exp->dump(stream, n+4);
    }
    if(labeled_case_branch_items){
        stream << pad(n+2) << "labeled_case_branch_items: " << std::endl;
        labeled_case_branch_items->dump(stream, n+4);
    }
}

auto case_labeled_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CaseLabeledAct;
}

auto case_labeled_act(Expression exp, Cases labeled_case_branch_items) -> Action {
    return Action(new case_labeled_act_class(exp, labeled_case_branch_items));
}


auto case_labeled_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\case_labeled_branch_item_case" << std::endl;
    if(label_exp){
        stream << pad(n+2) << "label_exp: " << std::endl;
        label_exp->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto case_labeled_branch_item_case_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CaseLabeledBranchItemCase;
}

auto case_labeled_branch_item_case(Expression label_exp, ActionBlock actions) -> Case {
    return Case(new case_labeled_branch_item_case_class(label_exp, actions));
}


auto default_case_branch_item_case_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\default_case_branch_item_case" << std::endl;
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto default_case_branch_item_case_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DefaultCaseBranchItemCase;
}

auto default_case_branch_item_case(ActionBlock actions) -> Case {
    return Case(new default_case_branch_item_case_class(actions));
}


auto print_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\print_call_act" << std::endl;
    if(values){
        stream << pad(n+2) << "values: " << std::endl;
        values->dump(stream, n+4);
    }
}

auto print_call_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::PrintCallAct;
}

auto print_call_act(Expressions values) -> Action {
    return Action(new print_call_act_class(values));
}


auto method_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\method_call_act" << std::endl;
    if(method_call_expr){
        stream << pad(n+2) << "method_call_expr: " << std::endl;
        method_call_expr->dump(stream, n+4);
    }
}

auto method_call_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::MethodCallAct;
}

auto method_call_act(Expression method_call_expr) -> Action {
    return Action(new method_call_act_class(method_call_expr));
}


auto start_tcm_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\start_tcm_call_act" << std::endl;
    if(method_call_expr){
        stream << pad(n+2) << "method_call_expr: " << std::endl;
        method_call_expr->dump(stream, n+4);
    }
}

auto start_tcm_call_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StartTcmCallAct;
}

auto start_tcm_call_act(Expression method_call_expr) -> Action {
    return Action(new start_tcm_call_act_class(method_call_expr));
}


auto compute_method_call_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\compute_method_call_act" << std::endl;
    if(method_call_expr){
        stream << pad(n+2) << "method_call_expr: " << std::endl;
        method_call_expr->dump(stream, n+4);
    }
}

auto compute_method_call_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ComputeMethodCallAct;
}

auto compute_method_call_act(Expression method_call_expr) -> Action {
    return Action(new compute_method_call_act_class(method_call_expr));
}


auto return_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\return_act" << std::endl;
    if(exp){
        stream << pad(n+2) << "exp: " << std::endl;
        exp->dump(stream, n+4);
    }
}

auto return_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ReturnAct;
}

auto return_act(Expression exp) -> Action {
    return Action(new return_act_class(exp));
}


auto while_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\while_loop_act" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto while_loop_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WhileLoopAct;
}

auto while_loop_act(Expression bool_expr, ActionBlock actions) -> Action {
    return Action(new while_loop_act_class(bool_expr, actions));
}


auto repeat_until_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\repeat_until_loop_act" << std::endl;
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto repeat_until_loop_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::RepeatUntilLoopAct;
}

auto repeat_until_loop_act(Expression bool_expr, ActionBlock actions) -> Action {
    return Action(new repeat_until_loop_act_class(bool_expr, actions));
}


auto for_each_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\for_each_loop_act" << std::endl;
    if(type_id){
        stream << pad(n+2) << "type_id: " << std::endl;
        type_id->dump(stream, n+4);
    }
    if(iterated_name){
        stream << pad(n+2) << "iterated_name: " << std::endl;
        iterated_name->dump(stream, n+4);
    }
    stream << pad(n+2) << "is_reverese: ";
    dump_Boolean(stream, 0, is_reverese);
    if(list_exp){
        stream << pad(n+2) << "list_exp: " << std::endl;
        list_exp->dump(stream, n+4);
    }
    if(idx_exp){
        stream << pad(n+2) << "idx_exp: " << std::endl;
        idx_exp->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto for_each_loop_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForEachLoopAct;
}

auto for_each_loop_act(DataType type_id, Expression iterated_name, Boolean is_reverese, Expression list_exp, Expression idx_exp, ActionBlock actions) -> Action {
    return Action(new for_each_loop_act_class(type_id, iterated_name, is_reverese, list_exp, idx_exp, actions));
}


auto for_range_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\for_range_loop_act" << std::endl;
    stream << pad(n+2) << "var_id: ";
    dump_Symbol_(stream, 0, var_id);
    if(from_expr){
        stream << pad(n+2) << "from_expr: " << std::endl;
        from_expr->dump(stream, n+4);
    }
    if(to_expr){
        stream << pad(n+2) << "to_expr: " << std::endl;
        to_expr->dump(stream, n+4);
    }
    if(step_expr){
        stream << pad(n+2) << "step_expr: " << std::endl;
        step_expr->dump(stream, n+4);
    }
    stream << pad(n+2) << "is_down: ";
    dump_Boolean(stream, 0, is_down);
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto for_range_loop_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForRangeLoopAct;
}

auto for_range_loop_act(Symbol_ var_id, Expression from_expr, Expression to_expr, Expression step_expr, Boolean is_down, ActionBlock actions) -> Action {
    return Action(new for_range_loop_act_class(var_id, from_expr, to_expr, step_expr, is_down, actions));
}


auto for_loop_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\for_loop_act" << std::endl;
    if(init_act){
        stream << pad(n+2) << "init_act: " << std::endl;
        init_act->dump(stream, n+4);
    }
    if(bool_expr){
        stream << pad(n+2) << "bool_expr: " << std::endl;
        bool_expr->dump(stream, n+4);
    }
    if(step_act){
        stream << pad(n+2) << "step_act: " << std::endl;
        step_act->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto for_loop_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForLoopAct;
}

auto for_loop_act(Action init_act, Expression bool_expr, Action step_act, ActionBlock actions) -> Action {
    return Action(new for_loop_act_class(init_act, bool_expr, step_act, actions));
}


auto for_each_line_in_file_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\for_each_line_in_file_act" << std::endl;
    if(line_it_name){
        stream << pad(n+2) << "line_it_name: " << std::endl;
        line_it_name->dump(stream, n+4);
    }
    if(file_path_expr){
        stream << pad(n+2) << "file_path_expr: " << std::endl;
        file_path_expr->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto for_each_line_in_file_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForEachLineInFileAct;
}

auto for_each_line_in_file_act(Expression line_it_name, Expression file_path_expr, ActionBlock actions) -> Action {
    return Action(new for_each_line_in_file_act_class(line_it_name, file_path_expr, actions));
}


auto for_each_file_in_files_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\for_each_file_in_files_act" << std::endl;
    if(line_it_name){
        stream << pad(n+2) << "line_it_name: " << std::endl;
        line_it_name->dump(stream, n+4);
    }
    if(file_pattern_exp){
        stream << pad(n+2) << "file_pattern_exp: " << std::endl;
        file_pattern_exp->dump(stream, n+4);
    }
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto for_each_file_in_files_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ForEachFileInFilesAct;
}

auto for_each_file_in_files_act(Expression line_it_name, Expression file_pattern_exp, ActionBlock actions) -> Action {
    return Action(new for_each_file_in_files_act_class(line_it_name, file_pattern_exp, actions));
}


auto break_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\break_act" << std::endl;
}

auto break_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::BreakAct;
}

auto break_act() -> Action {
    return Action(new break_act_class());
}


auto continue_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\continue_act" << std::endl;
}

auto continue_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ContinueAct;
}

auto continue_act() -> Action {
    return Action(new continue_act_class());
}


auto emit_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\emit_act" << std::endl;
    if(event_id){
        stream << pad(n+2) << "event_id: " << std::endl;
        event_id->dump(stream, n+4);
    }
}

auto emit_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::EmitAct;
}

auto emit_act(Expression event_id) -> Action {
    return Action(new emit_act_class(event_id));
}


auto sync_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\sync_act" << std::endl;
    if(event_id){
        stream << pad(n+2) << "event_id: " << std::endl;
        event_id->dump(stream, n+4);
    }
}

auto sync_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SyncAct;
}

auto sync_act(Expression event_id) -> Action {
    return Action(new sync_act_class(event_id));
}


auto wait_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\wait_act" << std::endl;
    if(event_id){
        stream << pad(n+2) << "event_id: " << std::endl;
        event_id->dump(stream, n+4);
    }
}

auto wait_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::WaitAct;
}

auto wait_act(Expression event_id) -> Action {
    return Action(new wait_act_class(event_id));
}


auto all_of_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\all_of_act" << std::endl;
    if(threads){
        stream << pad(n+2) << "threads: " << std::endl;
        threads->dump(stream, n+4);
    }
}

auto all_of_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AllOfAct;
}

auto all_of_act(ActionBlocks threads) -> Action {
    return Action(new all_of_act_class(threads));
}


auto first_of_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\first_of_act" << std::endl;
    if(threads){
        stream << pad(n+2) << "threads: " << std::endl;
        threads->dump(stream, n+4);
    }
}

auto first_of_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::FirstOfAct;
}

auto first_of_act(ActionBlocks threads) -> Action {
    return Action(new first_of_act_class(threads));
}


auto gen_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\gen_act" << std::endl;
    if(gen_expr){
        stream << pad(n+2) << "gen_expr: " << std::endl;
        gen_expr->dump(stream, n+4);
    }
    if(constraints){
        stream << pad(n+2) << "constraints: " << std::endl;
        constraints->dump(stream, n+4);
    }
}

auto gen_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::GenAct;
}

auto gen_act(Expression gen_expr, Expressions constraints) -> Action {
    return Action(new gen_act_class(gen_expr, constraints));
}


auto do_seq_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\do_seq_act" << std::endl;
    if(seq_item){
        stream << pad(n+2) << "seq_item: " << std::endl;
        seq_item->dump(stream, n+4);
    }
    if(constraints){
        stream << pad(n+2) << "constraints: " << std::endl;
        constraints->dump(stream, n+4);
    }
}

auto do_seq_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::DoSeqAct;
}

auto do_seq_act(Expression seq_item, Expressions constraints) -> Action {
    return Action(new do_seq_act_class(seq_item, constraints));
}


auto seq_item_expr_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\seq_item_expr" << std::endl;
    if(field_type_exprs){
        stream << pad(n+2) << "field_type_exprs: " << std::endl;
        field_type_exprs->dump(stream, n+4);
    }
}

auto seq_item_expr_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::SeqItemExpr;
}

auto seq_item_expr(Expressions field_type_exprs) -> Expression {
    return Expression(new seq_item_expr_class(field_type_exprs));
}


auto check_that_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\check_that_action" << std::endl;
    if(condition){
        stream << pad(n+2) << "condition: " << std::endl;
        condition->dump(stream, n+4);
    }
    if(dut_error_block){
        stream << pad(n+2) << "dut_error_block: " << std::endl;
        dut_error_block->dump(stream, n+4);
    }
}

auto check_that_action_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::CheckThatAction;
}

auto check_that_action(Expression condition, Expression dut_error_block) -> Action {
    return Action(new check_that_action_class(condition, dut_error_block));
}


auto assert_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\assert_action" << std::endl;
    if(condition){
        stream << pad(n+2) << "condition: " << std::endl;
        condition->dump(stream, n+4);
    }
    if(error_block){
        stream << pad(n+2) << "error_block: " << std::endl;
        error_block->dump(stream, n+4);
    }
}

auto assert_action_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::AssertAction;
}

auto assert_action(Expression condition, Expression error_block) -> Action {
    return Action(new assert_action_class(condition, error_block));
}


auto try_else_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\try_else_action" << std::endl;
    if(try_actions){
        stream << pad(n+2) << "try_actions: " << std::endl;
        try_actions->dump(stream, n+4);
    }
    if(except_actions){
        stream << pad(n+2) << "except_actions: " << std::endl;
        except_actions->dump(stream, n+4);
    }
}

auto try_else_action_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::TryElseAction;
}

auto try_else_action(ActionBlock try_actions, ActionBlock except_actions) -> Action {
    return Action(new try_else_action_class(try_actions, except_actions));
}


auto state_machine_act_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\state_machine_act" << std::endl;
    if(state_var){
        stream << pad(n+2) << "state_var: " << std::endl;
        state_var->dump(stream, n+4);
    }
    if(final_st){
        stream << pad(n+2) << "final_st: " << std::endl;
        final_st->dump(stream, n+4);
    }
    if(states){
        stream << pad(n+2) << "states: " << std::endl;
        states->dump(stream, n+4);
    }
}

auto state_machine_act_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StateMachineAct;
}

auto state_machine_act(Expression state_var, Expression final_st, FSMStates states) -> Action {
    return Action(new state_machine_act_class(state_var, final_st, states));
}


auto state_action_fsm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\state_action_fsm" << std::endl;
    stream << pad(n+2) << "state: ";
    dump_Symbol_(stream, 0, state);
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto state_action_fsm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StateActionFsm;
}

auto state_action_fsm(Symbol_ state, ActionBlock actions) -> FSMState {
    return FSMState(new state_action_fsm_class(state, actions));
}


auto state_transition_fsm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\state_transition_fsm" << std::endl;
    stream << pad(n+2) << "cur_state: ";
    dump_Symbol_(stream, 0, cur_state);
    stream << pad(n+2) << "next_state: ";
    dump_Symbol_(stream, 0, next_state);
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto state_transition_fsm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StateTransitionFsm;
}

auto state_transition_fsm(Symbol_ cur_state, Symbol_ next_state, ActionBlock actions) -> FSMState {
    return FSMState(new state_transition_fsm_class(cur_state, next_state, actions));
}


auto state_any_transition_fsm_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\state_any_transition_fsm" << std::endl;
    stream << pad(n+2) << "next_state: ";
    dump_Symbol_(stream, 0, next_state);
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto state_any_transition_fsm_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::StateAnyTransitionFsm;
}

auto state_any_transition_fsm(Symbol_ next_state, ActionBlock actions) -> FSMState {
    return FSMState(new state_any_transition_fsm_class(next_state, actions));
}


auto no_action_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\no_action" << std::endl;
}

auto no_action_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::NoAction;
}

auto no_action() -> Action {
    return Action(new no_action_class());
}


auto action_block_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "\\action_block" << std::endl;
    if(actions){
        stream << pad(n+2) << "actions: " << std::endl;
        actions->dump(stream, n+4);
    }
}

auto action_block_class::type() const -> SpecmanCtorKind {
    return SpecmanCtorKind::ActionBlock;
}

auto action_block(Actions actions) -> ActionBlock {
    return ActionBlock(new action_block_class(actions));
}
 
}