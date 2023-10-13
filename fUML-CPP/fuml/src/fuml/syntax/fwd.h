/*
 * fwd.h
 *
 *  Created on: 23.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_FWD_H_
#define FUML_SYNTAX_FWD_H_

#include <memory>
#include <vector>

namespace fuml
{
	namespace syntax
	{
		namespace actions
		{
			class AcceptCallAction;
			class AcceptEventAction;
			class Action;
			class AddStructuralFeatureValueAction;
			class CallAction;
			class CallBehaviorAction;
			class CallOperationAction;
			class Clause;
			class ClearAssociationAction;
			class ClearStructuralFeatureAction;
			class ConditionalNode;
			class CreateLinkAction;
			class CreateObjectAction;
			class DestroyLinkAction;
			class DestroyObjectAction;
			enum class ExpansionKind;
			class ExpansionNode;
			class ExpansionRegion;
			class InputPin;
			class InvocationAction;
			class LinkAction;
			class LinkEndCreationData;
			class LinkEndData;
			class LinkEndDestructionData;
			class LoopNode;
			class OutputPin;
			class Pin;
			class RaiseExceptionAction;
			class ReadExtentAction;
			class ReadIsClassifiedObjectAction;
			class ReadLinkAction;
			class ReadSelfAction;
			class ReadStructuralFeatureAction;
			class ReclassifyObjectAction;
			class ReduceAction;
			class RemoveStructuralFeatureValueAction;
			class ReplyAction;
			class SendSignalAction;
			class StartClassifierBehaviorAction;
			class StartObjectBehaviorAction;
			class StructuralFeatureAction;
			class StructuredActivityNode;
			class TestIdentityAction;
			class UnmarshallAction;
			class ValueSpecificationAction;
			class WriteLinkAction;
			class WriteStructuralFeatureAction;
		}

		namespace activities
		{
			class Activity;
			class ActivityEdge;
			class ActivityFinalNode;
			class ActivityGroup;
			class ActivityNode;
			class ActivityParameterNode;
			class CentralBufferNode;
			class ControlFlow;
			class ControlNode;
			class DataStoreNode;
			class DecisionNode;
			class ExceptionHandler;
			class ExecutableNode;
			class FinalNode;
			class FlowFinalNode;
			class ForkNode;
			class InitialNode;
			class JoinNode;
			class MergeNode;
			class ObjectFlow;
			class ObjectNode;
		}

		namespace classification
		{
			enum class AggregationKind;
			class BehavioralFeature;
			class Classifier;
			class Feature;
			class Generalization;
			class InstanceSpecification;
			class InstanceValue;
			class Operation;
			class Parameter;
			enum class ParameterDirectionKind;
			class Property;
			class RedefinableElement;
			class Slot;
			class StructuralFeature;
		}

		namespace commonbehavior
		{
			class Behavior;
			class BehavioredClassifier;
			enum class CallConcurrencyKind;
			class CallEvent;
			class Event;
			class FunctionBehavior;
			class MessageEvent;
			class OpaqueBehavior;
			class SignalEvent;
			class Trigger;
		}

		namespace commonstructure
		{
			class Comment;
			class Element;
			class ElementImport;
			class MultiplicityElement;
			class NamedElement;
			class Namespace;
			class PackageImport;
			class PackageableElement;
			class Type;
			class TypedElement;
			enum class VisibilityKind;
		}

		namespace packages
		{
			class Package;
		}

		namespace simpleclassifiers
		{
			class DataType;
			class Enumeration;
			class EnumerationLiteral;
			class PrimitiveType;
			class Reception;
			class Signal;
		}

		namespace structuredclassifiers
		{
			class Association;
			class Class_;
		}

		namespace values
		{
			class LiteralBoolean;
			class LiteralInteger;
			class LiteralNull;
			class LiteralReal;
			class LiteralSpecification;
			class LiteralString;
			class LiteralUnlimitedNatural;
			class ValueSpecification;
		}
	}
}

/*
 * Actions
 */
