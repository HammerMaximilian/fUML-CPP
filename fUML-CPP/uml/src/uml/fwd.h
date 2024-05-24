/*
 * fwd.h
 *
 *  Created on: 23.08.2023
 *      Author: maha6913
 */

#ifndef UML_FWD_H_
#define UML_FWD_H_

#include <memory>
#include <vector>

namespace uml
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
		class Abstraction;  // PSCS-specific
		class Comment;
		class Dependency; // PSCS-specific
		class Element;
		class ElementImport;
		class MultiplicityElement;
		class NamedElement;
		class Namespace;
		class PackageImport;
		class PackageableElement;
		class Realization; // PSCS-specific
		class Type;
		class TypedElement;
		class Usage; // PSCS-specific
		enum class VisibilityKind;
	}

	namespace packages
	{
		class Package;
		class Profile;
		class Stereotype;
	}

	namespace simpleclassifiers
	{
		class DataType;
		class Enumeration;
		class EnumerationLiteral;
		class Interface; // PSCS-specific
		class InterfaceRealization; // PSCS-specific
		class PrimitiveType;
		class Reception;
		class Signal;
	}

	namespace structuredclassifiers
	{
		class Association;
		class Class_;
		class ConnectableElement; // PSCS-specific
		class Connector; // PSCS-specific
		class ConnectorEnd; // PSCS-specific
		enum class ConnectorKind; // PSCS-specific
		class EncapsulatedClassifier; // PSCS-specific
		class Port; // PSCS-specific
		class StructuredClassifier; // PSCS-specific
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
		class OpaqueExpression; // PSCS-specific
		class ValueSpecification;
	}
}

/*
 * Actions
 */
