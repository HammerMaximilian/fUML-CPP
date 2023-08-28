/*
 * fwd.h
 *
 *  Created on: 23.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_FWD_H_
#define FUML_SEMANTICS_FWD_H_

#include <vector>
#include <memory>

namespace fuml
{
	namespace semantics
	{
		namespace actions
		{
			class AcceptCallActionActivation;
			class AcceptEventActionActivation;
			class AcceptEventActionEventAccepter;
			class ActionActivation;
			class AddStructuralFeatureValueActionActivation;
			class CallActionActivation;
			class CallBehaviorActionActivation;
			class CallOperationActionActivation;
			class ClauseActivation;
			class ClearAssociationActionActivation;
			class ClearStructuralFeatureActionActivation;
			class ConditionalNodeActivation;
			class CreateLinkActionActivation;
			class CreateObjectActionActivation;
			class DestroyLinkActionActivation;
			class DestroyObjectActionActivation;
			class ExpansionActivationGroup;
			class ExpansionNodeActivation;
			class ExpansionRegionActivation;
			class InputPinActivation;
			class InvocationActionActivation;
			class LinkActionActivation;
			class LoopNodeActivation;
			class OutputPinActivation;
			class PinActivation;
			class PinStreamingParameterListener;
			class RaiseExceptionActionActivation;
			class ReadExtentActionActivation;
			class ReadIsClassifiedObjectActionActivation;
			class ReadLinkActionActivation;
			class ReadSelfActionActivation;
			class ReadStructuralFeatureActionActivation;
			class ReclassifyObjectActionActivation;
			class ReduceActionActivation;
			class RemoveStructuralFeatureValueActionActivation;
			class ReplyActionActivation;
			class ReturnInformation;
			class SendSignalActionActivation;
			class StartClassifierBehaviorActionActivation;
			class StartObjectBehaviorActionActivation;
			class StructuralFeatureActionActivation;
			class StructuredActivityNodeActivation;
			class TestIdentityActionActivation;
			class TokenSet;
			class UnmarshallActionActivation;
			class ValueSpecificationActionActivation;
			class Values;
			class WriteLinkActionActivation;
			class WriteStructuralFeatureActionActivation;
		}

		namespace activities
		{
			class ActivityEdgeInstance;
			class ActivityExecution;
			class ActivityFinalNodeActivation;
			class ActivityNodeActivation;
			class ActivityNodeActivationGroup;
			class ActivityParameterNodeActivation;
			class ActivityParameterNodeStreamingParameterListener;
			class CentralBufferNodeActivation;
			class ControlNodeActivation;
			class ControlToken;
			class DataStoreNodeActivation;
			class DecisionNodeActivation;
			class ExecutableNodeActivation;
			class FlowFinalNodeActivation;
			class ForkNodeActivation;
			class ForkedToken;
			class InitialNodeActivation;
			class JoinNodeActivation;
			class MergeNodeActivation;
			class ObjectNodeActivation;
			class ObjectToken;
			class Offer;
			class Token;
		}

		namespace classification
		{
			class InstanceValueEvaluation;
		}

		namespace commonbehavior
		{
			class ArrivalSignal;
			class CallEventBehavior;
			class CallEventExecution;
			class CallEventOccurrence;
			class ClassifierBehaviorInvocationEventAccepter;
			class EventAccepter;
			class EventOccurrence;
			class EventOccurrence_SendingBehaviorExecution;
			class Execution;
			class ExecutionQueue;
			class FIFOGetNextEventStrategy;
			class GetNextEventStrategy;
			class InvocationEventOccurrence;
			class ObjectActivation;
			class ObjectActivation_EventDispatchLoopExecution;
			class OpaqueBehaviorExecution;
			class ParameterValue;
			class SignalEventOccurrence;
			class StreamingParameterListener;
			class StreamingParameterValue;
		}

		namespace loci
		{
			class ChoiceStrategy;
			class ExecutionFactory;
			class ExecutionFactoryL1;
			class ExecutionFactoryL2;
			class ExecutionFactoryL3;
			class Executor;
			class FirstChoiceStrategy;
			class Locus;
			class SemanticStrategy;
			class SemanticVisitor;
		}

		namespace simpleclassifiers
		{
			class BooleanValue;
			class CompoundValue;
			class DataValue;
			class EnumerationValue;
			class FeatureValue;
			class IntegerValue;
			class PrimitiveValue;
			class RealValue;
			class SignalInstance;
			class StringValue;
			class StructuredValue;
			class UnlimitedNaturalValue;
		}

		namespace structuredclassifiers
		{
			class DispatchStrategy;
			class ExtensionalValue;
			class Link;
			class Object_;
			class RedefinitionBasedDispatchStrategy;
			class Reference;
		}

		namespace values
		{
			class Evaluation;
			class LiteralBooleanEvaluation;
			class LiteralEvaluation;
			class LiteralIntegerEvaluation;
			class LiteralNullEvaluation;
			class LiteralRealEvaluation;
			class LiteralStringEvaluation;
			class LiteralUnlimitedNaturalEvaluation;
			class Value;
		}
	}
}

/*
 * Actions
 */