using AcceptCallAction = fuml::syntax::actions::AcceptCallAction;
using AcceptCallActionPtr = std::shared_ptr<AcceptCallAction>;
using AcceptEventAction = fuml::syntax::actions::AcceptEventAction;
using AcceptEventActionPtr = std::shared_ptr<AcceptEventAction>;
using Action = fuml::syntax::actions::Action;
using ActionPtr = std::shared_ptr<Action>;
using AddStructuralFeatureValueAction = fuml::syntax::actions::AddStructuralFeatureValueAction;
using AddStructuralFeatureValueActionPtr = std::shared_ptr<AddStructuralFeatureValueAction>;
using CallAction = fuml::syntax::actions::CallAction;
using CallActionPtr = std::shared_ptr<CallAction>;
using CallBehaviorAction = fuml::syntax::actions::CallBehaviorAction;
using CallBehaviorActionPtr = std::shared_ptr<CallBehaviorAction>;
using CallOperationAction = fuml::syntax::actions::CallOperationAction;
using CallOperationActionPtr = std::shared_ptr<CallOperationAction>;
using Clause = fuml::syntax::actions::Clause;
using ClausePtr = std::shared_ptr<Clause>;
using ClausePtr_w = std::weak_ptr<Clause>;
using ClauseList = std::vector<ClausePtr>;
using ClauseListPtr = std::shared_ptr<ClauseList>;
using ClearAssociationAction = fuml::syntax::actions::ClearAssociationAction;
using ClearAssociationActionPtr = std::shared_ptr<ClearAssociationAction>;
using ClearStructuralFeatureAction = fuml::syntax::actions::ClearStructuralFeatureAction;
using ClearStructuralFeatureActionPtr = std::shared_ptr<ClearStructuralFeatureAction>;
using ConditionalNode = fuml::syntax::actions::ConditionalNode;
using ConditionalNodePtr = std::shared_ptr<ConditionalNode>;
using CreateLinkAction = fuml::syntax::actions::CreateLinkAction;
using CreateLinkActionPtr = std::shared_ptr<CreateLinkAction>;
using CreateObjectAction = fuml::syntax::actions::CreateObjectAction;
using CreateObjectActionPtr = std::shared_ptr<CreateObjectAction>;
using DestroyLinkAction = fuml::syntax::actions::DestroyLinkAction;
using DestroyLinkActionPtr = std::shared_ptr<DestroyLinkAction>;
using DestroyObjectAction = fuml::syntax::actions::DestroyObjectAction;
using DestroyObjectActionPtr = std::shared_ptr<DestroyObjectAction>;
using ExpansionKind = fuml::syntax::actions::ExpansionKind;
using ExpansionNode = fuml::syntax::actions::ExpansionNode;
using ExpansionNodePtr = std::shared_ptr<ExpansionNode>;
using ExpansionNodeList = std::vector<ExpansionNodePtr>;
using ExpansionNodeListPtr = std::shared_ptr<ExpansionNodeList>;
using ExpansionRegion = fuml::syntax::actions::ExpansionRegion;
using ExpansionRegionPtr = std::shared_ptr<ExpansionRegion>;
using ExpansionRegionPtr_w = std::weak_ptr<ExpansionRegion>;
using InputPin = fuml::syntax::actions::InputPin;
using InputPinPtr = std::shared_ptr<InputPin>;
using InputPinList = std::vector<InputPinPtr>;
using InputPinListPtr = std::shared_ptr<InputPinList>;
using InvocationAction = fuml::syntax::actions::InvocationAction;
using InvocationActionPtr = std::shared_ptr<InvocationAction>;
using LinkAction = fuml::syntax::actions::LinkAction;
using LinkActionPtr = std::shared_ptr<LinkAction>;
using LinkEndCreationData = fuml::syntax::actions::LinkEndCreationData;
using LinkEndCreationDataPtr = std::shared_ptr<LinkEndCreationData>;
using LinkEndCreationDataList = std::vector<LinkEndCreationDataPtr>;
using LinkEndCreationDataListPtr = std::shared_ptr<LinkEndCreationDataList>;
using LinkEndData = fuml::syntax::actions::LinkEndData;
using LinkEndDataPtr = std::shared_ptr<LinkEndData>;
using LinkEndDataList = std::vector<LinkEndDataPtr>;
using LinkEndDataListPtr = std::shared_ptr<LinkEndDataList>;
using LinkEndDestructionData = fuml::syntax::actions::LinkEndDestructionData;
using LinkEndDestructionDataPtr = std::shared_ptr<LinkEndDestructionData>;
using LinkEndDestructionDataList = std::vector<LinkEndDestructionDataPtr>;
using LinkEndDestructionDataListPtr = std::shared_ptr<LinkEndDestructionDataList>;
using LoopNode = fuml::syntax::actions::LoopNode;
using LoopNodePtr = std::shared_ptr<LoopNode>;
using OutputPin = fuml::syntax::actions::OutputPin;
using OutputPinPtr = std::shared_ptr<OutputPin>;
using OutputPinList = std::vector<OutputPinPtr>;
using OutputPinListPtr = std::shared_ptr<OutputPinList>;
using Pin = fuml::syntax::actions::Pin;
using PinPtr = std::shared_ptr<Pin>;
using RaiseExceptionAction = fuml::syntax::actions::RaiseExceptionAction;
using RaiseExceptionActionPtr = std::shared_ptr<RaiseExceptionAction>;
using ReadExtentAction = fuml::syntax::actions::ReadExtentAction;
using ReadExtentActionPtr = std::shared_ptr<ReadExtentAction>;
using ReadIsClassifiedObjectAction = fuml::syntax::actions::ReadIsClassifiedObjectAction;
using ReadIsClassifiedObjectActionPtr = std::shared_ptr<ReadIsClassifiedObjectAction>;
using ReadLinkAction = fuml::syntax::actions::ReadLinkAction;
using ReadLinkActionPtr = std::shared_ptr<ReadLinkAction>;
using ReadSelfAction = fuml::syntax::actions::ReadSelfAction;
using ReadSelfActionPtr = std::shared_ptr<ReadSelfAction>;
using ReadStructuralFeatureAction = fuml::syntax::actions::ReadStructuralFeatureAction;
using ReadStructuralFeatureActionPtr = std::shared_ptr<ReadStructuralFeatureAction>;
using ReclassifyObjectAction = fuml::syntax::actions::ReclassifyObjectAction;
using ReclassifyObjectActionPtr = std::shared_ptr<ReclassifyObjectAction>;
using ReduceAction = fuml::syntax::actions::ReduceAction;
using ReduceActionPtr = std::shared_ptr<ReduceAction>;
using RemoveStructuralFeatureValueAction = fuml::syntax::actions::RemoveStructuralFeatureValueAction;
using RemoveStructuralFeatureValueActionPtr = std::shared_ptr<RemoveStructuralFeatureValueAction>;
using ReplyAction = fuml::syntax::actions::ReplyAction;
using ReplyActionPtr = std::shared_ptr<ReplyAction>;
using SendSignalAction = fuml::syntax::actions::SendSignalAction;
using SendSignalActionPtr = std::shared_ptr<SendSignalAction>;
using StartClassifierBehaviorAction = fuml::syntax::actions::StartClassifierBehaviorAction;
using StartClassifierBehaviorActionPtr = std::shared_ptr<StartClassifierBehaviorAction>;
using StartObjectBehaviorAction = fuml::syntax::actions::StartObjectBehaviorAction;
using StartObjectBehaviorActionPtr = std::shared_ptr<StartObjectBehaviorAction>;
using StructuralFeatureAction = fuml::syntax::actions::StructuralFeatureAction;
using StructuralFeatureActionPtr = std::shared_ptr<StructuralFeatureAction>;
using StructuredActivityNode = fuml::syntax::actions::StructuredActivityNode;
using StructuredActivityNodePtr = std::shared_ptr<StructuredActivityNode>;
using StructuredActivityNodePtr_w = std::weak_ptr<StructuredActivityNode>;
using StructuredActivityNodeList = std::vector<StructuredActivityNodePtr>;
using StructuredActivityNodeListPtr = std::shared_ptr<StructuredActivityNodeList>;
using TestIdentityAction = fuml::syntax::actions::TestIdentityAction;
using TestIdentityActionPtr = std::shared_ptr<TestIdentityAction>;
using UnmarshallAction = fuml::syntax::actions::UnmarshallAction;
using UnmarshallActionPtr = std::shared_ptr<UnmarshallAction>;
using ValueSpecificationAction = fuml::syntax::actions::ValueSpecificationAction;
using ValueSpecificationActionPtr = std::shared_ptr<ValueSpecificationAction>;
using WriteLinkAction = fuml::syntax::actions::WriteLinkAction;
using WriteLinkActionPtr = std::shared_ptr<WriteLinkAction>;
using WriteStructuralFeatureAction = fuml::syntax::actions::WriteStructuralFeatureAction;
using WriteStructuralFeatureActionPtr = std::shared_ptr<WriteStructuralFeatureAction>;

