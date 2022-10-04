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
    
enum class SpecmanPhylumKind {
    Module = 0,
    Statement,
    StructMember,
    FieldStructMember,
    Action,
    Expression,
    DataType,
    Formal,
    Case,
    SequenceItem,
    CovergroupOption,
    CovergroupItem,
    CovergroupItemOption,
    CovergroupExtensionID,
    ActionBlock,
    FSMState,
    FilePath
};
    
enum class SpecmanCtorKind {
    Module = 0,
    IdExpr,
    StructTypeModifier,
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

class Module_class : public ast::tree_node {
    public:
        Module_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Module_EXTRAS
    Module_EXTRAS
#endif
};

class Statement_class;
typedef std::shared_ptr<Statement_class> Statement;

class Statement_class : public ast::tree_node {
    public:
        Statement_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Statement_EXTRAS
    Statement_EXTRAS
#endif
};

typedef ast::list_tree_node<Statement> Statements_class;
typedef std::shared_ptr<Statements_class> Statements;

auto nil_Statements() -> Statements;
auto single_Statements(Statement) -> Statements;
auto append_Statements(Statements, Statements) -> Statements;

class StructMember_class;
typedef std::shared_ptr<StructMember_class> StructMember;

class StructMember_class : public ast::tree_node {
    public:
        StructMember_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef StructMember_EXTRAS
    StructMember_EXTRAS
#endif
};

typedef ast::list_tree_node<StructMember> StructMembers_class;
typedef std::shared_ptr<StructMembers_class> StructMembers;

auto nil_StructMembers() -> StructMembers;
auto single_StructMembers(StructMember) -> StructMembers;
auto append_StructMembers(StructMembers, StructMembers) -> StructMembers;

class FieldStructMember_class;
typedef std::shared_ptr<FieldStructMember_class> FieldStructMember;

class FieldStructMember_class : public ast::tree_node {
    public:
        FieldStructMember_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef FieldStructMember_EXTRAS
    FieldStructMember_EXTRAS
#endif
};

class Action_class;
typedef std::shared_ptr<Action_class> Action;

class Action_class : public ast::tree_node {
    public:
        Action_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Action_EXTRAS
    Action_EXTRAS
#endif
};

typedef ast::list_tree_node<Action> Actions_class;
typedef std::shared_ptr<Actions_class> Actions;

auto nil_Actions() -> Actions;
auto single_Actions(Action) -> Actions;
auto append_Actions(Actions, Actions) -> Actions;

class Expression_class;
typedef std::shared_ptr<Expression_class> Expression;

class Expression_class : public ast::tree_node {
    public:
        Expression_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Expression_EXTRAS
    Expression_EXTRAS
#endif
};

typedef ast::list_tree_node<Expression> Expressions_class;
typedef std::shared_ptr<Expressions_class> Expressions;

auto nil_Expressions() -> Expressions;
auto single_Expressions(Expression) -> Expressions;
auto append_Expressions(Expressions, Expressions) -> Expressions;

class DataType_class;
typedef std::shared_ptr<DataType_class> DataType;

class DataType_class : public ast::tree_node {
    public:
        DataType_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef DataType_EXTRAS
    DataType_EXTRAS
#endif
};

class Formal_class;
typedef std::shared_ptr<Formal_class> Formal;

class Formal_class : public ast::tree_node {
    public:
        Formal_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Formal_EXTRAS
    Formal_EXTRAS
#endif
};

typedef ast::list_tree_node<Formal> Formals_class;
typedef std::shared_ptr<Formals_class> Formals;

auto nil_Formals() -> Formals;
auto single_Formals(Formal) -> Formals;
auto append_Formals(Formals, Formals) -> Formals;

class Case_class;
typedef std::shared_ptr<Case_class> Case;

class Case_class : public ast::tree_node {
    public:
        Case_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef Case_EXTRAS
    Case_EXTRAS
#endif
};

typedef ast::list_tree_node<Case> Cases_class;
typedef std::shared_ptr<Cases_class> Cases;

auto nil_Cases() -> Cases;
auto single_Cases(Case) -> Cases;
auto append_Cases(Cases, Cases) -> Cases;

class SequenceItem_class;
typedef std::shared_ptr<SequenceItem_class> SequenceItem;

class SequenceItem_class : public ast::tree_node {
    public:
        SequenceItem_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef SequenceItem_EXTRAS
    SequenceItem_EXTRAS
#endif
};

typedef ast::list_tree_node<SequenceItem> SequenceItems_class;
typedef std::shared_ptr<SequenceItems_class> SequenceItems;

auto nil_SequenceItems() -> SequenceItems;
auto single_SequenceItems(SequenceItem) -> SequenceItems;
auto append_SequenceItems(SequenceItems, SequenceItems) -> SequenceItems;

class CovergroupOption_class;
typedef std::shared_ptr<CovergroupOption_class> CovergroupOption;

class CovergroupOption_class : public ast::tree_node {
    public:
        CovergroupOption_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef CovergroupOption_EXTRAS
    CovergroupOption_EXTRAS
#endif
};

typedef ast::list_tree_node<CovergroupOption> CovergroupOptions_class;
typedef std::shared_ptr<CovergroupOptions_class> CovergroupOptions;

auto nil_CovergroupOptions() -> CovergroupOptions;
auto single_CovergroupOptions(CovergroupOption) -> CovergroupOptions;
auto append_CovergroupOptions(CovergroupOptions, CovergroupOptions) -> CovergroupOptions;

class CovergroupItem_class;
typedef std::shared_ptr<CovergroupItem_class> CovergroupItem;

class CovergroupItem_class : public ast::tree_node {
    public:
        CovergroupItem_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef CovergroupItem_EXTRAS
    CovergroupItem_EXTRAS
#endif
};

typedef ast::list_tree_node<CovergroupItem> CovergroupItems_class;
typedef std::shared_ptr<CovergroupItems_class> CovergroupItems;

auto nil_CovergroupItems() -> CovergroupItems;
auto single_CovergroupItems(CovergroupItem) -> CovergroupItems;
auto append_CovergroupItems(CovergroupItems, CovergroupItems) -> CovergroupItems;

class CovergroupItemOption_class;
typedef std::shared_ptr<CovergroupItemOption_class> CovergroupItemOption;

class CovergroupItemOption_class : public ast::tree_node {
    public:
        CovergroupItemOption_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef CovergroupItemOption_EXTRAS
    CovergroupItemOption_EXTRAS
#endif
};

typedef ast::list_tree_node<CovergroupItemOption> CovergroupItemOptions_class;
typedef std::shared_ptr<CovergroupItemOptions_class> CovergroupItemOptions;

auto nil_CovergroupItemOptions() -> CovergroupItemOptions;
auto single_CovergroupItemOptions(CovergroupItemOption) -> CovergroupItemOptions;
auto append_CovergroupItemOptions(CovergroupItemOptions, CovergroupItemOptions) -> CovergroupItemOptions;

class CovergroupExtensionID_class;
typedef std::shared_ptr<CovergroupExtensionID_class> CovergroupExtensionID;

class CovergroupExtensionID_class : public ast::tree_node {
    public:
        CovergroupExtensionID_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef CovergroupExtensionID_EXTRAS
    CovergroupExtensionID_EXTRAS
#endif
};

class ActionBlock_class;
typedef std::shared_ptr<ActionBlock_class> ActionBlock;

class ActionBlock_class : public ast::tree_node {
    public:
        ActionBlock_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef ActionBlock_EXTRAS
    ActionBlock_EXTRAS
#endif
};

typedef ast::list_tree_node<ActionBlock> ActionBlocks_class;
typedef std::shared_ptr<ActionBlocks_class> ActionBlocks;

auto nil_ActionBlocks() -> ActionBlocks;
auto single_ActionBlocks(ActionBlock) -> ActionBlocks;
auto append_ActionBlocks(ActionBlocks, ActionBlocks) -> ActionBlocks;

class FSMState_class;
typedef std::shared_ptr<FSMState_class> FSMState;

class FSMState_class : public ast::tree_node {
    public:
        FSMState_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef FSMState_EXTRAS
    FSMState_EXTRAS
#endif
};

typedef ast::list_tree_node<FSMState> FSMStates_class;
typedef std::shared_ptr<FSMStates_class> FSMStates;

auto nil_FSMStates() -> FSMStates;
auto single_FSMStates(FSMState) -> FSMStates;
auto append_FSMStates(FSMStates, FSMStates) -> FSMStates;

class FilePath_class;
typedef std::shared_ptr<FilePath_class> FilePath;

class FilePath_class : public ast::tree_node {
    public:
        FilePath_class()
            : tree_node()
        {

        }

        auto phytype() const -> SpecmanPhylumKind override final;

#ifdef FilePath_EXTRAS
    FilePath_EXTRAS
#endif
};

typedef ast::list_tree_node<FilePath> FilePaths_class;
typedef std::shared_ptr<FilePaths_class> FilePaths;

auto nil_FilePaths() -> FilePaths;
auto single_FilePaths(FilePath) -> FilePaths;
auto append_FilePaths(FilePaths, FilePaths) -> FilePaths;

class module__class : public Module_class {
    protected:
        Statements stmts;
    public:
        module__class(Statements stmts){
            // initialize the members & tie them to me (the parent)
            this->stmts = stmts;
            if(stmts){ // non-terminal might be null due to error reduction rules
                this->tie(this->stmts);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(stmts),
            };
        }