using AcceptCallAction = uml::actions::AcceptCallAction;
using AcceptCallActionPtr = std::shared_ptr<AcceptCallAction>;
using AcceptEventAction = uml::actions::AcceptEventAction;
using AcceptEventActionPtr = std::shared_ptr<AcceptEventAction>;
using Action = uml::actions::Action;
using ActionPtr = std::shared_ptr<Action>;
using AddStructuralFeatureValueAction = uml::actions::AddStructuralFeatureValueAction;
using AddStructuralFeatureValueActionPtr = std::shared_ptr<AddStructuralFeatureValueAction>;
using CallAction = uml::actions::CallAction;
using CallActionPtr = std::shared_ptr<CallAction>;
using CallBehaviorAction = uml::actions::CallBehaviorAction;
using CallBehaviorActionPtr = std::shared_ptr<CallBehaviorAction>;
using CallOperationAction = uml::actions::CallOperationAction;
using CallOperationActionPtr = std::shared_ptr<CallOperationAction>;
using Clause = uml::actions::Clause;
using ClausePtr = std::shared_ptr<Clause>;
using ClausePtr_w = std::weak_ptr<Clause>;
using ClauseList = std::vector<ClausePtr>;
using ClauseListPtr = std::shared_ptr<ClauseList>;
using ClearAssociationAction = uml::actions::ClearAssociationAction;
using ClearAssociationActionPtr = std::shared_ptr<ClearAssociationAction>;
using ClearStructuralFeatureAction = uml::actions::ClearStructuralFeatureAction;
using ClearStructuralFeatureActionPtr = std::shared_ptr<ClearStructuralFeatureAction>;
using ConditionalNode = uml::actions::ConditionalNode;
using ConditionalNodePtr = std::shared_ptr<ConditionalNode>;
using CreateLinkAction = uml::actions::CreateLinkAction;
using CreateLinkActionPtr = std::shared_ptr<CreateLinkAction>;
using CreateObjectAction = uml::actions::CreateObjectAction;
using CreateObjectActionPtr = std::shared_ptr<CreateObjectAction>;
using DestroyLinkAction = uml::actions::DestroyLinkAction;
using DestroyLinkActionPtr = std::shared_ptr<DestroyLinkAction>;
using DestroyObjectAction = uml::actions::DestroyObjectAction;
using DestroyObjectActionPtr = std::shared_ptr<DestroyObjectAction>;
using ExpansionKind = uml::actions::ExpansionKind;
using ExpansionNode = uml::actions::ExpansionNode;
using ExpansionNodePtr = std::shared_ptr<ExpansionNode>;
using ExpansionNodeList = std::vector<ExpansionNodePtr>;
using ExpansionNodeListPtr = std::shared_ptr<ExpansionNodeList>;
using ExpansionRegion = uml::actions::ExpansionRegion;
using ExpansionRegionPtr = std::shared_ptr<ExpansionRegion>;
using ExpansionRegionPtr_w = std::weak_ptr<ExpansionRegion>;
using InputPin = uml::actions::InputPin;
using InputPinPtr = std::shared_ptr<InputPin>;
using InputPinList = std::vector<InputPinPtr>;
using InputPinListPtr = std::shared_ptr<InputPinList>;
using InvocationAction = uml::actions::InvocationAction;
using InvocationActionPtr = std::shared_ptr<InvocationAction>;
using LinkAction = uml::actions::LinkAction;
using LinkActionPtr = std::shared_ptr<LinkAction>;
using LinkEndCreationData = uml::actions::LinkEndCreationData;
using LinkEndCreationDataPtr = std::shared_ptr<LinkEndCreationData>;
using LinkEndCreationDataList = std::vector<LinkEndCreationDataPtr>;
using LinkEndCreationDataListPtr = std::shared_ptr<LinkEndCreationDataList>;
using LinkEndData = uml::actions::LinkEndData;
using LinkEndDataPtr = std::shared_ptr<LinkEndData>;
using LinkEndDataList = std::vector<LinkEndDataPtr>;
using LinkEndDataListPtr = std::shared_ptr<LinkEndDataList>;
using LinkEndDestructionData = uml::actions::LinkEndDestructionData;
using LinkEndDestructionDataPtr = std::shared_ptr<LinkEndDestructionData>;
using LinkEndDestructionDataList = std::vector<LinkEndDestructionDataPtr>;
using LinkEndDestructionDataListPtr = std::shared_ptr<LinkEndDestructionDataList>;
using LoopNode = uml::actions::LoopNode;
using LoopNodePtr = std::shared_ptr<LoopNode>;
using OutputPin = uml::actions::OutputPin;
using OutputPinPtr = std::shared_ptr<OutputPin>;
using OutputPinList = std::vector<OutputPinPtr>;
using OutputPinListPtr = std::shared_ptr<OutputPinList>;
using Pin = uml::actions::Pin;
using PinPtr = std::shared_ptr<Pin>;
using RaiseExceptionAction = uml::actions::RaiseExceptionAction;
using RaiseExceptionActionPtr = std::shared_ptr<RaiseExceptionAction>;
using ReadExtentAction = uml::actions::ReadExtentAction;
using ReadExtentActionPtr = std::shared_ptr<ReadExtentAction>;
using ReadIsClassifiedObjectAction = uml::actions::ReadIsClassifiedObjectAction;
using ReadIsClassifiedObjectActionPtr = std::shared_ptr<ReadIsClassifiedObjectAction>;
using ReadLinkAction = uml::actions::ReadLinkAction;
using ReadLinkActionPtr = std::shared_ptr<ReadLinkAction>;
using ReadSelfAction = uml::actions::ReadSelfAction;
using ReadSelfActionPtr = std::shared_ptr<ReadSelfAction>;
using ReadStructuralFeatureAction = uml::actions::ReadStructuralFeatureAction;
using ReadStructuralFeatureActionPtr = std::shared_ptr<ReadStructuralFeatureAction>;
using ReclassifyObjectAction = uml::actions::ReclassifyObjectAction;
using ReclassifyObjectActionPtr = std::shared_ptr<ReclassifyObjectAction>;
using ReduceAction = uml::actions::ReduceAction;
using ReduceActionPtr = std::shared_ptr<ReduceAction>;
using RemoveStructuralFeatureValueAction = uml::actions::RemoveStructuralFeatureValueAction;
using RemoveStructuralFeatureValueActionPtr = std::shared_ptr<RemoveStructuralFeatureValueAction>;
using ReplyAction = uml::actions::ReplyAction;
using ReplyActionPtr = std::shared_ptr<ReplyAction>;
using SendSignalAction = uml::actions::SendSignalAction;
using SendSignalActionPtr = std::shared_ptr<SendSignalAction>;
using StartClassifierBehaviorAction = uml::actions::StartClassifierBehaviorAction;
using StartClassifierBehaviorActionPtr = std::shared_ptr<StartClassifierBehaviorAction>;
using StartObjectBehaviorAction = uml::actions::StartObjectBehaviorAction;
using StartObjectBehaviorActionPtr = std::shared_ptr<StartObjectBehaviorAction>;
using StructuralFeatureAction = uml::actions::StructuralFeatureAction;
using StructuralFeatureActionPtr = std::shared_ptr<StructuralFeatureAction>;
using StructuredActivityNode = uml::actions::StructuredActivityNode;
using StructuredActivityNodePtr = std::shared_ptr<StructuredActivityNode>;
using StructuredActivityNodePtr_w = std::weak_ptr<StructuredActivityNode>;
using StructuredActivityNodeList = std::vector<StructuredActivityNodePtr>;
using StructuredActivityNodeListPtr = std::shared_ptr<StructuredActivityNodeList>;
using TestIdentityAction = uml::actions::TestIdentityAction;
using TestIdentityActionPtr = std::shared_ptr<TestIdentityAction>;
using UnmarshallAction = uml::actions::UnmarshallAction;
using UnmarshallActionPtr = std::shared_ptr<UnmarshallAction>;
using ValueSpecificationAction = uml::actions::ValueSpecificationAction;
using ValueSpecificationActionPtr = std::shared_ptr<ValueSpecificationAction>;
using WriteLinkAction = uml::actions::WriteLinkAction;
using WriteLinkActionPtr = std::shared_ptr<WriteLinkAction>;
using WriteStructuralFeatureAction = uml::actions::WriteStructuralFeatureAction;
using WriteStructuralFeatureActionPtr = std::shared_ptr<WriteStructuralFeatureAction>;

