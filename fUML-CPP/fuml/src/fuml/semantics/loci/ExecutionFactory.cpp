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

ExecutionPtr ExecutionFactory::createExecution(const BehaviorPtr& behavior, const Object_Ptr& context)
{
	// Create an execution object for a given behavior.
	// The execution will take place at the locus of the factory in the
	// given context.
	// If the context is empty, the execution is assumed to provide its own
	// context.

	ExecutionPtr execution;

	OpaqueBehaviorPtr opaqueBehavior = std::dynamic_pointer_cast<OpaqueBehavior>(behavior);

	if (opaqueBehavior)
	{
		execution = this->instantiateOpaqueBehaviorExecution(opaqueBehavior);
	}
	else
	{
		execution = std::dynamic_pointer_cast<Execution>(this->instantiateVisitor(behavior));
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

	EvaluationPtr evaluation = std::dynamic_pointer_cast<Evaluation>(this->instantiateVisitor(specification));

	evaluation->specification = specification;
	evaluation->locus = this->locus.lock();

	return evaluation;
} // createEvaluation

SemanticVisitorPtr ExecutionFactory::instantiateVisitor(const ElementPtr& element)
{
	// Instantiate a visitor object for the given element.

	SemanticVisitorPtr visitor = nullptr;

	// Formerly Level L1

	if (std::dynamic_pointer_cast<LiteralBoolean>(element))
	{
		LiteralBooleanEvaluationPtr newLiteralBooleanEvaluation(new LiteralBooleanEvaluation());
		visitor = newLiteralBooleanEvaluation;
	}

	else if (std::dynamic_pointer_cast<LiteralString>(element))
	{
		LiteralStringEvaluationPtr newLiteralStringEvaluation(new LiteralStringEvaluation());
		visitor = newLiteralStringEvaluation;
	}

	else if (std::dynamic_pointer_cast<LiteralNull>(element))
	{
		LiteralNullEvaluationPtr newLiteralNullEvaluation(new LiteralNullEvaluation());
		visitor = newLiteralNullEvaluation;
	}

	else if (std::dynamic_pointer_cast<InstanceValue>(element))
	{
		InstanceValueEvaluationPtr newInstanceValueEvaluation(new InstanceValueEvaluation());
		visitor = newInstanceValueEvaluation;
	}

	else if (std::dynamic_pointer_cast<LiteralUnlimitedNatural>(element))
	{
		LiteralUnlimitedNaturalEvaluationPtr newLiteralUnlimitedNaturalEvaluation(
			new LiteralUnlimitedNaturalEvaluation());
		visitor = newLiteralUnlimitedNaturalEvaluation;
	}

	else if (std::dynamic_pointer_cast<LiteralInteger>(element))
	{
		LiteralIntegerEvaluationPtr newLiteralIntegerEvaluation(new LiteralIntegerEvaluation());
		visitor = newLiteralIntegerEvaluation;
	}

	else if (std::dynamic_pointer_cast<LiteralReal>(element))
	{
		LiteralRealEvaluationPtr newLiteralRealEvaluation(new LiteralRealEvaluation());
		visitor = newLiteralRealEvaluation;
	}

	else if (std::dynamic_pointer_cast<CallEventBehavior>(element))
	{
		CallEventExecutionPtr newCallEventExecution(new CallEventExecution());
		newCallEventExecution->setThisCallEventExecutionPtr(newCallEventExecution);
		visitor = newCallEventExecution;

		// Formerly Level L2

	}
	else if (std::dynamic_pointer_cast<Activity>(element))
	{
		ActivityExecutionPtr newActivityExecution(new ActivityExecution());
		newActivityExecution->setThisActivityExecutionPtr(newActivityExecution);
		visitor = newActivityExecution;
	}

	else if (std::dynamic_pointer_cast<ActivityParameterNode>(element))
	{
		ActivityParameterNodeActivationPtr newActivityParameterNodeActivation(new ActivityParameterNodeActivation());
		newActivityParameterNodeActivation->setThisActivityParameterNodeActivationPtr(
			newActivityParameterNodeActivation);
		visitor = newActivityParameterNodeActivation;
	}

	else if (std::dynamic_pointer_cast<CentralBufferNode>(element)
		&& !(std::dynamic_pointer_cast<DataStoreNode>(element)))
	{
		CentralBufferNodeActivationPtr newCentralBufferNodeActivation(new CentralBufferNodeActivation());
		newCentralBufferNodeActivation->setThisObjectNodeActivationPtr(newCentralBufferNodeActivation);
		visitor = newCentralBufferNodeActivation;
	}

	else if (std::dynamic_pointer_cast<InitialNode>(element))
	{
		InitialNodeActivationPtr newInitialNodeActivation(new InitialNodeActivation());
		newInitialNodeActivation->setThisActivityNodeActivationPtr(newInitialNodeActivation);
		visitor = newInitialNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ActivityFinalNode>(element))
	{
		ActivityFinalNodeActivationPtr newActivityFinalNodeActivation(new ActivityFinalNodeActivation());
		newActivityFinalNodeActivation->setThisActivityNodeActivationPtr(newActivityFinalNodeActivation);
		visitor = newActivityFinalNodeActivation;
	}

	else if (std::dynamic_pointer_cast<FlowFinalNode>(element))
	{
		FlowFinalNodeActivationPtr newFlowFinalNodeActivation(new FlowFinalNodeActivation());
		newFlowFinalNodeActivation->setThisActivityNodeActivationPtr(newFlowFinalNodeActivation);
		visitor = newFlowFinalNodeActivation;
	}

	else if (std::dynamic_pointer_cast<JoinNode>(element))
	{
		JoinNodeActivationPtr newJoinNodeActivation(new JoinNodeActivation());
		newJoinNodeActivation->setThisActivityNodeActivationPtr(newJoinNodeActivation);
		visitor = newJoinNodeActivation;
	}

	else if (std::dynamic_pointer_cast<MergeNode>(element))
	{
		MergeNodeActivationPtr newMergeNodeActivation(new MergeNodeActivation());
		newMergeNodeActivation->setThisActivityNodeActivationPtr(newMergeNodeActivation);
		visitor = newMergeNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ForkNode>(element))
	{
		ForkNodeActivationPtr newForkNodeActivation(new ForkNodeActivation());
		newForkNodeActivation->setThisActivityNodeActivationPtr(newForkNodeActivation);
		visitor = newForkNodeActivation;
	}

	else if (std::dynamic_pointer_cast<DecisionNode>(element))
	{
		DecisionNodeActivationPtr newDecisionNodeActivation(new DecisionNodeActivation());
		newDecisionNodeActivation->setThisActivityNodeActivationPtr(newDecisionNodeActivation);
		visitor = newDecisionNodeActivation;
	}

	else if (std::dynamic_pointer_cast<InputPin>(element))
	{
		InputPinActivationPtr newInputPinActivation(new InputPinActivation());
		newInputPinActivation->setThisObjectNodeActivationPtr(newInputPinActivation);
		visitor = newInputPinActivation;
	}

	else if (std::dynamic_pointer_cast<OutputPin>(element))
	{
		OutputPinActivationPtr newOutputPinActivation(new OutputPinActivation());
		newOutputPinActivation->setThisObjectNodeActivationPtr(newOutputPinActivation);
		visitor = newOutputPinActivation;
	}

	else if (std::dynamic_pointer_cast<CallBehaviorAction>(element))
	{
		CallBehaviorActionActivationPtr newCallBehaviorActionActivation(new CallBehaviorActionActivation());
		newCallBehaviorActionActivation->setThisActionActivationPtr(newCallBehaviorActionActivation);
		visitor = newCallBehaviorActionActivation;
	}

	else if (std::dynamic_pointer_cast<CallOperationAction>(element))
	{
		CallOperationActionActivationPtr newCallOperationActionActivation(new CallOperationActionActivation());
		newCallOperationActionActivation->setThisActionActivationPtr(newCallOperationActionActivation);
		visitor = newCallOperationActionActivation;
	}

	else if (std::dynamic_pointer_cast<SendSignalAction>(element))
	{
		SendSignalActionActivationPtr newSendSignalActionActivation(new SendSignalActionActivation());
		newSendSignalActionActivation->setThisActionActivationPtr(newSendSignalActionActivation);
		visitor = newSendSignalActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReadSelfAction>(element))
	{
		ReadSelfActionActivationPtr newReadSelfActionActivation(new ReadSelfActionActivation());
		newReadSelfActionActivation->setThisActionActivationPtr(newReadSelfActionActivation);
		visitor = newReadSelfActionActivation;
	}

	else if (std::dynamic_pointer_cast<TestIdentityAction>(element))
	{
		TestIdentityActionActivationPtr newTestIdentityActionActivation(new TestIdentityActionActivation());
		newTestIdentityActionActivation->setThisActionActivationPtr(newTestIdentityActionActivation);
		visitor = newTestIdentityActionActivation;
	}

	else if (std::dynamic_pointer_cast<ValueSpecificationAction>(element))
	{
		ValueSpecificationActionActivationPtr newValueSpecificationActionActivation(
			new ValueSpecificationActionActivation());
		newValueSpecificationActionActivation->setThisActionActivationPtr(newValueSpecificationActionActivation);
		visitor = newValueSpecificationActionActivation;
	}

	else if (std::dynamic_pointer_cast<CreateObjectAction>(element))
	{
		CreateObjectActionActivationPtr newCreateObjectActionActivation(new CreateObjectActionActivation());
		newCreateObjectActionActivation->setThisActionActivationPtr(newCreateObjectActionActivation);
		visitor = newCreateObjectActionActivation;
	}

	else if (std::dynamic_pointer_cast<DestroyObjectAction>(element))
	{
		DestroyObjectActionActivationPtr newDestroyObjectActionActivation(new DestroyObjectActionActivation());
		newDestroyObjectActionActivation->setThisActionActivationPtr(newDestroyObjectActionActivation);
		visitor = newDestroyObjectActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReadStructuralFeatureAction>(element))
	{
		ReadStructuralFeatureActionActivationPtr newReadStructuralFeatureActionActivation(
			new ReadStructuralFeatureActionActivation());
		newReadStructuralFeatureActionActivation->setThisActionActivationPtr(newReadStructuralFeatureActionActivation);
		visitor = newReadStructuralFeatureActionActivation;
	}

	else if (std::dynamic_pointer_cast<ClearStructuralFeatureAction>(element))
	{
		ClearStructuralFeatureActionActivationPtr newClearStructuralFeatureActionActivation(
			new ClearStructuralFeatureActionActivation());
		newClearStructuralFeatureActionActivation->setThisActionActivationPtr(
			newClearStructuralFeatureActionActivation);
		visitor = newClearStructuralFeatureActionActivation;
	}

	else if (std::dynamic_pointer_cast<AddStructuralFeatureValueAction>(element))
	{
		AddStructuralFeatureValueActionActivationPtr newAddStructuralFeatureValueActionActivation(
			new AddStructuralFeatureValueActionActivation());
		newAddStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newAddStructuralFeatureValueActionActivation);
		visitor = newAddStructuralFeatureValueActionActivation;
	}

	else if (std::dynamic_pointer_cast<RemoveStructuralFeatureValueAction>(element))
	{
		RemoveStructuralFeatureValueActionActivationPtr newRemoveStructuralFeatureValueActionActivation(
			new RemoveStructuralFeatureValueActionActivation());
		newRemoveStructuralFeatureValueActionActivation->setThisActionActivationPtr(
			newRemoveStructuralFeatureValueActionActivation);
		visitor = newRemoveStructuralFeatureValueActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReadLinkAction>(element))
	{
		ReadLinkActionActivationPtr newReadLinkActionActivation(new ReadLinkActionActivation());
		newReadLinkActionActivation->setThisActionActivationPtr(newReadLinkActionActivation);
		visitor = newReadLinkActionActivation;
	}

	else if (std::dynamic_pointer_cast<ClearAssociationAction>(element))
	{
		ClearAssociationActionActivationPtr newClearAssociationActionActivation(new ClearAssociationActionActivation());
		newClearAssociationActionActivation->setThisActionActivationPtr(newClearAssociationActionActivation);
		visitor = newClearAssociationActionActivation;
	}

	else if (std::dynamic_pointer_cast<CreateLinkAction>(element))
	{
		CreateLinkActionActivationPtr newCreateLinkActionActivation(new CreateLinkActionActivation());
		newCreateLinkActionActivation->setThisActionActivationPtr(newCreateLinkActionActivation);
		visitor = newCreateLinkActionActivation;
	}

	else if (std::dynamic_pointer_cast<DestroyLinkAction>(element))
	{
		DestroyLinkActionActivationPtr newDestroyLinkActionActivation(new DestroyLinkActionActivation());
		newDestroyLinkActionActivation->setThisActionActivationPtr(newDestroyLinkActionActivation);
		visitor = newDestroyLinkActionActivation;
	}

	// Formerly Level L3

	else if (std::dynamic_pointer_cast<DataStoreNode>(element))
	{
		DataStoreNodeActivationPtr newDataStoreNodeActivation(new DataStoreNodeActivation());
		newDataStoreNodeActivation->setThisObjectNodeActivationPtr(newDataStoreNodeActivation);
		visitor = newDataStoreNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ConditionalNode>(element))
	{
		ConditionalNodeActivationPtr newConditionalNodeActivation(new ConditionalNodeActivation());
		newConditionalNodeActivation->setThisConditionalNodeActivationPtr(newConditionalNodeActivation);
		visitor = newConditionalNodeActivation;
	}

	else if (std::dynamic_pointer_cast<LoopNode>(element))
	{
		LoopNodeActivationPtr newLoopNodeActivation(new LoopNodeActivation());
		newLoopNodeActivation->setThisLoopNodeActivationPtr(newLoopNodeActivation);
		visitor = newLoopNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ExpansionRegion>(element))
	{
		ExpansionRegionActivationPtr newExpansionRegionActivation(new ExpansionRegionActivation());
		newExpansionRegionActivation->setThisExpansionRegionActivationPtr(newExpansionRegionActivation);
		visitor = newExpansionRegionActivation;
	}

	// Note: Since ConditionalNode, LoopNode and ExpansionRegion are
	// subclasses of StructuredActivityNode, element must be tested
	// against the three subclasses before the superclass.
	else if (std::dynamic_pointer_cast<StructuredActivityNode>(element))
	{
		StructuredActivityNodeActivationPtr newStructuredActivityNodeActivation(new StructuredActivityNodeActivation());
		newStructuredActivityNodeActivation->setThisStructuredActivityNodeActivationPtr(
			newStructuredActivityNodeActivation);
		visitor = newStructuredActivityNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ExpansionNode>(element))
	{
		ExpansionNodeActivationPtr newExpansionNodeActivation(new ExpansionNodeActivation());
		newExpansionNodeActivation->setThisObjectNodeActivationPtr(newExpansionNodeActivation);
		visitor = newExpansionNodeActivation;
	}

	else if (std::dynamic_pointer_cast<ReadExtentAction>(element))
	{
		ReadExtentActionActivationPtr newReadExtentActionActivation(new ReadExtentActionActivation());
		newReadExtentActionActivation->setThisActionActivationPtr(newReadExtentActionActivation);
		visitor = newReadExtentActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReadIsClassifiedObjectAction>(element))
	{
		ReadIsClassifiedObjectActionActivationPtr newReadIsClassifiedObjectActionActivation(
			new ReadIsClassifiedObjectActionActivation());
		newReadIsClassifiedObjectActionActivation->setThisActionActivationPtr(
			newReadIsClassifiedObjectActionActivation);
		visitor = newReadIsClassifiedObjectActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReclassifyObjectAction>(element))
	{
		ReclassifyObjectActionActivationPtr newReclassifyObjectActionActivation(new ReclassifyObjectActionActivation());
		newReclassifyObjectActionActivation->setThisActionActivationPtr(newReclassifyObjectActionActivation);
		visitor = newReclassifyObjectActionActivation;
	}

	else if (std::dynamic_pointer_cast<StartObjectBehaviorAction>(element))
	{
		StartObjectBehaviorActionActivationPtr newStartObjectBehaviorActionActivation(
			new StartObjectBehaviorActionActivation());
		newStartObjectBehaviorActionActivation->setThisActionActivationPtr(newStartObjectBehaviorActionActivation);
		visitor = newStartObjectBehaviorActionActivation;
	}

	else if (std::dynamic_pointer_cast<StartClassifierBehaviorAction>(element))
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
	else if (std::dynamic_pointer_cast<AcceptCallAction>(element))
	{
		AcceptCallActionActivationPtr newAcceptCallActionActivation(new AcceptCallActionActivation());
		newAcceptCallActionActivation->setThisAcceptEventActionActivationPtr(newAcceptCallActionActivation);
		visitor = newAcceptCallActionActivation;
	}

	else if (std::dynamic_pointer_cast<AcceptEventAction>(element))
	{
		AcceptEventActionActivationPtr newAcceptEventActionActivation(new AcceptEventActionActivation());
		newAcceptEventActionActivation->setThisAcceptEventActionActivationPtr(newAcceptEventActionActivation);
		visitor = newAcceptEventActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReplyAction>(element))
	{
		ReplyActionActivationPtr newReplyActionActivation(new ReplyActionActivation());
		newReplyActionActivation->setThisActionActivationPtr(newReplyActionActivation);
		visitor = newReplyActionActivation;
	}

	else if (std::dynamic_pointer_cast<ReduceAction>(element))
	{
		ReduceActionActivationPtr newReduceActionActivation(new ReduceActionActivation());
		newReduceActionActivation->setThisActionActivationPtr(newReduceActionActivation);
		visitor = newReduceActionActivation;
	}

	else if (std::dynamic_pointer_cast<RaiseExceptionAction>(element))
	{
		RaiseExceptionActionActivationPtr newRaiseExceptionActionActivation(new RaiseExceptionActionActivation());
		newRaiseExceptionActionActivation->setThisActionActivationPtr(newRaiseExceptionActionActivation);
		visitor = newRaiseExceptionActionActivation;
	}

	else if (std::dynamic_pointer_cast<UnmarshallAction>(element))
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
			execution = std::dynamic_pointer_cast<OpaqueBehaviorExecution>(prototype->copy());
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
