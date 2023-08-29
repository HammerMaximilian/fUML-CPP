/*
 * ExecutionFactory.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/loci/ExecutionFactory.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/AcceptCallActionActivation.h>
#include <fuml/semantics/actions/AcceptEventActionActivation.h>
#include <fuml/semantics/actions/AddStructuralFeatureValueActionActivation.h>
#include <fuml/semantics/actions/CallBehaviorActionActivation.h>
#include <fuml/semantics/actions/CallOperationActionActivation.h>
#include <fuml/semantics/actions/ClearAssociationActionActivation.h>
#include <fuml/semantics/actions/ClearStructuralFeatureActionActivation.h>
#include <fuml/semantics/actions/ConditionalNodeActivation.h>
#include <fuml/semantics/actions/CreateLinkActionActivation.h>
#include <fuml/semantics/actions/CreateObjectActionActivation.h>
#include <fuml/semantics/actions/DestroyLinkActionActivation.h>
#include <fuml/semantics/actions/DestroyObjectActionActivation.h>
#include <fuml/semantics/actions/ExpansionNodeActivation.h>
#include <fuml/semantics/actions/ExpansionRegionActivation.h>
#include <fuml/semantics/actions/InputPinActivation.h>
#include <fuml/semantics/actions/LoopNodeActivation.h>
#include <fuml/semantics/actions/OutputPinActivation.h>
#include <fuml/semantics/actions/RaiseExceptionActionActivation.h>
#include <fuml/semantics/actions/ReadExtentActionActivation.h>
#include <fuml/semantics/actions/ReadIsClassifiedObjectActionActivation.h>
#include <fuml/semantics/actions/ReadLinkActionActivation.h>
#include <fuml/semantics/actions/ReadSelfActionActivation.h>
#include <fuml/semantics/actions/ReadStructuralFeatureActionActivation.h>
#include <fuml/semantics/actions/ReclassifyObjectActionActivation.h>
#include <fuml/semantics/actions/ReduceActionActivation.h>
#include <fuml/semantics/actions/RemoveStructuralFeatureValueActionActivation.h>
#include <fuml/semantics/actions/ReplyActionActivation.h>
#include <fuml/semantics/actions/SendSignalActionActivation.h>
#include <fuml/semantics/actions/StartClassifierBehaviorActionActivation.h>
#include <fuml/semantics/actions/StartObjectBehaviorActionActivation.h>
#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>
#include <fuml/semantics/actions/TestIdentityActionActivation.h>
#include <fuml/semantics/actions/UnmarshallActionActivation.h>
#include <fuml/semantics/actions/ValueSpecificationActionActivation.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityFinalNodeActivation.h>
#include <fuml/semantics/activities/ActivityParameterNodeActivation.h>
#include <fuml/semantics/activities/CentralBufferNodeActivation.h>
#include <fuml/semantics/activities/DataStoreNodeActivation.h>
#include <fuml/semantics/activities/DecisionNodeActivation.h>
#include <fuml/semantics/activities/FlowFinalNodeActivation.h>
#include <fuml/semantics/activities/ForkNodeActivation.h>
#include <fuml/semantics/activities/InitialNodeActivation.h>
#include <fuml/semantics/activities/JoinNodeActivation.h>
#include <fuml/semantics/activities/MergeNodeActivation.h>
#include <fuml/semantics/classification/InstanceValueEvaluation.h>
#include <fuml/semantics/commonbehavior/CallEventBehavior.h>
#include <fuml/semantics/commonbehavior/CallEventExecution.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/loci/SemanticStrategy.h>
#include <fuml/semantics/values/Evaluation.h>
#include <fuml/semantics/values/LiteralBooleanEvaluation.h>
#include <fuml/semantics/values/LiteralIntegerEvaluation.h>
#include <fuml/semantics/values/LiteralNullEvaluation.h>
#include <fuml/semantics/values/LiteralRealEvaluation.h>
#include <fuml/semantics/values/LiteralStringEvaluation.h>
#include <fuml/semantics/values/LiteralUnlimitedNaturalEvaluation.h>
#include <fuml/syntax/actions/AcceptCallAction.h>
#include <fuml/syntax/actions/AcceptEventAction.h>
#include <fuml/syntax/actions/AddStructuralFeatureValueAction.h>
#include <fuml/syntax/actions/CallBehaviorAction.h>
#include <fuml/syntax/actions/CallOperationAction.h>
#include <fuml/syntax/actions/ClearAssociationAction.h>
#include <fuml/syntax/actions/ClearStructuralFeatureAction.h>
#include <fuml/syntax/actions/ConditionalNode.h>
#include <fuml/syntax/actions/CreateLinkAction.h>
#include <fuml/syntax/actions/CreateObjectAction.h>
#include <fuml/syntax/actions/DestroyLinkAction.h>
#include <fuml/syntax/actions/DestroyObjectAction.h>
#include <fuml/syntax/actions/ExpansionNode.h>
#include <fuml/syntax/actions/ExpansionRegion.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/LoopNode.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/actions/RaiseExceptionAction.h>
#include <fuml/syntax/actions/ReadExtentAction.h>
#include <fuml/syntax/actions/ReadIsClassifiedObjectAction.h>
#include <fuml/syntax/actions/ReadLinkAction.h>
#include <fuml/syntax/actions/ReadSelfAction.h>
#include <fuml/syntax/actions/ReadStructuralFeatureAction.h>
#include <fuml/syntax/actions/ReclassifyObjectAction.h>
#include <fuml/syntax/actions/ReduceAction.h>
#include <fuml/syntax/actions/RemoveStructuralFeatureValueAction.h>
#include <fuml/syntax/actions/ReplyAction.h>
#include <fuml/syntax/actions/SendSignalAction.h>
#include <fuml/syntax/actions/StartClassifierBehaviorAction.h>
#include <fuml/syntax/actions/StartObjectBehaviorAction.h>
#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/actions/TestIdentityAction.h>
#include <fuml/syntax/actions/UnmarshallAction.h>
#include <fuml/syntax/actions/ValueSpecificationAction.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityFinalNode.h>
#include <fuml/syntax/activities/ActivityParameterNode.h>
#include <fuml/syntax/activities/CentralBufferNode.h>
#include <fuml/syntax/activities/DataStoreNode.h>
#include <fuml/syntax/activities/DecisionNode.h>
#include <fuml/syntax/activities/FlowFinalNode.h>
#include <fuml/syntax/activities/ForkNode.h>
#include <fuml/syntax/activities/InitialNode.h>
#include <fuml/syntax/activities/JoinNode.h>
#include <fuml/syntax/activities/MergeNode.h>
#include <fuml/syntax/classification/InstanceValue.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/values/LiteralBoolean.h>
#include <fuml/syntax/values/LiteralInteger.h>
#include <fuml/syntax/values/LiteralNull.h>
#include <fuml/syntax/values/LiteralReal.h>
#include <fuml/syntax/values/LiteralString.h>
#include <fuml/syntax/values/LiteralUnlimitedNatural.h>

ExecutionPtr ExecutionFactory::createExecution(
		const BehaviorPtr& behavior, const Object_Ptr& context)
{
	// Create an execution object for a given behavior.
	// The execution will take place at the locus of the factory in the
	// given context.
	// If the context is empty, the execution is assumed to provide its own
	// context.

	ExecutionPtr execution;

	OpaqueBehaviorPtr opaqueBehavior = std::dynamic_pointer_cast<OpaqueBehavior>(behavior);

	if (opaqueBehavior) {
		execution = this
				->instantiateOpaqueBehaviorExecution(opaqueBehavior);
	} else {
		execution = std::dynamic_pointer_cast<Execution>(this->instantiateVisitor(behavior));
		execution->types->push_back(behavior);
		execution->createFeatureValues();
	}

	this->locus->add(execution);

	if (context == nullptr) {
		execution->context = execution;
	} else {
		execution->context = context;
	}

	return execution;
} // createExecution

EvaluationPtr ExecutionFactory::createEvaluation(
		const ValueSpecificationPtr& specification)
{
	// Create an evaluation object for a given value specification.
	// The evaluation will take place at the locus of the factory.

	EvaluationPtr evaluation = std::dynamic_pointer_cast<Evaluation>(this->instantiateVisitor(specification));

	evaluation->specification = specification;
	evaluation->locus = this->locus;

	return evaluation;
} // createEvaluation

SemanticVisitorPtr ExecutionFactory::instantiateVisitor(
		const ElementPtr& element)
{
	// Instantiate a visitor object for the given element.

	SemanticVisitorPtr visitor = nullptr;

	// Formerly Level L1

	if (std::dynamic_pointer_cast<LiteralBoolean>(element)) {
		visitor.reset(new LiteralBooleanEvaluation());
	}

	else if (std::dynamic_pointer_cast<LiteralString>(element)) {
		visitor.reset(new LiteralStringEvaluation());
	}

	else if (std::dynamic_pointer_cast<LiteralNull>(element)) {
		visitor.reset(new LiteralNullEvaluation());
	}

	else if (std::dynamic_pointer_cast<InstanceValue>(element)) {
		visitor.reset(new InstanceValueEvaluation());
	}

	else if (std::dynamic_pointer_cast<LiteralUnlimitedNatural>(element)) {
		visitor.reset(new LiteralUnlimitedNaturalEvaluation());
	}

	else if (std::dynamic_pointer_cast<LiteralInteger>(element)) {
		visitor.reset(new LiteralIntegerEvaluation());
	}

	else if (std::dynamic_pointer_cast<LiteralReal>(element)) {
		visitor.reset(new LiteralRealEvaluation());
	}

	else if (std::dynamic_pointer_cast<CallEventBehavior>(element)) {
		visitor.reset(new CallEventExecution());

	// Formerly Level L2

	} else if (std::dynamic_pointer_cast<Activity>(element)) {
		visitor.reset(new ActivityExecution());
	}

	else if (std::dynamic_pointer_cast<ActivityParameterNode>(element)) {
		visitor.reset(new ActivityParameterNodeActivation());
	}

	else if (std::dynamic_pointer_cast<CentralBufferNode>(element) &&
			!(std::dynamic_pointer_cast<DataStoreNode>(element))) {
		visitor.reset(new CentralBufferNodeActivation());
	}

	else if (std::dynamic_pointer_cast<InitialNode>(element)) {
		visitor.reset(new InitialNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ActivityFinalNode>(element)) {
		visitor.reset(new ActivityFinalNodeActivation());
	}

	else if (std::dynamic_pointer_cast<FlowFinalNode>(element)) {
		visitor.reset(new FlowFinalNodeActivation());
	}

	else if (std::dynamic_pointer_cast<JoinNode>(element)) {
		visitor.reset(new JoinNodeActivation());
	}

	else if (std::dynamic_pointer_cast<MergeNode>(element)) {
		visitor.reset(new MergeNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ForkNode>(element)) {
		visitor.reset(new ForkNodeActivation());
	}

	else if (std::dynamic_pointer_cast<DecisionNode>(element)) {
		visitor.reset(new DecisionNodeActivation());
	}

	else if (std::dynamic_pointer_cast<InputPin>(element)) {
		visitor.reset(new InputPinActivation());
	}

	else if (std::dynamic_pointer_cast<OutputPin>(element)) {
		visitor.reset(new OutputPinActivation());
	}

	else if (std::dynamic_pointer_cast<CallBehaviorAction>(element)) {
		visitor.reset(new CallBehaviorActionActivation());
	}

	else if (std::dynamic_pointer_cast<CallOperationAction>(element)) {
		visitor.reset(new CallOperationActionActivation());
	}

	else if (std::dynamic_pointer_cast<SendSignalAction>(element)) {
		visitor.reset(new SendSignalActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReadSelfAction>(element)) {
		visitor.reset(new ReadSelfActionActivation());
	}

	else if (std::dynamic_pointer_cast<TestIdentityAction>(element)) {
		visitor.reset(new TestIdentityActionActivation());
	}

	else if (std::dynamic_pointer_cast<ValueSpecificationAction>(element)) {
		visitor.reset(new ValueSpecificationActionActivation());
	}

	else if (std::dynamic_pointer_cast<CreateObjectAction>(element)) {
		visitor.reset(new CreateObjectActionActivation());
	}

	else if (std::dynamic_pointer_cast<DestroyObjectAction>(element)) {
		visitor.reset(new DestroyObjectActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReadStructuralFeatureAction>(element)) {
		visitor.reset(new ReadStructuralFeatureActionActivation());
	}

	else if (std::dynamic_pointer_cast<ClearStructuralFeatureAction>(element)) {
		visitor.reset(new ClearStructuralFeatureActionActivation());
	}

	else if (std::dynamic_pointer_cast<AddStructuralFeatureValueAction>(element)) {
		visitor.reset(new AddStructuralFeatureValueActionActivation());
	}

	else if (std::dynamic_pointer_cast<RemoveStructuralFeatureValueAction>(element)) {
		visitor.reset(new RemoveStructuralFeatureValueActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReadLinkAction>(element)) {
		visitor.reset(new ReadLinkActionActivation());
	}

	else if (std::dynamic_pointer_cast<ClearAssociationAction>(element)) {
		visitor.reset(new ClearAssociationActionActivation());
	}

	else if (std::dynamic_pointer_cast<CreateLinkAction>(element)) {
		visitor.reset(new CreateLinkActionActivation());
	}

	else if (std::dynamic_pointer_cast<DestroyLinkAction>(element)) {
		visitor.reset(new DestroyLinkActionActivation());
	}

	// Formerly Level L3

	else if (std::dynamic_pointer_cast<DataStoreNode>(element)) {
		visitor.reset(new DataStoreNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ConditionalNode>(element)) {
		visitor.reset(new ConditionalNodeActivation());
	}

	else if (std::dynamic_pointer_cast<LoopNode>(element)) {
		visitor.reset(new LoopNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ExpansionRegion>(element)) {
		visitor.reset(new ExpansionRegionActivation());
	}

	// Note: Since ConditionalNode, LoopNode and ExpansionRegion are
	// subclasses of StructuredActivityNode, element must be tested
	// against the three subclasses before the superclass.
	else if (std::dynamic_pointer_cast<StructuredActivityNode>(element)) {
		visitor.reset(new StructuredActivityNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ExpansionNode>(element)) {
		visitor.reset(new ExpansionNodeActivation());
	}

	else if (std::dynamic_pointer_cast<ReadExtentAction>(element)) {
		visitor.reset(new ReadExtentActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReadIsClassifiedObjectAction>(element)) {
		visitor.reset(new ReadIsClassifiedObjectActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReclassifyObjectAction>(element)) {
		visitor.reset(new ReclassifyObjectActionActivation());
	}

	else if (std::dynamic_pointer_cast<StartObjectBehaviorAction>(element)) {
		visitor.reset(new StartObjectBehaviorActionActivation());
	}

	else if (std::dynamic_pointer_cast<StartClassifierBehaviorAction>(element)) {
		visitor.reset(new StartClassifierBehaviorActionActivation());
	}

	// Note: Since AcceptCallAction is a subclass of AcceptEventAction,
	// element must be tested against AcceptCallAction before
	// AcceptEventAction.
	else if (std::dynamic_pointer_cast<AcceptCallAction>(element)) {
		visitor.reset(new AcceptCallActionActivation());
	}

	else if (std::dynamic_pointer_cast<AcceptEventAction>(element)) {
		visitor.reset(new AcceptEventActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReplyAction>(element)) {
		visitor.reset(new ReplyActionActivation());
	}

	else if (std::dynamic_pointer_cast<ReduceAction>(element)) {
		visitor.reset(new ReduceActionActivation());
	}

	else if (std::dynamic_pointer_cast<RaiseExceptionAction>(element)) {
		visitor.reset(new RaiseExceptionActionActivation());
	}

	else if (std::dynamic_pointer_cast<UnmarshallAction>(element)) {
		visitor.reset(new UnmarshallActionActivation());
	}

	return visitor;
} // instantiateVisitor

OpaqueBehaviorExecutionPtr ExecutionFactory::instantiateOpaqueBehaviorExecution(
		const OpaqueBehaviorPtr& behavior)
{
	// Return a copy of the prototype for the primitive behavior execution
	// of the given opaque behavior.

	OpaqueBehaviorExecutionPtr execution = nullptr;
	unsigned int i = 1;
	unsigned int primitiveBehaviorPrototypesSize = this->primitiveBehaviorPrototypes->size();
	while (execution == nullptr && i <= primitiveBehaviorPrototypesSize) {
		OpaqueBehaviorExecutionPtr prototype = this->primitiveBehaviorPrototypes->at(i - 1);
		if (prototype->getBehavior() == behavior) {
			execution = std::dynamic_pointer_cast<OpaqueBehaviorExecution>(prototype->copy());
		}
		i = i + 1;
	}

	utils::Debug::println(execution == nullptr,
			std::string("[instantiateOpaqueExecution] No prototype execution found for " + behavior->name + "."));

	return execution;
} // instantiateOpaqueBehaviorExecution

void ExecutionFactory::addPrimitiveBehaviorPrototype(
		const OpaqueBehaviorExecutionPtr& execution)
{
	// Add an opaque behavior execution to use as a prototype for
	// instantiating the corresponding primitive opaque behavior.
	// Precondition: No primitive behavior prototype for the type of the
	// given execution should already exist.

	this->primitiveBehaviorPrototypes->push_back(execution);
} // addPrimitiveBehaviorPrototype

void ExecutionFactory::addBuiltInType(
		const PrimitiveTypePtr& type)
{
	// Add the given primitive type as a built-in type.
	// Precondition: No built-in type with the same name should already
	// exist.

	this->builtInTypes->push_back(type);
} // addBuiltInType

PrimitiveTypePtr ExecutionFactory::getBuiltInType(
		std::string name)
{
	// Return the built-in type with the given name.

	PrimitiveTypePtr type = nullptr;
	unsigned int i = 1;
	unsigned int builtInTypes = this->builtInTypes->size();
	while (type == nullptr && i <= builtInTypes)
	{
		PrimitiveTypePtr primitiveType = this->builtInTypes->at(i - 1);
		if (primitiveType->name == name)
		{
			type = primitiveType;
		}
		i = i + 1;
	}

	return type;
} // getBuiltInType

void ExecutionFactory::setStrategy(
		const SemanticStrategyPtr& strategy)
{
	// Set the strategy for a semantic variation point. Any existing
	// strategy for the same SVP is replaced.

	unsigned int i = this->getStrategyIndex(strategy->getName());

	if (i <= this->strategies->size()) {
		this->strategies->erase(this->strategies->begin() + (i - 1));
	}

	this->strategies->push_back(strategy);
} // setStrategy

SemanticStrategyPtr ExecutionFactory::getStrategy(
		std::string name)
{
	// Get the strategy with the given name.

	unsigned int i = this->getStrategyIndex(name);

	SemanticStrategyPtr strategy = nullptr;
	if (i <= this->strategies->size()) {
		strategy = this->strategies->at(i - 1);
	}

	return strategy;
} // getStrategy

int ExecutionFactory::getStrategyIndex(
		std::string name)
{
	// Get the index of the strategy with the given name.
	// If there is no such strategy, return the size of the strategies list.

	SemanticStrategyListPtr strategies = this->strategies;

	unsigned int i = 1;
	bool unmatched = true;
	unsigned int strategiesSize = strategies->size();
	while (unmatched & (i <= strategiesSize)) {
		if (strategies->at(i - 1)->getName() == name) {
			unmatched = false;
		} else {
			i = i + 1;
		}
	}

	return i;

} // getStrategyIndex