/*
 * Activites
 */
using Activity = uml::activities::Activity;
using ActivityPtr = std::shared_ptr<Activity>;
using ActivityPtr_w = std::weak_ptr<Activity>;
using ActivityEdge = uml::activities::ActivityEdge;
using ActivityEdgePtr = std::shared_ptr<ActivityEdge>;
using ActivityEdgePtr_w = std::weak_ptr<ActivityEdge>;
using ActivityEdgeList = std::vector<ActivityEdgePtr>;
using ActivityEdgeListPtr = std::shared_ptr<ActivityEdgeList>;
using ActivityFinalNode = uml::activities::ActivityFinalNode;
using ActivityFinalNodePtr = std::shared_ptr<ActivityFinalNode>;
using ActivityGroup = uml::activities::ActivityGroup;
using ActivityGroupPtr = std::shared_ptr<ActivityGroup>;
using ActivityGroupList = std::vector<ActivityGroupPtr>;
using ActivityGroupListPtr = std::shared_ptr<ActivityGroupList>;
using ActivityNode = uml::activities::ActivityNode;
using ActivityNodePtr = std::shared_ptr<ActivityNode>;
using ActivityNodeList = std::vector<ActivityNodePtr>;
using ActivityNodeListPtr = std::shared_ptr<ActivityNodeList>;
using ActivityParameterNode = uml::activities::ActivityParameterNode;
using ActivityParameterNodePtr = std::shared_ptr<ActivityParameterNode>;
using CentralBufferNode = uml::activities::CentralBufferNode;
using CentralBufferNodePtr = std::shared_ptr<CentralBufferNode>;
using ControlFlow = uml::activities::ControlFlow;
using ControlFlowPtr = std::shared_ptr<ControlFlow>;
using ControlNode = uml::activities::ControlNode;
using ControlNodePtr = std::shared_ptr<ControlNode>;
using DataStoreNode = uml::activities::DataStoreNode;
using DataStoreNodePtr = std::shared_ptr<DataStoreNode>;
using DecisionNode = uml::activities::DecisionNode;
using DecisionNodePtr = std::shared_ptr<DecisionNode>;
using ExceptionHandler = uml::activities::ExceptionHandler;
using ExceptionHandlerPtr = std::shared_ptr<ExceptionHandler>;
using ExceptionHandlerList = std::vector<ExceptionHandlerPtr>;
using ExceptionHandlerListPtr = std::shared_ptr<ExceptionHandlerList>;
using ExecutableNode = uml::activities::ExecutableNode;
using ExecutableNodePtr = std::shared_ptr<ExecutableNode>;
using ExecutableNodePtr_w = std::weak_ptr<ExecutableNode>;
using ExecutableNodeList = std::vector<ExecutableNodePtr>;
using ExecutableNodeListPtr = std::shared_ptr<ExecutableNodeList>;
using FinalNode = uml::activities::FinalNode;
using FinalNodePtr = std::shared_ptr<FinalNode>;
using FlowFinalNode = uml::activities::FlowFinalNode;
using FlowFinalNodePtr = std::shared_ptr<FlowFinalNode>;
using ForkNode = uml::activities::ForkNode;
using ForkNodePtr = std::shared_ptr<ForkNode>;
using InitialNode = uml::activities::InitialNode;
using InitialNodePtr = std::shared_ptr<InitialNode>;
using JoinNode = uml::activities::JoinNode;
using JoinNodePtr = std::shared_ptr<JoinNode>;
using MergeNode = uml::activities::MergeNode;
using MergeNodePtr = std::shared_ptr<MergeNode>;
using ObjectFlow = uml::activities::ObjectFlow;
using ObjectFlowPtr = std::shared_ptr<ObjectFlow>;
using ObjectNode = uml::activities::ObjectNode;
using ObjectNodePtr = std::shared_ptr<ObjectNode>;

