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
//#include <fuml/semantics/activities/ActivityExecution.h>
// Use custom version of ActivityExecution
#include <fuml/extensions/activities/CustomActivityExecution.h>
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
#include <uml/actions/AcceptCallAction.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/actions/ClearAssociationAction.h>
#include <uml/actions/ClearStructuralFeatureAction.h>
#include <uml/actions/ConditionalNode.h>
#include <uml/actions/CreateLinkAction.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/DestroyLinkAction.h>
#include <uml/actions/DestroyObjectAction.h>
#include <uml/actions/ExpansionNode.h>
#include <uml/actions/ExpansionRegion.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/LoopNode.h>
#include <uml/actions/OutputPin.h>
#include <uml/actions/RaiseExceptionAction.h>
#include <uml/actions/ReadExtentAction.h>
#include <uml/actions/ReadIsClassifiedObjectAction.h>
#include <uml/actions/ReadLinkAction.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/actions/ReclassifyObjectAction.h>
#include <uml/actions/ReduceAction.h>
#include <uml/actions/RemoveStructuralFeatureValueAction.h>
#include <uml/actions/ReplyAction.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/actions/StartClassifierBehaviorAction.h>
#include <uml/actions/StartObjectBehaviorAction.h>
#include <uml/actions/StructuredActivityNode.h>
#include <uml/actions/TestIdentityAction.h>
#include <uml/actions/UnmarshallAction.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <uml/activities/Activity.h>
#include <uml/activities/ActivityFinalNode.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/activities/CentralBufferNode.h>
#include <uml/activities/DataStoreNode.h>
#include <uml/activities/DecisionNode.h>
#include <uml/activities/FlowFinalNode.h>
#include <uml/activities/ForkNode.h>
#include <uml/activities/InitialNode.h>
#include <uml/activities/JoinNode.h>
#include <uml/activities/MergeNode.h>
#include <uml/classification/InstanceValue.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/values/LiteralInteger.h>
#include <uml/values/LiteralNull.h>
#include <uml/values/LiteralReal.h>
#include <uml/values/LiteralString.h>
#include <uml/values/LiteralUnlimitedNatural.h>

ExecutionPtr ExecutionFactory::createExecution(const BehaviorPtr& behavior, const Object_Ptr& context)
{
	// Create an execution object for a given behavior.
	// The execution will take place at the locus of the factory in the
	// given context.
	// If the context is empty, the execution is assumed to provide its own
	// context.

	ExecutionPtr execution;

	OpaqueBehaviorPtr opaqueBehavior = AS(OpaqueBehavior, behavior);

	if (opaqueBehavior)
	{
		execution = this->instantiateOpaqueBehaviorExecution(opaqueBehavior);
	}
	else
	{
		execution = AS(Execution, this->instantiateVisitor(behavior));
		execution->types->push_back(behavior);
		execution->createFeatureValues();
	}

	this->locus.lock()->add(execution);

	if (context == nullptr)
	{
		execution->context = execution;
	}
	else
	{
		execution->context = context;
	}

	return execution;
} // createExecution

EvaluationPtr ExecutionFactory::createEvaluation(const ValueSpecificationPtr& specification)
{
	// Create an evaluation object for a given value specification.
	// The evaluation will take place at the locus of the factory.

	EvaluationPtr evaluation = AS(Evaluation, this->instantiateVisitor(specification));

	evaluation->specification = specification;
	evaluation->locus = this->locus.lock();

	return evaluation;
} // createEvaluation