using AcceptCallActionActivation = fuml::semantics::actions::AcceptEventActionActivation;
using AcceptCallActionActivationPtr = std::shared_ptr<AcceptCallActionActivation>;
using AcceptEventActionActivation = fuml::semantics::actions::AcceptEventActionActivation;
using AcceptEventActionActivationPtr = std::shared_ptr<AcceptEventActionActivation>;
using AcceptEventActionEventAccepter = fuml::semantics::actions::AcceptEventActionEventAccepter;
using AcceptEventActionEventAccepterPtr = std::shared_ptr<AcceptEventActionEventAccepter>;
using ActionActivation = fuml::semantics::actions::ActionActivation;
using ActionActivationPtr = std::shared_ptr<ActionActivation>;
using AddStructuralFeatureValueActionActivation = fuml::semantics::actions::AddStructuralFeatureValueActionActivation;
using AddStructuralFeatureValueActionActivationPtr = std::shared_ptr<AddStructuralFeatureValueActionActivation>;
using CallActionActivation = fuml::semantics::actions::CallActionActivation;
using CallActionActivationPtr = std::shared_ptr<CallActionActivation>;
using CallBehaviorActionActivation = fuml::semantics::actions::CallBehaviorActionActivation;
using CallBehaviorActionActivationPtr = std::shared_ptr<CallBehaviorActionActivation>;
using CallOperationActionActivation = fuml::semantics::actions::CallOperationActionActivation;
using CallOperationActionActivationPtr = std::shared_ptr<CallOperationActionActivation>;
using ClauseActivation = fuml::semantics::actions::ClauseActivation;
using ClauseActivationPtr = std::shared_ptr<ClauseActivation>;
using ClauseActivationList = std::vector<ClauseActivationPtr>;
using ClauseActivationListPtr = std::shared_ptr<ClauseActivationList>;
using ClearAssociationActionActivation = fuml::semantics::actions::ClearAssociationActionActivation;
using ClearAssociationActionActivationPtr = std::shared_ptr<ClearAssociationActionActivation>;
using ClearStructuralFeatureActionActivation = fuml::semantics::actions::ClearStructuralFeatureActionActivation;
using ClearStructuralFeatureActionActivationPtr = std::shared_ptr<ClearStructuralFeatureActionActivation>;
using ConditionalNodeActivation = fuml::semantics::actions::ConditionalNodeActivation;
using ConditionalNodeActivationPtr = std::shared_ptr<ConditionalNodeActivation>;
using CreateLinkActionActivation = fuml::semantics::actions::CreateLinkActionActivation;
using CreateLinkActionActivationPtr = std::shared_ptr<CreateLinkActionActivation>;
using CreateObjectActionActivation = fuml::semantics::actions::CreateObjectActionActivation;
using CreateObjectActionActivationPtr = std::shared_ptr<CreateObjectActionActivation>;
using DestroyLinkActionActivation = fuml::semantics::actions::DestroyLinkActionActivation;
using DestroyLinkActionActivationPtr = std::shared_ptr<DestroyLinkActionActivation>;
using DestroyObjectActionActivation = fuml::semantics::actions::DestroyObjectActionActivation;
using DestroyObjectActionActivationPtr = std::shared_ptr<DestroyObjectActionActivation>;
using ExpansionActivationGroup = fuml::semantics::actions::ExpansionActivationGroup;
using ExpansionActivationGroupPtr = std::shared_ptr<ExpansionActivationGroup>;
using ExpansionActivationGroupList = std::vector<ExpansionActivationGroupPtr>;
using ExpansionActivationGroupListPtr = std::shared_ptr<ExpansionActivationGroupList>;
using ExpansionNodeActivation = fuml::semantics::actions::ExpansionNodeActivation;
using ExpansionNodeActivationPtr = std::shared_ptr<ExpansionNodeActivation>;
using ExpansionRegionActivation = fuml::semantics::actions::ExpansionRegionActivation;
using ExpansionRegionActivationPtr = std::shared_ptr<ExpansionRegionActivation>;
using InputPinActivation = fuml::semantics::actions::InputPinActivation;
using InputPinActivationPtr = std::shared_ptr<InputPinActivation>;
using InvocationActionActivation = fuml::semantics::actions::InvocationActionActivation;
using InvocationActionActivationPtr = std::shared_ptr<InvocationActionActivation>;
using LinkActionActivation = fuml::semantics::actions::LinkActionActivation;
using LinkActionActivationPtr = std::shared_ptr<LinkActionActivation>;
using LoopNodeActivation = fuml::semantics::actions::LoopNodeActivation;
using LoopNodeActivationPtr = std::shared_ptr<LoopNodeActivation>;
using OutputPinActivation = fuml::semantics::actions::OutputPinActivation;
using OutputPinActivationPtr = std::shared_ptr<OutputPinActivation>;
using OutputPinActivationList = std::vector<OutputPinActivationPtr>;
using OutputPinActivationListPtr = std::shared_ptr<OutputPinActivationList>;
using PinActivation = fuml::semantics::actions::PinActivation;
using PinActivationPtr = std::shared_ptr<PinActivation>;
using PinActivationList = std::vector<PinActivationPtr>;
using PinActivationListPtr = std::shared_ptr<PinActivationList>;
using PinStreamingParameterListener = fuml::semantics::actions::PinStreamingParameterListener;
using PinStreamingParameterListenerPtr = std::shared_ptr<PinStreamingParameterListener>;
using RaiseExceptionActionActivation = fuml::semantics::actions::RaiseExceptionActionActivation;
using RaiseExceptionActionActivationPtr = std::shared_ptr<RaiseExceptionActionActivation>;
using ReadExtentActionActivation = fuml::semantics::actions::ReadExtentActionActivation;
using ReadExtentActionActivationPtr = std::shared_ptr<ReadExtentActionActivation>;
using ReadIsClassifiedObjectActionActivation = fuml::semantics::actions::ReadIsClassifiedObjectActionActivation;
using ReadIsClassifiedObjectActionActivationPtr = std::shared_ptr<ReadIsClassifiedObjectActionActivation>;
using ReadLinkActionActivation = fuml::semantics::actions::ReadLinkActionActivation;
using ReadLinkActionActivationPtr = std::shared_ptr<ReadLinkActionActivation>;
using ReadSelfActionActivation = fuml::semantics::actions::ReadSelfActionActivation;
using ReadSelfActionActivationPtr = std::shared_ptr<ReadSelfActionActivation>;
using ReadStructuralFeatureActionActivation = fuml::semantics::actions::ReadStructuralFeatureActionActivation;
using ReadStructuralFeatureActionActivationPtr = std::shared_ptr<ReadStructuralFeatureActionActivation>;
using ReclassifyObjectActionActivation = fuml::semantics::actions::ReclassifyObjectActionActivation;
using ReclassifyObjectActionActivationPtr = std::shared_ptr<ReclassifyObjectActionActivation>;
using ReduceActionActivation = fuml::semantics::actions::ReduceActionActivation;
using ReduceActionActivationPtr = std::shared_ptr<ReduceActionActivation>;
using RemoveStructuralFeatureValueActionActivation = fuml::semantics::actions::RemoveStructuralFeatureValueActionActivation;
using RemoveStructuralFeatureValueActionActivationPtr = std::shared_ptr<RemoveStructuralFeatureValueActionActivation>;
using ReplyActionActivation = fuml::semantics::actions::ReplyActionActivation;
using ReplyActionActivationPtr = std::shared_ptr<ReplyActionActivation>;
using ReturnInformation = fuml::semantics::actions::ReturnInformation;
using ReturnInformationPtr = std::shared_ptr<ReturnInformation>;
using SendSignalActionActivation = fuml::semantics::actions::SendSignalActionActivation;
using SendSignalActionActivationPtr = std::shared_ptr<SendSignalActionActivation>;
using StartClassifierBehaviorActionActivation = fuml::semantics::actions::StartClassifierBehaviorActionActivation;
using StartClassifierBehaviorActionActivationPtr = std::shared_ptr<StartClassifierBehaviorActionActivation>;
using StartObjectBehaviorActionActivation = fuml::semantics::actions::StartObjectBehaviorActionActivation;
using StartObjectBehaviorActionActivationPtr = std::shared_ptr<StartObjectBehaviorActionActivation>;
using StructuralFeatureActionActivation = fuml::semantics::actions::StructuralFeatureActionActivation;
using StructuralFeatureActionActivationPtr = std::shared_ptr<StructuralFeatureActionActivation>;
using StructuredActivityNodeActivation = fuml::semantics::actions::StructuredActivityNodeActivation;
using StructuredActivityNodeActivationPtr = std::shared_ptr<StructuredActivityNodeActivation>;
using TestIdentityActionActivation = fuml::semantics::actions::TestIdentityActionActivation;
using TestIdentityActionActivationPtr = std::shared_ptr<TestIdentityActionActivation>;
using TokenSet = fuml::semantics::actions::TokenSet;
using TokenSetPtr = std::shared_ptr<TokenSet>;
using TokenSetList = std::vector<TokenSetPtr>;
using TokenSetListPtr = std::shared_ptr<TokenSetList>;
using UnmarshallActionActivation = fuml::semantics::actions::UnmarshallActionActivation;
using UnmarshallActionActivationPtr = std::shared_ptr<UnmarshallActionActivation>;
using ValueSpecificationActionActivation = fuml::semantics::actions::ValueSpecificationActionActivation;
using ValueSpecificationActionActivationPtr = std::shared_ptr<ValueSpecificationActionActivation>;
using Values = fuml::semantics::actions::Values;
using ValuesPtr = std::shared_ptr<Values>;
using ValuesList = std::vector<ValuesPtr>;
using ValuesListPtr = std::shared_ptr<ValuesList>;
using WriteLinkActionActivation = fuml::semantics::actions::WriteLinkActionActivation;
using WriteLinkActionActivationPtr = std::shared_ptr<WriteLinkActionActivation>;
using WriteStructuralFeatureActionActivation = fuml::semantics::actions::WriteStructuralFeatureActionActivation;
using WriteStructuralFeatureActionActivationPtr = std::shared_ptr<WriteStructuralFeatureActionActivation>;