/*
 * Classification
 */
using AggregationKind = uml::classification::AggregationKind;
using BehavioralFeature = uml::classification::BehavioralFeature;
using BehavioralFeaturePtr = std::shared_ptr<BehavioralFeature>;
using BehavioralFeaturePtr_w = std::weak_ptr<BehavioralFeature>;
using Classifier = uml::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;
using ClassifierPtr_w = std::weak_ptr<Classifier>;
using ClassifierList = std::vector<ClassifierPtr>;
using ClassifierListPtr = std::shared_ptr<ClassifierList>;
using Feature = uml::classification::Feature;
using FeaturePtr = std::shared_ptr<Feature>;
using FeatureList = std::vector<FeaturePtr>;
using FeatureListPtr = std::shared_ptr<FeatureList>;
using Generalization = uml::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;
using GeneralizationList = std::vector<GeneralizationPtr>;
using GeneralizationListPtr = std::shared_ptr<GeneralizationList>;
using InstanceSpecification = uml::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;
using InstanceSpecificationPtr_w = std::weak_ptr<InstanceSpecification>;
using InstanceValue = uml::classification::InstanceValue;
using InstanceValuePtr = std::shared_ptr<InstanceValue>;
using Operation = uml::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;
using OperationPtr_w = std::weak_ptr<Operation>;
using OperationList = std::vector<OperationPtr>;
using OperationListPtr = std::shared_ptr<OperationList>;
using Parameter = uml::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;
using ParameterDirectionKind = uml::classification::ParameterDirectionKind;
using ParameterList = std::vector<ParameterPtr>;
using ParameterListPtr = std::shared_ptr<ParameterList>;
using Property = uml::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;
using PropertyPtr_w = std::weak_ptr<Property>;
using PropertyList = std::vector<PropertyPtr>;
using PropertyListPtr = std::shared_ptr<PropertyList>;
using RedefinableElement = uml::classification::RedefinableElement;
using RedefinableElementPtr = std::shared_ptr<RedefinableElement>;
using RedefinableElementList = std::vector<RedefinableElementPtr>;
using RedefinableElementListPtr = std::shared_ptr<RedefinableElementList>;
using Slot = uml::classification::Slot;
using SlotPtr = std::shared_ptr<Slot>;
using SlotList = std::vector<SlotPtr>;
using SlotListPtr = std::shared_ptr<SlotList>;
using StructuralFeature = uml::classification::StructuralFeature;
using StructuralFeaturePtr = std::shared_ptr<StructuralFeature>;
using StructuralFeatureList = std::vector<StructuralFeaturePtr>;
using StructuralFeatureListPtr = std::shared_ptr<StructuralFeatureList>;