/*
 * Activites
 */
using Activity = fuml::syntax::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;
using ActivityPtr_w = std::weak_ptr<Activity>;
using ActivityEdge = fuml::syntax::activities::ActivityEdge;
using ActivityEdgePtr = std::shared_ptr<ActivityEdge>;
using ActivityEdgePtr_w = std::weak_ptr<ActivityEdge>;
using ActivityEdgeList = std::vector<ActivityEdgePtr>;
using ActivityEdgeListPtr = std::shared_ptr<ActivityEdgeList>;
using ActivityFinalNode = fuml::syntax::activities::ActivityFinalNode;
using ActivityFinalNodePtr = std::shared_ptr<ActivityFinalNode>;
using ActivityGroup = fuml::syntax::activities::ActivityGroup;
using ActivityGroupPtr = std::shared_ptr<ActivityGroup>;
using ActivityGroupList = std::vector<ActivityGroupPtr>;
using ActivityGroupListPtr = std::shared_ptr<ActivityGroupList>;
using ActivityNode = fuml::syntax::activities::ActivityNode;
using ActivityNodePtr = std::shared_ptr<ActivityNode>;
using ActivityNodeList = std::vector<ActivityNodePtr>;
using ActivityNodeListPtr = std::shared_ptr<ActivityNodeList>;
using ActivityParameterNode = fuml::syntax::activities::ActivityParameterNode;
using ActivityParameterNodePtr = std::shared_ptr<ActivityParameterNode>;
using CentralBufferNode = fuml::syntax::activities::CentralBufferNode;
using CentralBufferNodePtr = std::shared_ptr<CentralBufferNode>;
using ControlFlow = fuml::syntax::activities::ControlFlow;
using ControlFlowPtr = std::shared_ptr<ControlFlow>;
using ControlNode = fuml::syntax::activities::ControlNode;
using ControlNodePtr = std::shared_ptr<ControlNode>;
using DataStoreNode = fuml::syntax::activities::DataStoreNode;
using DataStoreNodePtr = std::shared_ptr<DataStoreNode>;
using DecisionNode = fuml::syntax::activities::DecisionNode;
using DecisionNodePtr = std::shared_ptr<DecisionNode>;
using ExceptionHandler = fuml::syntax::activities::ExceptionHandler;
using ExceptionHandlerPtr = std::shared_ptr<ExceptionHandler>;
using ExceptionHandlerList = std::vector<ExceptionHandlerPtr>;
using ExceptionHandlerListPtr = std::shared_ptr<ExceptionHandlerList>;
using ExecutableNode = fuml::syntax::activities::ExecutableNode;
using ExecutableNodePtr = std::shared_ptr<ExecutableNode>;
using ExecutableNodePtr_w = std::weak_ptr<ExecutableNode>;
using ExecutableNodeList = std::vector<ExecutableNodePtr>;
using ExecutableNodeListPtr = std::shared_ptr<ExecutableNodeList>;
using FinalNode = fuml::syntax::activities::FinalNode;
using FinalNodePtr = std::shared_ptr<FinalNode>;
using FlowFinalNode = fuml::syntax::activities::FlowFinalNode;
using FlowFinalNodePtr = std::shared_ptr<FlowFinalNode>;
using ForkNode = fuml::syntax::activities::ForkNode;
using ForkNodePtr = std::shared_ptr<ForkNode>;
using InitialNode = fuml::syntax::activities::InitialNode;
using InitialNodePtr = std::shared_ptr<InitialNode>;
using JoinNode = fuml::syntax::activities::JoinNode;
using JoinNodePtr = std::shared_ptr<JoinNode>;
using MergeNode = fuml::syntax::activities::MergeNode;
using MergeNodePtr = std::shared_ptr<MergeNode>;
using ObjectFlow = fuml::syntax::activities::ObjectFlow;
using ObjectFlowPtr = std::shared_ptr<ObjectFlow>;
using ObjectNode = fuml::syntax::activities::ObjectNode;
using ObjectNodePtr = std::shared_ptr<ObjectNode>;