/*
 * Activites
 */
using ActivityEdgeInstance = fuml::semantics::activities::ActivityEdgeInstance;
using ActivityEdgeInstancePtr = std::shared_ptr<ActivityEdgeInstance>;
using ActivityEdgeInstanceList = std::vector<ActivityEdgeInstancePtr>;
using ActivityEdgeInstanceListPtr = std::shared_ptr<ActivityEdgeInstanceList>;
using ActivityExecution = fuml::semantics::activities::ActivityExecution;
using ActivityExecutionPtr = std::shared_ptr<ActivityExecution>;
using ActivityFinalNodeActivation = fuml::semantics::activities::ActivityFinalNodeActivation;
using ActivityFinalNodeActivationPtr = std::shared_ptr<ActivityFinalNodeActivation>;
using ActivityNodeActivation = fuml::semantics::activities::ActivityNodeActivation;
using ActivityNodeActivationPtr = std::shared_ptr<ActivityNodeActivation>;
using ActivityNodeActivationGroup = fuml::semantics::activities::ActivityNodeActivationGroup;
using ActivityNodeActivationGroupPtr = std::shared_ptr<ActivityNodeActivationGroup>;
using ActivityNodeActivationList = std::vector<ActivityNodeActivationPtr>;
using ActivityNodeActivationListPtr = std::shared_ptr<ActivityNodeActivationList>;
using ActivityParameterNodeActivation = fuml::semantics::activities::ActivityParameterNodeActivation;
using ActivityParameterNodeActivationPtr = std::shared_ptr<ActivityParameterNodeActivation>;
using ActivityParameterNodeActivationList = std::vector<ActivityParameterNodeActivationPtr>;
using ActivityParameterNodeActivationListPtr = std::shared_ptr<ActivityParameterNodeActivationList>;
using ActivityParameterNodeStreamingParameterListener = fuml::semantics::activities::ActivityParameterNodeStreamingParameterListener;
using ActivityParameterNodeStreamingParameterListenerPtr = std::shared_ptr<ActivityParameterNodeStreamingParameterListener>;
using CentralBufferNodeActivation = fuml::semantics::activities::CentralBufferNodeActivation;
using CentralBufferNodeActivationPtr = std::shared_ptr<CentralBufferNodeActivation>;
using ControlNodeActivation = fuml::semantics::activities::ControlNodeActivation;
using ControlNodeActivationPtr = std::shared_ptr<ControlNodeActivation>;
using ControlToken = fuml::semantics::activities::ControlToken;
using ControlTokenPtr = std::shared_ptr<ControlToken>;
using DataStoreNodeActivation = fuml::semantics::activities::DataStoreNodeActivation;
using DataStoreNodeActivationPtr = std::shared_ptr<DataStoreNodeActivation>;
using DecisionNodeActivation = fuml::semantics::activities::DecisionNodeActivation;
using DecisionNodeActivationPtr = std::shared_ptr<DecisionNodeActivation>;
using ExecutableNodeActivation = fuml::semantics::activities::ExecutableNodeActivation;
using ExecutableNodeActivationPtr = std::shared_ptr<ExecutableNodeActivation>;
using FlowFinalNodeActivation = fuml::semantics::activities::FlowFinalNodeActivation;
using FlowFinalNodeActivationPtr = std::shared_ptr<FlowFinalNodeActivation>;
using ForkNodeActivation = fuml::semantics::activities::ForkNodeActivation;
using ForkNodeActivationPtr = std::shared_ptr<ForkNodeActivation>;
using ForkedToken = fuml::semantics::activities::ForkedToken;
using ForkedTokenPtr = std::shared_ptr<ForkedToken>;
using InitialNodeActivation = fuml::semantics::activities::InitialNodeActivation;
using InitialNodeActivationPtr = std::shared_ptr<InitialNodeActivation>;
using JoinNodeActivation = fuml::semantics::activities::JoinNodeActivation;
using JoinNodeActivationPtr = std::shared_ptr<JoinNodeActivation>;
using MergeNodeActivation = fuml::semantics::activities::MergeNodeActivation;
using MergeNodeActivationPtr = std::shared_ptr<MergeNodeActivation>;
using ObjectNodeActivation = fuml::semantics::activities::ObjectNodeActivation;
using ObjectNodeActivationPtr = std::shared_ptr<ObjectNodeActivation>;
using ObjectToken = fuml::semantics::activities::ObjectToken;
using ObjectTokenPtr = std::shared_ptr<ObjectToken>;
using Offer = fuml::semantics::activities::Offer;
using OfferPtr = std::shared_ptr<Offer>;
using OfferList = std::vector<OfferPtr>;
using OfferListPtr = std::shared_ptr<OfferList>;
using Token = fuml::semantics::activities::Token;
using TokenPtr = std::shared_ptr<Token>;
using TokenList = std::vector<TokenPtr>;
using TokenListPtr = std::shared_ptr<TokenList>;