SemanticVisitorPtr ExecutionFactory::instantiateVisitor(const ElementPtr& element)
{
	// Instantiate a visitor object for the given element.

	SemanticVisitorPtr visitor = nullptr;

	// Formerly Level L1

	if (IS(LiteralBoolean, element))
	{
		LiteralBooleanEvaluationPtr newLiteralBooleanEvaluation(new LiteralBooleanEvaluation());
		visitor = newLiteralBooleanEvaluation;
	}

	else if (IS(LiteralString, element))
	{
		LiteralStringEvaluationPtr newLiteralStringEvaluation(new LiteralStringEvaluation());
		visitor = newLiteralStringEvaluation;
	}

	else if (IS(LiteralNull, element))
	{
		LiteralNullEvaluationPtr newLiteralNullEvaluation(new LiteralNullEvaluation());
		visitor = newLiteralNullEvaluation;
	}

	else if (IS(InstanceValue, element))
	{
		InstanceValueEvaluationPtr newInstanceValueEvaluation(new InstanceValueEvaluation());
		visitor = newInstanceValueEvaluation;
	}

	else if (IS(LiteralUnlimitedNatural, element))
	{
		LiteralUnlimitedNaturalEvaluationPtr newLiteralUnlimitedNaturalEvaluation(
			new LiteralUnlimitedNaturalEvaluation());
		visitor = newLiteralUnlimitedNaturalEvaluation;
	}

	else if (IS(LiteralInteger, element))
	{
		LiteralIntegerEvaluationPtr newLiteralIntegerEvaluation(new LiteralIntegerEvaluation());
		visitor = newLiteralIntegerEvaluation;
	}

	else if (IS(LiteralReal, element))
	{
		LiteralRealEvaluationPtr newLiteralRealEvaluation(new LiteralRealEvaluation());
		visitor = newLiteralRealEvaluation;
	}

	else if (IS(CallEventBehavior, element))
	{
		CallEventExecutionPtr newCallEventExecution(new CallEventExecution());
		newCallEventExecution->setThisCallEventExecutionPtr(newCallEventExecution);
		visitor = newCallEventExecution;

		// Formerly Level L2

	}
	else if (IS(Activity, element))
	{
		//ActivityExecutionPtr newActivityExecution(new ActivityExecution());
		// Use custom version of ActivityExecution
		ActivityExecutionPtr newActivityExecution(new fuml::extensions::activities::CustomActivityExecution());
		newActivityExecution->setThisActivityExecutionPtr(newActivityExecution);
		visitor = newActivityExecution;
	}

	else if (IS(ActivityParameterNode, element))
	{
		ActivityParameterNodeActivationPtr newActivityParameterNodeActivation(new ActivityParameterNodeActivation());
		newActivityParameterNodeActivation->setThisActivityParameterNodeActivationPtr(
			newActivityParameterNodeActivation);
		visitor = newActivityParameterNodeActivation;
	}

	else if (IS(CentralBufferNode, element)
		&& !(IS(DataStoreNode, element)))
	{
		CentralBufferNodeActivationPtr newCentralBufferNodeActivation(new CentralBufferNodeActivation());
		newCentralBufferNodeActivation->setThisObjectNodeActivationPtr(newCentralBufferNodeActivation);
		visitor = newCentralBufferNodeActivation;
	}

	else if (IS(InitialNode, element))
	{
		InitialNodeActivationPtr newInitialNodeActivation(new InitialNodeActivation());
		newInitialNodeActivation->setThisActivityNodeActivationPtr(newInitialNodeActivation);
		visitor = newInitialNodeActivation;
	}

	else if (IS(ActivityFinalNode, element))
	{
		ActivityFinalNodeActivationPtr newActivityFinalNodeActivation(new ActivityFinalNodeActivation());
		newActivityFinalNodeActivation->setThisActivityNodeActivationPtr(newActivityFinalNodeActivation);
		visitor = newActivityFinalNodeActivation;
	}

	else if (IS(FlowFinalNode, element))
	{
		FlowFinalNodeActivationPtr newFlowFinalNodeActivation(new FlowFinalNodeActivation());
		newFlowFinalNodeActivation->setThisActivityNodeActivationPtr(newFlowFinalNodeActivation);
		visitor = newFlowFinalNodeActivation;
	}

	else if (IS(JoinNode, element))
	{
		JoinNodeActivationPtr newJoinNodeActivation(new JoinNodeActivation());
		newJoinNodeActivation->setThisActivityNodeActivationPtr(newJoinNodeActivation);
		visitor = newJoinNodeActivation;
	}

	else if (IS(MergeNode, element))
	{
		MergeNodeActivationPtr newMergeNodeActivation(new MergeNodeActivation());
		newMergeNodeActivation->setThisActivityNodeActivationPtr(newMergeNodeActivation);
		visitor = newMergeNodeActivation;
	}

	else if (IS(ForkNode, element))
	{
		ForkNodeActivationPtr newForkNodeActivation(new ForkNodeActivation());
		newForkNodeActivation->setThisActivityNodeActivationPtr(newForkNodeActivation);
		visitor = newForkNodeActivation;
	}

	else if (IS(DecisionNode, element))
	{
		DecisionNodeActivationPtr newDecisionNodeActivation(new DecisionNodeActivation());
		newDecisionNodeActivation->setThisActivityNodeActivationPtr(newDecisionNodeActivation);
		visitor = newDecisionNodeActivation;
	}

	else if (IS(InputPin, element))
	{
		InputPinActivationPtr newInputPinActivation(new InputPinActivation());
		newInputPinActivation->setThisObjectNodeActivationPtr(newInputPinActivation);
		visitor = newInputPinActivation;
	}

	else if (IS(OutputPin, element))
	{
		OutputPinActivationPtr newOutputPinActivation(new OutputPinActivation());
		newOutputPinActivation->setThisObjectNodeActivationPtr(newOutputPinActivation);
		visitor = newOutputPinActivation;
	}

	else if (IS(CallBehaviorAction, element))
	{
		CallBehaviorActionActivationPtr newCallBehaviorActionActivation(new CallBehaviorActionActivation());
		newCallBehaviorActionActivation->setThisActionActivationPtr(newCallBehaviorActionActivation);
		visitor = newCallBehaviorActionActivation;
	}

	else if (IS(CallOperationAction, element))
	{
		CallOperationActionActivationPtr newCallOperationActionActivation(new CallOperationActionActivation());
		newCallOperationActionActivation->setThisActionActivationPtr(newCallOperationActionActivation);
		visitor = newCallOperationActionActivation;
	}

	else if (IS(SendSignalAction, element))
	{
		SendSignalActionActivationPtr newSendSignalActionActivation(new SendSignalActionActivation());
		newSendSignalActionActivation->setThisActionActivationPtr(newSendSignalActionActivation);
		visitor = newSendSignalActionActivation;
	}

	else if (IS(ReadSelfAction, element))
	{
		ReadSelfActionActivationPtr newReadSelfActionActivation(new ReadSelfActionActivation());
		newReadSelfActionActivation->setThisActionActivationPtr(newReadSelfActionActivation);
		visitor = newReadSelfActionActivation;
	}

	else if (IS(TestIdentityAction, element))
	{
		TestIdentityActionActivationPtr newTestIdentityActionActivation(new TestIdentityActionActivation());
		newTestIdentityActionActivation->setThisActionActivationPtr(newTestIdentityActionActivation);
		visitor = newTestIdentityActionActivation;
	}

	else if (IS(ValueSpecificationAction, element))
	{
		ValueSpecificationActionActivationPtr newValueSpecificationActionActivation(
			new ValueSpecificationActionActivation());
		newValueSpecificationActionActivation->setThisActionActivationPtr(newValueSpecificationActionActivation);
		visitor = newValueSpecificationActionActivation;
	}

	else if (IS(CreateObjectAction, element))
	{
		CreateObjectActionActivationPtr newCreateObjectActionActivation(new CreateObjectActionActivation());
		newCreateObjectActionActivation->setThisActionActivationPtr(newCreateObjectActionActivation);
		visitor = newCreateObjectActionActivation;
	}

	else if (IS(DestroyObjectAction, element))
	{
		DestroyObjectActionActivationPtr newDestroyObjectActionActivation(new DestroyObjectActionActivation());
		newDestroyObjectActionActivation->setThisActionActivationPtr(newDestroyObjectActionActivation);
		visitor = newDestroyObjectActionActivation;
	}

	else if (IS(ReadStructuralFeatureAction, element))
	{
		ReadStructuralFeatureActionActivationPtr newReadStructuralFeatureActionActivation(
			new ReadStructuralFeatureActionActivation());
		newReadStructuralFeatureActionActivation->setThisActionActivationPtr(newReadStructuralFeatureActionActivation);
		visitor = newReadStructuralFeatureActionActivation;
	}

	else if (IS(ClearStructuralFeatureAction, element))
	{
		ClearStructuralFeatureActionActivationPtr newClearStructuralFeatureActionActivation(
			new ClearStructuralFeatureActionActivation());
		newClearStructuralFeatureActionActivation->setThisActionActivationPtr(
			newClearStructuralFeatureActionActivation);
		visitor = newClearStructuralFeatureActionActivation;
	}

	else if (IS(AddStructuralFeatureValueAction, element))
	{
		AddStructuralFeatureValueActionActivationPtr newAddStructuralFeatureValueActionActivation(
			new AddStructuralFeatureValueActionActivation());
		newAddStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newAddStructuralFeatureValueActionActivation);
		visitor = newAddStructuralFeatureValueActionActivation;
	}

	else if (IS(RemoveStructuralFeatureValueAction, element))
	{
		RemoveStructuralFeatureValueActionActivationPtr newRemoveStructuralFeatureValueActionActivation(
			new RemoveStructuralFeatureValueActionActivation());
		newRemoveStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newRemoveStructuralFeatureValueActionActivation);
		visitor = newRemoveStructuralFeatureValueActionActivation;
	}

	else if (IS(ReadLinkAction, element))
	{
		ReadLinkActionActivationPtr newReadLinkActionActivation(new ReadLinkActionActivation());
		newReadLinkActionActivation->setThisActionActivationPtr(newReadLinkActionActivation);
		visitor = newReadLinkActionActivation;
	}

	else if (IS(ClearAssociationAction, element))
	{
		ClearAssociationActionActivationPtr newClearAssociationActionActivation(new ClearAssociationActionActivation());
		newClearAssociationActionActivation->setThisActionActivationPtr(newClearAssociationActionActivation);
		visitor = newClearAssociationActionActivation;
	}

	else if (IS(CreateLinkAction, element))
	{
		CreateLinkActionActivationPtr newCreateLinkActionActivation(new CreateLinkActionActivation());
		newCreateLinkActionActivation->setThisActionActivationPtr(newCreateLinkActionActivation);
		visitor = newCreateLinkActionActivation;
	}

	else if (IS(DestroyLinkAction, element))
	{
		DestroyLinkActionActivationPtr newDestroyLinkActionActivation(new DestroyLinkActionActivation());
		newDestroyLinkActionActivation->setThisActionActivationPtr(newDestroyLinkActionActivation);
		visitor = newDestroyLinkActionActivation;
	}

	// Formerly Level L3

	else if (IS(DataStoreNode, element))
	{
		DataStoreNodeActivationPtr newDataStoreNodeActivation(new DataStoreNodeActivation());
		newDataStoreNodeActivation->setThisObjectNodeActivationPtr(newDataStoreNodeActivation);
		visitor = newDataStoreNodeActivation;
	}

	else if (IS(ConditionalNode, element))
	{
		ConditionalNodeActivationPtr newConditionalNodeActivation(new ConditionalNodeActivation());
		newConditionalNodeActivation->setThisConditionalNodeActivationPtr(newConditionalNodeActivation);
		visitor = newConditionalNodeActivation;
	}

	else if (IS(LoopNode, element))
	{
		LoopNodeActivationPtr newLoopNodeActivation(new LoopNodeActivation());
		newLoopNodeActivation->setThisLoopNodeActivationPtr(newLoopNodeActivation);
		visitor = newLoopNodeActivation;
	}

	else if (IS(ExpansionRegion, element))
	{
		ExpansionRegionActivationPtr newExpansionRegionActivation(new ExpansionRegionActivation());
		newExpansionRegionActivation->setThisExpansionRegionActivationPtr(newExpansionRegionActivation);
		visitor = newExpansionRegionActivation;
	}

	// Note: Since ConditionalNode, LoopNode and ExpansionRegion are
	// subclasses of StructuredActivityNode, element must be tested
	// against the three subclasses before the superclass.
	else if (IS(StructuredActivityNode, element))
	{
		StructuredActivityNodeActivationPtr newStructuredActivityNodeActivation(new StructuredActivityNodeActivation());
		newStructuredActivityNodeActivation->setThisStructuredActivityNodeActivationPtr(
			newStructuredActivityNodeActivation);
		visitor = newStructuredActivityNodeActivation;
	}

	else if (IS(ExpansionNode, element))
	{
		ExpansionNodeActivationPtr newExpansionNodeActivation(new ExpansionNodeActivation());
		newExpansionNodeActivation->setThisObjectNodeActivationPtr(newExpansionNodeActivation);
		visitor = newExpansionNodeActivation;
	}

	else if (IS(ReadExtentAction, element))
	{
		ReadExtentActionActivationPtr newReadExtentActionActivation(new ReadExtentActionActivation());
		newReadExtentActionActivation->setThisActionActivationPtr(newReadExtentActionActivation);
		visitor = newReadExtentActionActivation;
	}

	else if (IS(ReadIsClassifiedObjectAction, element))
	{
		ReadIsClassifiedObjectActionActivationPtr newReadIsClassifiedObjectActionActivation(
			new ReadIsClassifiedObjectActionActivation());
		newReadIsClassifiedObjectActionActivation->setThisActionActivationPtr(
			newReadIsClassifiedObjectActionActivation);
		visitor = newReadIsClassifiedObjectActionActivation;
	}

	else if (IS(ReclassifyObjectAction, element))
	{
		ReclassifyObjectActionActivationPtr newReclassifyObjectActionActivation(new ReclassifyObjectActionActivation());
		newReclassifyObjectActionActivation->setThisActionActivationPtr(newReclassifyObjectActionActivation);
		visitor = newReclassifyObjectActionActivation;
	}

	else if (IS(StartObjectBehaviorAction, element))
	{
		StartObjectBehaviorActionActivationPtr newStartObjectBehaviorActionActivation(
			new StartObjectBehaviorActionActivation());
		newStartObjectBehaviorActionActivation->setThisActionActivationPtr(newStartObjectBehaviorActionActivation);
		visitor = newStartObjectBehaviorActionActivation;
	}

	else if (IS(StartClassifierBehaviorAction, element))
	{
		StartClassifierBehaviorActionActivationPtr newStartClassifierBehaviorActionActivation(
			new StartClassifierBehaviorActionActivation());
		newStartClassifierBehaviorActionActivation->setThisActionActivationPtr(
			newStartClassifierBehaviorActionActivation);
		visitor = newStartClassifierBehaviorActionActivation;
	}

	// Note: Since AcceptCallAction is a subclass of AcceptEventAction,
	// element must be tested against AcceptCallAction before
	// AcceptEventAction.
	else if (IS(AcceptCallAction, element))
	{
		AcceptCallActionActivationPtr newAcceptCallActionActivation(new AcceptCallActionActivation());
		newAcceptCallActionActivation->setThisAcceptEventActionActivationPtr(newAcceptCallActionActivation);
		visitor = newAcceptCallActionActivation;
	}

	else if (IS(AcceptEventAction, element))
	{
		AcceptEventActionActivationPtr newAcceptEventActionActivation(new AcceptEventActionActivation());
		newAcceptEventActionActivation->setThisAcceptEventActionActivationPtr(newAcceptEventActionActivation);
		visitor = newAcceptEventActionActivation;
	}

	else if (IS(ReplyAction, element))
	{
		ReplyActionActivationPtr newReplyActionActivation(new ReplyActionActivation());
		newReplyActionActivation->setThisActionActivationPtr(newReplyActionActivation);
		visitor = newReplyActionActivation;
	}

	else if (IS(ReduceAction, element))
	{
		ReduceActionActivationPtr newReduceActionActivation(new ReduceActionActivation());
		newReduceActionActivation->setThisActionActivationPtr(newReduceActionActivation);
		visitor = newReduceActionActivation;
	}

	else if (IS(RaiseExceptionAction, element))
	{
		RaiseExceptionActionActivationPtr newRaiseExceptionActionActivation(new RaiseExceptionActionActivation());
		newRaiseExceptionActionActivation->setThisActionActivationPtr(newRaiseExceptionActionActivation);
		visitor = newRaiseExceptionActionActivation;
	}

	else if (IS(UnmarshallAction, element))
	{
		UnmarshallActionActivationPtr newUnmarshallActionActivation(new UnmarshallActionActivation());
		newUnmarshallActionActivation->setThisActionActivationPtr(newUnmarshallActionActivation);
		visitor = newUnmarshallActionActivation;
	}

	return visitor;
} // instantiateVisitor