/*
 * Classification
 */
using AggregationKind = fuml::syntax::classification::AggregationKind;
using BehavioralFeature = fuml::syntax::classification::BehavioralFeature;
using BehavioralFeaturePtr = std::shared_ptr<BehavioralFeature>;
using BehavioralFeaturePtr_w = std::weak_ptr<BehavioralFeature>;
using Classifier = fuml::syntax::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;
using ClassifierPtr_w = std::weak_ptr<Classifier>;
using ClassifierList = std::vector<ClassifierPtr>;
using ClassifierListPtr = std::shared_ptr<ClassifierList>;
using Feature = fuml::syntax::classification::Feature;
using FeaturePtr = std::shared_ptr<Feature>;
using FeatureList = std::vector<FeaturePtr>;
using FeatureListPtr = std::shared_ptr<FeatureList>;
using Generalization = fuml::syntax::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;
using GeneralizationList = std::vector<GeneralizationPtr>;
using GeneralizationListPtr = std::shared_ptr<GeneralizationList>;
using InstanceSpecification = fuml::syntax::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;
using InstanceSpecificationPtr_w = std::weak_ptr<InstanceSpecification>;
using InstanceValue = fuml::syntax::classification::InstanceValue;
using InstanceValuePtr = std::shared_ptr<InstanceValue>;
using Operation = fuml::syntax::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;
using OperationPtr_w = std::weak_ptr<Operation>;
using OperationList = std::vector<OperationPtr>;
using OperationListPtr = std::shared_ptr<OperationList>;
using Parameter = fuml::syntax::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;
using ParameterDirectionKind = fuml::syntax::classification::ParameterDirectionKind;
using ParameterList = std::vector<ParameterPtr>;
using ParameterListPtr = std::shared_ptr<ParameterList>;
using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;
using PropertyPtr_w = std::weak_ptr<Property>;
using PropertyList = std::vector<PropertyPtr>;
using PropertyListPtr = std::shared_ptr<PropertyList>;
using RedefinableElement = fuml::syntax::classification::RedefinableElement;
using RedefinableElementPtr = std::shared_ptr<RedefinableElement>;
using RedefinableElementList = std::vector<RedefinableElementPtr>;
using RedefinableElementListPtr = std::shared_ptr<RedefinableElementList>;
using Slot = fuml::syntax::classification::Slot;
using SlotPtr = std::shared_ptr<Slot>;
using SlotList = std::vector<SlotPtr>;
using SlotListPtr = std::shared_ptr<SlotList>;
using StructuralFeature = fuml::syntax::classification::StructuralFeature;
using StructuralFeaturePtr = std::shared_ptr<StructuralFeature>;
using StructuralFeatureList = std::vector<StructuralFeaturePtr>;
using StructuralFeatureListPtr = std::shared_ptr<StructuralFeatureList>;

