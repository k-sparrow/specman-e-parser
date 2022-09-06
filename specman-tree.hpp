/* 
    Language declaration file for classes used by bison
    
    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***
     
 */
 
#pragma once

#include "tree.hpp"
#include "specman-tree-handcode.hpp"
#include "strtab.hpp"

namespace elex { 
    
enum class SpecmanCtorKind {
    Module = 0,
    Package,
    UnitSt,
    UnitLikeSt,
    StructSt,
    StructLikeSt,
    ExtendStructSt,
    EnumTypeSt,
    ExtendEnumTypeSt,
    ScalarSubtypeSt,
    ScalarSizedTypeSt,
    ImportSt,
    FilePathFp,
    VirtualSequenceSt,
    SequenceSt,
    SequenceItemKindIt,
    SequenceCreatedKindNameIt,
    SequenceCreatedDriverNameIt,
    SequenceBaseKindIt,
    SequenceDriverBaseKindIt,
    DefineAsSt,
    DefineAsComputedSt,
    Formal,
    CExportSt,
    CRoutineSt,
    FieldSm,
    StructFieldSm,
    StructFieldListSm,
    StructFieldAssocListSm,
    MethodDecSm,
    MethodDecAlsoSm,
    MethodDecFirstSm,
    MethodDecOnlySm,
    MethodDecEmptySm,
    MethodDecUndefSm,
    TcmDecSm,
    TcmDecAlsoSm,
    TcmDecFirstSm,
    TcmDecOnlySm,
    TcmDecEmptySm,
    TcmDecUndefSm,
    CMethodDecSm,
    CMethodDecOnlySm,
    WhenSubtypeSm,
    ConstraintDefSm,
    OnEventSm,
    SimpleEventDecSm,
    EventDefSm,
    EventDefOverrideSm,
    TemporalExpr,
    SamplingEventExpr,
    EventRefExpr,
    ActionAttachedTemporalExpr,
    NotTemporalExpr,
    FailTemporalExpr,
    EventuallyTemporalExpr,
    DetachTemporalExpr,
    YieldTemporalExpr,
    TrueTemporalExpr,
    RiseTemporalExpr,
    FallTemporalExpr,
    ChangeTemporalExpr,
    AndTemporalExpr,
    OrTemporalExpr,
    SequenceTemporalExpr,
    FixedRepetitionExpr,
    FirstMatchRepetitionExpr,
    TrueMatchRepetitionExpr,
    ZeroRepetitionBaseExpr,
    InfRepetitionBaseExpr,
    CycleTemporalExpr,
    DelayTemporalExpr,
    ConsumeTemporalExpr,
    ExpectNamelessSm,
    ExpectSm,
    ExpectOverrideSm,
    AssumeNamelessSm,
    AssumeSm,
    AssumeOverrideSm,
    EmptyCovergroupSm,
    CovergroupSm,
    CovergroupExtensionSm,
    CovergroupPerTypeCeid,
    CovergroupPerUnitInstanceCeid,
    CovergroupPerInstanceCeid,
    GlobalCgo,
    NoCollectCgo,
    PerUnitInstanceCgo,
    RadixDecCgo,
    RadixHexCgo,
    RadixBinCgo,
    TextCgo,
    WeightCgo,
    WhenCgo,
    SimpleCovergroupItemCgi,
    OnTheFlyCovergroupItemCgi,
    CrossCovergroupItemCgi,
    TransitionCovergroupItemCgi,
    AtLeastCgio,
    IgnoreCgio,
    IllegalCgio,
    NoCollectCgio,
    NoTraceCgio,
    NumOfBucketsCgio,
    PerInstanceCgio,
    RadixDecCgio,
    RadixHexCgio,
    RadixBinCgio,
    TextCgio,
    WeightCgio,
    WhenCgio,
    TrueLiteralExpr,
    FalseLiteralExpr,
    IdExpr,
    EnumTypeExpr,
    EnumListItem,
    BitwiseNotExpr,
    BitwiseAndExpr,
    BitwiseOrExpr,
    BitwiseXorExpr,
    ShiftLeftExpr,
    RightLeftExpr,
    LogicalNotExpr,
    LogicalAndExpr,
    LogicalOrExpr,
    ImplicationExpr,
    UnaryPositiveExpr,
    UnaryNegativeExpr,
    BinaryAddExpr,
    BinarySubExpr,
    BinaryMulExpr,
    BinaryDivExpr,
    BinaryRemainderExpr,
    LessThenExpr,
    GreaterThenExpr,
    LessThenOrEqualExpr,
    GreaterThenOrEqualExpr,
    EqualityExpr,
    NonEqualityExpr,
    HdlEqualityExpr,
    HdlNonEqualityExpr,
    StrMatchExpr,
    StrDoesNotMatchExpr,
    InExpr,
    TypeIntrospecExpr,
    TypeIntrospecNegationExpr,
    InEnumExpr,
    ListIndexItemExpr,
    ListIndexExpr,
    ListSlicingExpr,
    BitSlicingExpr,
    ListConcatExpr,
    BitConcatExpr,
    BitSliceExpr,
    RangeModifierItemExpr,
    RangeModifierExpr,
    RangesModifierExpr,
    SizedBitsScalarExpr,
    SizedBytesScalarExpr,
    NewAllocateExpr,
    NewNamelessAllocateExpr,
    StructTypeExprWithOptActionBlock,
    NamedActionBlock,
    StructTypeId,
    StructTypeModifier,
    DefinedTypeIdentifierExpr,
    StructHierRefExpr,
    HdlPathNameExpr,
    TernaryAssignExpr,
    HwpAccessExpr,
    CastOperatorExpr,
    SysTimeRefExpr,
    MethodCallExpr,
    ConstraintExpr,
    SoftConstraintExpr,
    AllOfConstraintExpr,
    ListItemsConstraintExpr,
    FieldTypeConstraintByTypeExpr,
    FieldTypeConstraintByFieldExpr,
    DistributionConstraintExpr,
    DistributionBranchCase,
    MeExpr,
    ItExpr,
    StrExpr,
    IntExpr,
    EnumDt,
    ScalarSubtypeDt,
    DefinedDt,
    DefinedSubtypeDt,
    PredefinedSubtypeDt,
    DefinedStructTypeDt,
    ListTypeDt,
    AssocListTypeDt,
    FileDt,
    IntPredefinedType,
    UintPredefinedType,
    BoolPredefinedType,
    BitPredefinedType,
    BytePredefinedType,
    NibblePredefinedType,
    TimePredefinedType,
    NoExpr,
    VarDeclAct,
    VarAssignAct,
    CompoundAddAct,
    CompoundSubAct,
    CompoundMulAct,
    CompoundDivAct,
    CompoundModAct,
    CompoundBoolAndAct,
    CompoundBoolOrAct,
    CompoundBitAndAct,
    CompoundBitOrAct,
    CompoundBitXorAct,
    CompoundShiftLeftAct,
    CompoundRightLeftAct,
    ForceAct,
    ReleaseAct,
    IfThenElseAct,
    NonTermIfThenElseAct,
    CaseBoolAct,
    CaseBoolBranchItemCase,
    CaseLabeledAct,
    CaseLabeledBranchItemCase,
    DefaultCaseBranchItemCase,
    PrintCallAct,
    MethodCallAct,
    StartTcmCallAct,
    ComputeMethodCallAct,
    ReturnAct,
    WhileLoopAct,
    RepeatUntilLoopAct,
    ForEachLoopAct,
    ForRangeLoopAct,
    ForLoopAct,
    ForEachLineInFileAct,
    ForEachFileInFilesAct,
    BreakAct,
    ContinueAct,
    EmitAct,
    SyncAct,
    WaitAct,
    AllOfAct,
    FirstOfAct,
    GenAct,
    DoSeqAct,
    SeqItemExpr,
    CheckThatAction,
    AssertAction,
    TryElseAction,
    StateMachineAct,
    StateActionFsm,
    StateTransitionFsm,
    StateAnyTransitionFsm,
    NoAction,
    ActionBlock
};
    

class Module_class;
typedef std::shared_ptr<Module_class> Module;

class Module_class : public tree_node {
    public:
        Module_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Module_EXTRAS
    Module_EXTRAS
#endif
};

class Statement_class;
typedef std::shared_ptr<Statement_class> Statement;

class Statement_class : public tree_node {
    public:
        Statement_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Statement_EXTRAS
    Statement_EXTRAS
#endif
};

typedef list_tree_node<Statement> Statements_class;
typedef std::shared_ptr<Statements_class> Statements;

auto nil_Statements() -> Statements;
auto single_Statements(Statement) -> Statements;
auto append_Statements(Statements, Statements) -> Statements;

class StructMember_class;
typedef std::shared_ptr<StructMember_class> StructMember;

class StructMember_class : public tree_node {
    public:
        StructMember_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef StructMember_EXTRAS
    StructMember_EXTRAS
#endif
};

typedef list_tree_node<StructMember> StructMembers_class;
typedef std::shared_ptr<StructMembers_class> StructMembers;

auto nil_StructMembers() -> StructMembers;
auto single_StructMembers(StructMember) -> StructMembers;
auto append_StructMembers(StructMembers, StructMembers) -> StructMembers;

class FieldStructMember_class;
typedef std::shared_ptr<FieldStructMember_class> FieldStructMember;

class FieldStructMember_class : public tree_node {
    public:
        FieldStructMember_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef FieldStructMember_EXTRAS
    FieldStructMember_EXTRAS
#endif
};

class Action_class;
typedef std::shared_ptr<Action_class> Action;

class Action_class : public tree_node {
    public:
        Action_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Action_EXTRAS
    Action_EXTRAS
#endif
};

typedef list_tree_node<Action> Actions_class;
typedef std::shared_ptr<Actions_class> Actions;

auto nil_Actions() -> Actions;
auto single_Actions(Action) -> Actions;
auto append_Actions(Actions, Actions) -> Actions;

class Expression_class;
typedef std::shared_ptr<Expression_class> Expression;

class Expression_class : public tree_node {
    public:
        Expression_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Expression_EXTRAS
    Expression_EXTRAS
#endif
};

typedef list_tree_node<Expression> Expressions_class;
typedef std::shared_ptr<Expressions_class> Expressions;

auto nil_Expressions() -> Expressions;
auto single_Expressions(Expression) -> Expressions;
auto append_Expressions(Expressions, Expressions) -> Expressions;

class DataType_class;
typedef std::shared_ptr<DataType_class> DataType;

class DataType_class : public tree_node {
    public:
        DataType_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef DataType_EXTRAS
    DataType_EXTRAS
#endif
};

class Formal_class;
typedef std::shared_ptr<Formal_class> Formal;

class Formal_class : public tree_node {
    public:
        Formal_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Formal_EXTRAS
    Formal_EXTRAS
#endif
};

typedef list_tree_node<Formal> Formals_class;
typedef std::shared_ptr<Formals_class> Formals;

auto nil_Formals() -> Formals;
auto single_Formals(Formal) -> Formals;
auto append_Formals(Formals, Formals) -> Formals;

class Case_class;
typedef std::shared_ptr<Case_class> Case;

class Case_class : public tree_node {
    public:
        Case_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef Case_EXTRAS
    Case_EXTRAS
#endif
};

typedef list_tree_node<Case> Cases_class;
typedef std::shared_ptr<Cases_class> Cases;

auto nil_Cases() -> Cases;
auto single_Cases(Case) -> Cases;
auto append_Cases(Cases, Cases) -> Cases;

class SequenceItem_class;
typedef std::shared_ptr<SequenceItem_class> SequenceItem;

class SequenceItem_class : public tree_node {
    public:
        SequenceItem_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef SequenceItem_EXTRAS
    SequenceItem_EXTRAS
#endif
};

typedef list_tree_node<SequenceItem> SequenceItems_class;
typedef std::shared_ptr<SequenceItems_class> SequenceItems;

auto nil_SequenceItems() -> SequenceItems;
auto single_SequenceItems(SequenceItem) -> SequenceItems;
auto append_SequenceItems(SequenceItems, SequenceItems) -> SequenceItems;

class CovergroupOption_class;
typedef std::shared_ptr<CovergroupOption_class> CovergroupOption;

class CovergroupOption_class : public tree_node {
    public:
        CovergroupOption_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef CovergroupOption_EXTRAS
    CovergroupOption_EXTRAS
#endif
};

typedef list_tree_node<CovergroupOption> CovergroupOptions_class;
typedef std::shared_ptr<CovergroupOptions_class> CovergroupOptions;

auto nil_CovergroupOptions() -> CovergroupOptions;
auto single_CovergroupOptions(CovergroupOption) -> CovergroupOptions;
auto append_CovergroupOptions(CovergroupOptions, CovergroupOptions) -> CovergroupOptions;

class CovergroupItem_class;
typedef std::shared_ptr<CovergroupItem_class> CovergroupItem;

class CovergroupItem_class : public tree_node {
    public:
        CovergroupItem_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef CovergroupItem_EXTRAS
    CovergroupItem_EXTRAS
#endif
};

typedef list_tree_node<CovergroupItem> CovergroupItems_class;
typedef std::shared_ptr<CovergroupItems_class> CovergroupItems;

auto nil_CovergroupItems() -> CovergroupItems;
auto single_CovergroupItems(CovergroupItem) -> CovergroupItems;
auto append_CovergroupItems(CovergroupItems, CovergroupItems) -> CovergroupItems;

class CovergroupItemOption_class;
typedef std::shared_ptr<CovergroupItemOption_class> CovergroupItemOption;

class CovergroupItemOption_class : public tree_node {
    public:
        CovergroupItemOption_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef CovergroupItemOption_EXTRAS
    CovergroupItemOption_EXTRAS
#endif
};

typedef list_tree_node<CovergroupItemOption> CovergroupItemOptions_class;
typedef std::shared_ptr<CovergroupItemOptions_class> CovergroupItemOptions;

auto nil_CovergroupItemOptions() -> CovergroupItemOptions;
auto single_CovergroupItemOptions(CovergroupItemOption) -> CovergroupItemOptions;
auto append_CovergroupItemOptions(CovergroupItemOptions, CovergroupItemOptions) -> CovergroupItemOptions;

class CovergroupExtensionID_class;
typedef std::shared_ptr<CovergroupExtensionID_class> CovergroupExtensionID;

class CovergroupExtensionID_class : public tree_node {
    public:
        CovergroupExtensionID_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef CovergroupExtensionID_EXTRAS
    CovergroupExtensionID_EXTRAS
#endif
};

class ActionBlock_class;
typedef std::shared_ptr<ActionBlock_class> ActionBlock;

class ActionBlock_class : public tree_node {
    public:
        ActionBlock_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef ActionBlock_EXTRAS
    ActionBlock_EXTRAS
#endif
};

typedef list_tree_node<ActionBlock> ActionBlocks_class;
typedef std::shared_ptr<ActionBlocks_class> ActionBlocks;

auto nil_ActionBlocks() -> ActionBlocks;
auto single_ActionBlocks(ActionBlock) -> ActionBlocks;
auto append_ActionBlocks(ActionBlocks, ActionBlocks) -> ActionBlocks;

class FSMState_class;
typedef std::shared_ptr<FSMState_class> FSMState;

class FSMState_class : public tree_node {
    public:
        FSMState_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef FSMState_EXTRAS
    FSMState_EXTRAS
#endif
};

typedef list_tree_node<FSMState> FSMStates_class;
typedef std::shared_ptr<FSMStates_class> FSMStates;

auto nil_FSMStates() -> FSMStates;
auto single_FSMStates(FSMState) -> FSMStates;
auto append_FSMStates(FSMStates, FSMStates) -> FSMStates;

class FilePath_class;
typedef std::shared_ptr<FilePath_class> FilePath;

class FilePath_class : public tree_node {
    public:
        FilePath_class(int lineno = 1)
            : tree_node(lineno)
        {

        }

#ifdef FilePath_EXTRAS
    FilePath_EXTRAS
#endif
};

typedef list_tree_node<FilePath> FilePaths_class;
typedef std::shared_ptr<FilePaths_class> FilePaths;

auto nil_FilePaths() -> FilePaths;
auto single_FilePaths(FilePath) -> FilePaths;
auto append_FilePaths(FilePaths, FilePaths) -> FilePaths;

class module__class : public Module_class {
    protected:
        Statements stmts;
    public:
        module__class(Statements stmts){
            this->stmts = stmts;
            if(stmts){
                this->stmts->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Module_SHARED_EXTRAS
    Module_SHARED_EXTRAS
#endif
#ifdef module__EXTRAS
    module__EXTRAS
#endif
};

auto module_(Statements stmts) -> Module;

class package_class : public Statement_class {
    protected:
        Symbol_ pkg_name;
    public:
        package_class(Symbol_ pkg_name){
            this->pkg_name = pkg_name;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef package_EXTRAS
    package_EXTRAS
#endif
};

auto package(Symbol_ pkg_name) -> Statement;

class unit_st_class : public Statement_class {
    protected:
        Symbol_ unit_name;
        StructMembers members;
    public:
        unit_st_class(Symbol_ unit_name, StructMembers members){
            this->unit_name = unit_name;
            this->members = members;
            if(members){
                this->members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef unit_st_EXTRAS
    unit_st_EXTRAS
#endif
};

auto unit_st(Symbol_ unit_name, StructMembers members) -> Statement;

class unit_like_st_class : public Statement_class {
    protected:
        Symbol_ unit_name;
        Symbol_ base_unit_name;
        StructMembers members;
    public:
        unit_like_st_class(Symbol_ unit_name, Symbol_ base_unit_name, StructMembers members){
            this->unit_name = unit_name;
            this->base_unit_name = base_unit_name;
            this->members = members;
            if(members){
                this->members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef unit_like_st_EXTRAS
    unit_like_st_EXTRAS
#endif
};

auto unit_like_st(Symbol_ unit_name, Symbol_ base_unit_name, StructMembers members) -> Statement;

class struct_st_class : public Statement_class {
    protected:
        Symbol_ struct_name;
        StructMembers members;
    public:
        struct_st_class(Symbol_ struct_name, StructMembers members){
            this->struct_name = struct_name;
            this->members = members;
            if(members){
                this->members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef struct_st_EXTRAS
    struct_st_EXTRAS
#endif
};

auto struct_st(Symbol_ struct_name, StructMembers members) -> Statement;

class struct_like_st_class : public Statement_class {
    protected:
        Symbol_ struct_name;
        Symbol_ base_struct_name;
        StructMembers members;
    public:
        struct_like_st_class(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members){
            this->struct_name = struct_name;
            this->base_struct_name = base_struct_name;
            this->members = members;
            if(members){
                this->members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef struct_like_st_EXTRAS
    struct_like_st_EXTRAS
#endif
};

auto struct_like_st(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members) -> Statement;

class extend_struct_st_class : public Statement_class {
    protected:
        Expressions struct_type_name;
        StructMembers members;
    public:
        extend_struct_st_class(Expressions struct_type_name, StructMembers members){
            this->struct_type_name = struct_type_name;
            if(struct_type_name){
                this->struct_type_name->set_parent(this);
            }
            this->members = members;
            if(members){
                this->members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef extend_struct_st_EXTRAS
    extend_struct_st_EXTRAS
#endif
};

auto extend_struct_st(Expressions struct_type_name, StructMembers members) -> Statement;

class enum_type_st_class : public Statement_class {
    protected:
        Symbol_ id;
        DataType type_id;
    public:
        enum_type_st_class(Symbol_ id, DataType type_id){
            this->id = id;
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef enum_type_st_EXTRAS
    enum_type_st_EXTRAS
#endif
};

auto enum_type_st(Symbol_ id, DataType type_id) -> Statement;

class extend_enum_type_st_class : public Statement_class {
    protected:
        Symbol_ type_id;
        Expressions enum_list_items;
    public:
        extend_enum_type_st_class(Symbol_ type_id, Expressions enum_list_items){
            this->type_id = type_id;
            this->enum_list_items = enum_list_items;
            if(enum_list_items){
                this->enum_list_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef extend_enum_type_st_EXTRAS
    extend_enum_type_st_EXTRAS
#endif
};

auto extend_enum_type_st(Symbol_ type_id, Expressions enum_list_items) -> Statement;

class scalar_subtype_st_class : public Statement_class {
    protected:
        Symbol_ subtype_id;
        Expression type_id;
        Expressions ranges;
    public:
        scalar_subtype_st_class(Symbol_ subtype_id, Expression type_id, Expressions ranges){
            this->subtype_id = subtype_id;
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
            this->ranges = ranges;
            if(ranges){
                this->ranges->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef scalar_subtype_st_EXTRAS
    scalar_subtype_st_EXTRAS
#endif
};

auto scalar_subtype_st(Symbol_ subtype_id, Expression type_id, Expressions ranges) -> Statement;

class scalar_sized_type_st_class : public Statement_class {
    protected:
        Symbol_ type_id;
        Expression base_type_id;
        Expressions ranges_expr;
        Expression width_expr;
    public:
        scalar_sized_type_st_class(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr){
            this->type_id = type_id;
            this->base_type_id = base_type_id;
            if(base_type_id){
                this->base_type_id->set_parent(this);
            }
            this->ranges_expr = ranges_expr;
            if(ranges_expr){
                this->ranges_expr->set_parent(this);
            }
            this->width_expr = width_expr;
            if(width_expr){
                this->width_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef scalar_sized_type_st_EXTRAS
    scalar_sized_type_st_EXTRAS
#endif
};

auto scalar_sized_type_st(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr) -> Statement;

class import_st_class : public Statement_class {
    protected:
        FilePaths paths;
        Boolean is_cyclic;
    public:
        import_st_class(FilePaths paths, Boolean is_cyclic){
            this->paths = paths;
            if(paths){
                this->paths->set_parent(this);
            }
            this->is_cyclic = is_cyclic;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef import_st_EXTRAS
    import_st_EXTRAS
#endif
};

auto import_st(FilePaths paths, Boolean is_cyclic) -> Statement;

class file_path_fp_class : public FilePath_class {
    protected:
        Symbol_ file_path;
    public:
        file_path_fp_class(Symbol_ file_path){
            this->file_path = file_path;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FilePath_SHARED_EXTRAS
    FilePath_SHARED_EXTRAS
#endif
#ifdef file_path_fp_EXTRAS
    file_path_fp_EXTRAS
#endif
};

auto file_path_fp(Symbol_ file_path) -> FilePath;

class virtual_sequence_st_class : public Statement_class {
    protected:
        Symbol_ id;
        SequenceItems seq_options;
    public:
        virtual_sequence_st_class(Symbol_ id, SequenceItems seq_options){
            this->id = id;
            this->seq_options = seq_options;
            if(seq_options){
                this->seq_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef virtual_sequence_st_EXTRAS
    virtual_sequence_st_EXTRAS
#endif
};

auto virtual_sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement;

class sequence_st_class : public Statement_class {
    protected:
        Symbol_ id;
        SequenceItems seq_options;
    public:
        sequence_st_class(Symbol_ id, SequenceItems seq_options){
            this->id = id;
            this->seq_options = seq_options;
            if(seq_options){
                this->seq_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef sequence_st_EXTRAS
    sequence_st_EXTRAS
#endif
};

auto sequence_st(Symbol_ id, SequenceItems seq_options) -> Statement;

class sequence_item_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_item_kind_it_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_item_kind_it_EXTRAS
    sequence_item_kind_it_EXTRAS
#endif
};

auto sequence_item_kind_it(Symbol_ id) -> SequenceItem;

class sequence_created_kind_name_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_created_kind_name_it_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_created_kind_name_it_EXTRAS
    sequence_created_kind_name_it_EXTRAS
#endif
};

auto sequence_created_kind_name_it(Symbol_ id) -> SequenceItem;

class sequence_created_driver_name_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_created_driver_name_it_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_created_driver_name_it_EXTRAS
    sequence_created_driver_name_it_EXTRAS
#endif
};

auto sequence_created_driver_name_it(Symbol_ id) -> SequenceItem;

class sequence_base_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_base_kind_it_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_base_kind_it_EXTRAS
    sequence_base_kind_it_EXTRAS
#endif
};

auto sequence_base_kind_it(Symbol_ id) -> SequenceItem;

class sequence_driver_base_kind_it_class : public SequenceItem_class {
    protected:
        Symbol_ id;
    public:
        sequence_driver_base_kind_it_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef SequenceItem_SHARED_EXTRAS
    SequenceItem_SHARED_EXTRAS
#endif
#ifdef sequence_driver_base_kind_it_EXTRAS
    sequence_driver_base_kind_it_EXTRAS
#endif
};

auto sequence_driver_base_kind_it(Symbol_ id) -> SequenceItem;

class define_as_st_class : public Statement_class {
    protected:
        Symbol_ macro;
    public:
        define_as_st_class(Symbol_ macro){
            this->macro = macro;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef define_as_st_EXTRAS
    define_as_st_EXTRAS
#endif
};

auto define_as_st(Symbol_ macro) -> Statement;

class define_as_computed_st_class : public Statement_class {
    protected:
        Symbol_ macro;
    public:
        define_as_computed_st_class(Symbol_ macro){
            this->macro = macro;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef define_as_computed_st_EXTRAS
    define_as_computed_st_EXTRAS
#endif
};

auto define_as_computed_st(Symbol_ macro) -> Statement;

class formal_class : public Formal_class {
    protected:
        Symbol_ name;
        DataType type_;
    public:
        formal_class(Symbol_ name, DataType type_){
            this->name = name;
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Formal_SHARED_EXTRAS
    Formal_SHARED_EXTRAS
#endif
#ifdef formal_EXTRAS
    formal_EXTRAS
#endif
};

auto formal(Symbol_ name, DataType type_) -> Formal;

class c_export_st_class : public Statement_class {
    protected:
        Expression element;
    public:
        c_export_st_class(Expression element){
            this->element = element;
            if(element){
                this->element->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef c_export_st_EXTRAS
    c_export_st_EXTRAS
#endif
};

auto c_export_st(Expression element) -> Statement;

class c_routine_st_class : public Statement_class {
    protected:
        Symbol_ e_routine_name;
        Formals parameters_list;
        DataType return_type;
        Symbol_ c_routine_name;
    public:
        c_routine_st_class(Symbol_ e_routine_name, Formals parameters_list, DataType return_type, Symbol_ c_routine_name){
            this->e_routine_name = e_routine_name;
            this->parameters_list = parameters_list;
            if(parameters_list){
                this->parameters_list->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->c_routine_name = c_routine_name;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Statement_SHARED_EXTRAS
    Statement_SHARED_EXTRAS
#endif
#ifdef c_routine_st_EXTRAS
    c_routine_st_EXTRAS
#endif
};

auto c_routine_st(Symbol_ e_routine_name, Formals parameters_list, DataType return_type, Symbol_ c_routine_name) -> Statement;

class field_sm_class : public StructMember_class {
    protected:
        FieldStructMember field;
    public:
        field_sm_class(FieldStructMember field){
            this->field = field;
            if(field){
                this->field->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef field_sm_EXTRAS
    field_sm_EXTRAS
#endif
};

auto field_sm(FieldStructMember field) -> StructMember;

class struct_field_sm_class : public FieldStructMember_class {
    protected:
        Symbol_ id;
        DataType type_;
    public:
        struct_field_sm_class(Symbol_ id, DataType type_){
            this->id = id;
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FieldStructMember_SHARED_EXTRAS
    FieldStructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_sm_EXTRAS
    struct_field_sm_EXTRAS
#endif
};

auto struct_field_sm(Symbol_ id, DataType type_) -> FieldStructMember;

class struct_field_list_sm_class : public FieldStructMember_class {
    protected:
        Symbol_ id;
        Expression len_expr;
        DataType type_;
    public:
        struct_field_list_sm_class(Symbol_ id, Expression len_expr, DataType type_){
            this->id = id;
            this->len_expr = len_expr;
            if(len_expr){
                this->len_expr->set_parent(this);
            }
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FieldStructMember_SHARED_EXTRAS
    FieldStructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_list_sm_EXTRAS
    struct_field_list_sm_EXTRAS
#endif
};

auto struct_field_list_sm(Symbol_ id, Expression len_expr, DataType type_) -> FieldStructMember;

class struct_field_assoc_list_sm_class : public FieldStructMember_class {
    protected:
        Symbol_ id;
        DataType type_;
    public:
        struct_field_assoc_list_sm_class(Symbol_ id, DataType type_){
            this->id = id;
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FieldStructMember_SHARED_EXTRAS
    FieldStructMember_SHARED_EXTRAS
#endif
#ifdef struct_field_assoc_list_sm_EXTRAS
    struct_field_assoc_list_sm_EXTRAS
#endif
};

auto struct_field_assoc_list_sm(Symbol_ id, DataType type_) -> FieldStructMember;

class method_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_sm_EXTRAS
    method_dec_sm_EXTRAS
#endif
};

auto method_dec_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember;

class method_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_also_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_also_sm_EXTRAS
    method_dec_also_sm_EXTRAS
#endif
};

auto method_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember;

class method_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_first_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_first_sm_EXTRAS
    method_dec_first_sm_EXTRAS
#endif
};

auto method_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember;

class method_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_only_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_only_sm_EXTRAS
    method_dec_only_sm_EXTRAS
#endif
};

auto method_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_) -> StructMember;

class method_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
    public:
        method_dec_empty_sm_class(Symbol_ id, Formals arguments, DataType return_type){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_empty_sm_EXTRAS
    method_dec_empty_sm_EXTRAS
#endif
};

auto method_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember;

class method_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
    public:
        method_dec_undef_sm_class(Symbol_ id, Formals arguments, DataType return_type){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef method_dec_undef_sm_EXTRAS
    method_dec_undef_sm_EXTRAS
#endif
};

auto method_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type) -> StructMember;

class tcm_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_sm_EXTRAS
    tcm_dec_sm_EXTRAS
#endif
};

auto tcm_dec_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember;

class tcm_dec_also_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_also_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_also_sm_EXTRAS
    tcm_dec_also_sm_EXTRAS
#endif
};

auto tcm_dec_also_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember;

class tcm_dec_first_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_first_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_first_sm_EXTRAS
    tcm_dec_first_sm_EXTRAS
#endif
};

auto tcm_dec_first_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember;

class tcm_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_only_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
            this->actions_ = actions_;
            if(actions_){
                this->actions_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_only_sm_EXTRAS
    tcm_dec_only_sm_EXTRAS
#endif
};

auto tcm_dec_only_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_) -> StructMember;

class tcm_dec_empty_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
    public:
        tcm_dec_empty_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_empty_sm_EXTRAS
    tcm_dec_empty_sm_EXTRAS
#endif
};

auto tcm_dec_empty_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember;

class tcm_dec_undef_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
    public:
        tcm_dec_undef_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr){
            this->id = id;
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){
                this->event_id_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef tcm_dec_undef_sm_EXTRAS
    tcm_dec_undef_sm_EXTRAS
#endif
};

auto tcm_dec_undef_sm(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr) -> StructMember;

class c_method_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ e_method_name;
        Formals parameters_list;
        DataType return_type;
        Symbol_ c_method_name;
    public:
        c_method_dec_sm_class(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name){
            this->e_method_name = e_method_name;
            this->parameters_list = parameters_list;
            if(parameters_list){
                this->parameters_list->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->c_method_name = c_method_name;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef c_method_dec_sm_EXTRAS
    c_method_dec_sm_EXTRAS
#endif
};

auto c_method_dec_sm(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name) -> StructMember;

class c_method_dec_only_sm_class : public StructMember_class {
    protected:
        Symbol_ e_method_name;
        Formals parameters_list;
        DataType return_type;
        Symbol_ c_method_name;
    public:
        c_method_dec_only_sm_class(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name){
            this->e_method_name = e_method_name;
            this->parameters_list = parameters_list;
            if(parameters_list){
                this->parameters_list->set_parent(this);
            }
            this->return_type = return_type;
            if(return_type){
                this->return_type->set_parent(this);
            }
            this->c_method_name = c_method_name;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef c_method_dec_only_sm_EXTRAS
    c_method_dec_only_sm_EXTRAS
#endif
};

auto c_method_dec_only_sm(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name) -> StructMember;

class when_subtype_sm_class : public StructMember_class {
    protected:
        Expressions subtype_mods;
        StructMembers subtype_members;
    public:
        when_subtype_sm_class(Expressions subtype_mods, StructMembers subtype_members){
            this->subtype_mods = subtype_mods;
            if(subtype_mods){
                this->subtype_mods->set_parent(this);
            }
            this->subtype_members = subtype_members;
            if(subtype_members){
                this->subtype_members->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef when_subtype_sm_EXTRAS
    when_subtype_sm_EXTRAS
#endif
};

auto when_subtype_sm(Expressions subtype_mods, StructMembers subtype_members) -> StructMember;

class constraint_def_sm_class : public StructMember_class {
    protected:
        Expression constraint_expr;
    public:
        constraint_def_sm_class(Expression constraint_expr){
            this->constraint_expr = constraint_expr;
            if(constraint_expr){
                this->constraint_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef constraint_def_sm_EXTRAS
    constraint_def_sm_EXTRAS
#endif
};

auto constraint_def_sm(Expression constraint_expr) -> StructMember;

class on_event_sm_class : public StructMember_class {
    protected:
        Expression event_name;
        ActionBlock action_block;
    public:
        on_event_sm_class(Expression event_name, ActionBlock action_block){
            this->event_name = event_name;
            if(event_name){
                this->event_name->set_parent(this);
            }
            this->action_block = action_block;
            if(action_block){
                this->action_block->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef on_event_sm_EXTRAS
    on_event_sm_EXTRAS
#endif
};

auto on_event_sm(Expression event_name, ActionBlock action_block) -> StructMember;

class simple_event_dec_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
    public:
        simple_event_dec_sm_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef simple_event_dec_sm_EXTRAS
    simple_event_dec_sm_EXTRAS
#endif
};

auto simple_event_dec_sm(Symbol_ id) -> StructMember;

class event_def_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression temporal;
    public:
        event_def_sm_class(Symbol_ id, Expression temporal){
            this->id = id;
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef event_def_sm_EXTRAS
    event_def_sm_EXTRAS
#endif
};

auto event_def_sm(Symbol_ id, Expression temporal) -> StructMember;

class event_def_override_sm_class : public StructMember_class {
    protected:
        Symbol_ id;
        Expression temporal;
    public:
        event_def_override_sm_class(Symbol_ id, Expression temporal){
            this->id = id;
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef event_def_override_sm_EXTRAS
    event_def_override_sm_EXTRAS
#endif
};

auto event_def_override_sm(Symbol_ id, Expression temporal) -> StructMember;

class temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
        Expression sample_event;
    public:
        temporal_expr_class(Expression temporal, Expression sample_event){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->sample_event = sample_event;
            if(sample_event){
                this->sample_event->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef temporal_expr_EXTRAS
    temporal_expr_EXTRAS
#endif
};

auto temporal_expr(Expression temporal, Expression sample_event) -> Expression;

class sampling_event_expr_class : public Expression_class {
    protected:
        Expression event_expr;
    public:
        sampling_event_expr_class(Expression event_expr){
            this->event_expr = event_expr;
            if(event_expr){
                this->event_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sampling_event_expr_EXTRAS
    sampling_event_expr_EXTRAS
#endif
};

auto sampling_event_expr(Expression event_expr) -> Expression;

class event_ref_expr_class : public Expression_class {
    protected:
        Expression event_name;
    public:
        event_ref_expr_class(Expression event_name){
            this->event_name = event_name;
            if(event_name){
                this->event_name->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef event_ref_expr_EXTRAS
    event_ref_expr_EXTRAS
#endif
};

auto event_ref_expr(Expression event_name) -> Expression;

class action_attached_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
        ActionBlock actions;
    public:
        action_attached_temporal_expr_class(Expression temporal, ActionBlock actions){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef action_attached_temporal_expr_EXTRAS
    action_attached_temporal_expr_EXTRAS
#endif
};

auto action_attached_temporal_expr(Expression temporal, ActionBlock actions) -> Expression;

class not_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        not_temporal_expr_class(Expression temporal){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef not_temporal_expr_EXTRAS
    not_temporal_expr_EXTRAS
#endif
};

auto not_temporal_expr(Expression temporal) -> Expression;

class fail_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        fail_temporal_expr_class(Expression temporal){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fail_temporal_expr_EXTRAS
    fail_temporal_expr_EXTRAS
#endif
};

auto fail_temporal_expr(Expression temporal) -> Expression;

class eventually_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        eventually_temporal_expr_class(Expression temporal){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef eventually_temporal_expr_EXTRAS
    eventually_temporal_expr_EXTRAS
#endif
};

auto eventually_temporal_expr(Expression temporal) -> Expression;

class detach_temporal_expr_class : public Expression_class {
    protected:
        Expression temporal;
    public:
        detach_temporal_expr_class(Expression temporal){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef detach_temporal_expr_EXTRAS
    detach_temporal_expr_EXTRAS
#endif
};

auto detach_temporal_expr(Expression temporal) -> Expression;

class yield_temporal_expr_class : public Expression_class {
    protected:
        Expression trigger;
        Expression temporal;
    public:
        yield_temporal_expr_class(Expression trigger, Expression temporal){
            this->trigger = trigger;
            if(trigger){
                this->trigger->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef yield_temporal_expr_EXTRAS
    yield_temporal_expr_EXTRAS
#endif
};

auto yield_temporal_expr(Expression trigger, Expression temporal) -> Expression;

class true_temporal_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        true_temporal_expr_class(Expression bool_expr){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_temporal_expr_EXTRAS
    true_temporal_expr_EXTRAS
#endif
};

auto true_temporal_expr(Expression bool_expr) -> Expression;

class rise_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        rise_temporal_expr_class(Expression hdl_path){
            this->hdl_path = hdl_path;
            if(hdl_path){
                this->hdl_path->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef rise_temporal_expr_EXTRAS
    rise_temporal_expr_EXTRAS
#endif
};

auto rise_temporal_expr(Expression hdl_path) -> Expression;

class fall_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        fall_temporal_expr_class(Expression hdl_path){
            this->hdl_path = hdl_path;
            if(hdl_path){
                this->hdl_path->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fall_temporal_expr_EXTRAS
    fall_temporal_expr_EXTRAS
#endif
};

auto fall_temporal_expr(Expression hdl_path) -> Expression;

class change_temporal_expr_class : public Expression_class {
    protected:
        Expression hdl_path;
    public:
        change_temporal_expr_class(Expression hdl_path){
            this->hdl_path = hdl_path;
            if(hdl_path){
                this->hdl_path->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef change_temporal_expr_EXTRAS
    change_temporal_expr_EXTRAS
#endif
};

auto change_temporal_expr(Expression hdl_path) -> Expression;

class and_temporal_expr_class : public Expression_class {
    protected:
        Expression te1;
        Expression te2;
    public:
        and_temporal_expr_class(Expression te1, Expression te2){
            this->te1 = te1;
            if(te1){
                this->te1->set_parent(this);
            }
            this->te2 = te2;
            if(te2){
                this->te2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef and_temporal_expr_EXTRAS
    and_temporal_expr_EXTRAS
#endif
};

auto and_temporal_expr(Expression te1, Expression te2) -> Expression;

class or_temporal_expr_class : public Expression_class {
    protected:
        Expression te1;
        Expression te2;
    public:
        or_temporal_expr_class(Expression te1, Expression te2){
            this->te1 = te1;
            if(te1){
                this->te1->set_parent(this);
            }
            this->te2 = te2;
            if(te2){
                this->te2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef or_temporal_expr_EXTRAS
    or_temporal_expr_EXTRAS
#endif
};

auto or_temporal_expr(Expression te1, Expression te2) -> Expression;

class sequence_temporal_expr_class : public Expression_class {
    protected:
        Expressions temporals;
    public:
        sequence_temporal_expr_class(Expressions temporals){
            this->temporals = temporals;
            if(temporals){
                this->temporals->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sequence_temporal_expr_EXTRAS
    sequence_temporal_expr_EXTRAS
#endif
};

auto sequence_temporal_expr(Expressions temporals) -> Expression;

class fixed_repetition_expr_class : public Expression_class {
    protected:
        Expression rep;
        Expression temporal;
    public:
        fixed_repetition_expr_class(Expression rep, Expression temporal){
            this->rep = rep;
            if(rep){
                this->rep->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef fixed_repetition_expr_EXTRAS
    fixed_repetition_expr_EXTRAS
#endif
};

auto fixed_repetition_expr(Expression rep, Expression temporal) -> Expression;

class first_match_repetition_expr_class : public Expression_class {
    protected:
        Expression from_rep;
        Expression to_rep;
        Expression temporal;
        Expression match_temporal;
    public:
        first_match_repetition_expr_class(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal){
            this->from_rep = from_rep;
            if(from_rep){
                this->from_rep->set_parent(this);
            }
            this->to_rep = to_rep;
            if(to_rep){
                this->to_rep->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->match_temporal = match_temporal;
            if(match_temporal){
                this->match_temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef first_match_repetition_expr_EXTRAS
    first_match_repetition_expr_EXTRAS
#endif
};

auto first_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal, Expression match_temporal) -> Expression;

class true_match_repetition_expr_class : public Expression_class {
    protected:
        Expression from_rep;
        Expression to_rep;
        Expression temporal;
    public:
        true_match_repetition_expr_class(Expression from_rep, Expression to_rep, Expression temporal){
            this->from_rep = from_rep;
            if(from_rep){
                this->from_rep->set_parent(this);
            }
            this->to_rep = to_rep;
            if(to_rep){
                this->to_rep->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_match_repetition_expr_EXTRAS
    true_match_repetition_expr_EXTRAS
#endif
};

auto true_match_repetition_expr(Expression from_rep, Expression to_rep, Expression temporal) -> Expression;

class zero_repetition_base_expr_class : public Expression_class {
    protected:
    public:
        zero_repetition_base_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef zero_repetition_base_expr_EXTRAS
    zero_repetition_base_expr_EXTRAS
#endif
};

auto zero_repetition_base_expr() -> Expression;

class inf_repetition_base_expr_class : public Expression_class {
    protected:
    public:
        inf_repetition_base_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef inf_repetition_base_expr_EXTRAS
    inf_repetition_base_expr_EXTRAS
#endif
};

auto inf_repetition_base_expr() -> Expression;

class cycle_temporal_expr_class : public Expression_class {
    protected:
    public:
        cycle_temporal_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef cycle_temporal_expr_EXTRAS
    cycle_temporal_expr_EXTRAS
#endif
};

auto cycle_temporal_expr() -> Expression;

class delay_temporal_expr_class : public Expression_class {
    protected:
        Expression e;
        Expression timescale_unit;
    public:
        delay_temporal_expr_class(Expression e, Expression timescale_unit){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
            this->timescale_unit = timescale_unit;
            if(timescale_unit){
                this->timescale_unit->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef delay_temporal_expr_EXTRAS
    delay_temporal_expr_EXTRAS
#endif
};

auto delay_temporal_expr(Expression e, Expression timescale_unit) -> Expression;

class consume_temporal_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        consume_temporal_expr_class(Expression e){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef consume_temporal_expr_EXTRAS
    consume_temporal_expr_EXTRAS
#endif
};

auto consume_temporal_expr(Expression e) -> Expression;

class expect_nameless_sm_class : public StructMember_class {
    protected:
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_nameless_sm_class(Expression temporal, Expression dut_error_call){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_nameless_sm_EXTRAS
    expect_nameless_sm_EXTRAS
#endif
};

auto expect_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember;

class expect_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_sm_class(Expression id, Expression temporal, Expression dut_error_call){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_sm_EXTRAS
    expect_sm_EXTRAS
#endif
};

auto expect_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class expect_override_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        expect_override_sm_class(Expression id, Expression temporal, Expression dut_error_call){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef expect_override_sm_EXTRAS
    expect_override_sm_EXTRAS
#endif
};

auto expect_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class assume_nameless_sm_class : public StructMember_class {
    protected:
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_nameless_sm_class(Expression temporal, Expression dut_error_call){
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_nameless_sm_EXTRAS
    assume_nameless_sm_EXTRAS
#endif
};

auto assume_nameless_sm(Expression temporal, Expression dut_error_call) -> StructMember;

class assume_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_sm_class(Expression id, Expression temporal, Expression dut_error_call){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_sm_EXTRAS
    assume_sm_EXTRAS
#endif
};

auto assume_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class assume_override_sm_class : public StructMember_class {
    protected:
        Expression id;
        Expression temporal;
        Expression dut_error_call;
    public:
        assume_override_sm_class(Expression id, Expression temporal, Expression dut_error_call){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->temporal = temporal;
            if(temporal){
                this->temporal->set_parent(this);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){
                this->dut_error_call->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef assume_override_sm_EXTRAS
    assume_override_sm_EXTRAS
#endif
};

auto assume_override_sm(Expression id, Expression temporal, Expression dut_error_call) -> StructMember;

class empty_covergroup_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
    public:
        empty_covergroup_sm_class(Symbol_ event_id){
            this->event_id = event_id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef empty_covergroup_sm_EXTRAS
    empty_covergroup_sm_EXTRAS
#endif
};

auto empty_covergroup_sm(Symbol_ event_id) -> StructMember;

class covergroup_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_sm_class(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items){
            this->event_id = event_id;
            this->cg_opts = cg_opts;
            if(cg_opts){
                this->cg_opts->set_parent(this);
            }
            this->cg_items = cg_items;
            if(cg_items){
                this->cg_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef covergroup_sm_EXTRAS
    covergroup_sm_EXTRAS
#endif
};

auto covergroup_sm(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember;

class covergroup_extension_sm_class : public StructMember_class {
    protected:
        Symbol_ event_id;
        CovergroupExtensionID instance_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_extension_sm_class(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items){
            this->event_id = event_id;
            this->instance_id = instance_id;
            if(instance_id){
                this->instance_id->set_parent(this);
            }
            this->cg_opts = cg_opts;
            if(cg_opts){
                this->cg_opts->set_parent(this);
            }
            this->cg_items = cg_items;
            if(cg_items){
                this->cg_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef StructMember_SHARED_EXTRAS
    StructMember_SHARED_EXTRAS
#endif
#ifdef covergroup_extension_sm_EXTRAS
    covergroup_extension_sm_EXTRAS
#endif
};

auto covergroup_extension_sm(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items) -> StructMember;

class covergroup_per_type_ceid_class : public CovergroupExtensionID_class {
    protected:
    public:
        covergroup_per_type_ceid_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_type_ceid_EXTRAS
    covergroup_per_type_ceid_EXTRAS
#endif
};

auto covergroup_per_type_ceid() -> CovergroupExtensionID;

class covergroup_per_unit_instance_ceid_class : public CovergroupExtensionID_class {
    protected:
        Expression e_path;
    public:
        covergroup_per_unit_instance_ceid_class(Expression e_path){
            this->e_path = e_path;
            if(e_path){
                this->e_path->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_unit_instance_ceid_EXTRAS
    covergroup_per_unit_instance_ceid_EXTRAS
#endif
};

auto covergroup_per_unit_instance_ceid(Expression e_path) -> CovergroupExtensionID;

class covergroup_per_instance_ceid_class : public CovergroupExtensionID_class {
    protected:
        Symbol_ item_name;
        Symbol_ bucket_name;
    public:
        covergroup_per_instance_ceid_class(Symbol_ item_name, Symbol_ bucket_name){
            this->item_name = item_name;
            this->bucket_name = bucket_name;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupExtensionID_SHARED_EXTRAS
    CovergroupExtensionID_SHARED_EXTRAS
#endif
#ifdef covergroup_per_instance_ceid_EXTRAS
    covergroup_per_instance_ceid_EXTRAS
#endif
};

auto covergroup_per_instance_ceid(Symbol_ item_name, Symbol_ bucket_name) -> CovergroupExtensionID;

class global_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_litral;
    public:
        global_cgo_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef global_cgo_EXTRAS
    global_cgo_EXTRAS
#endif
};

auto global_cgo(Expression bool_litral) -> CovergroupOption;

class no_collect_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_litral;
    public:
        no_collect_cgo_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef no_collect_cgo_EXTRAS
    no_collect_cgo_EXTRAS
#endif
};

auto no_collect_cgo(Expression bool_litral) -> CovergroupOption;

class per_unit_instance_cgo_class : public CovergroupOption_class {
    protected:
        Expression hier_id;
    public:
        per_unit_instance_cgo_class(Expression hier_id){
            this->hier_id = hier_id;
            if(hier_id){
                this->hier_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef per_unit_instance_cgo_EXTRAS
    per_unit_instance_cgo_EXTRAS
#endif
};

auto per_unit_instance_cgo(Expression hier_id) -> CovergroupOption;

class radix_dec_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_dec_cgo_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_dec_cgo_EXTRAS
    radix_dec_cgo_EXTRAS
#endif
};

auto radix_dec_cgo() -> CovergroupOption;

class radix_hex_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_hex_cgo_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_hex_cgo_EXTRAS
    radix_hex_cgo_EXTRAS
#endif
};

auto radix_hex_cgo() -> CovergroupOption;

class radix_bin_cgo_class : public CovergroupOption_class {
    protected:
    public:
        radix_bin_cgo_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef radix_bin_cgo_EXTRAS
    radix_bin_cgo_EXTRAS
#endif
};

auto radix_bin_cgo() -> CovergroupOption;

class text_cgo_class : public CovergroupOption_class {
    protected:
        Symbol_ description;
    public:
        text_cgo_class(Symbol_ description){
            this->description = description;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef text_cgo_EXTRAS
    text_cgo_EXTRAS
#endif
};

auto text_cgo(Symbol_ description) -> CovergroupOption;

class weight_cgo_class : public CovergroupOption_class {
    protected:
        Symbol_ value;
    public:
        weight_cgo_class(Symbol_ value){
            this->value = value;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef weight_cgo_EXTRAS
    weight_cgo_EXTRAS
#endif
};

auto weight_cgo(Symbol_ value) -> CovergroupOption;

class when_cgo_class : public CovergroupOption_class {
    protected:
        Expression bool_expr;
    public:
        when_cgo_class(Expression bool_expr){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupOption_SHARED_EXTRAS
    CovergroupOption_SHARED_EXTRAS
#endif
#ifdef when_cgo_EXTRAS
    when_cgo_EXTRAS
#endif
};

auto when_cgo(Expression bool_expr) -> CovergroupOption;

class simple_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        CovergroupItemOptions cgi_options;
    public:
        simple_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options){
            this->item_id = item_id;
            this->cgi_options = cgi_options;
            if(cgi_options){
                this->cgi_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef simple_covergroup_item_cgi_EXTRAS
    simple_covergroup_item_cgi_EXTRAS
#endif
};

auto simple_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem;

class on_the_fly_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        DataType type_;
        Expression sampled_val;
        CovergroupItemOptions cgi_options;
    public:
        on_the_fly_covergroup_item_cgi_class(Symbol_ item_id, DataType type_, Expression sampled_val, CovergroupItemOptions cgi_options){
            this->item_id = item_id;
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
            this->sampled_val = sampled_val;
            if(sampled_val){
                this->sampled_val->set_parent(this);
            }
            this->cgi_options = cgi_options;
            if(cgi_options){
                this->cgi_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef on_the_fly_covergroup_item_cgi_EXTRAS
    on_the_fly_covergroup_item_cgi_EXTRAS
#endif
};

auto on_the_fly_covergroup_item_cgi(Symbol_ item_id, DataType type_, Expression sampled_val, CovergroupItemOptions cgi_options) -> CovergroupItem;

class cross_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Expressions cg_items;
        CovergroupItemOptions cgi_options;
    public:
        cross_covergroup_item_cgi_class(Expressions cg_items, CovergroupItemOptions cgi_options){
            this->cg_items = cg_items;
            if(cg_items){
                this->cg_items->set_parent(this);
            }
            this->cgi_options = cgi_options;
            if(cgi_options){
                this->cgi_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef cross_covergroup_item_cgi_EXTRAS
    cross_covergroup_item_cgi_EXTRAS
#endif
};

auto cross_covergroup_item_cgi(Expressions cg_items, CovergroupItemOptions cgi_options) -> CovergroupItem;

class transition_covergroup_item_cgi_class : public CovergroupItem_class {
    protected:
        Symbol_ item_id;
        CovergroupItemOptions cgi_options;
    public:
        transition_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options){
            this->item_id = item_id;
            this->cgi_options = cgi_options;
            if(cgi_options){
                this->cgi_options->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItem_SHARED_EXTRAS
    CovergroupItem_SHARED_EXTRAS
#endif
#ifdef transition_covergroup_item_cgi_EXTRAS
    transition_covergroup_item_cgi_EXTRAS
#endif
};

auto transition_covergroup_item_cgi(Symbol_ item_id, CovergroupItemOptions cgi_options) -> CovergroupItem;

class at_least_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ num;
    public:
        at_least_cgio_class(Symbol_ num){
            this->num = num;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef at_least_cgio_EXTRAS
    at_least_cgio_EXTRAS
#endif
};

auto at_least_cgio(Symbol_ num) -> CovergroupItemOption;

class ignore_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression item_bool_expr;
    public:
        ignore_cgio_class(Expression item_bool_expr){
            this->item_bool_expr = item_bool_expr;
            if(item_bool_expr){
                this->item_bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef ignore_cgio_EXTRAS
    ignore_cgio_EXTRAS
#endif
};

auto ignore_cgio(Expression item_bool_expr) -> CovergroupItemOption;

class illegal_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        illegal_cgio_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef illegal_cgio_EXTRAS
    illegal_cgio_EXTRAS
#endif
};

auto illegal_cgio(Expression bool_litral) -> CovergroupItemOption;

class no_collect_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        no_collect_cgio_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef no_collect_cgio_EXTRAS
    no_collect_cgio_EXTRAS
#endif
};

auto no_collect_cgio(Expression bool_litral) -> CovergroupItemOption;

class no_trace_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        no_trace_cgio_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef no_trace_cgio_EXTRAS
    no_trace_cgio_EXTRAS
#endif
};

auto no_trace_cgio(Expression bool_litral) -> CovergroupItemOption;

class num_of_buckets_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ num;
    public:
        num_of_buckets_cgio_class(Symbol_ num){
            this->num = num;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef num_of_buckets_cgio_EXTRAS
    num_of_buckets_cgio_EXTRAS
#endif
};

auto num_of_buckets_cgio(Symbol_ num) -> CovergroupItemOption;

class per_instance_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_litral;
    public:
        per_instance_cgio_class(Expression bool_litral){
            this->bool_litral = bool_litral;
            if(bool_litral){
                this->bool_litral->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef per_instance_cgio_EXTRAS
    per_instance_cgio_EXTRAS
#endif
};

auto per_instance_cgio(Expression bool_litral) -> CovergroupItemOption;

class radix_dec_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_dec_cgio_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_dec_cgio_EXTRAS
    radix_dec_cgio_EXTRAS
#endif
};

auto radix_dec_cgio() -> CovergroupItemOption;

class radix_hex_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_hex_cgio_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_hex_cgio_EXTRAS
    radix_hex_cgio_EXTRAS
#endif
};

auto radix_hex_cgio() -> CovergroupItemOption;

class radix_bin_cgio_class : public CovergroupItemOption_class {
    protected:
    public:
        radix_bin_cgio_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef radix_bin_cgio_EXTRAS
    radix_bin_cgio_EXTRAS
#endif
};

auto radix_bin_cgio() -> CovergroupItemOption;

class text_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ description;
    public:
        text_cgio_class(Symbol_ description){
            this->description = description;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef text_cgio_EXTRAS
    text_cgio_EXTRAS
#endif
};

auto text_cgio(Symbol_ description) -> CovergroupItemOption;

class weight_cgio_class : public CovergroupItemOption_class {
    protected:
        Symbol_ value;
    public:
        weight_cgio_class(Symbol_ value){
            this->value = value;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef weight_cgio_EXTRAS
    weight_cgio_EXTRAS
#endif
};

auto weight_cgio(Symbol_ value) -> CovergroupItemOption;

class when_cgio_class : public CovergroupItemOption_class {
    protected:
        Expression bool_expr;
    public:
        when_cgio_class(Expression bool_expr){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef CovergroupItemOption_SHARED_EXTRAS
    CovergroupItemOption_SHARED_EXTRAS
#endif
#ifdef when_cgio_EXTRAS
    when_cgio_EXTRAS
#endif
};

auto when_cgio(Expression bool_expr) -> CovergroupItemOption;

class true_literal_expr_class : public Expression_class {
    protected:
    public:
        true_literal_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef true_literal_expr_EXTRAS
    true_literal_expr_EXTRAS
#endif
};

auto true_literal_expr() -> Expression;

class false_literal_expr_class : public Expression_class {
    protected:
    public:
        false_literal_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef false_literal_expr_EXTRAS
    false_literal_expr_EXTRAS
#endif
};

auto false_literal_expr() -> Expression;

class id_expr_class : public Expression_class {
    protected:
        Symbol_ id;
    public:
        id_expr_class(Symbol_ id){
            this->id = id;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef id_expr_EXTRAS
    id_expr_EXTRAS
#endif
};

auto id_expr(Symbol_ id) -> Expression;

class enum_type_expr_class : public Expression_class {
    protected:
        Expressions enum_list_expr;
        Expression width_modifier_expr;
    public:
        enum_type_expr_class(Expressions enum_list_expr, Expression width_modifier_expr){
            this->enum_list_expr = enum_list_expr;
            if(enum_list_expr){
                this->enum_list_expr->set_parent(this);
            }
            this->width_modifier_expr = width_modifier_expr;
            if(width_modifier_expr){
                this->width_modifier_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef enum_type_expr_EXTRAS
    enum_type_expr_EXTRAS
#endif
};

auto enum_type_expr(Expressions enum_list_expr, Expression width_modifier_expr) -> Expression;

class enum_list_item_class : public Expression_class {
    protected:
        Symbol_ id;
        Expression expr;
    public:
        enum_list_item_class(Symbol_ id, Expression expr){
            this->id = id;
            this->expr = expr;
            if(expr){
                this->expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef enum_list_item_EXTRAS
    enum_list_item_EXTRAS
#endif
};

auto enum_list_item(Symbol_ id, Expression expr) -> Expression;

class bitwise_not_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        bitwise_not_expr_class(Expression e){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_not_expr_EXTRAS
    bitwise_not_expr_EXTRAS
#endif
};

auto bitwise_not_expr(Expression e) -> Expression;

class bitwise_and_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_and_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_and_expr_EXTRAS
    bitwise_and_expr_EXTRAS
#endif
};

auto bitwise_and_expr(Expression e1, Expression e2) -> Expression;

class bitwise_or_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_or_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_or_expr_EXTRAS
    bitwise_or_expr_EXTRAS
#endif
};

auto bitwise_or_expr(Expression e1, Expression e2) -> Expression;

class bitwise_xor_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        bitwise_xor_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bitwise_xor_expr_EXTRAS
    bitwise_xor_expr_EXTRAS
#endif
};

auto bitwise_xor_expr(Expression e1, Expression e2) -> Expression;

class shift_left_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        shift_left_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef shift_left_expr_EXTRAS
    shift_left_expr_EXTRAS
#endif
};

auto shift_left_expr(Expression e1, Expression e2) -> Expression;

class right_left_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        right_left_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef right_left_expr_EXTRAS
    right_left_expr_EXTRAS
#endif
};

auto right_left_expr(Expression e1, Expression e2) -> Expression;

class logical_not_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        logical_not_expr_class(Expression e){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_not_expr_EXTRAS
    logical_not_expr_EXTRAS
#endif
};

auto logical_not_expr(Expression e) -> Expression;

class logical_and_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        logical_and_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_and_expr_EXTRAS
    logical_and_expr_EXTRAS
#endif
};

auto logical_and_expr(Expression e1, Expression e2) -> Expression;

class logical_or_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        logical_or_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef logical_or_expr_EXTRAS
    logical_or_expr_EXTRAS
#endif
};

auto logical_or_expr(Expression e1, Expression e2) -> Expression;

class implication_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        implication_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef implication_expr_EXTRAS
    implication_expr_EXTRAS
#endif
};

auto implication_expr(Expression e1, Expression e2) -> Expression;

class unary_positive_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        unary_positive_expr_class(Expression e){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef unary_positive_expr_EXTRAS
    unary_positive_expr_EXTRAS
#endif
};

auto unary_positive_expr(Expression e) -> Expression;

class unary_negative_expr_class : public Expression_class {
    protected:
        Expression e;
    public:
        unary_negative_expr_class(Expression e){
            this->e = e;
            if(e){
                this->e->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef unary_negative_expr_EXTRAS
    unary_negative_expr_EXTRAS
#endif
};

auto unary_negative_expr(Expression e) -> Expression;

class binary_add_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_add_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_add_expr_EXTRAS
    binary_add_expr_EXTRAS
#endif
};

auto binary_add_expr(Expression e1, Expression e2) -> Expression;

class binary_sub_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_sub_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_sub_expr_EXTRAS
    binary_sub_expr_EXTRAS
#endif
};

auto binary_sub_expr(Expression e1, Expression e2) -> Expression;

class binary_mul_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_mul_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_mul_expr_EXTRAS
    binary_mul_expr_EXTRAS
#endif
};

auto binary_mul_expr(Expression e1, Expression e2) -> Expression;

class binary_div_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_div_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_div_expr_EXTRAS
    binary_div_expr_EXTRAS
#endif
};

auto binary_div_expr(Expression e1, Expression e2) -> Expression;

class binary_remainder_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        binary_remainder_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef binary_remainder_expr_EXTRAS
    binary_remainder_expr_EXTRAS
#endif
};

auto binary_remainder_expr(Expression e1, Expression e2) -> Expression;

class less_then_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        less_then_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef less_then_expr_EXTRAS
    less_then_expr_EXTRAS
#endif
};

auto less_then_expr(Expression e1, Expression e2) -> Expression;

class greater_then_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        greater_then_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef greater_then_expr_EXTRAS
    greater_then_expr_EXTRAS
#endif
};

auto greater_then_expr(Expression e1, Expression e2) -> Expression;

class less_then_or_equal_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        less_then_or_equal_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef less_then_or_equal_expr_EXTRAS
    less_then_or_equal_expr_EXTRAS
#endif
};

auto less_then_or_equal_expr(Expression e1, Expression e2) -> Expression;

class greater_then_or_equal_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        greater_then_or_equal_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef greater_then_or_equal_expr_EXTRAS
    greater_then_or_equal_expr_EXTRAS
#endif
};

auto greater_then_or_equal_expr(Expression e1, Expression e2) -> Expression;

class equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        equality_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef equality_expr_EXTRAS
    equality_expr_EXTRAS
#endif
};

auto equality_expr(Expression e1, Expression e2) -> Expression;

class non_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        non_equality_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef non_equality_expr_EXTRAS
    non_equality_expr_EXTRAS
#endif
};

auto non_equality_expr(Expression e1, Expression e2) -> Expression;

class hdl_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        hdl_equality_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_equality_expr_EXTRAS
    hdl_equality_expr_EXTRAS
#endif
};

auto hdl_equality_expr(Expression e1, Expression e2) -> Expression;

class hdl_non_equality_expr_class : public Expression_class {
    protected:
        Expression e1;
        Expression e2;
    public:
        hdl_non_equality_expr_class(Expression e1, Expression e2){
            this->e1 = e1;
            if(e1){
                this->e1->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_non_equality_expr_EXTRAS
    hdl_non_equality_expr_EXTRAS
#endif
};

auto hdl_non_equality_expr(Expression e1, Expression e2) -> Expression;

class str_match_expr_class : public Expression_class {
    protected:
        Expression str_expr;
        Expression pattern_expr;
    public:
        str_match_expr_class(Expression str_expr, Expression pattern_expr){
            this->str_expr = str_expr;
            if(str_expr){
                this->str_expr->set_parent(this);
            }
            this->pattern_expr = pattern_expr;
            if(pattern_expr){
                this->pattern_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_match_expr_EXTRAS
    str_match_expr_EXTRAS
#endif
};

auto str_match_expr(Expression str_expr, Expression pattern_expr) -> Expression;

class str_does_not_match_expr_class : public Expression_class {
    protected:
        Expression str_expr;
        Expression pattern_expr;
    public:
        str_does_not_match_expr_class(Expression str_expr, Expression pattern_expr){
            this->str_expr = str_expr;
            if(str_expr){
                this->str_expr->set_parent(this);
            }
            this->pattern_expr = pattern_expr;
            if(pattern_expr){
                this->pattern_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_does_not_match_expr_EXTRAS
    str_does_not_match_expr_EXTRAS
#endif
};

auto str_does_not_match_expr(Expression str_expr, Expression pattern_expr) -> Expression;

class in_expr_class : public Expression_class {
    protected:
        Expression exp;
        Expression inside;
    public:
        in_expr_class(Expression exp, Expression inside){
            this->exp = exp;
            if(exp){
                this->exp->set_parent(this);
            }
            this->inside = inside;
            if(inside){
                this->inside->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef in_expr_EXTRAS
    in_expr_EXTRAS
#endif
};

auto in_expr(Expression exp, Expression inside) -> Expression;

class type_introspec_expr_class : public Expression_class {
    protected:
        Expression field_id;
        DataType type_id;
    public:
        type_introspec_expr_class(Expression field_id, DataType type_id){
            this->field_id = field_id;
            if(field_id){
                this->field_id->set_parent(this);
            }
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef type_introspec_expr_EXTRAS
    type_introspec_expr_EXTRAS
#endif
};

auto type_introspec_expr(Expression field_id, DataType type_id) -> Expression;

class type_introspec_negation_expr_class : public Expression_class {
    protected:
        Expression field_id;
        DataType type_id;
    public:
        type_introspec_negation_expr_class(Expression field_id, DataType type_id){
            this->field_id = field_id;
            if(field_id){
                this->field_id->set_parent(this);
            }
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef type_introspec_negation_expr_EXTRAS
    type_introspec_negation_expr_EXTRAS
#endif
};

auto type_introspec_negation_expr(Expression field_id, DataType type_id) -> Expression;

class in_enum_expr_class : public Expression_class {
    protected:
        Expression exp;
        DataType inside;
    public:
        in_enum_expr_class(Expression exp, DataType inside){
            this->exp = exp;
            if(exp){
                this->exp->set_parent(this);
            }
            this->inside = inside;
            if(inside){
                this->inside->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef in_enum_expr_EXTRAS
    in_enum_expr_EXTRAS
#endif
};

auto in_enum_expr(Expression exp, DataType inside) -> Expression;

class list_index_item_expr_class : public Expression_class {
    protected:
        Expression idx_expr;
    public:
        list_index_item_expr_class(Expression idx_expr){
            this->idx_expr = idx_expr;
            if(idx_expr){
                this->idx_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_index_item_expr_EXTRAS
    list_index_item_expr_EXTRAS
#endif
};

auto list_index_item_expr(Expression idx_expr) -> Expression;

class list_index_expr_class : public Expression_class {
    protected:
        Expression base_id;
        Expression idx_expr;
    public:
        list_index_expr_class(Expression base_id, Expression idx_expr){
            this->base_id = base_id;
            if(base_id){
                this->base_id->set_parent(this);
            }
            this->idx_expr = idx_expr;
            if(idx_expr){
                this->idx_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_index_expr_EXTRAS
    list_index_expr_EXTRAS
#endif
};

auto list_index_expr(Expression base_id, Expression idx_expr) -> Expression;

class list_slicing_expr_class : public Expression_class {
    protected:
        Expression list_exp;
        Expression range_expr;
    public:
        list_slicing_expr_class(Expression list_exp, Expression range_expr){
            this->list_exp = list_exp;
            if(list_exp){
                this->list_exp->set_parent(this);
            }
            this->range_expr = range_expr;
            if(range_expr){
                this->range_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_slicing_expr_EXTRAS
    list_slicing_expr_EXTRAS
#endif
};

auto list_slicing_expr(Expression list_exp, Expression range_expr) -> Expression;

class bit_slicing_expr_class : public Expression_class {
    protected:
        Expression list_exp;
        Expression bit_slice_expr;
    public:
        bit_slicing_expr_class(Expression list_exp, Expression bit_slice_expr){
            this->list_exp = list_exp;
            if(list_exp){
                this->list_exp->set_parent(this);
            }
            this->bit_slice_expr = bit_slice_expr;
            if(bit_slice_expr){
                this->bit_slice_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bit_slicing_expr_EXTRAS
    bit_slicing_expr_EXTRAS
#endif
};

auto bit_slicing_expr(Expression list_exp, Expression bit_slice_expr) -> Expression;

class list_concat_expr_class : public Expression_class {
    protected:
        Expressions list_concat_items;
    public:
        list_concat_expr_class(Expressions list_concat_items){
            this->list_concat_items = list_concat_items;
            if(list_concat_items){
                this->list_concat_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_concat_expr_EXTRAS
    list_concat_expr_EXTRAS
#endif
};

auto list_concat_expr(Expressions list_concat_items) -> Expression;

class bit_concat_expr_class : public Expression_class {
    protected:
        Expressions bit_concat_items;
    public:
        bit_concat_expr_class(Expressions bit_concat_items){
            this->bit_concat_items = bit_concat_items;
            if(bit_concat_items){
                this->bit_concat_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bit_concat_expr_EXTRAS
    bit_concat_expr_EXTRAS
#endif
};

auto bit_concat_expr(Expressions bit_concat_items) -> Expression;

class bit_slice_expr_class : public Expression_class {
    protected:
        Expression bottom;
        Expression top;
    public:
        bit_slice_expr_class(Expression bottom, Expression top){
            this->bottom = bottom;
            if(bottom){
                this->bottom->set_parent(this);
            }
            this->top = top;
            if(top){
                this->top->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef bit_slice_expr_EXTRAS
    bit_slice_expr_EXTRAS
#endif
};

auto bit_slice_expr(Expression bottom, Expression top) -> Expression;

class range_modifier_item_expr_class : public Expression_class {
    protected:
        Expression bottom;
        Expression top;
    public:
        range_modifier_item_expr_class(Expression bottom, Expression top){
            this->bottom = bottom;
            if(bottom){
                this->bottom->set_parent(this);
            }
            this->top = top;
            if(top){
                this->top->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef range_modifier_item_expr_EXTRAS
    range_modifier_item_expr_EXTRAS
#endif
};

auto range_modifier_item_expr(Expression bottom, Expression top) -> Expression;

class range_modifier_expr_class : public Expression_class {
    protected:
        Expressions range_items;
    public:
        range_modifier_expr_class(Expressions range_items){
            this->range_items = range_items;
            if(range_items){
                this->range_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef range_modifier_expr_EXTRAS
    range_modifier_expr_EXTRAS
#endif
};

auto range_modifier_expr(Expressions range_items) -> Expression;

class ranges_modifier_expr_class : public Expression_class {
    protected:
        Expressions ranges;
    public:
        ranges_modifier_expr_class(Expressions ranges){
            this->ranges = ranges;
            if(ranges){
                this->ranges->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef ranges_modifier_expr_EXTRAS
    ranges_modifier_expr_EXTRAS
#endif
};

auto ranges_modifier_expr(Expressions ranges) -> Expression;

class sized_bits_scalar_expr_class : public Expression_class {
    protected:
        Expression width_expr;
    public:
        sized_bits_scalar_expr_class(Expression width_expr){
            this->width_expr = width_expr;
            if(width_expr){
                this->width_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sized_bits_scalar_expr_EXTRAS
    sized_bits_scalar_expr_EXTRAS
#endif
};

auto sized_bits_scalar_expr(Expression width_expr) -> Expression;

class sized_bytes_scalar_expr_class : public Expression_class {
    protected:
        Expression width_expr;
    public:
        sized_bytes_scalar_expr_class(Expression width_expr){
            this->width_expr = width_expr;
            if(width_expr){
                this->width_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sized_bytes_scalar_expr_EXTRAS
    sized_bytes_scalar_expr_EXTRAS
#endif
};

auto sized_bytes_scalar_expr(Expression width_expr) -> Expression;

class new_allocate_expr_class : public Expression_class {
    protected:
        Expression struct_type_block;
        Symbol_ scoped_name;
        ActionBlock actions;
    public:
        new_allocate_expr_class(Expression struct_type_block, Symbol_ scoped_name, ActionBlock actions){
            this->struct_type_block = struct_type_block;
            if(struct_type_block){
                this->struct_type_block->set_parent(this);
            }
            this->scoped_name = scoped_name;
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef new_allocate_expr_EXTRAS
    new_allocate_expr_EXTRAS
#endif
};

auto new_allocate_expr(Expression struct_type_block, Symbol_ scoped_name, ActionBlock actions) -> Expression;

class new_nameless_allocate_expr_class : public Expression_class {
    protected:
        Expression struct_type_block;
        ActionBlock actions;
    public:
        new_nameless_allocate_expr_class(Expression struct_type_block, ActionBlock actions){
            this->struct_type_block = struct_type_block;
            if(struct_type_block){
                this->struct_type_block->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef new_nameless_allocate_expr_EXTRAS
    new_nameless_allocate_expr_EXTRAS
#endif
};

auto new_nameless_allocate_expr(Expression struct_type_block, ActionBlock actions) -> Expression;

class struct_type_expr_with_opt_action_block_class : public Expression_class {
    protected:
        Expression struct_id_expr;
        Expression opt_action_block_expt;
    public:
        struct_type_expr_with_opt_action_block_class(Expression struct_id_expr, Expression opt_action_block_expt){
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){
                this->struct_id_expr->set_parent(this);
            }
            this->opt_action_block_expt = opt_action_block_expt;
            if(opt_action_block_expt){
                this->opt_action_block_expt->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_expr_with_opt_action_block_EXTRAS
    struct_type_expr_with_opt_action_block_EXTRAS
#endif
};

auto struct_type_expr_with_opt_action_block(Expression struct_id_expr, Expression opt_action_block_expt) -> Expression;

class named_action_block_class : public Expression_class {
    protected:
        Expression struct_id_expr;
        Actions action_block;
    public:
        named_action_block_class(Expression struct_id_expr, Actions action_block){
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){
                this->struct_id_expr->set_parent(this);
            }
            this->action_block = action_block;
            if(action_block){
                this->action_block->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef named_action_block_EXTRAS
    named_action_block_EXTRAS
#endif
};

auto named_action_block(Expression struct_id_expr, Actions action_block) -> Expression;

class struct_type_id_class : public Expression_class {
    protected:
        Expressions struct_type_modifiers;
        Expression struct_id_expr;
    public:
        struct_type_id_class(Expressions struct_type_modifiers, Expression struct_id_expr){
            this->struct_type_modifiers = struct_type_modifiers;
            if(struct_type_modifiers){
                this->struct_type_modifiers->set_parent(this);
            }
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){
                this->struct_id_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_id_EXTRAS
    struct_type_id_EXTRAS
#endif
};

auto struct_type_id(Expressions struct_type_modifiers, Expression struct_id_expr) -> Expression;

class struct_type_modifier_class : public Expression_class {
    protected:
        Expression value;
        Expression id;
    public:
        struct_type_modifier_class(Expression value, Expression id){
            this->value = value;
            if(value){
                this->value->set_parent(this);
            }
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_type_modifier_EXTRAS
    struct_type_modifier_EXTRAS
#endif
};

auto struct_type_modifier(Expression value, Expression id) -> Expression;

class defined_type_identifier_expr_class : public Expression_class {
    protected:
        Expressions modifiers;
    public:
        defined_type_identifier_expr_class(Expressions modifiers){
            this->modifiers = modifiers;
            if(modifiers){
                this->modifiers->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef defined_type_identifier_expr_EXTRAS
    defined_type_identifier_expr_EXTRAS
#endif
};

auto defined_type_identifier_expr(Expressions modifiers) -> Expression;

class struct_hier_ref_expr_class : public Expression_class {
    protected:
        Expressions hiers;
    public:
        struct_hier_ref_expr_class(Expressions hiers){
            this->hiers = hiers;
            if(hiers){
                this->hiers->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef struct_hier_ref_expr_EXTRAS
    struct_hier_ref_expr_EXTRAS
#endif
};

auto struct_hier_ref_expr(Expressions hiers) -> Expression;

class hdl_path_name_expr_class : public Expression_class {
    protected:
        Symbol_ hdl_hier_ref;
    public:
        hdl_path_name_expr_class(Symbol_ hdl_hier_ref){
            this->hdl_hier_ref = hdl_hier_ref;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hdl_path_name_expr_EXTRAS
    hdl_path_name_expr_EXTRAS
#endif
};

auto hdl_path_name_expr(Symbol_ hdl_hier_ref) -> Expression;

class ternary_assign_expr_class : public Expression_class {
    protected:
        Expression bool_exp;
        Expression true_expr;
        Expression false_expr;
    public:
        ternary_assign_expr_class(Expression bool_exp, Expression true_expr, Expression false_expr){
            this->bool_exp = bool_exp;
            if(bool_exp){
                this->bool_exp->set_parent(this);
            }
            this->true_expr = true_expr;
            if(true_expr){
                this->true_expr->set_parent(this);
            }
            this->false_expr = false_expr;
            if(false_expr){
                this->false_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef ternary_assign_expr_EXTRAS
    ternary_assign_expr_EXTRAS
#endif
};

auto ternary_assign_expr(Expression bool_exp, Expression true_expr, Expression false_expr) -> Expression;

class hwp_access_expr_class : public Expression_class {
    protected:
        Expression base;
    public:
        hwp_access_expr_class(Expression base){
            this->base = base;
            if(base){
                this->base->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef hwp_access_expr_EXTRAS
    hwp_access_expr_EXTRAS
#endif
};

auto hwp_access_expr(Expression base) -> Expression;

class cast_operator_expr_class : public Expression_class {
    protected:
        DataType dest_type_expr;
    public:
        cast_operator_expr_class(DataType dest_type_expr){
            this->dest_type_expr = dest_type_expr;
            if(dest_type_expr){
                this->dest_type_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef cast_operator_expr_EXTRAS
    cast_operator_expr_EXTRAS
#endif
};

auto cast_operator_expr(DataType dest_type_expr) -> Expression;

class sys_time_ref_expr_class : public Expression_class {
    protected:
    public:
        sys_time_ref_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef sys_time_ref_expr_EXTRAS
    sys_time_ref_expr_EXTRAS
#endif
};

auto sys_time_ref_expr() -> Expression;

class method_call_expr_class : public Expression_class {
    protected:
        Expression base;
        Expressions arguments;
    public:
        method_call_expr_class(Expression base, Expressions arguments){
            this->base = base;
            if(base){
                this->base->set_parent(this);
            }
            this->arguments = arguments;
            if(arguments){
                this->arguments->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef method_call_expr_EXTRAS
    method_call_expr_EXTRAS
#endif
};

auto method_call_expr(Expression base, Expressions arguments) -> Expression;

class constraint_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        constraint_expr_class(Expression bool_expr){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef constraint_expr_EXTRAS
    constraint_expr_EXTRAS
#endif
};

auto constraint_expr(Expression bool_expr) -> Expression;

class soft_constraint_expr_class : public Expression_class {
    protected:
        Expression bool_expr;
    public:
        soft_constraint_expr_class(Expression bool_expr){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef soft_constraint_expr_EXTRAS
    soft_constraint_expr_EXTRAS
#endif
};

auto soft_constraint_expr(Expression bool_expr) -> Expression;

class all_of_constraint_expr_class : public Expression_class {
    protected:
        Expressions constraints;
    public:
        all_of_constraint_expr_class(Expressions constraints){
            this->constraints = constraints;
            if(constraints){
                this->constraints->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef all_of_constraint_expr_EXTRAS
    all_of_constraint_expr_EXTRAS
#endif
};

auto all_of_constraint_expr(Expressions constraints) -> Expression;

class list_items_constraint_expr_class : public Expression_class {
    protected:
        Expression item_name;
        Expression gen_item;
        Expressions constraints;
    public:
        list_items_constraint_expr_class(Expression item_name, Expression gen_item, Expressions constraints){
            this->item_name = item_name;
            if(item_name){
                this->item_name->set_parent(this);
            }
            this->gen_item = gen_item;
            if(gen_item){
                this->gen_item->set_parent(this);
            }
            this->constraints = constraints;
            if(constraints){
                this->constraints->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef list_items_constraint_expr_EXTRAS
    list_items_constraint_expr_EXTRAS
#endif
};

auto list_items_constraint_expr(Expression item_name, Expression gen_item, Expressions constraints) -> Expression;

class field_type_constraint_by_type_expr_class : public Expression_class {
    protected:
        Expression field_;
        DataType type_;
    public:
        field_type_constraint_by_type_expr_class(Expression field_, DataType type_){
            this->field_ = field_;
            if(field_){
                this->field_->set_parent(this);
            }
            this->type_ = type_;
            if(type_){
                this->type_->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef field_type_constraint_by_type_expr_EXTRAS
    field_type_constraint_by_type_expr_EXTRAS
#endif
};

auto field_type_constraint_by_type_expr(Expression field_, DataType type_) -> Expression;

class field_type_constraint_by_field_expr_class : public Expression_class {
    protected:
        Expression field_;
        Expression field;
    public:
        field_type_constraint_by_field_expr_class(Expression field_, Expression field){
            this->field_ = field_;
            if(field_){
                this->field_->set_parent(this);
            }
            this->field = field;
            if(field){
                this->field->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef field_type_constraint_by_field_expr_EXTRAS
    field_type_constraint_by_field_expr_EXTRAS
#endif
};

auto field_type_constraint_by_field_expr(Expression field_, Expression field) -> Expression;

class distribution_constraint_expr_class : public Expression_class {
    protected:
        Expression gen_item;
        Cases distribution;
    public:
        distribution_constraint_expr_class(Expression gen_item, Cases distribution){
            this->gen_item = gen_item;
            if(gen_item){
                this->gen_item->set_parent(this);
            }
            this->distribution = distribution;
            if(distribution){
                this->distribution->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef distribution_constraint_expr_EXTRAS
    distribution_constraint_expr_EXTRAS
#endif
};

auto distribution_constraint_expr(Expression gen_item, Cases distribution) -> Expression;

class distribution_branch_case_class : public Case_class {
    protected:
        Expression int_;
        Expression value;
    public:
        distribution_branch_case_class(Expression int_, Expression value){
            this->int_ = int_;
            if(int_){
                this->int_->set_parent(this);
            }
            this->value = value;
            if(value){
                this->value->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef distribution_branch_case_EXTRAS
    distribution_branch_case_EXTRAS
#endif
};

auto distribution_branch_case(Expression int_, Expression value) -> Case;

class me_expr_class : public Expression_class {
    protected:
    public:
        me_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef me_expr_EXTRAS
    me_expr_EXTRAS
#endif
};

auto me_expr() -> Expression;

class it_expr_class : public Expression_class {
    protected:
    public:
        it_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef it_expr_EXTRAS
    it_expr_EXTRAS
#endif
};

auto it_expr() -> Expression;

class str_expr_class : public Expression_class {
    protected:
        Symbol_ str;
    public:
        str_expr_class(Symbol_ str){
            this->str = str;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef str_expr_EXTRAS
    str_expr_EXTRAS
#endif
};

auto str_expr(Symbol_ str) -> Expression;

class int_expr_class : public Expression_class {
    protected:
        Symbol_ int_;
    public:
        int_expr_class(Symbol_ int_){
            this->int_ = int_;
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef int_expr_EXTRAS
    int_expr_EXTRAS
#endif
};

auto int_expr(Symbol_ int_) -> Expression;

class enum_dt_class : public DataType_class {
    protected:
        Expressions enum_list_items;
        Expression width_modifier;
    public:
        enum_dt_class(Expressions enum_list_items, Expression width_modifier){
            this->enum_list_items = enum_list_items;
            if(enum_list_items){
                this->enum_list_items->set_parent(this);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){
                this->width_modifier->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef enum_dt_EXTRAS
    enum_dt_EXTRAS
#endif
};

auto enum_dt(Expressions enum_list_items, Expression width_modifier) -> DataType;

class scalar_subtype_dt_class : public DataType_class {
    protected:
        DataType predefined_base_type;
        Expression range_modifier;
        Expression width_modifier;
    public:
        scalar_subtype_dt_class(DataType predefined_base_type, Expression range_modifier, Expression width_modifier){
            this->predefined_base_type = predefined_base_type;
            if(predefined_base_type){
                this->predefined_base_type->set_parent(this);
            }
            this->range_modifier = range_modifier;
            if(range_modifier){
                this->range_modifier->set_parent(this);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){
                this->width_modifier->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef scalar_subtype_dt_EXTRAS
    scalar_subtype_dt_EXTRAS
#endif
};

auto scalar_subtype_dt(DataType predefined_base_type, Expression range_modifier, Expression width_modifier) -> DataType;

class defined_dt_class : public DataType_class {
    protected:
        Expressions enum_list_items;
        Expression width_modifier;
    public:
        defined_dt_class(Expressions enum_list_items, Expression width_modifier){
            this->enum_list_items = enum_list_items;
            if(enum_list_items){
                this->enum_list_items->set_parent(this);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){
                this->width_modifier->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef defined_dt_EXTRAS
    defined_dt_EXTRAS
#endif
};

auto defined_dt(Expressions enum_list_items, Expression width_modifier) -> DataType;

class defined_subtype_dt_class : public DataType_class {
    protected:
        Symbol_ id;
        Expression range_modifier;
    public:
        defined_subtype_dt_class(Symbol_ id, Expression range_modifier){
            this->id = id;
            this->range_modifier = range_modifier;
            if(range_modifier){
                this->range_modifier->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef defined_subtype_dt_EXTRAS
    defined_subtype_dt_EXTRAS
#endif
};

auto defined_subtype_dt(Symbol_ id, Expression range_modifier) -> DataType;

class predefined_subtype_dt_class : public DataType_class {
    protected:
        DataType pred_type;
        Expression range_modifier;
        Expression width_modifier;
    public:
        predefined_subtype_dt_class(DataType pred_type, Expression range_modifier, Expression width_modifier){
            this->pred_type = pred_type;
            if(pred_type){
                this->pred_type->set_parent(this);
            }
            this->range_modifier = range_modifier;
            if(range_modifier){
                this->range_modifier->set_parent(this);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){
                this->width_modifier->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef predefined_subtype_dt_EXTRAS
    predefined_subtype_dt_EXTRAS
#endif
};

auto predefined_subtype_dt(DataType pred_type, Expression range_modifier, Expression width_modifier) -> DataType;

class defined_struct_type_dt_class : public DataType_class {
    protected:
        Expressions struct_type_modifiers;
    public:
        defined_struct_type_dt_class(Expressions struct_type_modifiers){
            this->struct_type_modifiers = struct_type_modifiers;
            if(struct_type_modifiers){
                this->struct_type_modifiers->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef defined_struct_type_dt_EXTRAS
    defined_struct_type_dt_EXTRAS
#endif
};

auto defined_struct_type_dt(Expressions struct_type_modifiers) -> DataType;

class list_type_dt_class : public DataType_class {
    protected:
        DataType base_type;
    public:
        list_type_dt_class(DataType base_type){
            this->base_type = base_type;
            if(base_type){
                this->base_type->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef list_type_dt_EXTRAS
    list_type_dt_EXTRAS
#endif
};

auto list_type_dt(DataType base_type) -> DataType;

class assoc_list_type_dt_class : public DataType_class {
    protected:
        Symbol_ key_id;
        DataType base_type;
    public:
        assoc_list_type_dt_class(Symbol_ key_id, DataType base_type){
            this->key_id = key_id;
            this->base_type = base_type;
            if(base_type){
                this->base_type->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef assoc_list_type_dt_EXTRAS
    assoc_list_type_dt_EXTRAS
#endif
};

auto assoc_list_type_dt(Symbol_ key_id, DataType base_type) -> DataType;

class file_dt_class : public DataType_class {
    protected:
    public:
        file_dt_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef file_dt_EXTRAS
    file_dt_EXTRAS
#endif
};

auto file_dt() -> DataType;

class int_predefined_type_class : public DataType_class {
    protected:
    public:
        int_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef int_predefined_type_EXTRAS
    int_predefined_type_EXTRAS
#endif
};

auto int_predefined_type() -> DataType;

class uint_predefined_type_class : public DataType_class {
    protected:
    public:
        uint_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef uint_predefined_type_EXTRAS
    uint_predefined_type_EXTRAS
#endif
};

auto uint_predefined_type() -> DataType;

class bool_predefined_type_class : public DataType_class {
    protected:
    public:
        bool_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef bool_predefined_type_EXTRAS
    bool_predefined_type_EXTRAS
#endif
};

auto bool_predefined_type() -> DataType;

class bit_predefined_type_class : public DataType_class {
    protected:
    public:
        bit_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef bit_predefined_type_EXTRAS
    bit_predefined_type_EXTRAS
#endif
};

auto bit_predefined_type() -> DataType;

class byte_predefined_type_class : public DataType_class {
    protected:
    public:
        byte_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef byte_predefined_type_EXTRAS
    byte_predefined_type_EXTRAS
#endif
};

auto byte_predefined_type() -> DataType;

class nibble_predefined_type_class : public DataType_class {
    protected:
    public:
        nibble_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef nibble_predefined_type_EXTRAS
    nibble_predefined_type_EXTRAS
#endif
};

auto nibble_predefined_type() -> DataType;

class time_predefined_type_class : public DataType_class {
    protected:
    public:
        time_predefined_type_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef DataType_SHARED_EXTRAS
    DataType_SHARED_EXTRAS
#endif
#ifdef time_predefined_type_EXTRAS
    time_predefined_type_EXTRAS
#endif
};

auto time_predefined_type() -> DataType;

class no_expr_class : public Expression_class {
    protected:
    public:
        no_expr_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef no_expr_EXTRAS
    no_expr_EXTRAS
#endif
};

auto no_expr() -> Expression;

class var_decl_act_class : public Action_class {
    protected:
        Symbol_ name;
        DataType type_id;
        Expression init_expr;
    public:
        var_decl_act_class(Symbol_ name, DataType type_id, Expression init_expr){
            this->name = name;
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
            this->init_expr = init_expr;
            if(init_expr){
                this->init_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef var_decl_act_EXTRAS
    var_decl_act_EXTRAS
#endif
};

auto var_decl_act(Symbol_ name, DataType type_id, Expression init_expr) -> Action;

class var_assign_act_class : public Action_class {
    protected:
        Expression id_expr;
        Expression assign_expr;
    public:
        var_assign_act_class(Expression id_expr, Expression assign_expr){
            this->id_expr = id_expr;
            if(id_expr){
                this->id_expr->set_parent(this);
            }
            this->assign_expr = assign_expr;
            if(assign_expr){
                this->assign_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef var_assign_act_EXTRAS
    var_assign_act_EXTRAS
#endif
};

auto var_assign_act(Expression id_expr, Expression assign_expr) -> Action;

class compound_add_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_add_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_add_act_EXTRAS
    compound_add_act_EXTRAS
#endif
};

auto compound_add_act(Expression id, Expression e2) -> Action;

class compound_sub_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_sub_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_sub_act_EXTRAS
    compound_sub_act_EXTRAS
#endif
};

auto compound_sub_act(Expression id, Expression e2) -> Action;

class compound_mul_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_mul_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_mul_act_EXTRAS
    compound_mul_act_EXTRAS
#endif
};

auto compound_mul_act(Expression id, Expression e2) -> Action;

class compound_div_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_div_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_div_act_EXTRAS
    compound_div_act_EXTRAS
#endif
};

auto compound_div_act(Expression id, Expression e2) -> Action;

class compound_mod_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_mod_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_mod_act_EXTRAS
    compound_mod_act_EXTRAS
#endif
};

auto compound_mod_act(Expression id, Expression e2) -> Action;

class compound_bool_and_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_bool_and_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_bool_and_act_EXTRAS
    compound_bool_and_act_EXTRAS
#endif
};

auto compound_bool_and_act(Expression id, Expression e2) -> Action;

class compound_bool_or_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_bool_or_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_bool_or_act_EXTRAS
    compound_bool_or_act_EXTRAS
#endif
};

auto compound_bool_or_act(Expression id, Expression e2) -> Action;

class compound_bit_and_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_bit_and_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_bit_and_act_EXTRAS
    compound_bit_and_act_EXTRAS
#endif
};

auto compound_bit_and_act(Expression id, Expression e2) -> Action;

class compound_bit_or_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_bit_or_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_bit_or_act_EXTRAS
    compound_bit_or_act_EXTRAS
#endif
};

auto compound_bit_or_act(Expression id, Expression e2) -> Action;

class compound_bit_xor_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_bit_xor_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_bit_xor_act_EXTRAS
    compound_bit_xor_act_EXTRAS
#endif
};

auto compound_bit_xor_act(Expression id, Expression e2) -> Action;

class compound_shift_left_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_shift_left_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_shift_left_act_EXTRAS
    compound_shift_left_act_EXTRAS
#endif
};

auto compound_shift_left_act(Expression id, Expression e2) -> Action;

class compound_right_left_act_class : public Action_class {
    protected:
        Expression id;
        Expression e2;
    public:
        compound_right_left_act_class(Expression id, Expression e2){
            this->id = id;
            if(id){
                this->id->set_parent(this);
            }
            this->e2 = e2;
            if(e2){
                this->e2->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compound_right_left_act_EXTRAS
    compound_right_left_act_EXTRAS
#endif
};

auto compound_right_left_act(Expression id, Expression e2) -> Action;

class force_act_class : public Action_class {
    protected:
        Expression hdl_or_port;
        Expression exp;
    public:
        force_act_class(Expression hdl_or_port, Expression exp){
            this->hdl_or_port = hdl_or_port;
            if(hdl_or_port){
                this->hdl_or_port->set_parent(this);
            }
            this->exp = exp;
            if(exp){
                this->exp->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef force_act_EXTRAS
    force_act_EXTRAS
#endif
};

auto force_act(Expression hdl_or_port, Expression exp) -> Action;

class release_act_class : public Action_class {
    protected:
        Expression hdl_or_port;
    public:
        release_act_class(Expression hdl_or_port){
            this->hdl_or_port = hdl_or_port;
            if(hdl_or_port){
                this->hdl_or_port->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef release_act_EXTRAS
    release_act_EXTRAS
#endif
};

auto release_act(Expression hdl_or_port) -> Action;

class if_then_else_act_class : public Action_class {
    protected:
        Expression condition;
        ActionBlock actions;
        ActionBlock else_clause;
    public:
        if_then_else_act_class(Expression condition, ActionBlock actions, ActionBlock else_clause){
            this->condition = condition;
            if(condition){
                this->condition->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
            this->else_clause = else_clause;
            if(else_clause){
                this->else_clause->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef if_then_else_act_EXTRAS
    if_then_else_act_EXTRAS
#endif
};

auto if_then_else_act(Expression condition, ActionBlock actions, ActionBlock else_clause) -> Action;

class non_term_if_then_else_act_class : public Action_class {
    protected:
        Expression condition;
        ActionBlock actions;
        Action else_clause;
    public:
        non_term_if_then_else_act_class(Expression condition, ActionBlock actions, Action else_clause){
            this->condition = condition;
            if(condition){
                this->condition->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
            this->else_clause = else_clause;
            if(else_clause){
                this->else_clause->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef non_term_if_then_else_act_EXTRAS
    non_term_if_then_else_act_EXTRAS
#endif
};

auto non_term_if_then_else_act(Expression condition, ActionBlock actions, Action else_clause) -> Action;

class case_bool_act_class : public Action_class {
    protected:
        Cases bool_case_branch_items;
    public:
        case_bool_act_class(Cases bool_case_branch_items){
            this->bool_case_branch_items = bool_case_branch_items;
            if(bool_case_branch_items){
                this->bool_case_branch_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef case_bool_act_EXTRAS
    case_bool_act_EXTRAS
#endif
};

auto case_bool_act(Cases bool_case_branch_items) -> Action;

class case_bool_branch_item_case_class : public Case_class {
    protected:
        Expression bool_exp;
        ActionBlock actions;
    public:
        case_bool_branch_item_case_class(Expression bool_exp, ActionBlock actions){
            this->bool_exp = bool_exp;
            if(bool_exp){
                this->bool_exp->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef case_bool_branch_item_case_EXTRAS
    case_bool_branch_item_case_EXTRAS
#endif
};

auto case_bool_branch_item_case(Expression bool_exp, ActionBlock actions) -> Case;

class case_labeled_act_class : public Action_class {
    protected:
        Expression exp;
        Cases labeled_case_branch_items;
    public:
        case_labeled_act_class(Expression exp, Cases labeled_case_branch_items){
            this->exp = exp;
            if(exp){
                this->exp->set_parent(this);
            }
            this->labeled_case_branch_items = labeled_case_branch_items;
            if(labeled_case_branch_items){
                this->labeled_case_branch_items->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef case_labeled_act_EXTRAS
    case_labeled_act_EXTRAS
#endif
};

auto case_labeled_act(Expression exp, Cases labeled_case_branch_items) -> Action;

class case_labeled_branch_item_case_class : public Case_class {
    protected:
        Expression label_exp;
        ActionBlock actions;
    public:
        case_labeled_branch_item_case_class(Expression label_exp, ActionBlock actions){
            this->label_exp = label_exp;
            if(label_exp){
                this->label_exp->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef case_labeled_branch_item_case_EXTRAS
    case_labeled_branch_item_case_EXTRAS
#endif
};

auto case_labeled_branch_item_case(Expression label_exp, ActionBlock actions) -> Case;

class default_case_branch_item_case_class : public Case_class {
    protected:
        ActionBlock actions;
    public:
        default_case_branch_item_case_class(ActionBlock actions){
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Case_SHARED_EXTRAS
    Case_SHARED_EXTRAS
#endif
#ifdef default_case_branch_item_case_EXTRAS
    default_case_branch_item_case_EXTRAS
#endif
};

auto default_case_branch_item_case(ActionBlock actions) -> Case;

class print_call_act_class : public Action_class {
    protected:
        Expressions values;
    public:
        print_call_act_class(Expressions values){
            this->values = values;
            if(values){
                this->values->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef print_call_act_EXTRAS
    print_call_act_EXTRAS
#endif
};

auto print_call_act(Expressions values) -> Action;

class method_call_act_class : public Action_class {
    protected:
        Expression method_call_expr;
    public:
        method_call_act_class(Expression method_call_expr){
            this->method_call_expr = method_call_expr;
            if(method_call_expr){
                this->method_call_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef method_call_act_EXTRAS
    method_call_act_EXTRAS
#endif
};

auto method_call_act(Expression method_call_expr) -> Action;

class start_tcm_call_act_class : public Action_class {
    protected:
        Expression method_call_expr;
    public:
        start_tcm_call_act_class(Expression method_call_expr){
            this->method_call_expr = method_call_expr;
            if(method_call_expr){
                this->method_call_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef start_tcm_call_act_EXTRAS
    start_tcm_call_act_EXTRAS
#endif
};

auto start_tcm_call_act(Expression method_call_expr) -> Action;

class compute_method_call_act_class : public Action_class {
    protected:
        Expression method_call_expr;
    public:
        compute_method_call_act_class(Expression method_call_expr){
            this->method_call_expr = method_call_expr;
            if(method_call_expr){
                this->method_call_expr->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef compute_method_call_act_EXTRAS
    compute_method_call_act_EXTRAS
#endif
};

auto compute_method_call_act(Expression method_call_expr) -> Action;

class return_act_class : public Action_class {
    protected:
        Expression exp;
    public:
        return_act_class(Expression exp){
            this->exp = exp;
            if(exp){
                this->exp->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef return_act_EXTRAS
    return_act_EXTRAS
#endif
};

auto return_act(Expression exp) -> Action;

class while_loop_act_class : public Action_class {
    protected:
        Expression bool_expr;
        ActionBlock actions;
    public:
        while_loop_act_class(Expression bool_expr, ActionBlock actions){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef while_loop_act_EXTRAS
    while_loop_act_EXTRAS
#endif
};

auto while_loop_act(Expression bool_expr, ActionBlock actions) -> Action;

class repeat_until_loop_act_class : public Action_class {
    protected:
        Expression bool_expr;
        ActionBlock actions;
    public:
        repeat_until_loop_act_class(Expression bool_expr, ActionBlock actions){
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef repeat_until_loop_act_EXTRAS
    repeat_until_loop_act_EXTRAS
#endif
};

auto repeat_until_loop_act(Expression bool_expr, ActionBlock actions) -> Action;

class for_each_loop_act_class : public Action_class {
    protected:
        DataType type_id;
        Expression iterated_name;
        Boolean is_reverese;
        Expression list_exp;
        Expression idx_exp;
        ActionBlock actions;
    public:
        for_each_loop_act_class(DataType type_id, Expression iterated_name, Boolean is_reverese, Expression list_exp, Expression idx_exp, ActionBlock actions){
            this->type_id = type_id;
            if(type_id){
                this->type_id->set_parent(this);
            }
            this->iterated_name = iterated_name;
            if(iterated_name){
                this->iterated_name->set_parent(this);
            }
            this->is_reverese = is_reverese;
            this->list_exp = list_exp;
            if(list_exp){
                this->list_exp->set_parent(this);
            }
            this->idx_exp = idx_exp;
            if(idx_exp){
                this->idx_exp->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef for_each_loop_act_EXTRAS
    for_each_loop_act_EXTRAS
#endif
};

auto for_each_loop_act(DataType type_id, Expression iterated_name, Boolean is_reverese, Expression list_exp, Expression idx_exp, ActionBlock actions) -> Action;

class for_range_loop_act_class : public Action_class {
    protected:
        Symbol_ var_id;
        Expression from_expr;
        Expression to_expr;
        Expression step_expr;
        Boolean is_down;
        ActionBlock actions;
    public:
        for_range_loop_act_class(Symbol_ var_id, Expression from_expr, Expression to_expr, Expression step_expr, Boolean is_down, ActionBlock actions){
            this->var_id = var_id;
            this->from_expr = from_expr;
            if(from_expr){
                this->from_expr->set_parent(this);
            }
            this->to_expr = to_expr;
            if(to_expr){
                this->to_expr->set_parent(this);
            }
            this->step_expr = step_expr;
            if(step_expr){
                this->step_expr->set_parent(this);
            }
            this->is_down = is_down;
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef for_range_loop_act_EXTRAS
    for_range_loop_act_EXTRAS
#endif
};

auto for_range_loop_act(Symbol_ var_id, Expression from_expr, Expression to_expr, Expression step_expr, Boolean is_down, ActionBlock actions) -> Action;

class for_loop_act_class : public Action_class {
    protected:
        Action init_act;
        Expression bool_expr;
        Action step_act;
        ActionBlock actions;
    public:
        for_loop_act_class(Action init_act, Expression bool_expr, Action step_act, ActionBlock actions){
            this->init_act = init_act;
            if(init_act){
                this->init_act->set_parent(this);
            }
            this->bool_expr = bool_expr;
            if(bool_expr){
                this->bool_expr->set_parent(this);
            }
            this->step_act = step_act;
            if(step_act){
                this->step_act->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef for_loop_act_EXTRAS
    for_loop_act_EXTRAS
#endif
};

auto for_loop_act(Action init_act, Expression bool_expr, Action step_act, ActionBlock actions) -> Action;

class for_each_line_in_file_act_class : public Action_class {
    protected:
        Expression line_it_name;
        Expression file_path_expr;
        ActionBlock actions;
    public:
        for_each_line_in_file_act_class(Expression line_it_name, Expression file_path_expr, ActionBlock actions){
            this->line_it_name = line_it_name;
            if(line_it_name){
                this->line_it_name->set_parent(this);
            }
            this->file_path_expr = file_path_expr;
            if(file_path_expr){
                this->file_path_expr->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef for_each_line_in_file_act_EXTRAS
    for_each_line_in_file_act_EXTRAS
#endif
};

auto for_each_line_in_file_act(Expression line_it_name, Expression file_path_expr, ActionBlock actions) -> Action;

class for_each_file_in_files_act_class : public Action_class {
    protected:
        Expression line_it_name;
        Expression file_pattern_exp;
        ActionBlock actions;
    public:
        for_each_file_in_files_act_class(Expression line_it_name, Expression file_pattern_exp, ActionBlock actions){
            this->line_it_name = line_it_name;
            if(line_it_name){
                this->line_it_name->set_parent(this);
            }
            this->file_pattern_exp = file_pattern_exp;
            if(file_pattern_exp){
                this->file_pattern_exp->set_parent(this);
            }
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef for_each_file_in_files_act_EXTRAS
    for_each_file_in_files_act_EXTRAS
#endif
};

auto for_each_file_in_files_act(Expression line_it_name, Expression file_pattern_exp, ActionBlock actions) -> Action;

class break_act_class : public Action_class {
    protected:
    public:
        break_act_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef break_act_EXTRAS
    break_act_EXTRAS
#endif
};

auto break_act() -> Action;

class continue_act_class : public Action_class {
    protected:
    public:
        continue_act_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef continue_act_EXTRAS
    continue_act_EXTRAS
#endif
};

auto continue_act() -> Action;

class emit_act_class : public Action_class {
    protected:
        Expression event_id;
    public:
        emit_act_class(Expression event_id){
            this->event_id = event_id;
            if(event_id){
                this->event_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef emit_act_EXTRAS
    emit_act_EXTRAS
#endif
};

auto emit_act(Expression event_id) -> Action;

class sync_act_class : public Action_class {
    protected:
        Expression event_id;
    public:
        sync_act_class(Expression event_id){
            this->event_id = event_id;
            if(event_id){
                this->event_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef sync_act_EXTRAS
    sync_act_EXTRAS
#endif
};

auto sync_act(Expression event_id) -> Action;

class wait_act_class : public Action_class {
    protected:
        Expression event_id;
    public:
        wait_act_class(Expression event_id){
            this->event_id = event_id;
            if(event_id){
                this->event_id->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef wait_act_EXTRAS
    wait_act_EXTRAS
#endif
};

auto wait_act(Expression event_id) -> Action;

class all_of_act_class : public Action_class {
    protected:
        ActionBlocks threads;
    public:
        all_of_act_class(ActionBlocks threads){
            this->threads = threads;
            if(threads){
                this->threads->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef all_of_act_EXTRAS
    all_of_act_EXTRAS
#endif
};

auto all_of_act(ActionBlocks threads) -> Action;

class first_of_act_class : public Action_class {
    protected:
        ActionBlocks threads;
    public:
        first_of_act_class(ActionBlocks threads){
            this->threads = threads;
            if(threads){
                this->threads->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef first_of_act_EXTRAS
    first_of_act_EXTRAS
#endif
};

auto first_of_act(ActionBlocks threads) -> Action;

class gen_act_class : public Action_class {
    protected:
        Expression gen_expr;
        Expressions constraints;
    public:
        gen_act_class(Expression gen_expr, Expressions constraints){
            this->gen_expr = gen_expr;
            if(gen_expr){
                this->gen_expr->set_parent(this);
            }
            this->constraints = constraints;
            if(constraints){
                this->constraints->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef gen_act_EXTRAS
    gen_act_EXTRAS
#endif
};

auto gen_act(Expression gen_expr, Expressions constraints) -> Action;

class do_seq_act_class : public Action_class {
    protected:
        Expression seq_item;
        Expressions constraints;
    public:
        do_seq_act_class(Expression seq_item, Expressions constraints){
            this->seq_item = seq_item;
            if(seq_item){
                this->seq_item->set_parent(this);
            }
            this->constraints = constraints;
            if(constraints){
                this->constraints->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef do_seq_act_EXTRAS
    do_seq_act_EXTRAS
#endif
};

auto do_seq_act(Expression seq_item, Expressions constraints) -> Action;

class seq_item_expr_class : public Expression_class {
    protected:
        Expressions field_type_exprs;
    public:
        seq_item_expr_class(Expressions field_type_exprs){
            this->field_type_exprs = field_type_exprs;
            if(field_type_exprs){
                this->field_type_exprs->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef seq_item_expr_EXTRAS
    seq_item_expr_EXTRAS
#endif
};

auto seq_item_expr(Expressions field_type_exprs) -> Expression;

class check_that_action_class : public Action_class {
    protected:
        Expression condition;
        Expression dut_error_block;
    public:
        check_that_action_class(Expression condition, Expression dut_error_block){
            this->condition = condition;
            if(condition){
                this->condition->set_parent(this);
            }
            this->dut_error_block = dut_error_block;
            if(dut_error_block){
                this->dut_error_block->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef check_that_action_EXTRAS
    check_that_action_EXTRAS
#endif
};

auto check_that_action(Expression condition, Expression dut_error_block) -> Action;

class assert_action_class : public Action_class {
    protected:
        Expression condition;
        Expression error_block;
    public:
        assert_action_class(Expression condition, Expression error_block){
            this->condition = condition;
            if(condition){
                this->condition->set_parent(this);
            }
            this->error_block = error_block;
            if(error_block){
                this->error_block->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef assert_action_EXTRAS
    assert_action_EXTRAS
#endif
};

auto assert_action(Expression condition, Expression error_block) -> Action;

class try_else_action_class : public Action_class {
    protected:
        ActionBlock try_actions;
        ActionBlock except_actions;
    public:
        try_else_action_class(ActionBlock try_actions, ActionBlock except_actions){
            this->try_actions = try_actions;
            if(try_actions){
                this->try_actions->set_parent(this);
            }
            this->except_actions = except_actions;
            if(except_actions){
                this->except_actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef try_else_action_EXTRAS
    try_else_action_EXTRAS
#endif
};

auto try_else_action(ActionBlock try_actions, ActionBlock except_actions) -> Action;

class state_machine_act_class : public Action_class {
    protected:
        Expression state_var;
        Expression final_st;
        FSMStates states;
    public:
        state_machine_act_class(Expression state_var, Expression final_st, FSMStates states){
            this->state_var = state_var;
            if(state_var){
                this->state_var->set_parent(this);
            }
            this->final_st = final_st;
            if(final_st){
                this->final_st->set_parent(this);
            }
            this->states = states;
            if(states){
                this->states->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef state_machine_act_EXTRAS
    state_machine_act_EXTRAS
#endif
};

auto state_machine_act(Expression state_var, Expression final_st, FSMStates states) -> Action;

class state_action_fsm_class : public FSMState_class {
    protected:
        Symbol_ state;
        ActionBlock actions;
    public:
        state_action_fsm_class(Symbol_ state, ActionBlock actions){
            this->state = state;
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FSMState_SHARED_EXTRAS
    FSMState_SHARED_EXTRAS
#endif
#ifdef state_action_fsm_EXTRAS
    state_action_fsm_EXTRAS
#endif
};

auto state_action_fsm(Symbol_ state, ActionBlock actions) -> FSMState;

class state_transition_fsm_class : public FSMState_class {
    protected:
        Symbol_ cur_state;
        Symbol_ next_state;
        ActionBlock actions;
    public:
        state_transition_fsm_class(Symbol_ cur_state, Symbol_ next_state, ActionBlock actions){
            this->cur_state = cur_state;
            this->next_state = next_state;
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FSMState_SHARED_EXTRAS
    FSMState_SHARED_EXTRAS
#endif
#ifdef state_transition_fsm_EXTRAS
    state_transition_fsm_EXTRAS
#endif
};

auto state_transition_fsm(Symbol_ cur_state, Symbol_ next_state, ActionBlock actions) -> FSMState;

class state_any_transition_fsm_class : public FSMState_class {
    protected:
        Symbol_ next_state;
        ActionBlock actions;
    public:
        state_any_transition_fsm_class(Symbol_ next_state, ActionBlock actions){
            this->next_state = next_state;
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef FSMState_SHARED_EXTRAS
    FSMState_SHARED_EXTRAS
#endif
#ifdef state_any_transition_fsm_EXTRAS
    state_any_transition_fsm_EXTRAS
#endif
};

auto state_any_transition_fsm(Symbol_ next_state, ActionBlock actions) -> FSMState;

class no_action_class : public Action_class {
    protected:
    public:
        no_action_class(){
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Action_SHARED_EXTRAS
    Action_SHARED_EXTRAS
#endif
#ifdef no_action_EXTRAS
    no_action_EXTRAS
#endif
};

auto no_action() -> Action;

class action_block_class : public ActionBlock_class {
    protected:
        Actions actions;
    public:
        action_block_class(Actions actions){
            this->actions = actions;
            if(actions){
                this->actions->set_parent(this);
            }
        }

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef ActionBlock_SHARED_EXTRAS
    ActionBlock_SHARED_EXTRAS
#endif
#ifdef action_block_EXTRAS
    action_block_EXTRAS
#endif
};

auto action_block(Actions actions) -> ActionBlock;

 
}