/*
 * Classification
 */
using InstanceValueEvaluation = fuml::semantics::classification::InstanceValueEvaluation;
using InstanceValueEvaluationPtr = std::shared_ptr<InstanceValueEvaluation>;

/*
 * CommonBehavior
 */
using ArrivalSignal = fuml::semantics::commonbehavior::ArrivalSignal;
using ArrivalSignalPtr = std::shared_ptr<ArrivalSignal>;
using CallEventBehavior = fuml::semantics::commonbehavior::CallEventBehavior;
using CallEventBehaviorPtr = std::shared_ptr<CallEventBehavior>;
using CallEventExecution = fuml::semantics::commonbehavior::CallEventExecution;
using CallEventExecutionPtr = std::shared_ptr<CallEventExecution>;
using CallEventOccurrence = fuml::semantics::commonbehavior::CallEventOccurrence;
using CallEventOccurrencePtr = std::shared_ptr<CallEventOccurrence>;
using ClassifierBehaviorInvocationEventAccepter = fuml::semantics::commonbehavior::ClassifierBehaviorInvocationEventAccepter;
using ClassifierBehaviorInvocationEventAccepterPtr = std::shared_ptr<ClassifierBehaviorInvocationEventAccepter>;
using ClassifierBehaviorInvocationEventAccepterList = std::vector<ClassifierBehaviorInvocationEventAccepterPtr>;
using ClassifierBehaviorInvocationEventAccepterListPtr = std::shared_ptr<ClassifierBehaviorInvocationEventAccepterList>;
using EventAccepter = fuml::semantics::commonbehavior::EventAccepter;
using EventAccepterPtr = std::shared_ptr<EventAccepter>;
using EventAccepterList = std::vector<EventAccepterPtr>;
using EventAccepterListPtr = std::shared_ptr<EventAccepterList>;
using EventOccurrence = fuml::semantics::commonbehavior::EventOccurrence;
using EventOccurrencePtr = std::shared_ptr<EventOccurrence>;
using EventOccurrenceList = std::vector<EventOccurrencePtr>;
using EventOccurrenceListPtr = std::shared_ptr<EventOccurrenceList>;
using EventOccurrence_SendingBehaviorExecution = fuml::semantics::commonbehavior::EventOccurrence_SendingBehaviorExecution;
using EventOccurrence_SendingBehaviorExecutionPtr = std::shared_ptr<EventOccurrence_SendingBehaviorExecution>;
using Execution = fuml::semantics::commonbehavior::Execution;
using ExecutionPtr = std::shared_ptr<Execution>;
using ExecutionList = std::vector<ExecutionPtr>;
using ExecutionListPtr = std::shared_ptr<ExecutionList>;
using ExecutionQueue = fuml::semantics::commonbehavior::ExecutionQueue;
using ExecutionQueuePtr = std::shared_ptr<ExecutionQueue>;
using FIFOGetNextEventStrategy = fuml::semantics::commonbehavior::FIFOGetNextEventStrategy;
using FIFOGetNextEventStrategyPtr = std::shared_ptr<FIFOGetNextEventStrategy>;
using GetNextEventStrategy = fuml::semantics::commonbehavior::GetNextEventStrategy;
using GetNextEventStrategyPtr = std::shared_ptr<GetNextEventStrategy>;
using InvocationEventOccurrence = fuml::semantics::commonbehavior::InvocationEventOccurrence;
using InvocationEventOccurrencePtr = std::shared_ptr<InvocationEventOccurrence>;
using ObjectActivation = fuml::semantics::commonbehavior::ObjectActivation;
using ObjectActivationPtr = std::shared_ptr<ObjectActivation>;
using ObjectActivation_EventDispatchLoopExecution = fuml::semantics::commonbehavior::ObjectActivation_EventDispatchLoopExecution;
using ObjectActivation_EventDispatchLoopExecutionPtr = std::shared_ptr<ObjectActivation_EventDispatchLoopExecution>;
using OpaqueBehaviorExecution = fuml::semantics::commonbehavior::OpaqueBehaviorExecution;
using OpaqueBehaviorExecutionPtr = std::shared_ptr<OpaqueBehaviorExecution>;
using OpaqueBehaviorExecutionList = std::vector<OpaqueBehaviorExecutionPtr>;
using OpaqueBehaviorExecutionListPtr = std::shared_ptr<OpaqueBehaviorExecutionList>;
using ParameterValue = fuml::semantics::commonbehavior::ParameterValue;
using ParameterValuePtr = std::shared_ptr<ParameterValue>;
using ParameterValueList = std::vector<ParameterValuePtr>;
using ParameterValueListPtr = std::shared_ptr<ParameterValueList>;
using SignalEventOccurrence = fuml::semantics::commonbehavior::SignalEventOccurrence;
using SignalEventOccurrencePtr = std::shared_ptr<SignalEventOccurrence>;
using StreamingParameterListener = fuml::semantics::commonbehavior::StreamingParameterListener;
using StreamingParameterListenerPtr = std::shared_ptr<StreamingParameterListener>;
using StreamingParameterListenerList = std::vector<StreamingParameterListenerPtr>;
using StreamingParameterListenerListPtr = std::shared_ptr<StreamingParameterListenerList>;
using StreamingParameterValue = fuml::semantics::commonbehavior::StreamingParameterValue;
using StreamingParameterValuePtr = std::shared_ptr<StreamingParameterValue>;