/*
 * CommonBehavior
 */
using Behavior = uml::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;
using BehavioredClassifier = uml::commonbehavior::BehavioredClassifier;
using BehavioredClassifierPtr = std::shared_ptr<BehavioredClassifier>;
using BehavioredClassifierPtr_w = std::weak_ptr<BehavioredClassifier>;
using BehaviorList = std::vector<BehaviorPtr>;
using BehaviorListPtr = std::shared_ptr<BehaviorList>;
using CallConcurrencyKind = uml::commonbehavior::CallConcurrencyKind;
using CallEvent = uml::commonbehavior::CallEvent;
using CallEventPtr = std::shared_ptr<CallEvent>;
using Event = uml::commonbehavior::Event;
using EventPtr = std::shared_ptr<Event>;
using FunctionBehavior = uml::commonbehavior::FunctionBehavior;
using FunctionBehaviorPtr = std::shared_ptr<FunctionBehavior>;
using MessageEvent = uml::commonbehavior::MessageEvent;
using MessageEventPtr = std::shared_ptr<MessageEvent>;
using OpaqueBehavior = uml::commonbehavior::OpaqueBehavior;
using OpaqueBehaviorPtr = std::shared_ptr<OpaqueBehavior>;
using SignalEvent = uml::commonbehavior::SignalEvent;
using SignalEventPtr = std::shared_ptr<SignalEvent>;
using Trigger = uml::commonbehavior::Trigger;
using TriggerPtr = std::shared_ptr<Trigger>;
using TriggerList = std::vector<TriggerPtr>;
using TriggerListPtr = std::shared_ptr<TriggerList>;

/*
 * CommonStructure
 */
using Abstraction = uml::commonstructure::Abstraction; // PSCS-specific
using AbstractionPtr = std::shared_ptr<Abstraction>; // PSCS-specific
using Comment = uml::commonstructure::Comment;
using CommentPtr = std::shared_ptr<Comment>;
using CommentList = std::vector<CommentPtr>;
using CommentListPtr = std::shared_ptr<CommentList>;
using Dependency = uml::commonstructure::Dependency; // PSCS-specific
using DependencyPtr = std::shared_ptr<Dependency>; // PSCS-specific
using DependencyPtr_w = std::weak_ptr<Dependency>; // PSCS-specific
using DependencyList = std::vector<DependencyPtr>; // PSCS-specific
using DependencyListPtr = std::shared_ptr<DependencyList>; // PSCS-specific
using Element = uml::commonstructure::Element;
using ElementPtr = std::shared_ptr<Element>;
using ElementPtr_w = std::weak_ptr<Element>;
using ElementImport = uml::commonstructure::ElementImport;
using ElementImportPtr = std::shared_ptr<ElementImport>;
using ElementImportList = std::vector<ElementImportPtr>;
using ElementImportListPtr = std::shared_ptr<ElementImportList>;
using ElementList = std::vector<ElementPtr>;
using ElementListPtr = std::shared_ptr<ElementList>;
using MultiplicityElement = uml::commonstructure::MultiplicityElement;
using MultiplicityElementPtr = std::shared_ptr<MultiplicityElement>;
using NamedElement = uml::commonstructure::NamedElement;
using NamedElementPtr = std::shared_ptr<NamedElement>;
using NamedElementList = std::vector<NamedElementPtr>;
using NamedElementListPtr = std::shared_ptr<NamedElementList>;
using Namespace = uml::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;
using NamespacePtr_w = std::weak_ptr<Namespace>;
using PackageableElement = uml::commonstructure::PackageableElement;
using PackageableElementPtr = std::shared_ptr<PackageableElement>;
using PackageableElementList = std::vector<PackageableElementPtr>;
using PackageableElementListPtr = std::shared_ptr<PackageableElementList>;
using PackageImport = uml::commonstructure::PackageImport;
using PackageImportPtr = std::shared_ptr<PackageImport>;
using PackageImportList = std::vector<PackageImportPtr>;
using PackageImportListPtr = std::shared_ptr<PackageImportList>;
using Realization = uml::commonstructure::Realization; // PSCS-specific
using RealizationPtr = std::shared_ptr<Realization>; // PSCS-specific
using Type = uml::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;
using TypedElement = uml::commonstructure::TypedElement;
using TypedElementPtr = std::shared_ptr<TypedElement>;
using TypeList = std::vector<TypePtr>;
using TypeListPtr = std::shared_ptr<TypeList>;
using Usage = uml::commonstructure::Usage; // PSCS-specific
using UsagePtr = std::shared_ptr<Usage>; // PSCS-specific
using VisibilityKind = uml::commonstructure::VisibilityKind;