OpaqueBehaviorExecutionPtr ExecutionFactory::instantiateOpaqueBehaviorExecution(const OpaqueBehaviorPtr& behavior)
{
	// Return a copy of the prototype for the primitive behavior execution
	// of the given opaque behavior.

	OpaqueBehaviorExecutionPtr execution = nullptr;
	unsigned int i = 1;
	unsigned int primitiveBehaviorPrototypesSize = this->primitiveBehaviorPrototypes->size();
	while (execution == nullptr && i <= primitiveBehaviorPrototypesSize)
	{
		OpaqueBehaviorExecutionPtr prototype = this->primitiveBehaviorPrototypes->at(i - 1);
		if (prototype->getBehavior() == behavior)
		{
			execution = AS(OpaqueBehaviorExecution, prototype->copy());
		}
		i = i + 1;
	}

	fuml::Debug::println(execution == nullptr,
		std::string("[instantiateOpaqueExecution] No prototype execution found for " + behavior->name + "."));

	return execution;
} // instantiateOpaqueBehaviorExecution

void ExecutionFactory::addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr& execution)
{
	// Add an opaque behavior execution to use as a prototype for
	// instantiating the corresponding primitive opaque behavior.
	// Precondition: No primitive behavior prototype for the type of the
	// given execution should already exist.

	this->primitiveBehaviorPrototypes->push_back(execution);
} // addPrimitiveBehaviorPrototype