/*
 * Loci
 */
using ChoiceStrategy = fuml::semantics::loci::ChoiceStrategy;
using ChoiceStrategyPtr = std::shared_ptr<ChoiceStrategy>;
using ExecutionFactory = fuml::semantics::loci::ExecutionFactory;
using ExecutionFactoryPtr = std::shared_ptr<ExecutionFactory>;
using ExecutionFactoryL1 = fuml::semantics::loci::ExecutionFactoryL1;
using ExecutionFactoryL1Ptr = std::shared_ptr<ExecutionFactoryL1>;
using ExecutionFactoryL2 = fuml::semantics::loci::ExecutionFactoryL2;
using ExecutionFactoryL2Ptr = std::shared_ptr<ExecutionFactoryL2>;
using ExecutionFactoryL3 = fuml::semantics::loci::ExecutionFactoryL3;
using ExecutionFactoryL3Ptr = std::shared_ptr<ExecutionFactoryL3>;
using Executor = fuml::semantics::loci::Executor;
using ExecutorPtr = std::shared_ptr<Executor>;
using FirstChoiceStrategy = fuml::semantics::loci::FirstChoiceStrategy;
using FirstChoiceStrategyPtr = std::shared_ptr<FirstChoiceStrategy>;
using Locus = fuml::semantics::loci::Locus;
using LocusPtr = std::shared_ptr<Locus>;
using SemanticStrategy = fuml::semantics::loci::SemanticStrategy;
using SemanticStrategyPtr = std::shared_ptr<SemanticStrategy>;
using SemanticStrategyList = std::vector<SemanticStrategyPtr>;
using SemanticStrategyListPtr = std::shared_ptr<SemanticStrategyList>;
using SemanticVisitor = fuml::semantics::loci::SemanticVisitor;
using SemanticVisitorPtr = std::shared_ptr<SemanticVisitor>;