/*
 * CommonBehavior
 */
using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;
using BehavioredClassifier = fuml::syntax::commonbehavior::BehavioredClassifier;
using BehavioredClassifierPtr = std::shared_ptr<BehavioredClassifier>;
using BehavioredClassifierPtr_w = std::weak_ptr<BehavioredClassifier>;
using BehaviorList = std::vector<BehaviorPtr>;
using BehaviorListPtr = std::shared_ptr<BehaviorList>;
using CallConcurrencyKind = fuml::syntax::commonbehavior::CallConcurrencyKind;
using CallEvent = fuml::syntax::commonbehavior::CallEvent;
using CallEventPtr = std::shared_ptr<CallEvent>;
using Event = fuml::syntax::commonbehavior::Event;
using EventPtr = std::shared_ptr<Event>;
using FunctionBehavior = fuml::syntax::commonbehavior::FunctionBehavior;
using FunctionBehaviorPtr = std::shared_ptr<FunctionBehavior>;
using MessageEvent = fuml::syntax::commonbehavior::MessageEvent;
using MessageEventPtr = std::shared_ptr<MessageEvent>;
using OpaqueBehavior = fuml::syntax::commonbehavior::OpaqueBehavior;
using OpaqueBehaviorPtr = std::shared_ptr<OpaqueBehavior>;
using SignalEvent = fuml::syntax::commonbehavior::SignalEvent;
using SignalEventPtr = std::shared_ptr<SignalEvent>;
using Trigger = fuml::syntax::commonbehavior::Trigger;
using TriggerPtr = std::shared_ptr<Trigger>;
using TriggerList = std::vector<TriggerPtr>;
using TriggerListPtr = std::shared_ptr<TriggerList>;