/*
 * Packages
 */
using Package = uml::packages::Package;
using PackagePtr = std::shared_ptr<Package>;
using PackagePtr_w = std::weak_ptr<Package>;
using PackageList = std::vector<PackagePtr>;
using PackageListPtr = std::shared_ptr<PackageList>;
using Profile = uml::packages::Profile;
using ProfilePtr = std::shared_ptr<Profile>;
using Stereotype = uml::packages::Stereotype;
using StereotypePtr = std::shared_ptr<Stereotype>;
using StereotypeList = std::vector<StereotypePtr>;
using StereotypeListPtr = std::shared_ptr<StereotypeList>;

/*
 * SimpleClassifiers
 */
using DataType = uml::simpleclassifiers::DataType;
using DataTypePtr = std::shared_ptr<DataType>;
using DataTypePtr_w = std::weak_ptr<DataType>;
using Enumeration = uml::simpleclassifiers::Enumeration;
using EnumerationPtr = std::shared_ptr<Enumeration>;
using EnumerationPtr_w = std::weak_ptr<Enumeration>;
using EnumerationLiteral = uml::simpleclassifiers::EnumerationLiteral;
using EnumerationLiteralPtr = std::shared_ptr<EnumerationLiteral>;
using EnumerationLiteralList = std::vector<EnumerationLiteralPtr>;
using EnumerationLiteralListPtr = std::shared_ptr<EnumerationLiteralList>;
using Interface = uml::simpleclassifiers::Interface; // PSCS-specific
using InterfacePtr = std::shared_ptr<Interface>; // PSCS-specific
using InterfacePtr_w = std::weak_ptr<Interface>; // PSCS-specific
using InterfaceList = std::vector<InterfacePtr>; // PSCS-specific
using InterfaceListPtr = std::shared_ptr<InterfaceList>; // PSCS-specific
using InterfaceRealization = uml::simpleclassifiers::InterfaceRealization; // PSCS-specific
using InterfaceRealizationPtr = std::shared_ptr<InterfaceRealization>; // PSCS-specific
using InterfaceRealizationList = std::vector<InterfaceRealizationPtr>; // PSCS-specific
using InterfaceRealizationListPtr = std::shared_ptr<InterfaceRealizationList>; // PSCS-specific
using PrimitiveType = uml::simpleclassifiers::PrimitiveType;
using PrimitiveTypePtr = std::shared_ptr<PrimitiveType>;
using PrimitiveTypeList = std::vector<PrimitiveTypePtr>;
using PrimitiveTypeListPtr = std::shared_ptr<PrimitiveTypeList>;
using Reception = uml::simpleclassifiers::Reception;
using ReceptionPtr = std::shared_ptr<Reception>;
using ReceptionList = std::vector<ReceptionPtr>;
using ReceptionListPtr = std::shared_ptr<ReceptionList>;
using Signal = uml::simpleclassifiers::Signal;
using SignalPtr = std::shared_ptr<Signal>;
using SignalPtr_w = std::weak_ptr<Signal>;