/*
 * SimpleClassifiers
 */
using BooleanValue = fuml::semantics::simpleclassifiers::BooleanValue;
using BooleanValuePtr = std::shared_ptr<BooleanValue>;
using CompoundValue = fuml::semantics::simpleclassifiers::CompoundValue;
using CompoundValuePtr = std::shared_ptr<CompoundValue>;
using DataValue = fuml::semantics::simpleclassifiers::DataValue;
using DataValuePtr = std::shared_ptr<DataValue>;
using EnumerationValue = fuml::semantics::simpleclassifiers::EnumerationValue;
using EnumerationValuePtr = std::shared_ptr<EnumerationValue>;
using FeatureValue = fuml::semantics::simpleclassifiers::FeatureValue;
using FeatureValuePtr = std::shared_ptr<FeatureValue>;
using FeatureValueList = std::vector<FeatureValuePtr>;
using FeatureValueListPtr = std::shared_ptr<FeatureValueList>;
using IntegerValue = fuml::semantics::simpleclassifiers::IntegerValue;
using IntegerValuePtr = std::shared_ptr<IntegerValue>;
using PrimitiveValue = fuml::semantics::simpleclassifiers::PrimitiveValue;
using PrimitiveValuePtr = std::shared_ptr<PrimitiveValue>;
using RealValue = fuml::semantics::simpleclassifiers::RealValue;
using RealValuePtr = std::shared_ptr<RealValue>;
using SignalInstance = fuml::semantics::simpleclassifiers::SignalInstance;
using SignalInstancePtr = std::shared_ptr<SignalInstance>;
using StringValue = fuml::semantics::simpleclassifiers::StringValue;
using StringValuePtr = std::shared_ptr<StringValue>;
using StructuredValue = fuml::semantics::simpleclassifiers::StructuredValue;
using StructuredValuePtr = std::shared_ptr<StructuredValue>;
using UnlimitedNaturalValue = fuml::semantics::simpleclassifiers::UnlimitedNaturalValue;
using UnlimitedNaturalValuePtr = std::shared_ptr<UnlimitedNaturalValue>;