        // -------------- Getters ------------------ //
        auto getStmts() const ->
            Statements
        {
            return stmts;
        }
        // -------------- Getters ------------------ //

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

class id_expr_class : public Expression_class {
    protected:
        ast::Symbol__leaf id;
    public:
        id_expr_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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

class struct_type_modifier_class : public Expression_class {
    protected:
        Expression value;
        Expression id;
    public:
        struct_type_modifier_class(Expression value, Expression id){
            // initialize the members & tie them to me (the parent)
            this->value = value;
            if(value){ // non-terminal might be null due to error reduction rules
                this->tie(this->value);
            }
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(value),
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getValue() const ->
            Expression
        {
            return value;
        }
        auto getId() const ->
            Expression
        {
            return id;
        }
        // -------------- Getters ------------------ //

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

class package_class : public Statement_class {
    protected:
        ast::Symbol__leaf pkg_name;
    public:
        package_class(Symbol_ pkg_name){
            // initialize the members & tie them to me (the parent)
            this->pkg_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(pkg_name));
            this->tie(this->pkg_name);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(pkg_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getPkgName() const ->
            ast::Symbol__leaf
        {
            return pkg_name;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf unit_name;
        StructMembers members;
    public:
        unit_st_class(Symbol_ unit_name, StructMembers members){
            // initialize the members & tie them to me (the parent)
            this->unit_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(unit_name));
            this->tie(this->unit_name);
            this->members = members;
            if(members){ // non-terminal might be null due to error reduction rules
                this->tie(this->members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(unit_name),
                THIS_MAPIFY(members),
            };
        }

        // -------------- Getters ------------------ //
        auto getUnitName() const ->
            ast::Symbol__leaf
        {
            return unit_name;
        }
        auto getMembers() const ->
            StructMembers
        {
            return members;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf unit_name;
        ast::Symbol__leaf base_unit_name;
        StructMembers members;
    public:
        unit_like_st_class(Symbol_ unit_name, Symbol_ base_unit_name, StructMembers members){
            // initialize the members & tie them to me (the parent)
            this->unit_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(unit_name));
            this->tie(this->unit_name);
            this->base_unit_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(base_unit_name));
            this->tie(this->base_unit_name);
            this->members = members;
            if(members){ // non-terminal might be null due to error reduction rules
                this->tie(this->members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(unit_name),
                THIS_MAPIFY(base_unit_name),
                THIS_MAPIFY(members),
            };
        }

        // -------------- Getters ------------------ //
        auto getUnitName() const ->
            ast::Symbol__leaf
        {
            return unit_name;
        }
        auto getBaseUnitName() const ->
            ast::Symbol__leaf
        {
            return base_unit_name;
        }
        auto getMembers() const ->
            StructMembers
        {
            return members;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf struct_name;
        StructMembers members;
    public:
        struct_st_class(Symbol_ struct_name, StructMembers members){
            // initialize the members & tie them to me (the parent)
            this->struct_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(struct_name));
            this->tie(this->struct_name);
            this->members = members;
            if(members){ // non-terminal might be null due to error reduction rules
                this->tie(this->members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_name),
                THIS_MAPIFY(members),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructName() const ->
            ast::Symbol__leaf
        {
            return struct_name;
        }
        auto getMembers() const ->
            StructMembers
        {
            return members;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf struct_name;
        ast::Symbol__leaf base_struct_name;
        StructMembers members;
    public:
        struct_like_st_class(Symbol_ struct_name, Symbol_ base_struct_name, StructMembers members){
            // initialize the members & tie them to me (the parent)
            this->struct_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(struct_name));
            this->tie(this->struct_name);
            this->base_struct_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(base_struct_name));
            this->tie(this->base_struct_name);
            this->members = members;
            if(members){ // non-terminal might be null due to error reduction rules
                this->tie(this->members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_name),
                THIS_MAPIFY(base_struct_name),
                THIS_MAPIFY(members),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructName() const ->
            ast::Symbol__leaf
        {
            return struct_name;
        }
        auto getBaseStructName() const ->
            ast::Symbol__leaf
        {
            return base_struct_name;
        }
        auto getMembers() const ->
            StructMembers
        {
            return members;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_type_name = struct_type_name;
            if(struct_type_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_type_name);
            }
            this->members = members;
            if(members){ // non-terminal might be null due to error reduction rules
                this->tie(this->members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_type_name),
                THIS_MAPIFY(members),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructTypeName() const ->
            Expressions
        {
            return struct_type_name;
        }
        auto getMembers() const ->
            StructMembers
        {
            return members;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        DataType type_id;
    public:
        enum_type_st_class(Symbol_ id, DataType type_id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(type_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getTypeId() const ->
            DataType
        {
            return type_id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf type_id;
        Expressions enum_list_items;
    public:
        extend_enum_type_st_class(Symbol_ type_id, Expressions enum_list_items){
            // initialize the members & tie them to me (the parent)
            this->type_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(type_id));
            this->tie(this->type_id);
            this->enum_list_items = enum_list_items;
            if(enum_list_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->enum_list_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(type_id),
                THIS_MAPIFY(enum_list_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getTypeId() const ->
            ast::Symbol__leaf
        {
            return type_id;
        }
        auto getEnumListItems() const ->
            Expressions
        {
            return enum_list_items;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf subtype_id;
        Expression type_id;
        Expressions ranges;
    public:
        scalar_subtype_st_class(Symbol_ subtype_id, Expression type_id, Expressions ranges){
            // initialize the members & tie them to me (the parent)
            this->subtype_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(subtype_id));
            this->tie(this->subtype_id);
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }
            this->ranges = ranges;
            if(ranges){ // non-terminal might be null due to error reduction rules
                this->tie(this->ranges);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(subtype_id),
                THIS_MAPIFY(type_id),
                THIS_MAPIFY(ranges),
            };
        }

        // -------------- Getters ------------------ //
        auto getSubtypeId() const ->
            ast::Symbol__leaf
        {
            return subtype_id;
        }
        auto getTypeId() const ->
            Expression
        {
            return type_id;
        }
        auto getRanges() const ->
            Expressions
        {
            return ranges;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf type_id;
        Expression base_type_id;
        Expressions ranges_expr;
        Expression width_expr;
    public:
        scalar_sized_type_st_class(Symbol_ type_id, Expression base_type_id, Expressions ranges_expr, Expression width_expr){
            // initialize the members & tie them to me (the parent)
            this->type_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(type_id));
            this->tie(this->type_id);
            this->base_type_id = base_type_id;
            if(base_type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->base_type_id);
            }
            this->ranges_expr = ranges_expr;
            if(ranges_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->ranges_expr);
            }
            this->width_expr = width_expr;
            if(width_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(type_id),
                THIS_MAPIFY(base_type_id),
                THIS_MAPIFY(ranges_expr),
                THIS_MAPIFY(width_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getTypeId() const ->
            ast::Symbol__leaf
        {
            return type_id;
        }
        auto getBaseTypeId() const ->
            Expression
        {
            return base_type_id;
        }
        auto getRangesExpr() const ->
            Expressions
        {
            return ranges_expr;
        }
        auto getWidthExpr() const ->
            Expression
        {
            return width_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Boolean_leaf is_cyclic;
    public:
        import_st_class(FilePaths paths, Boolean is_cyclic){
            // initialize the members & tie them to me (the parent)
            this->paths = paths;
            if(paths){ // non-terminal might be null due to error reduction rules
                this->tie(this->paths);
            }
            this->is_cyclic = ast::Boolean_leaf(new ast::Boolean_leaf_node(is_cyclic));
            this->tie(this->is_cyclic);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(paths),
                THIS_MAPIFY(is_cyclic),
            };
        }

        // -------------- Getters ------------------ //
        auto getPaths() const ->
            FilePaths
        {
            return paths;
        }
        auto getIsCyclic() const ->
            ast::Boolean_leaf
        {
            return is_cyclic;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf file_path;
    public:
        file_path_fp_class(Symbol_ file_path){
            // initialize the members & tie them to me (the parent)
            this->file_path = ast::Symbol__leaf(new ast::Symbol__leaf_node(file_path));
            this->tie(this->file_path);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(file_path),
            };
        }

        // -------------- Getters ------------------ //
        auto getFilePath() const ->
            ast::Symbol__leaf
        {
            return file_path;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        SequenceItems seq_options;
    public:
        virtual_sequence_st_class(Symbol_ id, SequenceItems seq_options){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->seq_options = seq_options;
            if(seq_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->seq_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(seq_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getSeqOptions() const ->
            SequenceItems
        {
            return seq_options;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        SequenceItems seq_options;
    public:
        sequence_st_class(Symbol_ id, SequenceItems seq_options){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->seq_options = seq_options;
            if(seq_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->seq_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(seq_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getSeqOptions() const ->
            SequenceItems
        {
            return seq_options;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        sequence_item_kind_it_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        sequence_created_kind_name_it_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        sequence_created_driver_name_it_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        sequence_base_kind_it_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        sequence_driver_base_kind_it_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf macro;
    public:
        define_as_st_class(Symbol_ macro){
            // initialize the members & tie them to me (the parent)
            this->macro = ast::Symbol__leaf(new ast::Symbol__leaf_node(macro));
            this->tie(this->macro);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(macro),
            };
        }

        // -------------- Getters ------------------ //
        auto getMacro() const ->
            ast::Symbol__leaf
        {
            return macro;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf macro;
    public:
        define_as_computed_st_class(Symbol_ macro){
            // initialize the members & tie them to me (the parent)
            this->macro = ast::Symbol__leaf(new ast::Symbol__leaf_node(macro));
            this->tie(this->macro);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(macro),
            };
        }

        // -------------- Getters ------------------ //
        auto getMacro() const ->
            ast::Symbol__leaf
        {
            return macro;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf name;
        DataType type_;
    public:
        formal_class(Symbol_ name, DataType type_){
            // initialize the members & tie them to me (the parent)
            this->name = ast::Symbol__leaf(new ast::Symbol__leaf_node(name));
            this->tie(this->name);
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(name),
                THIS_MAPIFY(type_),
            };
        }

        // -------------- Getters ------------------ //
        auto getName() const ->
            ast::Symbol__leaf
        {
            return name;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->element = element;
            if(element){ // non-terminal might be null due to error reduction rules
                this->tie(this->element);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(element),
            };
        }

        // -------------- Getters ------------------ //
        auto getElement() const ->
            Expression
        {
            return element;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf e_routine_name;
        Formals parameters_list;
        DataType return_type;
        ast::Symbol__leaf c_routine_name;
    public:
        c_routine_st_class(Symbol_ e_routine_name, Formals parameters_list, DataType return_type, Symbol_ c_routine_name){
            // initialize the members & tie them to me (the parent)
            this->e_routine_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(e_routine_name));
            this->tie(this->e_routine_name);
            this->parameters_list = parameters_list;
            if(parameters_list){ // non-terminal might be null due to error reduction rules
                this->tie(this->parameters_list);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->c_routine_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(c_routine_name));
            this->tie(this->c_routine_name);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e_routine_name),
                THIS_MAPIFY(parameters_list),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(c_routine_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getERoutineName() const ->
            ast::Symbol__leaf
        {
            return e_routine_name;
        }
        auto getParametersList() const ->
            Formals
        {
            return parameters_list;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getCRoutineName() const ->
            ast::Symbol__leaf
        {
            return c_routine_name;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->field = field;
            if(field){ // non-terminal might be null due to error reduction rules
                this->tie(this->field);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field),
            };
        }

        // -------------- Getters ------------------ //
        auto getField() const ->
            FieldStructMember
        {
            return field;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        DataType type_;
    public:
        struct_field_sm_class(Symbol_ id, DataType type_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(type_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Expression len_expr;
        DataType type_;
    public:
        struct_field_list_sm_class(Symbol_ id, Expression len_expr, DataType type_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->len_expr = len_expr;
            if(len_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->len_expr);
            }
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(len_expr),
                THIS_MAPIFY(type_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getLenExpr() const ->
            Expression
        {
            return len_expr;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        DataType type_;
    public:
        struct_field_assoc_list_sm_class(Symbol_ id, DataType type_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(type_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_also_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_first_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        ActionBlock actions_;
    public:
        method_dec_only_sm_class(Symbol_ id, Formals arguments, DataType return_type, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
    public:
        method_dec_empty_sm_class(Symbol_ id, Formals arguments, DataType return_type){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
    public:
        method_dec_undef_sm_class(Symbol_ id, Formals arguments, DataType return_type){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_also_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_first_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
        ActionBlock actions_;
    public:
        tcm_dec_only_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr, ActionBlock actions_){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }
            this->actions_ = actions_;
            if(actions_){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
                THIS_MAPIFY(actions_),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions_;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
    public:
        tcm_dec_empty_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Formals arguments;
        DataType return_type;
        Expression event_id_expr;
    public:
        tcm_dec_undef_sm_class(Symbol_ id, Formals arguments, DataType return_type, Expression event_id_expr){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->event_id_expr = event_id_expr;
            if(event_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(arguments),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(event_id_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getArguments() const ->
            Formals
        {
            return arguments;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getEventIdExpr() const ->
            Expression
        {
            return event_id_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf e_method_name;
        Formals parameters_list;
        DataType return_type;
        ast::Symbol__leaf c_method_name;
    public:
        c_method_dec_sm_class(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name){
            // initialize the members & tie them to me (the parent)
            this->e_method_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(e_method_name));
            this->tie(this->e_method_name);
            this->parameters_list = parameters_list;
            if(parameters_list){ // non-terminal might be null due to error reduction rules
                this->tie(this->parameters_list);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->c_method_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(c_method_name));
            this->tie(this->c_method_name);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e_method_name),
                THIS_MAPIFY(parameters_list),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(c_method_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getEMethodName() const ->
            ast::Symbol__leaf
        {
            return e_method_name;
        }
        auto getParametersList() const ->
            Formals
        {
            return parameters_list;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getCMethodName() const ->
            ast::Symbol__leaf
        {
            return c_method_name;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf e_method_name;
        Formals parameters_list;
        DataType return_type;
        ast::Symbol__leaf c_method_name;
    public:
        c_method_dec_only_sm_class(Symbol_ e_method_name, Formals parameters_list, DataType return_type, Symbol_ c_method_name){
            // initialize the members & tie them to me (the parent)
            this->e_method_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(e_method_name));
            this->tie(this->e_method_name);
            this->parameters_list = parameters_list;
            if(parameters_list){ // non-terminal might be null due to error reduction rules
                this->tie(this->parameters_list);
            }
            this->return_type = return_type;
            if(return_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->return_type);
            }
            this->c_method_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(c_method_name));
            this->tie(this->c_method_name);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e_method_name),
                THIS_MAPIFY(parameters_list),
                THIS_MAPIFY(return_type),
                THIS_MAPIFY(c_method_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getEMethodName() const ->
            ast::Symbol__leaf
        {
            return e_method_name;
        }
        auto getParametersList() const ->
            Formals
        {
            return parameters_list;
        }
        auto getReturnType() const ->
            DataType
        {
            return return_type;
        }
        auto getCMethodName() const ->
            ast::Symbol__leaf
        {
            return c_method_name;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->subtype_mods = subtype_mods;
            if(subtype_mods){ // non-terminal might be null due to error reduction rules
                this->tie(this->subtype_mods);
            }
            this->subtype_members = subtype_members;
            if(subtype_members){ // non-terminal might be null due to error reduction rules
                this->tie(this->subtype_members);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(subtype_mods),
                THIS_MAPIFY(subtype_members),
            };
        }

        // -------------- Getters ------------------ //
        auto getSubtypeMods() const ->
            Expressions
        {
            return subtype_mods;
        }
        auto getSubtypeMembers() const ->
            StructMembers
        {
            return subtype_members;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->constraint_expr = constraint_expr;
            if(constraint_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->constraint_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(constraint_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getConstraintExpr() const ->
            Expression
        {
            return constraint_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_name = event_name;
            if(event_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_name);
            }
            this->action_block = action_block;
            if(action_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->action_block);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_name),
                THIS_MAPIFY(action_block),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventName() const ->
            Expression
        {
            return event_name;
        }
        auto getActionBlock() const ->
            ActionBlock
        {
            return action_block;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
    public:
        simple_event_dec_sm_class(Symbol_ id){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Expression temporal;
    public:
        event_def_sm_class(Symbol_ id, Expression temporal){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Expression temporal;
    public:
        event_def_override_sm_class(Symbol_ id, Expression temporal){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->sample_event = sample_event;
            if(sample_event){ // non-terminal might be null due to error reduction rules
                this->tie(this->sample_event);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(sample_event),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getSampleEvent() const ->
            Expression
        {
            return sample_event;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_expr = event_expr;
            if(event_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventExpr() const ->
            Expression
        {
            return event_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_name = event_name;
            if(event_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_name);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventName() const ->
            Expression
        {
            return event_name;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->trigger = trigger;
            if(trigger){ // non-terminal might be null due to error reduction rules
                this->tie(this->trigger);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(trigger),
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getTrigger() const ->
            Expression
        {
            return trigger;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hdl_path = hdl_path;
            if(hdl_path){ // non-terminal might be null due to error reduction rules
                this->tie(this->hdl_path);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_path),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlPath() const ->
            Expression
        {
            return hdl_path;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hdl_path = hdl_path;
            if(hdl_path){ // non-terminal might be null due to error reduction rules
                this->tie(this->hdl_path);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_path),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlPath() const ->
            Expression
        {
            return hdl_path;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hdl_path = hdl_path;
            if(hdl_path){ // non-terminal might be null due to error reduction rules
                this->tie(this->hdl_path);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_path),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlPath() const ->
            Expression
        {
            return hdl_path;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->te1 = te1;
            if(te1){ // non-terminal might be null due to error reduction rules
                this->tie(this->te1);
            }
            this->te2 = te2;
            if(te2){ // non-terminal might be null due to error reduction rules
                this->tie(this->te2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(te1),
                THIS_MAPIFY(te2),
            };
        }

        // -------------- Getters ------------------ //
        auto getTe1() const ->
            Expression
        {
            return te1;
        }
        auto getTe2() const ->
            Expression
        {
            return te2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->te1 = te1;
            if(te1){ // non-terminal might be null due to error reduction rules
                this->tie(this->te1);
            }
            this->te2 = te2;
            if(te2){ // non-terminal might be null due to error reduction rules
                this->tie(this->te2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(te1),
                THIS_MAPIFY(te2),
            };
        }

        // -------------- Getters ------------------ //
        auto getTe1() const ->
            Expression
        {
            return te1;
        }
        auto getTe2() const ->
            Expression
        {
            return te2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporals = temporals;
            if(temporals){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporals);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporals),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporals() const ->
            Expressions
        {
            return temporals;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->rep = rep;
            if(rep){ // non-terminal might be null due to error reduction rules
                this->tie(this->rep);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(rep),
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getRep() const ->
            Expression
        {
            return rep;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->from_rep = from_rep;
            if(from_rep){ // non-terminal might be null due to error reduction rules
                this->tie(this->from_rep);
            }
            this->to_rep = to_rep;
            if(to_rep){ // non-terminal might be null due to error reduction rules
                this->tie(this->to_rep);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->match_temporal = match_temporal;
            if(match_temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->match_temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(from_rep),
                THIS_MAPIFY(to_rep),
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(match_temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getFromRep() const ->
            Expression
        {
            return from_rep;
        }
        auto getToRep() const ->
            Expression
        {
            return to_rep;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getMatchTemporal() const ->
            Expression
        {
            return match_temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->from_rep = from_rep;
            if(from_rep){ // non-terminal might be null due to error reduction rules
                this->tie(this->from_rep);
            }
            this->to_rep = to_rep;
            if(to_rep){ // non-terminal might be null due to error reduction rules
                this->tie(this->to_rep);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(from_rep),
                THIS_MAPIFY(to_rep),
                THIS_MAPIFY(temporal),
            };
        }

        // -------------- Getters ------------------ //
        auto getFromRep() const ->
            Expression
        {
            return from_rep;
        }
        auto getToRep() const ->
            Expression
        {
            return to_rep;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }
            this->timescale_unit = timescale_unit;
            if(timescale_unit){ // non-terminal might be null due to error reduction rules
                this->tie(this->timescale_unit);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
                THIS_MAPIFY(timescale_unit),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        auto getTimescaleUnit() const ->
            Expression
        {
            return timescale_unit;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->temporal = temporal;
            if(temporal){ // non-terminal might be null due to error reduction rules
                this->tie(this->temporal);
            }
            this->dut_error_call = dut_error_call;
            if(dut_error_call){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_call);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(temporal),
                THIS_MAPIFY(dut_error_call),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getTemporal() const ->
            Expression
        {
            return temporal;
        }
        auto getDutErrorCall() const ->
            Expression
        {
            return dut_error_call;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf event_id;
    public:
        empty_covergroup_sm_class(Symbol_ event_id){
            // initialize the members & tie them to me (the parent)
            this->event_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(event_id));
            this->tie(this->event_id);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            ast::Symbol__leaf
        {
            return event_id;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf event_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_sm_class(Symbol_ event_id, CovergroupOptions cg_opts, CovergroupItems cg_items){
            // initialize the members & tie them to me (the parent)
            this->event_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(event_id));
            this->tie(this->event_id);
            this->cg_opts = cg_opts;
            if(cg_opts){ // non-terminal might be null due to error reduction rules
                this->tie(this->cg_opts);
            }
            this->cg_items = cg_items;
            if(cg_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->cg_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
                THIS_MAPIFY(cg_opts),
                THIS_MAPIFY(cg_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            ast::Symbol__leaf
        {
            return event_id;
        }
        auto getCgOpts() const ->
            CovergroupOptions
        {
            return cg_opts;
        }
        auto getCgItems() const ->
            CovergroupItems
        {
            return cg_items;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf event_id;
        CovergroupExtensionID instance_id;
        CovergroupOptions cg_opts;
        CovergroupItems cg_items;
    public:
        covergroup_extension_sm_class(Symbol_ event_id, CovergroupExtensionID instance_id, CovergroupOptions cg_opts, CovergroupItems cg_items){
            // initialize the members & tie them to me (the parent)
            this->event_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(event_id));
            this->tie(this->event_id);
            this->instance_id = instance_id;
            if(instance_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->instance_id);
            }
            this->cg_opts = cg_opts;
            if(cg_opts){ // non-terminal might be null due to error reduction rules
                this->tie(this->cg_opts);
            }
            this->cg_items = cg_items;
            if(cg_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->cg_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
                THIS_MAPIFY(instance_id),
                THIS_MAPIFY(cg_opts),
                THIS_MAPIFY(cg_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            ast::Symbol__leaf
        {
            return event_id;
        }
        auto getInstanceId() const ->
            CovergroupExtensionID
        {
            return instance_id;
        }
        auto getCgOpts() const ->
            CovergroupOptions
        {
            return cg_opts;
        }
        auto getCgItems() const ->
            CovergroupItems
        {
            return cg_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e_path = e_path;
            if(e_path){ // non-terminal might be null due to error reduction rules
                this->tie(this->e_path);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e_path),
            };
        }

        // -------------- Getters ------------------ //
        auto getEPath() const ->
            Expression
        {
            return e_path;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf item_name;
        ast::Symbol__leaf bucket_name;
    public:
        covergroup_per_instance_ceid_class(Symbol_ item_name, Symbol_ bucket_name){
            // initialize the members & tie them to me (the parent)
            this->item_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(item_name));
            this->tie(this->item_name);
            this->bucket_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(bucket_name));
            this->tie(this->bucket_name);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_name),
                THIS_MAPIFY(bucket_name),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemName() const ->
            ast::Symbol__leaf
        {
            return item_name;
        }
        auto getBucketName() const ->
            ast::Symbol__leaf
        {
            return bucket_name;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hier_id = hier_id;
            if(hier_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->hier_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hier_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getHierId() const ->
            Expression
        {
            return hier_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf description;
    public:
        text_cgo_class(Symbol_ description){
            // initialize the members & tie them to me (the parent)
            this->description = ast::Symbol__leaf(new ast::Symbol__leaf_node(description));
            this->tie(this->description);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(description),
            };
        }

        // -------------- Getters ------------------ //
        auto getDescription() const ->
            ast::Symbol__leaf
        {
            return description;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf value;
    public:
        weight_cgo_class(Symbol_ value){
            // initialize the members & tie them to me (the parent)
            this->value = ast::Symbol__leaf(new ast::Symbol__leaf_node(value));
            this->tie(this->value);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(value),
            };
        }

        // -------------- Getters ------------------ //
        auto getValue() const ->
            ast::Symbol__leaf
        {
            return value;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf item_id;
        CovergroupItemOptions cgi_options;
    public:
        simple_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options){
            // initialize the members & tie them to me (the parent)
            this->item_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(item_id));
            this->tie(this->item_id);
            this->cgi_options = cgi_options;
            if(cgi_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->cgi_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_id),
                THIS_MAPIFY(cgi_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemId() const ->
            ast::Symbol__leaf
        {
            return item_id;
        }
        auto getCgiOptions() const ->
            CovergroupItemOptions
        {
            return cgi_options;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf item_id;
        DataType type_;
        Expression sampled_val;
        CovergroupItemOptions cgi_options;
    public:
        on_the_fly_covergroup_item_cgi_class(Symbol_ item_id, DataType type_, Expression sampled_val, CovergroupItemOptions cgi_options){
            // initialize the members & tie them to me (the parent)
            this->item_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(item_id));
            this->tie(this->item_id);
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }
            this->sampled_val = sampled_val;
            if(sampled_val){ // non-terminal might be null due to error reduction rules
                this->tie(this->sampled_val);
            }
            this->cgi_options = cgi_options;
            if(cgi_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->cgi_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_id),
                THIS_MAPIFY(type_),
                THIS_MAPIFY(sampled_val),
                THIS_MAPIFY(cgi_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemId() const ->
            ast::Symbol__leaf
        {
            return item_id;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        auto getSampledVal() const ->
            Expression
        {
            return sampled_val;
        }
        auto getCgiOptions() const ->
            CovergroupItemOptions
        {
            return cgi_options;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->cg_items = cg_items;
            if(cg_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->cg_items);
            }
            this->cgi_options = cgi_options;
            if(cgi_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->cgi_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(cg_items),
                THIS_MAPIFY(cgi_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getCgItems() const ->
            Expressions
        {
            return cg_items;
        }
        auto getCgiOptions() const ->
            CovergroupItemOptions
        {
            return cgi_options;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf item_id;
        CovergroupItemOptions cgi_options;
    public:
        transition_covergroup_item_cgi_class(Symbol_ item_id, CovergroupItemOptions cgi_options){
            // initialize the members & tie them to me (the parent)
            this->item_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(item_id));
            this->tie(this->item_id);
            this->cgi_options = cgi_options;
            if(cgi_options){ // non-terminal might be null due to error reduction rules
                this->tie(this->cgi_options);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_id),
                THIS_MAPIFY(cgi_options),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemId() const ->
            ast::Symbol__leaf
        {
            return item_id;
        }
        auto getCgiOptions() const ->
            CovergroupItemOptions
        {
            return cgi_options;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf num;
    public:
        at_least_cgio_class(Symbol_ num){
            // initialize the members & tie them to me (the parent)
            this->num = ast::Symbol__leaf(new ast::Symbol__leaf_node(num));
            this->tie(this->num);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(num),
            };
        }

        // -------------- Getters ------------------ //
        auto getNum() const ->
            ast::Symbol__leaf
        {
            return num;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->item_bool_expr = item_bool_expr;
            if(item_bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->item_bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemBoolExpr() const ->
            Expression
        {
            return item_bool_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf num;
    public:
        num_of_buckets_cgio_class(Symbol_ num){
            // initialize the members & tie them to me (the parent)
            this->num = ast::Symbol__leaf(new ast::Symbol__leaf_node(num));
            this->tie(this->num);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(num),
            };
        }

        // -------------- Getters ------------------ //
        auto getNum() const ->
            ast::Symbol__leaf
        {
            return num;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_litral = bool_litral;
            if(bool_litral){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_litral);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_litral),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolLitral() const ->
            Expression
        {
            return bool_litral;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf description;
    public:
        text_cgio_class(Symbol_ description){
            // initialize the members & tie them to me (the parent)
            this->description = ast::Symbol__leaf(new ast::Symbol__leaf_node(description));
            this->tie(this->description);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(description),
            };
        }

        // -------------- Getters ------------------ //
        auto getDescription() const ->
            ast::Symbol__leaf
        {
            return description;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf value;
    public:
        weight_cgio_class(Symbol_ value){
            // initialize the members & tie them to me (the parent)
            this->value = ast::Symbol__leaf(new ast::Symbol__leaf_node(value));
            this->tie(this->value);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(value),
            };
        }

        // -------------- Getters ------------------ //
        auto getValue() const ->
            ast::Symbol__leaf
        {
            return value;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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

class enum_type_expr_class : public Expression_class {
    protected:
        Expressions enum_list_expr;
        Expression width_modifier_expr;
    public:
        enum_type_expr_class(Expressions enum_list_expr, Expression width_modifier_expr){
            // initialize the members & tie them to me (the parent)
            this->enum_list_expr = enum_list_expr;
            if(enum_list_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->enum_list_expr);
            }
            this->width_modifier_expr = width_modifier_expr;
            if(width_modifier_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_modifier_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(enum_list_expr),
                THIS_MAPIFY(width_modifier_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getEnumListExpr() const ->
            Expressions
        {
            return enum_list_expr;
        }
        auto getWidthModifierExpr() const ->
            Expression
        {
            return width_modifier_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Expression expr;
    public:
        enum_list_item_class(Symbol_ id, Expression expr){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->expr = expr;
            if(expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getExpr() const ->
            Expression
        {
            return expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e = e;
            if(e){ // non-terminal might be null due to error reduction rules
                this->tie(this->e);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e),
            };
        }

        // -------------- Getters ------------------ //
        auto getE() const ->
            Expression
        {
            return e;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->e1 = e1;
            if(e1){ // non-terminal might be null due to error reduction rules
                this->tie(this->e1);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(e1),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getE1() const ->
            Expression
        {
            return e1;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->str_expr = str_expr;
            if(str_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->str_expr);
            }
            this->pattern_expr = pattern_expr;
            if(pattern_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->pattern_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(str_expr),
                THIS_MAPIFY(pattern_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getStrExpr() const ->
            Expression
        {
            return str_expr;
        }
        auto getPatternExpr() const ->
            Expression
        {
            return pattern_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->str_expr = str_expr;
            if(str_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->str_expr);
            }
            this->pattern_expr = pattern_expr;
            if(pattern_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->pattern_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(str_expr),
                THIS_MAPIFY(pattern_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getStrExpr() const ->
            Expression
        {
            return str_expr;
        }
        auto getPatternExpr() const ->
            Expression
        {
            return pattern_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->exp = exp;
            if(exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->exp);
            }
            this->inside = inside;
            if(inside){ // non-terminal might be null due to error reduction rules
                this->tie(this->inside);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(exp),
                THIS_MAPIFY(inside),
            };
        }

        // -------------- Getters ------------------ //
        auto getExp() const ->
            Expression
        {
            return exp;
        }
        auto getInside() const ->
            Expression
        {
            return inside;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->field_id = field_id;
            if(field_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->field_id);
            }
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field_id),
                THIS_MAPIFY(type_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getFieldId() const ->
            Expression
        {
            return field_id;
        }
        auto getTypeId() const ->
            DataType
        {
            return type_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->field_id = field_id;
            if(field_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->field_id);
            }
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field_id),
                THIS_MAPIFY(type_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getFieldId() const ->
            Expression
        {
            return field_id;
        }
        auto getTypeId() const ->
            DataType
        {
            return type_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->exp = exp;
            if(exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->exp);
            }
            this->inside = inside;
            if(inside){ // non-terminal might be null due to error reduction rules
                this->tie(this->inside);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(exp),
                THIS_MAPIFY(inside),
            };
        }

        // -------------- Getters ------------------ //
        auto getExp() const ->
            Expression
        {
            return exp;
        }
        auto getInside() const ->
            DataType
        {
            return inside;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->idx_expr = idx_expr;
            if(idx_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->idx_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(idx_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getIdxExpr() const ->
            Expression
        {
            return idx_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->base_id = base_id;
            if(base_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->base_id);
            }
            this->idx_expr = idx_expr;
            if(idx_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->idx_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(base_id),
                THIS_MAPIFY(idx_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBaseId() const ->
            Expression
        {
            return base_id;
        }
        auto getIdxExpr() const ->
            Expression
        {
            return idx_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->list_exp = list_exp;
            if(list_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->list_exp);
            }
            this->range_expr = range_expr;
            if(range_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->range_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(list_exp),
                THIS_MAPIFY(range_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getListExp() const ->
            Expression
        {
            return list_exp;
        }
        auto getRangeExpr() const ->
            Expression
        {
            return range_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->list_exp = list_exp;
            if(list_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->list_exp);
            }
            this->bit_slice_expr = bit_slice_expr;
            if(bit_slice_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bit_slice_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(list_exp),
                THIS_MAPIFY(bit_slice_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getListExp() const ->
            Expression
        {
            return list_exp;
        }
        auto getBitSliceExpr() const ->
            Expression
        {
            return bit_slice_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->list_concat_items = list_concat_items;
            if(list_concat_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->list_concat_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(list_concat_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getListConcatItems() const ->
            Expressions
        {
            return list_concat_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bit_concat_items = bit_concat_items;
            if(bit_concat_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->bit_concat_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bit_concat_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getBitConcatItems() const ->
            Expressions
        {
            return bit_concat_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bottom = bottom;
            if(bottom){ // non-terminal might be null due to error reduction rules
                this->tie(this->bottom);
            }
            this->top = top;
            if(top){ // non-terminal might be null due to error reduction rules
                this->tie(this->top);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bottom),
                THIS_MAPIFY(top),
            };
        }

        // -------------- Getters ------------------ //
        auto getBottom() const ->
            Expression
        {
            return bottom;
        }
        auto getTop() const ->
            Expression
        {
            return top;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bottom = bottom;
            if(bottom){ // non-terminal might be null due to error reduction rules
                this->tie(this->bottom);
            }
            this->top = top;
            if(top){ // non-terminal might be null due to error reduction rules
                this->tie(this->top);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bottom),
                THIS_MAPIFY(top),
            };
        }

        // -------------- Getters ------------------ //
        auto getBottom() const ->
            Expression
        {
            return bottom;
        }
        auto getTop() const ->
            Expression
        {
            return top;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->range_items = range_items;
            if(range_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->range_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(range_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getRangeItems() const ->
            Expressions
        {
            return range_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->ranges = ranges;
            if(ranges){ // non-terminal might be null due to error reduction rules
                this->tie(this->ranges);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(ranges),
            };
        }

        // -------------- Getters ------------------ //
        auto getRanges() const ->
            Expressions
        {
            return ranges;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->width_expr = width_expr;
            if(width_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(width_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getWidthExpr() const ->
            Expression
        {
            return width_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->width_expr = width_expr;
            if(width_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(width_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getWidthExpr() const ->
            Expression
        {
            return width_expr;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf scoped_name;
        ActionBlock actions;
    public:
        new_allocate_expr_class(Expression struct_type_block, Symbol_ scoped_name, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->struct_type_block = struct_type_block;
            if(struct_type_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_type_block);
            }
            this->scoped_name = ast::Symbol__leaf(new ast::Symbol__leaf_node(scoped_name));
            this->tie(this->scoped_name);
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_type_block),
                THIS_MAPIFY(scoped_name),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructTypeBlock() const ->
            Expression
        {
            return struct_type_block;
        }
        auto getScopedName() const ->
            ast::Symbol__leaf
        {
            return scoped_name;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_type_block = struct_type_block;
            if(struct_type_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_type_block);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_type_block),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructTypeBlock() const ->
            Expression
        {
            return struct_type_block;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_id_expr);
            }
            this->opt_action_block_expt = opt_action_block_expt;
            if(opt_action_block_expt){ // non-terminal might be null due to error reduction rules
                this->tie(this->opt_action_block_expt);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_id_expr),
                THIS_MAPIFY(opt_action_block_expt),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructIdExpr() const ->
            Expression
        {
            return struct_id_expr;
        }
        auto getOptActionBlockExpt() const ->
            Expression
        {
            return opt_action_block_expt;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_id_expr);
            }
            this->action_block = action_block;
            if(action_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->action_block);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_id_expr),
                THIS_MAPIFY(action_block),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructIdExpr() const ->
            Expression
        {
            return struct_id_expr;
        }
        auto getActionBlock() const ->
            Actions
        {
            return action_block;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_type_modifiers = struct_type_modifiers;
            if(struct_type_modifiers){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_type_modifiers);
            }
            this->struct_id_expr = struct_id_expr;
            if(struct_id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_id_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_type_modifiers),
                THIS_MAPIFY(struct_id_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructTypeModifiers() const ->
            Expressions
        {
            return struct_type_modifiers;
        }
        auto getStructIdExpr() const ->
            Expression
        {
            return struct_id_expr;
        }
        // -------------- Getters ------------------ //

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

class defined_type_identifier_expr_class : public Expression_class {
    protected:
        Expressions modifiers;
    public:
        defined_type_identifier_expr_class(Expressions modifiers){
            // initialize the members & tie them to me (the parent)
            this->modifiers = modifiers;
            if(modifiers){ // non-terminal might be null due to error reduction rules
                this->tie(this->modifiers);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(modifiers),
            };
        }

        // -------------- Getters ------------------ //
        auto getModifiers() const ->
            Expressions
        {
            return modifiers;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hiers = hiers;
            if(hiers){ // non-terminal might be null due to error reduction rules
                this->tie(this->hiers);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hiers),
            };
        }

        // -------------- Getters ------------------ //
        auto getHiers() const ->
            Expressions
        {
            return hiers;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf hdl_hier_ref;
    public:
        hdl_path_name_expr_class(Symbol_ hdl_hier_ref){
            // initialize the members & tie them to me (the parent)
            this->hdl_hier_ref = ast::Symbol__leaf(new ast::Symbol__leaf_node(hdl_hier_ref));
            this->tie(this->hdl_hier_ref);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_hier_ref),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlHierRef() const ->
            ast::Symbol__leaf
        {
            return hdl_hier_ref;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_exp = bool_exp;
            if(bool_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_exp);
            }
            this->true_expr = true_expr;
            if(true_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->true_expr);
            }
            this->false_expr = false_expr;
            if(false_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->false_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_exp),
                THIS_MAPIFY(true_expr),
                THIS_MAPIFY(false_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExp() const ->
            Expression
        {
            return bool_exp;
        }
        auto getTrueExpr() const ->
            Expression
        {
            return true_expr;
        }
        auto getFalseExpr() const ->
            Expression
        {
            return false_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->base = base;
            if(base){ // non-terminal might be null due to error reduction rules
                this->tie(this->base);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(base),
            };
        }

        // -------------- Getters ------------------ //
        auto getBase() const ->
            Expression
        {
            return base;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->dest_type_expr = dest_type_expr;
            if(dest_type_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->dest_type_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(dest_type_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getDestTypeExpr() const ->
            DataType
        {
            return dest_type_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->base = base;
            if(base){ // non-terminal might be null due to error reduction rules
                this->tie(this->base);
            }
            this->arguments = arguments;
            if(arguments){ // non-terminal might be null due to error reduction rules
                this->tie(this->arguments);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(base),
                THIS_MAPIFY(arguments),
            };
        }

        // -------------- Getters ------------------ //
        auto getBase() const ->
            Expression
        {
            return base;
        }
        auto getArguments() const ->
            Expressions
        {
            return arguments;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->constraints = constraints;
            if(constraints){ // non-terminal might be null due to error reduction rules
                this->tie(this->constraints);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(constraints),
            };
        }

        // -------------- Getters ------------------ //
        auto getConstraints() const ->
            Expressions
        {
            return constraints;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->item_name = item_name;
            if(item_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->item_name);
            }
            this->gen_item = gen_item;
            if(gen_item){ // non-terminal might be null due to error reduction rules
                this->tie(this->gen_item);
            }
            this->constraints = constraints;
            if(constraints){ // non-terminal might be null due to error reduction rules
                this->tie(this->constraints);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(item_name),
                THIS_MAPIFY(gen_item),
                THIS_MAPIFY(constraints),
            };
        }

        // -------------- Getters ------------------ //
        auto getItemName() const ->
            Expression
        {
            return item_name;
        }
        auto getGenItem() const ->
            Expression
        {
            return gen_item;
        }
        auto getConstraints() const ->
            Expressions
        {
            return constraints;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->field_ = field_;
            if(field_){ // non-terminal might be null due to error reduction rules
                this->tie(this->field_);
            }
            this->type_ = type_;
            if(type_){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field_),
                THIS_MAPIFY(type_),
            };
        }

        // -------------- Getters ------------------ //
        auto getField() const ->
            Expression
        {
            return field_;
        }
        auto getType() const ->
            DataType
        {
            return type_;
        }
        // -------------- Getters ------------------ //

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
        Expression constrainer_field;
    public:
        field_type_constraint_by_field_expr_class(Expression field_, Expression constrainer_field){
            // initialize the members & tie them to me (the parent)
            this->field_ = field_;
            if(field_){ // non-terminal might be null due to error reduction rules
                this->tie(this->field_);
            }
            this->constrainer_field = constrainer_field;
            if(constrainer_field){ // non-terminal might be null due to error reduction rules
                this->tie(this->constrainer_field);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field_),
                THIS_MAPIFY(constrainer_field),
            };
        }

        // -------------- Getters ------------------ //
        auto getField() const ->
            Expression
        {
            return field_;
        }
        auto getConstrainerField() const ->
            Expression
        {
            return constrainer_field;
        }
        // -------------- Getters ------------------ //

        auto dump(std::ostream& stream, int n) -> void override;
        auto type() const -> SpecmanCtorKind override;

#ifdef Expression_SHARED_EXTRAS
    Expression_SHARED_EXTRAS
#endif
#ifdef field_type_constraint_by_field_expr_EXTRAS
    field_type_constraint_by_field_expr_EXTRAS
#endif
};

auto field_type_constraint_by_field_expr(Expression field_, Expression constrainer_field) -> Expression;

class distribution_constraint_expr_class : public Expression_class {
    protected:
        Expression gen_item;
        Cases distribution;
    public:
        distribution_constraint_expr_class(Expression gen_item, Cases distribution){
            // initialize the members & tie them to me (the parent)
            this->gen_item = gen_item;
            if(gen_item){ // non-terminal might be null due to error reduction rules
                this->tie(this->gen_item);
            }
            this->distribution = distribution;
            if(distribution){ // non-terminal might be null due to error reduction rules
                this->tie(this->distribution);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(gen_item),
                THIS_MAPIFY(distribution),
            };
        }

        // -------------- Getters ------------------ //
        auto getGenItem() const ->
            Expression
        {
            return gen_item;
        }
        auto getDistribution() const ->
            Cases
        {
            return distribution;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->int_ = int_;
            if(int_){ // non-terminal might be null due to error reduction rules
                this->tie(this->int_);
            }
            this->value = value;
            if(value){ // non-terminal might be null due to error reduction rules
                this->tie(this->value);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(int_),
                THIS_MAPIFY(value),
            };
        }

        // -------------- Getters ------------------ //
        auto getInt() const ->
            Expression
        {
            return int_;
        }
        auto getValue() const ->
            Expression
        {
            return value;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf str;
    public:
        str_expr_class(Symbol_ str){
            // initialize the members & tie them to me (the parent)
            this->str = ast::Symbol__leaf(new ast::Symbol__leaf_node(str));
            this->tie(this->str);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(str),
            };
        }

        // -------------- Getters ------------------ //
        auto getStr() const ->
            ast::Symbol__leaf
        {
            return str;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf int_;
    public:
        int_expr_class(Symbol_ int_){
            // initialize the members & tie them to me (the parent)
            this->int_ = ast::Symbol__leaf(new ast::Symbol__leaf_node(int_));
            this->tie(this->int_);

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(int_),
            };
        }

        // -------------- Getters ------------------ //
        auto getInt() const ->
            ast::Symbol__leaf
        {
            return int_;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->enum_list_items = enum_list_items;
            if(enum_list_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->enum_list_items);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_modifier);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(enum_list_items),
                THIS_MAPIFY(width_modifier),
            };
        }

        // -------------- Getters ------------------ //
        auto getEnumListItems() const ->
            Expressions
        {
            return enum_list_items;
        }
        auto getWidthModifier() const ->
            Expression
        {
            return width_modifier;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->predefined_base_type = predefined_base_type;
            if(predefined_base_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->predefined_base_type);
            }
            this->range_modifier = range_modifier;
            if(range_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->range_modifier);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_modifier);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(predefined_base_type),
                THIS_MAPIFY(range_modifier),
                THIS_MAPIFY(width_modifier),
            };
        }

        // -------------- Getters ------------------ //
        auto getPredefinedBaseType() const ->
            DataType
        {
            return predefined_base_type;
        }
        auto getRangeModifier() const ->
            Expression
        {
            return range_modifier;
        }
        auto getWidthModifier() const ->
            Expression
        {
            return width_modifier;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->enum_list_items = enum_list_items;
            if(enum_list_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->enum_list_items);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_modifier);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(enum_list_items),
                THIS_MAPIFY(width_modifier),
            };
        }

        // -------------- Getters ------------------ //
        auto getEnumListItems() const ->
            Expressions
        {
            return enum_list_items;
        }
        auto getWidthModifier() const ->
            Expression
        {
            return width_modifier;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf id;
        Expression range_modifier;
    public:
        defined_subtype_dt_class(Symbol_ id, Expression range_modifier){
            // initialize the members & tie them to me (the parent)
            this->id = ast::Symbol__leaf(new ast::Symbol__leaf_node(id));
            this->tie(this->id);
            this->range_modifier = range_modifier;
            if(range_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->range_modifier);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(range_modifier),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            ast::Symbol__leaf
        {
            return id;
        }
        auto getRangeModifier() const ->
            Expression
        {
            return range_modifier;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->pred_type = pred_type;
            if(pred_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->pred_type);
            }
            this->range_modifier = range_modifier;
            if(range_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->range_modifier);
            }
            this->width_modifier = width_modifier;
            if(width_modifier){ // non-terminal might be null due to error reduction rules
                this->tie(this->width_modifier);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(pred_type),
                THIS_MAPIFY(range_modifier),
                THIS_MAPIFY(width_modifier),
            };
        }

        // -------------- Getters ------------------ //
        auto getPredType() const ->
            DataType
        {
            return pred_type;
        }
        auto getRangeModifier() const ->
            Expression
        {
            return range_modifier;
        }
        auto getWidthModifier() const ->
            Expression
        {
            return width_modifier;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->struct_type_modifiers = struct_type_modifiers;
            if(struct_type_modifiers){ // non-terminal might be null due to error reduction rules
                this->tie(this->struct_type_modifiers);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(struct_type_modifiers),
            };
        }

        // -------------- Getters ------------------ //
        auto getStructTypeModifiers() const ->
            Expressions
        {
            return struct_type_modifiers;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->base_type = base_type;
            if(base_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->base_type);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(base_type),
            };
        }

        // -------------- Getters ------------------ //
        auto getBaseType() const ->
            DataType
        {
            return base_type;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf key_id;
        DataType base_type;
    public:
        assoc_list_type_dt_class(Symbol_ key_id, DataType base_type){
            // initialize the members & tie them to me (the parent)
            this->key_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(key_id));
            this->tie(this->key_id);
            this->base_type = base_type;
            if(base_type){ // non-terminal might be null due to error reduction rules
                this->tie(this->base_type);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(key_id),
                THIS_MAPIFY(base_type),
            };
        }

        // -------------- Getters ------------------ //
        auto getKeyId() const ->
            ast::Symbol__leaf
        {
            return key_id;
        }
        auto getBaseType() const ->
            DataType
        {
            return base_type;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf name;
        DataType type_id;
        Expression init_expr;
    public:
        var_decl_act_class(Symbol_ name, DataType type_id, Expression init_expr){
            // initialize the members & tie them to me (the parent)
            this->name = ast::Symbol__leaf(new ast::Symbol__leaf_node(name));
            this->tie(this->name);
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }
            this->init_expr = init_expr;
            if(init_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->init_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(name),
                THIS_MAPIFY(type_id),
                THIS_MAPIFY(init_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getName() const ->
            ast::Symbol__leaf
        {
            return name;
        }
        auto getTypeId() const ->
            DataType
        {
            return type_id;
        }
        auto getInitExpr() const ->
            Expression
        {
            return init_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id_expr = id_expr;
            if(id_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->id_expr);
            }
            this->assign_expr = assign_expr;
            if(assign_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->assign_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id_expr),
                THIS_MAPIFY(assign_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getIdExpr() const ->
            Expression
        {
            return id_expr;
        }
        auto getAssignExpr() const ->
            Expression
        {
            return assign_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->id = id;
            if(id){ // non-terminal might be null due to error reduction rules
                this->tie(this->id);
            }
            this->e2 = e2;
            if(e2){ // non-terminal might be null due to error reduction rules
                this->tie(this->e2);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(id),
                THIS_MAPIFY(e2),
            };
        }

        // -------------- Getters ------------------ //
        auto getId() const ->
            Expression
        {
            return id;
        }
        auto getE2() const ->
            Expression
        {
            return e2;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hdl_or_port = hdl_or_port;
            if(hdl_or_port){ // non-terminal might be null due to error reduction rules
                this->tie(this->hdl_or_port);
            }
            this->exp = exp;
            if(exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->exp);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_or_port),
                THIS_MAPIFY(exp),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlOrPort() const ->
            Expression
        {
            return hdl_or_port;
        }
        auto getExp() const ->
            Expression
        {
            return exp;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->hdl_or_port = hdl_or_port;
            if(hdl_or_port){ // non-terminal might be null due to error reduction rules
                this->tie(this->hdl_or_port);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(hdl_or_port),
            };
        }

        // -------------- Getters ------------------ //
        auto getHdlOrPort() const ->
            Expression
        {
            return hdl_or_port;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->condition = condition;
            if(condition){ // non-terminal might be null due to error reduction rules
                this->tie(this->condition);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }
            this->else_clause = else_clause;
            if(else_clause){ // non-terminal might be null due to error reduction rules
                this->tie(this->else_clause);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(condition),
                THIS_MAPIFY(actions),
                THIS_MAPIFY(else_clause),
            };
        }

        // -------------- Getters ------------------ //
        auto getCondition() const ->
            Expression
        {
            return condition;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        auto getElseClause() const ->
            ActionBlock
        {
            return else_clause;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->condition = condition;
            if(condition){ // non-terminal might be null due to error reduction rules
                this->tie(this->condition);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }
            this->else_clause = else_clause;
            if(else_clause){ // non-terminal might be null due to error reduction rules
                this->tie(this->else_clause);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(condition),
                THIS_MAPIFY(actions),
                THIS_MAPIFY(else_clause),
            };
        }

        // -------------- Getters ------------------ //
        auto getCondition() const ->
            Expression
        {
            return condition;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        auto getElseClause() const ->
            Action
        {
            return else_clause;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_case_branch_items = bool_case_branch_items;
            if(bool_case_branch_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_case_branch_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_case_branch_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolCaseBranchItems() const ->
            Cases
        {
            return bool_case_branch_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_exp = bool_exp;
            if(bool_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_exp);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_exp),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExp() const ->
            Expression
        {
            return bool_exp;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->exp = exp;
            if(exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->exp);
            }
            this->labeled_case_branch_items = labeled_case_branch_items;
            if(labeled_case_branch_items){ // non-terminal might be null due to error reduction rules
                this->tie(this->labeled_case_branch_items);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(exp),
                THIS_MAPIFY(labeled_case_branch_items),
            };
        }

        // -------------- Getters ------------------ //
        auto getExp() const ->
            Expression
        {
            return exp;
        }
        auto getLabeledCaseBranchItems() const ->
            Cases
        {
            return labeled_case_branch_items;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->label_exp = label_exp;
            if(label_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->label_exp);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(label_exp),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getLabelExp() const ->
            Expression
        {
            return label_exp;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->values = values;
            if(values){ // non-terminal might be null due to error reduction rules
                this->tie(this->values);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(values),
            };
        }

        // -------------- Getters ------------------ //
        auto getValues() const ->
            Expressions
        {
            return values;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->method_call_expr = method_call_expr;
            if(method_call_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->method_call_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(method_call_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getMethodCallExpr() const ->
            Expression
        {
            return method_call_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->method_call_expr = method_call_expr;
            if(method_call_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->method_call_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(method_call_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getMethodCallExpr() const ->
            Expression
        {
            return method_call_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->method_call_expr = method_call_expr;
            if(method_call_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->method_call_expr);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(method_call_expr),
            };
        }

        // -------------- Getters ------------------ //
        auto getMethodCallExpr() const ->
            Expression
        {
            return method_call_expr;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->exp = exp;
            if(exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->exp);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(exp),
            };
        }

        // -------------- Getters ------------------ //
        auto getExp() const ->
            Expression
        {
            return exp;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(bool_expr),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
        ast::Boolean_leaf is_reverese;
        Expression list_exp;
        Expression idx_exp;
        ActionBlock actions;
    public:
        for_each_loop_act_class(DataType type_id, Expression iterated_name, Boolean is_reverese, Expression list_exp, Expression idx_exp, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->type_id = type_id;
            if(type_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->type_id);
            }
            this->iterated_name = iterated_name;
            if(iterated_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->iterated_name);
            }
            this->is_reverese = ast::Boolean_leaf(new ast::Boolean_leaf_node(is_reverese));
            this->tie(this->is_reverese);
            this->list_exp = list_exp;
            if(list_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->list_exp);
            }
            this->idx_exp = idx_exp;
            if(idx_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->idx_exp);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(type_id),
                THIS_MAPIFY(iterated_name),
                THIS_MAPIFY(is_reverese),
                THIS_MAPIFY(list_exp),
                THIS_MAPIFY(idx_exp),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getTypeId() const ->
            DataType
        {
            return type_id;
        }
        auto getIteratedName() const ->
            Expression
        {
            return iterated_name;
        }
        auto getIsReverese() const ->
            ast::Boolean_leaf
        {
            return is_reverese;
        }
        auto getListExp() const ->
            Expression
        {
            return list_exp;
        }
        auto getIdxExp() const ->
            Expression
        {
            return idx_exp;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf var_id;
        Expression from_expr;
        Expression to_expr;
        Expression step_expr;
        ast::Boolean_leaf is_down;
        ActionBlock actions;
    public:
        for_range_loop_act_class(Symbol_ var_id, Expression from_expr, Expression to_expr, Expression step_expr, Boolean is_down, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->var_id = ast::Symbol__leaf(new ast::Symbol__leaf_node(var_id));
            this->tie(this->var_id);
            this->from_expr = from_expr;
            if(from_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->from_expr);
            }
            this->to_expr = to_expr;
            if(to_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->to_expr);
            }
            this->step_expr = step_expr;
            if(step_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->step_expr);
            }
            this->is_down = ast::Boolean_leaf(new ast::Boolean_leaf_node(is_down));
            this->tie(this->is_down);
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(var_id),
                THIS_MAPIFY(from_expr),
                THIS_MAPIFY(to_expr),
                THIS_MAPIFY(step_expr),
                THIS_MAPIFY(is_down),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getVarId() const ->
            ast::Symbol__leaf
        {
            return var_id;
        }
        auto getFromExpr() const ->
            Expression
        {
            return from_expr;
        }
        auto getToExpr() const ->
            Expression
        {
            return to_expr;
        }
        auto getStepExpr() const ->
            Expression
        {
            return step_expr;
        }
        auto getIsDown() const ->
            ast::Boolean_leaf
        {
            return is_down;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->init_act = init_act;
            if(init_act){ // non-terminal might be null due to error reduction rules
                this->tie(this->init_act);
            }
            this->bool_expr = bool_expr;
            if(bool_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->bool_expr);
            }
            this->step_act = step_act;
            if(step_act){ // non-terminal might be null due to error reduction rules
                this->tie(this->step_act);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(init_act),
                THIS_MAPIFY(bool_expr),
                THIS_MAPIFY(step_act),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getInitAct() const ->
            Action
        {
            return init_act;
        }
        auto getBoolExpr() const ->
            Expression
        {
            return bool_expr;
        }
        auto getStepAct() const ->
            Action
        {
            return step_act;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->line_it_name = line_it_name;
            if(line_it_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->line_it_name);
            }
            this->file_path_expr = file_path_expr;
            if(file_path_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->file_path_expr);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(line_it_name),
                THIS_MAPIFY(file_path_expr),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getLineItName() const ->
            Expression
        {
            return line_it_name;
        }
        auto getFilePathExpr() const ->
            Expression
        {
            return file_path_expr;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->line_it_name = line_it_name;
            if(line_it_name){ // non-terminal might be null due to error reduction rules
                this->tie(this->line_it_name);
            }
            this->file_pattern_exp = file_pattern_exp;
            if(file_pattern_exp){ // non-terminal might be null due to error reduction rules
                this->tie(this->file_pattern_exp);
            }
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(line_it_name),
                THIS_MAPIFY(file_pattern_exp),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getLineItName() const ->
            Expression
        {
            return line_it_name;
        }
        auto getFilePatternExp() const ->
            Expression
        {
            return file_pattern_exp;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_id = event_id;
            if(event_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            Expression
        {
            return event_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_id = event_id;
            if(event_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            Expression
        {
            return event_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->event_id = event_id;
            if(event_id){ // non-terminal might be null due to error reduction rules
                this->tie(this->event_id);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(event_id),
            };
        }

        // -------------- Getters ------------------ //
        auto getEventId() const ->
            Expression
        {
            return event_id;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->threads = threads;
            if(threads){ // non-terminal might be null due to error reduction rules
                this->tie(this->threads);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(threads),
            };
        }

        // -------------- Getters ------------------ //
        auto getThreads() const ->
            ActionBlocks
        {
            return threads;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->threads = threads;
            if(threads){ // non-terminal might be null due to error reduction rules
                this->tie(this->threads);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(threads),
            };
        }

        // -------------- Getters ------------------ //
        auto getThreads() const ->
            ActionBlocks
        {
            return threads;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->gen_expr = gen_expr;
            if(gen_expr){ // non-terminal might be null due to error reduction rules
                this->tie(this->gen_expr);
            }
            this->constraints = constraints;
            if(constraints){ // non-terminal might be null due to error reduction rules
                this->tie(this->constraints);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(gen_expr),
                THIS_MAPIFY(constraints),
            };
        }

        // -------------- Getters ------------------ //
        auto getGenExpr() const ->
            Expression
        {
            return gen_expr;
        }
        auto getConstraints() const ->
            Expressions
        {
            return constraints;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->seq_item = seq_item;
            if(seq_item){ // non-terminal might be null due to error reduction rules
                this->tie(this->seq_item);
            }
            this->constraints = constraints;
            if(constraints){ // non-terminal might be null due to error reduction rules
                this->tie(this->constraints);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(seq_item),
                THIS_MAPIFY(constraints),
            };
        }

        // -------------- Getters ------------------ //
        auto getSeqItem() const ->
            Expression
        {
            return seq_item;
        }
        auto getConstraints() const ->
            Expressions
        {
            return constraints;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->field_type_exprs = field_type_exprs;
            if(field_type_exprs){ // non-terminal might be null due to error reduction rules
                this->tie(this->field_type_exprs);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(field_type_exprs),
            };
        }

        // -------------- Getters ------------------ //
        auto getFieldTypeExprs() const ->
            Expressions
        {
            return field_type_exprs;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->condition = condition;
            if(condition){ // non-terminal might be null due to error reduction rules
                this->tie(this->condition);
            }
            this->dut_error_block = dut_error_block;
            if(dut_error_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->dut_error_block);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(condition),
                THIS_MAPIFY(dut_error_block),
            };
        }

        // -------------- Getters ------------------ //
        auto getCondition() const ->
            Expression
        {
            return condition;
        }
        auto getDutErrorBlock() const ->
            Expression
        {
            return dut_error_block;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->condition = condition;
            if(condition){ // non-terminal might be null due to error reduction rules
                this->tie(this->condition);
            }
            this->error_block = error_block;
            if(error_block){ // non-terminal might be null due to error reduction rules
                this->tie(this->error_block);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(condition),
                THIS_MAPIFY(error_block),
            };
        }

        // -------------- Getters ------------------ //
        auto getCondition() const ->
            Expression
        {
            return condition;
        }
        auto getErrorBlock() const ->
            Expression
        {
            return error_block;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->try_actions = try_actions;
            if(try_actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->try_actions);
            }
            this->except_actions = except_actions;
            if(except_actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->except_actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(try_actions),
                THIS_MAPIFY(except_actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getTryActions() const ->
            ActionBlock
        {
            return try_actions;
        }
        auto getExceptActions() const ->
            ActionBlock
        {
            return except_actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->state_var = state_var;
            if(state_var){ // non-terminal might be null due to error reduction rules
                this->tie(this->state_var);
            }
            this->final_st = final_st;
            if(final_st){ // non-terminal might be null due to error reduction rules
                this->tie(this->final_st);
            }
            this->states = states;
            if(states){ // non-terminal might be null due to error reduction rules
                this->tie(this->states);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(state_var),
                THIS_MAPIFY(final_st),
                THIS_MAPIFY(states),
            };
        }

        // -------------- Getters ------------------ //
        auto getStateVar() const ->
            Expression
        {
            return state_var;
        }
        auto getFinalSt() const ->
            Expression
        {
            return final_st;
        }
        auto getStates() const ->
            FSMStates
        {
            return states;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf state;
        ActionBlock actions;
    public:
        state_action_fsm_class(Symbol_ state, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->state = ast::Symbol__leaf(new ast::Symbol__leaf_node(state));
            this->tie(this->state);
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(state),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getState() const ->
            ast::Symbol__leaf
        {
            return state;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf cur_state;
        ast::Symbol__leaf next_state;
        ActionBlock actions;
    public:
        state_transition_fsm_class(Symbol_ cur_state, Symbol_ next_state, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->cur_state = ast::Symbol__leaf(new ast::Symbol__leaf_node(cur_state));
            this->tie(this->cur_state);
            this->next_state = ast::Symbol__leaf(new ast::Symbol__leaf_node(next_state));
            this->tie(this->next_state);
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(cur_state),
                THIS_MAPIFY(next_state),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getCurState() const ->
            ast::Symbol__leaf
        {
            return cur_state;
        }
        auto getNextState() const ->
            ast::Symbol__leaf
        {
            return next_state;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
        ast::Symbol__leaf next_state;
        ActionBlock actions;
    public:
        state_any_transition_fsm_class(Symbol_ next_state, ActionBlock actions){
            // initialize the members & tie them to me (the parent)
            this->next_state = ast::Symbol__leaf(new ast::Symbol__leaf_node(next_state));
            this->tie(this->next_state);
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(next_state),
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getNextState() const ->
            ast::Symbol__leaf
        {
            return next_state;
        }
        auto getActions() const ->
            ActionBlock
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
            };
        }

        // -------------- Getters ------------------ //
        // -------------- Getters ------------------ //

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
            // initialize the members & tie them to me (the parent)
            this->actions = actions;
            if(actions){ // non-terminal might be null due to error reduction rules
                this->tie(this->actions);
            }

            // initialize the children pool for easy & fast lookup by get_child_by_name
            this->m_children_pool = {
                THIS_MAPIFY(actions),
            };
        }

        // -------------- Getters ------------------ //
        auto getActions() const ->
            Actions
        {
            return actions;
        }
        // -------------- Getters ------------------ //

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