/*
 * CommonStructure
 */
using Comment = fuml::syntax::commonstructure::Comment;
using CommentPtr = std::shared_ptr<Comment>;
using CommentList = std::vector<CommentPtr>;
using CommentListPtr = std::shared_ptr<CommentList>;
using Element = fuml::syntax::commonstructure::Element;
using ElementPtr = std::shared_ptr<Element>;
using ElementPtr_w = std::weak_ptr<Element>;
using ElementImport = fuml::syntax::commonstructure::ElementImport;
using ElementImportPtr = std::shared_ptr<ElementImport>;
using ElementImportList = std::vector<ElementImportPtr>;
using ElementImportListPtr = std::shared_ptr<ElementImportList>;
using ElementList = std::vector<ElementPtr>;
using ElementListPtr = std::shared_ptr<ElementList>;
using MultiplicityElement = fuml::syntax::commonstructure::MultiplicityElement;
using MultiplicityElementPtr = std::shared_ptr<MultiplicityElement>;
using NamedElement = fuml::syntax::commonstructure::NamedElement;
using NamedElementPtr = std::shared_ptr<NamedElement>;
using NamedElementList = std::vector<NamedElementPtr>;
using NamedElementListPtr = std::shared_ptr<NamedElementList>;
using Namespace = fuml::syntax::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;
using NamespacePtr_w = std::weak_ptr<Namespace>;
using PackageableElement = fuml::syntax::commonstructure::PackageableElement;
using PackageableElementPtr = std::shared_ptr<PackageableElement>;
using PackageableElementList = std::vector<PackageableElementPtr>;
using PackageableElementListPtr = std::shared_ptr<PackageableElementList>;
using PackageImport = fuml::syntax::commonstructure::PackageImport;
using PackageImportPtr = std::shared_ptr<PackageImport>;
using PackageImportList = std::vector<PackageImportPtr>;
using PackageImportListPtr = std::shared_ptr<PackageImportList>;
using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;
using TypedElement = fuml::syntax::commonstructure::TypedElement;
using TypedElementPtr = std::shared_ptr<TypedElement>;
using TypeList = std::vector<TypePtr>;
using TypeListPtr = std::shared_ptr<TypeList>;
using VisibilityKind = fuml::syntax::commonstructure::VisibilityKind;