/*
 * StructuredClassifiers
 */
using Association = uml::structuredclassifiers::Association;
using AssociationPtr = std::shared_ptr<Association>;
using AssociationPtr_w = std::weak_ptr<Association>;
using Class_ = uml::structuredclassifiers::Class_;
using Class_Ptr = std::shared_ptr<Class_>;
using Class_Ptr_w = std::weak_ptr<Class_>;
using Class_List = std::vector<Class_Ptr>;
using Class_ListPtr = std::shared_ptr<Class_List>;
using ConnectableElement = uml::structuredclassifiers::ConnectableElement; // PSCS-specific
using ConnectableElementPtr = std::shared_ptr<ConnectableElement>; // PSCS-specific
using Connector = uml::structuredclassifiers::Connector; // PSCS-specific
using ConnectorPtr = std::shared_ptr<Connector>; // PSCS-specific
using ConnectorList = std::vector<ConnectorPtr>; // PSCS-specific
using ConnectorListPtr = std::shared_ptr<ConnectorList>; // PSCS-specific
using ConnectorEnd = uml::structuredclassifiers::ConnectorEnd; // PSCS-specific
using ConnectorEndPtr = std::shared_ptr<ConnectorEnd>; // PSCS-specific
using ConnectorEndPtr_w = std::weak_ptr<ConnectorEnd>; // PSCS-specific
using ConnectorEndList = std::vector<ConnectorEndPtr>; // PSCS-specific
using ConnectorEndListPtr = std::shared_ptr<ConnectorEndList>; //PSCS-specifi
using EncapsulatedClassifier = uml::structuredclassifiers::EncapsulatedClassifier; // PSCS-specific
using EncapsulatedClassifierPtr = std::shared_ptr<EncapsulatedClassifier>; // PSCS-specific
using Port = uml::structuredclassifiers::Port; // PSCS-specific
using PortPtr = std::shared_ptr<Port>; // PSCS-specific
using PortList = std::vector<PortPtr>; // PSCS-specific
using PortListPtr = std::shared_ptr<PortList>; // PSCS-specific
using StructuredClassifier = uml::structuredclassifiers::StructuredClassifier; // PSCS-specific
using StructuredClassifierPtr = std::shared_ptr<StructuredClassifier>; // PSCS-specific

/*
 * Values
 */
using LiteralBoolean = uml::values::LiteralBoolean;
using LiteralBooleanPtr = std::shared_ptr<LiteralBoolean>;
using LiteralInteger = uml::values::LiteralInteger;
using LiteralIntegerPtr = std::shared_ptr<LiteralInteger>;
using LiteralNull = uml::values::LiteralNull;
using LiteralNullPtr = std::shared_ptr<LiteralNull>;
using LiteralReal = uml::values::LiteralReal;
using LiteralRealPtr = std::shared_ptr<LiteralReal>;
using LiteralSpecification = uml::values::LiteralSpecification;
using LiteralSpecificationPtr = std::shared_ptr<LiteralSpecification>;
using LiteralString = uml::values::LiteralString;
using LiteralStringPtr = std::shared_ptr<LiteralString>;
using LiteralUnlimitedNatural = uml::values::LiteralUnlimitedNatural;
using LiteralUnlimitedNaturalPtr = std::shared_ptr<LiteralUnlimitedNatural>;
using OpaqueExpression = uml::values::OpaqueExpression; // PSCS-specific
using OpaqueExpressionPtr = std::shared_ptr<OpaqueExpression>; // PSCS-specific
using ValueSpecification = uml::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;
using ValueSpecificationList = std::vector<ValueSpecificationPtr>;
using ValueSpecificationListPtr = std::shared_ptr<ValueSpecificationList>;

#ifndef AS
	#define AS(T, SP) std::dynamic_pointer_cast<T>(SP)
#endif
#ifndef IS
	#define IS(T, SP) (std::dynamic_pointer_cast<T>(SP)!=nullptr)
#endif

#endif /* UML_FWD_H_ */