/*
 * StructuredClassifiers
 */
using DispatchStrategy = fuml::semantics::structuredclassifiers::DispatchStrategy;
using DispatchStrategyPtr = std::shared_ptr<DispatchStrategy>;
using ExtensionalValue = fuml::semantics::structuredclassifiers::ExtensionalValue;
using ExtensionalValuePtr = std::shared_ptr<ExtensionalValue>;
using ExtensionalValueList = std::vector<ExtensionalValuePtr>;
using ExtensionalValueListPtr = std::shared_ptr<ExtensionalValueList>;
using Link = fuml::semantics::structuredclassifiers::Link;
using LinkPtr = std::shared_ptr<Link>;
using LinkList = std::vector<LinkPtr>;
using LinkListPtr = std::shared_ptr<LinkList>;
using Object_ = fuml::semantics::structuredclassifiers::Object_;
using Object_Ptr = std::shared_ptr<Object_>;
using RedefinitionBasedDispatchStrategy = fuml::semantics::structuredclassifiers::RedefinitionBasedDispatchStrategy;
using RedefinitionBasedDispatchStrategyPtr = std::shared_ptr<RedefinitionBasedDispatchStrategy>;
using Reference = fuml::semantics::structuredclassifiers::Reference;
using ReferencePtr = std::shared_ptr<Reference>;