void ExecutionFactory::addBuiltInType(const PrimitiveTypePtr& type)
{
	// Add the given primitive type as a built-in type.
	// Precondition: No built-in type with the same name should already
	// exist.

	this->builtInTypes->push_back(type);
} // addBuiltInType

PrimitiveTypePtr ExecutionFactory::getBuiltInType(std::string name)
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

void ExecutionFactory::setStrategy(const SemanticStrategyPtr& strategy)
{
	// Set the strategy for a semantic variation point. Any existing
	// strategy for the same SVP is replaced.

	unsigned int i = this->getStrategyIndex(strategy->getName());

	if (i <= this->strategies->size())
	{
		this->strategies->erase(this->strategies->begin() + (i - 1));
	}

	this->strategies->push_back(strategy);
} // setStrategy

SemanticStrategyPtr ExecutionFactory::getStrategy(std::string name)
{
	// Get the strategy with the given name.

	unsigned int i = this->getStrategyIndex(name);

	SemanticStrategyPtr strategy = nullptr;
	if (i <= this->strategies->size())
	{
		strategy = this->strategies->at(i - 1);
	}

	return strategy;
} // getStrategy

int ExecutionFactory::getStrategyIndex(std::string name)
{
	// Get the index of the strategy with the given name.
	// If there is no such strategy, return the size of the strategies list.

	SemanticStrategyListPtr strategies = this->strategies;

	unsigned int i = 1;
	bool unmatched = true;
	unsigned int strategiesSize = strategies->size();
	while (unmatched & (i <= strategiesSize))
	{
		if (strategies->at(i - 1)->getName() == name)
		{
			unmatched = false;
		}
		else
		{
			i = i + 1;
		}
	}

	return i;

} // getStrategyIndex