/*
 * Packages
 */
using Package = fuml::syntax::packages::Package;
using PackagePtr = std::shared_ptr<Package>;
using PackagePtr_w = std::weak_ptr<Package>;
using PackageList = std::vector<PackagePtr>;
using PackageListPtr = std::shared_ptr<PackageList>;

/*
 * SimpleClassifiers
 */
using DataType = fuml::syntax::simpleclassifiers::DataType;
using DataTypePtr = std::shared_ptr<DataType>;
using DataTypePtr_w = std::weak_ptr<DataType>;
using Enumeration = fuml::syntax::simpleclassifiers::Enumeration;
using EnumerationPtr = std::shared_ptr<Enumeration>;
using EnumerationPtr_w = std::weak_ptr<Enumeration>;
using EnumerationLiteral = fuml::syntax::simpleclassifiers::EnumerationLiteral;
using EnumerationLiteralPtr = std::shared_ptr<EnumerationLiteral>;
using EnumerationLiteralList = std::vector<EnumerationLiteralPtr>;
using EnumerationLiteralListPtr = std::shared_ptr<EnumerationLiteralList>;
using PrimitiveType = fuml::syntax::simpleclassifiers::PrimitiveType;
using PrimitiveTypePtr = std::shared_ptr<PrimitiveType>;
using PrimitiveTypeList = std::vector<PrimitiveTypePtr>;
using PrimitiveTypeListPtr = std::shared_ptr<PrimitiveTypeList>;
using Reception = fuml::syntax::simpleclassifiers::Reception;
using ReceptionPtr = std::shared_ptr<Reception>;
using ReceptionList = std::vector<ReceptionPtr>;
using ReceptionListPtr = std::shared_ptr<ReceptionList>;
using Signal = fuml::syntax::simpleclassifiers::Signal;
using SignalPtr = std::shared_ptr<Signal>;
using SignalPtr_w = std::weak_ptr<Signal>;

/*
 * StructuredClassifiers
 */
using Association = fuml::syntax::structuredclassifiers::Association;
using AssociationPtr = std::shared_ptr<Association>;
using AssociationPtr_w = std::weak_ptr<Association>;
using Class_ = fuml::syntax::structuredclassifiers::Class_;
using Class_Ptr = std::shared_ptr<Class_>;
using Class_Ptr_w = std::weak_ptr<Class_>;
using Class_List = std::vector<Class_Ptr>;
using Class_ListPtr = std::shared_ptr<Class_List>;

/*
 * Values
 */
using LiteralBoolean = fuml::syntax::values::LiteralBoolean;
using LiteralBooleanPtr = std::shared_ptr<LiteralBoolean>;
using LiteralInteger = fuml::syntax::values::LiteralInteger;
using LiteralIntegerPtr = std::shared_ptr<LiteralInteger>;
using LiteralNull = fuml::syntax::values::LiteralNull;
using LiteralNullPtr = std::shared_ptr<LiteralNull>;
using LiteralReal = fuml::syntax::values::LiteralReal;
using LiteralRealPtr = std::shared_ptr<LiteralReal>;
using LiteralSpecification = fuml::syntax::values::LiteralSpecification;
using LiteralSpecificationPtr = std::shared_ptr<LiteralSpecification>;
using LiteralString = fuml::syntax::values::LiteralString;
using LiteralStringPtr = std::shared_ptr<LiteralString>;
using LiteralUnlimitedNatural = fuml::syntax::values::LiteralUnlimitedNatural;
using LiteralUnlimitedNaturalPtr = std::shared_ptr<LiteralUnlimitedNatural>;
using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;
using ValueSpecificationList = std::vector<ValueSpecificationPtr>;
using ValueSpecificationListPtr = std::shared_ptr<ValueSpecificationList>;

#endif /* FUML_SYNTAX_FWD_H_ */