/*
 * Values
 */
using Evaluation = fuml::semantics::values::Evaluation;
using EvaluationPtr = std::shared_ptr<Evaluation>;
using LiteralBooleanEvaluation = fuml::semantics::values::LiteralBooleanEvaluation;
using LiteralBooleanEvaluationPtr = std::shared_ptr<LiteralBooleanEvaluation>;
using LiteralEvaluation = fuml::semantics::values::LiteralEvaluation;
using LiteralEvaluationPtr = std::shared_ptr<LiteralEvaluation>;
using LiteralIntegerEvaluation = fuml::semantics::values::LiteralIntegerEvaluation;
using LiteralIntegerEvaluationPtr = std::shared_ptr<LiteralIntegerEvaluation>;
using LiteralNullEvaluation = fuml::semantics::values::LiteralNullEvaluation;
using LiteralNullEvaluationPtr = std::shared_ptr<LiteralNullEvaluation>;
using LiteralRealEvaluation = fuml::semantics::values::LiteralRealEvaluation;
using LiteralRealEvaluationPtr = std::shared_ptr<LiteralRealEvaluation>;
using LiteralStringEvaluation = fuml::semantics::values::LiteralStringEvaluation;
using LiteralStringEvaluationPtr = std::shared_ptr<LiteralStringEvaluation>;
using LiteralUnlimitedNaturalEvaluation = fuml::semantics::values::LiteralUnlimitedNaturalEvaluation;
using LiteralUnlimitedNaturalEvaluationPtr = std::shared_ptr<LiteralUnlimitedNaturalEvaluation>;
using Value = fuml::semantics::values::Value;
using ValuePtr = std::shared_ptr<Value>;
using ValueList = std::vector<ValuePtr>;
using ValueListPtr = std::shared_ptr<ValueList>;

#endif /* FUML_SEMANTICS_FWD_H_ */
