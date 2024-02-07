/*
 * CS_Object.cpp
 *
 *  Created on: 30.01.2024
 *      Author: maha6913
 */

#include <pscs/semantics/structuredclassifiers/CS_Object.h>

#include <fuml/semantics/actions/CallOperationActionActivation.h>
#include <fuml/semantics/actions/SendSignalActionActivation.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <pscs/semantics/commonbehavior/CS_CallEventExecution.h>
#include <pscs/semantics/loci/CS_ExecutionFactory.h>
#include <pscs/semantics/loci/CS_Locus.h>
#include <pscs/semantics/structuredclassifiers/CS_DispatchOperationOfInterfaceStrategy.h>
#include <pscs/semantics/structuredclassifiers/CS_InteractionPoint.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <pscs/semantics/structuredclassifiers/CS_RequestPropagationStrategy.h>
#include <pscs/semantics/structuredclassifiers/CS_StructuralFeatureOfInterfaceAccessStrategy.h>
#include <uml/classification/Operation.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/structuredclassifiers/Port.h>

void CS_Object::setThisCS_ObjectPtr(CS_ObjectPtr_w thisCS_ObjectPtr)
{
	this->thisCS_ObjectPtr = thisCS_ObjectPtr;
	Object_::setThisObject_Ptr(thisCS_ObjectPtr);
}

ExecutionPtr CS_Object::dispatchIn(const OperationPtr& operation, const CS_InteractionPointPtr& interactionPoint)
{
	// If the interaction point refers to a behavior port, the operation call is
	// dispatched
	// to the object owning the behavior port. This may result in the method being
	// handled
	// by the method defined for the operation at the object or through a call event
	// handled
	// by the classifier behavior of the owning object. The latter case only occurs
	// if the
	// dispatched operation has no implementation
	// If it does not refer to a behavior port, select appropriate delegation links
	// from interactionPoint, and propagates the operation call through
	// these links
	ExecutionPtr execution = nullptr;
	if (interactionPoint->definingPort->isBehavior)
	{
		execution = this->dispatch(operation);
		if (CS_CallEventExecutionPtr cS_CallEventExecution = std::dynamic_pointer_cast<CS_CallEventExecution>(execution))
		{
			cS_CallEventExecution->interactionPoint = interactionPoint;
		}
	}
	else
	{
		bool operationIsProvided = true;
		ReferenceListPtr potentialTargets(new ReferenceList());
		CS_LinkListPtr cddLinks = this->getLinks(interactionPoint);
		for (const CS_LinkPtr& cddLink : *cddLinks)
		{
			ReferenceListPtr validTargets = this->selectTargetsForDispatching(cddLink,
					interactionPoint, uml::structuredclassifiers::ConnectorKind::delegation, operation, operationIsProvided);

			for (const ReferencePtr& validTarget : *validTargets)
			{
				potentialTargets->push_back(validTarget);
			}
		}
		// If potentialTargets is empty, no delegation target have been found,
		// and the operation call will be lost
		if (!(potentialTargets->empty()))
		{
			CS_RequestPropagationStrategyPtr strategy =
					std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
			// Choose one target non-deterministically
			ReferenceListPtr targets = strategy->select(potentialTargets, CallOperationActionActivationPtr(new CallOperationActionActivation()));
			const ReferencePtr& target = targets->at(0);
			execution = target->dispatch(operation);
		}
	}
	return execution;
}

void CS_Object::sendIn(const EventOccurrencePtr& eventOccurrence, const CS_InteractionPointPtr& interactionPoint)
{
	// 1] If the interaction is a behavior port then sends the event occurrence to
	// the target
	// object using operation send.
	// 2] If this is not a behavior port, select appropriate delegation targets from
	// interactionPoint,
	// and propagates the event occurrence to these targets
	if (interactionPoint->definingPort->isBehavior)
	{
		this->send(eventOccurrence);
	}
	else
	{
		bool toInternal = true;
		ReferenceListPtr potentialTargets(new ReferenceList());
		CS_LinkListPtr cddLinks = this->getLinks(interactionPoint);
		for (const CS_LinkPtr& cddLink : *cddLinks)
		{
			ReferenceListPtr validTargets = this->selectTargetsForSending(cddLink,
					interactionPoint, uml::structuredclassifiers::ConnectorKind::delegation, toInternal);
			for (const ReferencePtr& validTarget : *validTargets)
			{
				potentialTargets->push_back(validTarget);
			}
		}
		// If potential targets is empty, no delegation target has been found,
		// and the signal is lost
		// Otherwise, do the following concurrently
		for (const ReferencePtr& target : *potentialTargets)
		{
			target->send(eventOccurrence);
		}
	}
}

ReferenceListPtr CS_Object::selectTargetsForSending(const CS_LinkPtr& link, const CS_InteractionPointPtr& interactionPoint,
	uml::structuredclassifiers::ConnectorKind connectorKind, bool toInternal)
{
	// From the given link, signal and interaction point, retrieves potential
	// targets (i.e. end values of link)
	// through which request can be propagated
	// These targets are attached to interaction point through the given link, and
	// respect the following rules:
	// - if toInternal is true, connectorKind must be Delegation, the given link has
	// to target the internals of this CS_Object
	// - if toInternal is false, the given link has to target the environment of
	// this CS_Object.
	ReferenceListPtr potentialTargets(new ReferenceList());
	if (toInternal && connectorKind == uml::structuredclassifiers::ConnectorKind::delegation)
	{
		if (this->getLinkKind(link, interactionPoint) == CS_LinkKind::ToInternal)
		{
			unsigned int i = 1,
					linkFeatureValuesSize = link->getFeatureValues()->size();
			while (i <= linkFeatureValuesSize)
			{
				const ValueListPtr& values = link->getFeatureValues()->at(i - 1)->values;
				if (!values->empty())
				{
					unsigned int j = 1, valuesSize = values->size();
					while (j <= valuesSize)
					{
						ReferencePtr cddTarget = std::dynamic_pointer_cast<Reference>(values->at(j - 1));
						if (!cddTarget->equals(interactionPoint))
						{
							potentialTargets->push_back(cddTarget);
						}
						j++;
					}
				}
				i++;
			}
		}
	}
	else
	{ // to Environment
		if (this->getLinkKind(link, interactionPoint) == CS_LinkKind::ToEnvironment)
		{
			unsigned int i = 1,
					linkFeatureValuesSize = link->getFeatureValues()->size();
			while (i <= linkFeatureValuesSize)
			{
				const ValueListPtr& values = link->getFeatureValues()->at(i - 1)->values;
				if (!values->empty())
				{
					if(ReferencePtr reference = std::dynamic_pointer_cast<Reference>(values->at(0)))
					{
						const ReferencePtr& cddTarget = reference;
						if (connectorKind == uml::structuredclassifiers::ConnectorKind::assembly)
						{
							if (std::dynamic_pointer_cast<CS_InteractionPoint>(cddTarget) == nullptr)
							{ // This is an assembly link
								potentialTargets->push_back(cddTarget);
							}
							else
							{
								// This is an assembly if the interaction point is not a feature value
								// for a container of this CS_Object
								CS_ObjectListPtr directContainers = this->getDirectContainers();
								bool isAssembly = true;
								unsigned int j = 1;
								if (!this->hasValueForAFeature(cddTarget))
								{
									unsigned int directContainersSize = directContainers->size();
									while (isAssembly && j <= directContainersSize)
									{
										const CS_ObjectPtr& container = directContainers->at(j - 1);
										if (container->hasValueForAFeature(cddTarget))
										{
											isAssembly = false;
										}
										j++;
									}
								}
								else
								{
									isAssembly = false;
								}
								if (isAssembly)
								{
									potentialTargets->push_back(cddTarget);
								}
							}
						}
						else
						{ // delegation
						  // This is a delegation if the target is an interaction point
						  // and if this interaction is a feature value for a container of this CS_Object
							if (std::dynamic_pointer_cast<CS_InteractionPoint>(cddTarget))
							{
								CS_ObjectListPtr directContainers = this->getDirectContainers();
								bool isDelegation = false;
								unsigned int j = 1,
										directContainersSize = directContainers->size();
								while (!isDelegation && j <= directContainersSize)
								{
									const CS_ObjectPtr& container = directContainers->at(j - 1);
									if (container->hasValueForAFeature(cddTarget))
									{
										isDelegation = true;
									}
									j++;
								}
								if (isDelegation)
								{
									potentialTargets->push_back(cddTarget);
								}
							}
						}
					}
				}
				i++;
			}
		}
	}
	return potentialTargets;
}

ReferenceListPtr CS_Object::selectTargetsForDispatching(const CS_LinkPtr& link, const CS_InteractionPointPtr& interactionPoint,
	uml::structuredclassifiers::ConnectorKind connectorKind, const OperationPtr& operation, bool toInternal)
{
	// From the given link, operation and interaction point, retrieves potential
	// targets (i.e. end values of link)
	// through which request can be propagated
	// These targets are attached to interaction point through the given link, and
	// respect the following rules:
	// - if isProvided is true, connectorKind must be Delegation, the given link has
	// to target the internals of this CS_Object,
	// and a valid target must provide the Operation
	// - if isProvided is false, the given link has to target the environment of
	// this CS_Object.
	// - if connectorKind is assembly, a valid target has to provide the operation
	// - if connectorKind is delegation, a valid target has to require the operation
	ReferenceListPtr potentialTargets(new ReferenceList());
	if (toInternal && connectorKind == uml::structuredclassifiers::ConnectorKind::delegation)
	{
		if (this->getLinkKind(link, interactionPoint) == CS_LinkKind::ToInternal)
		{
			unsigned int i = 1,
					linkFeatureValuesSize = link->getFeatureValues()->size();
			while (i <= linkFeatureValuesSize)
			{
				const ValueListPtr& values = link->getFeatureValues()->at(i - 1)->values;
				if (!values->empty())
				{
					if(ReferencePtr reference = std::dynamic_pointer_cast<Reference>(values->at(0)))
					{
						const ReferencePtr& cddTarget = reference;
						if (cddTarget != interactionPoint && this->isOperationProvided(cddTarget, operation))
						{
							potentialTargets->push_back(cddTarget);
						}
					}
				}
				i++;
			}
		}
	}
	else
	{ // to environment
		if (this->getLinkKind(link, interactionPoint) == CS_LinkKind::ToEnvironment)
		{
			unsigned int i = 1,
					linkFeatureValuesSize = link->getFeatureValues()->size();
			while (i <= linkFeatureValuesSize)
			{
				const ValueListPtr& values = link->getFeatureValues()->at(i - 1)->values;
				if (!values->empty())
				{
					if(ReferencePtr reference = std::dynamic_pointer_cast<Reference>(values->at(0)))
					{
						const ReferencePtr& cddTarget = reference;
						if (connectorKind == uml::structuredclassifiers::ConnectorKind::assembly)
						{
							if (std::dynamic_pointer_cast<CS_InteractionPoint>(cddTarget) == nullptr)
							{ // This is an assembly link
								if (this->isOperationProvided(cddTarget, operation))
								{
									potentialTargets->push_back(cddTarget);
								}
							}
							else
							{
								// This is an assembly if the interaction point is not a feature value
								// for a container of this CS_Object
								CS_ObjectListPtr directContainers = this->getDirectContainers();
								bool isAssembly = true;
								unsigned int j = 1,
										directContainersSize = directContainers->size();
								if (!this->hasValueForAFeature(cddTarget))
								{
									while (isAssembly && j <= directContainersSize)
									{
										const CS_ObjectPtr& container = directContainers->at(j - 1);
										if (container->hasValueForAFeature(cddTarget))
										{
											isAssembly = false;
										}
										j++;
									}
								}
								else
								{
									isAssembly = false;
								}
								if (isAssembly)
								{
									if (this->isOperationProvided(cddTarget, operation))
									{
										potentialTargets->push_back(cddTarget);
									}
								}
							}
						}
						else
						{ // delegation
						  // This is a delegation if the target is an interaction point
						  // and if this interaction is a feature value for a container of this CS_Object
							if (std::dynamic_pointer_cast<CS_InteractionPoint>(cddTarget))
							{
								CS_ObjectListPtr directContainers = this->getDirectContainers();
								bool isDelegation = false;
								unsigned int j = 1,
										directContainersSize = directContainers->size();
								while (!isDelegation && j <= directContainersSize)
								{
									const CS_ObjectPtr& container = directContainers->at(j - 1);
									if (container->hasValueForAFeature(cddTarget))
									{
										isDelegation = true;
									}
									j++;
								}
								if (isDelegation)
								{
									if (this->isOperationRequired(cddTarget, operation))
									{
										potentialTargets->push_back(cddTarget);
									}
								}
							}
						}
					}
				}
				i++;
			}
		}
	}
	return potentialTargets;
}

void CS_Object::sendOut(const EventOccurrencePtr& eventOccurrence, const CS_InteractionPointPtr& interactionPoint)
{
	// Select appropriate delegation links from interactionPoint,
	// and propagates the event occurrence through these links
	// Appropriate links are links which target elements
	// in the environment of this CS_Object.
	// These can be delegation links (i.e, the targeted elements must
	// require a reception for the signal) or assembly links (i.e., the target
	// elements
	// must provide a reception for the signal)
	bool notToInternal = false; // i.e. to environment
	ReferenceListPtr allPotentialTargets(new ReferenceList());
	ReferenceListPtr targetsForSendingIn(new ReferenceList());
	ReferenceListPtr targetsForSendingOut(new ReferenceList());
	CS_LinkListPtr cddLinks = this->getLinks(interactionPoint);
	for (const CS_LinkPtr& cddLink : *cddLinks)
	{
		ReferenceListPtr validAssemblyTargets = this->selectTargetsForSending(cddLink,
				interactionPoint, uml::structuredclassifiers::ConnectorKind::assembly, notToInternal);
		for (const ReferencePtr& validAssemblyTarget : *validAssemblyTargets)
		{
			allPotentialTargets->push_back(validAssemblyTarget);
			targetsForSendingIn->push_back(validAssemblyTarget);
		}
		ReferenceListPtr validDelegationTargets = this->selectTargetsForSending(cddLink,
				interactionPoint, uml::structuredclassifiers::ConnectorKind::delegation, notToInternal);
		for (const ReferencePtr& validDelegationTarget : *validDelegationTargets)
		{
			allPotentialTargets->push_back(validDelegationTarget);
			targetsForSendingOut->push_back(validDelegationTarget);
		}
	}

	CS_RequestPropagationStrategyPtr strategy = std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
	ReferenceListPtr selectedTargets = strategy->select(allPotentialTargets, SendSignalActionActivationPtr(new SendSignalActionActivation()));
	for (const ReferencePtr& target : *selectedTargets)
	{
		for (const ReferencePtr& cddTarget : *targetsForSendingIn)
		{
			if (cddTarget == target)
			{
				target->send(eventOccurrence);
			}
		}
		for (const ReferencePtr& targetForSendingOut : *targetsForSendingOut)
		{
			// The target must be an interaction point
			// i.e. a delegation connector for a required reception can only target a port
			CS_InteractionPointPtr cddTarget = std::dynamic_pointer_cast<CS_InteractionPoint>(targetForSendingOut);
			if (cddTarget == target)
			{
				const CS_ReferencePtr& owner = cddTarget->owner;
				owner->sendOut(eventOccurrence, cddTarget);
			}
		}
	}
}

ExecutionPtr CS_Object::dispatchOut(const OperationPtr& operation, const CS_InteractionPointPtr& interactionPoint)
{
	// Select appropriate delegation links from interactionPoint,
	// and propagates the operation call through these links
	// Appropriate links are links which target elements
	// in the environment of this CS_Object.
	// These can be delegation links (i.e, the targeted elements must
	// require the operation) or assembly links (i.e., the target elements
	// must provide the operation)
	ExecutionPtr execution = nullptr;
	bool notToInternal = false; // i.e. to environment
	ReferenceListPtr allPotentialTargets(new ReferenceList());
	ReferenceListPtr targetsForDispatchingIn(new ReferenceList());
	ReferenceListPtr targetsForDispatchingOut(new ReferenceList());
	CS_LinkListPtr cddLinks = this->getLinks(interactionPoint);
	for (const CS_LinkPtr& cddLink : *cddLinks)
	{
		ReferenceListPtr validAssemblyTargets = this->selectTargetsForDispatching(cddLink,
				interactionPoint, uml::structuredclassifiers::ConnectorKind::assembly, operation, notToInternal);
		for (const ReferencePtr& validAssemblyTarget : *validAssemblyTargets)
		{
			allPotentialTargets->push_back(validAssemblyTarget);
			targetsForDispatchingIn->push_back(validAssemblyTarget);
		}
		ReferenceListPtr validDelegationTargets = this->selectTargetsForDispatching(cddLink,
				interactionPoint, uml::structuredclassifiers::ConnectorKind::delegation, operation, notToInternal);
		for (const ReferencePtr& validDelegationTarget : *validDelegationTargets)
		{
			allPotentialTargets->push_back(validDelegationTarget);
			targetsForDispatchingOut->push_back(validDelegationTarget);
		}
	}

	CS_RequestPropagationStrategyPtr strategy = std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
	ReferenceListPtr selectedTargets = strategy->select(allPotentialTargets, SendSignalActionActivationPtr(new SendSignalActionActivation()));
	for (const ReferencePtr& target : *selectedTargets)
	{
		unsigned int targetsForDispatchingInSize = targetsForDispatchingIn->size();
		for (unsigned int k = 0; k < targetsForDispatchingInSize && execution == nullptr; k++)
		{
			const ReferencePtr& cddTarget = targetsForDispatchingIn->at(k);
			if (cddTarget == target)
			{
				execution = target->dispatch(operation);
			}
		}
		unsigned int targetsForDispatchingOutSize = targetsForDispatchingOut->size();
		for (unsigned int k = 0; k < targetsForDispatchingOutSize && execution == nullptr; k++)
		{
			// The target must be an interaction point
			// i.e. a delegation connector for a required operation can only target a port
			CS_InteractionPointPtr cddTarget = std::dynamic_pointer_cast<CS_InteractionPoint>(targetsForDispatchingOut->at(k));
			if (cddTarget == target)
			{
				const CS_ReferencePtr& owner = cddTarget->owner;
				execution = owner->dispatchOut(operation, cddTarget);
			}
		}
	}
	return execution;
}

FeatureValuePtr CS_Object::getFeatureValue(const StructuralFeaturePtr& feature)
{
	// In the case where the feature belongs to an Interface,
	// fUML semantics is extended in the sense that reading is
	// delegated to a CS_StructuralFeatureOfInterfaceAccessStrategy
	if (std::dynamic_pointer_cast<Interface>(feature->namespace_.lock()))
	{
		CS_StructuralFeatureOfInterfaceAccessStrategyPtr readStrategy = std::dynamic_pointer_cast<CS_StructuralFeatureOfInterfaceAccessStrategy>(locus->factory->getStrategy("structuralFeature"));
		return readStrategy->read(thisCS_ObjectPtr.lock(), feature);
	}
	else
	{
		return CompoundValue::getFeatureValue(feature);
	}
}

void CS_Object::setFeatureValue(const StructuralFeaturePtr& feature, const ValueListPtr& values, int position)
{
	// In the case where the feature belongs to an Interface,
	// fUML semantics is extended in the sense that writing is
	// delegated to a CS_StructuralFeatureOfInterfaceAccessStrategy
	if (std::dynamic_pointer_cast<Interface>(feature->namespace_.lock()))
	{
		CS_StructuralFeatureOfInterfaceAccessStrategyPtr writeStrategy = std::dynamic_pointer_cast<CS_StructuralFeatureOfInterfaceAccessStrategy>(locus->factory->getStrategy("structuralFeature"));
		writeStrategy->write(thisCS_ObjectPtr.lock(), feature, values, position);
	}
	else
	{
		CompoundValue::setFeatureValue(feature, values, position);
	}
}

bool CS_Object::contains(const Object_Ptr& object_)
{
	// Determines if the object given as a parameter is directly
	// or indirectly contained by this CS_Object
	bool objectIsContained = this->directlyContains(object_);
	// if object is not directly contained, restart the research
	// recursively on the objects owned by this CS_Object
	unsigned int featureValuesSize = featureValues->size();
	for (unsigned int i = 0; i < featureValuesSize && !objectIsContained; i++)
	{
		const FeatureValuePtr& featureValue = featureValues->at(i);
		const ValueListPtr& values = featureValue->values;
		unsigned int valuesSize = values->size();
		for (unsigned int j = 0; j < valuesSize && !objectIsContained; j++)
		{
			const ValuePtr& value = values->at(j);
			if (CS_ObjectPtr cS_Object_ = std::dynamic_pointer_cast<CS_Object>(value))
			{
				objectIsContained = cS_Object_->contains(object_);
			}
			else if (CS_ReferencePtr reference = std::dynamic_pointer_cast<CS_Reference>(value))
			{
				const CS_ObjectPtr& referent = reference->compositeReferent;
				objectIsContained = referent->contains(object_);
			}
		}
	}
	return objectIsContained;
}

bool CS_Object::directlyContains(const Object_Ptr& object_)
{
	// Determines if the object given as a parameter is directly
	// contained by this CS_Object
	bool objectIsContained = false;
	unsigned int featureValuesSize = featureValues->size();
	for (unsigned int i = 0; i < featureValuesSize && !objectIsContained; i++)
	{
		const FeatureValuePtr& featureValue = featureValues->at(i);
		const ValueListPtr& values = featureValue->values;
		unsigned int valuesSize = values->size();
		for (unsigned int j = 0; j < valuesSize && !objectIsContained; j++)
		{
			const ValuePtr& value = values->at(j);
			if (value == object_)
			{
				objectIsContained = true;
			}
			else if (CS_ReferencePtr reference = std::dynamic_pointer_cast<CS_Reference>(value))
			{
				objectIsContained = reference->referent == object_;
			}
		}
	}
	return objectIsContained;
}

CS_ObjectListPtr CS_Object::getDirectContainers()
{
	// Retrieves all the extensional values at this locus which are direct
	// containers for this CS_Object
	// An extensional value is a direct container for an object if:
	// - it is a CS_Object
	// - it directly contains this object (i.e.
	// CS_Object.directlyContains(Object)==true)
	CS_ObjectListPtr containers(new CS_ObjectList());
	ExtensionalValueListPtr extensionalValues = locus->extensionalValues;
	for (const ExtensionalValuePtr& extensionalValue : *extensionalValues)
	{
		if (extensionalValue != thisCS_ObjectPtr.lock())
		{
			if(CS_ObjectPtr cS_object = std::dynamic_pointer_cast<CS_Object>(extensionalValue))
			{
				const CS_ObjectPtr& cddContainer = cS_object;
				if (cddContainer->directlyContains(thisCS_ObjectPtr.lock()))
				{
					containers->push_back(cddContainer);
				}
			}
		}
	}
	return containers;
}

bool CS_Object::isOperationProvided(const ReferencePtr& reference, const OperationPtr& operation)
{
	// Determines if the given reference provides the operation
	// If the reference is an interaction point, it provides the operation if this
	// operation
	// is a member of one of its provided interfaces
	// If the reference is NOT an interactionPoint, it provides this operation if
	// this operation is
	// an operation of one of its type, or one of its type provides a realization
	// for this operation (in the case
	// where the namespace of this Operation is an interface)
	bool isProvided = false;
	if (CS_InteractionPointPtr interactionPoint = std::dynamic_pointer_cast<CS_InteractionPoint>(reference))
	{
		if (std::dynamic_pointer_cast<Interface>(operation->owner.lock()))
		{
			// We have to look in provided interfaces of the port if
			// they define directly or indirectly the Operation
			unsigned int interfaceIndex = 1;
			// Iterates on provided interfaces of the port
			const InterfaceListPtr& providedInterfaces = interactionPoint->definingPort->provided;
			unsigned int providedInterfacesSize = providedInterfaces->size();
			while (interfaceIndex <= providedInterfacesSize && !isProvided)
			{
				const InterfacePtr& interface_ = providedInterfaces->at(interfaceIndex - 1);
				// Iterates on members of the current Interface
				unsigned int memberIndex = 1,
						interfaceMemberSize = interface_->member()->size();
				while (memberIndex <= interfaceMemberSize && !isProvided)
				{
					const NamedElementPtr& cddOperation = interface_->member()->at(memberIndex - 1);
					if (std::dynamic_pointer_cast<Operation>(cddOperation))
					{
						isProvided = operation == cddOperation;
					}
					memberIndex++;
				}
				interfaceIndex++;
			}
		}
	}
	else
	{
		// We have to look if one of the Classifiers typing this reference
		// directly or indirectly provides this operation
		ClassifierListPtr types = reference->getTypes();
		unsigned int typeIndex = 1,
				typesSize = types->size();
		while (typeIndex <= typesSize && !isProvided)
		{
			if (Class_Ptr class_ = std::dynamic_pointer_cast<Class_>(types->at(typeIndex - 1)))
			{
				unsigned int memberIndex = 1;
				const NamedElementListPtr& members = class_->member();
				unsigned int membersSize = members->size();
				while (memberIndex <= membersSize && !isProvided)
				{
					const NamedElementPtr& member = members->at(memberIndex - 1);
					if (OperationPtr cddOperation = std::dynamic_pointer_cast<Operation>(member))
					{
						CS_DispatchOperationOfInterfaceStrategyPtr strategy(new CS_DispatchOperationOfInterfaceStrategy());
						isProvided = strategy->operationsMatch(cddOperation, operation);
					}
					memberIndex++;
				}
			}
			typeIndex++;
		}
	}
	return isProvided;
}

bool CS_Object::isOperationRequired(const ReferencePtr& reference, const OperationPtr& operation)
{
	// Determines if the given reference requires the operation
	// If the reference is an interaction point, it requires the operation if this
	// operation
	// is a member of one of its required interfaces
	// If the reference is not a interaction point, it cannot require an operation
	bool matches = false;
	if (CS_InteractionPointPtr interactionPoint = std::dynamic_pointer_cast<CS_InteractionPoint>(reference))
	{
		unsigned int interfaceIndex = 1;
		// Iterates on provided interfaces of the port
		const InterfaceListPtr& requiredInterfaces = interactionPoint->definingPort->required;
		unsigned int requiredInterfacesSize = requiredInterfaces->size();
		while (interfaceIndex <= requiredInterfacesSize && !matches)
		{
			const InterfacePtr& interface_ = requiredInterfaces->at(interfaceIndex - 1);
			// Iterates on members of the current Interface
			unsigned int memberIndex = 1,
					interfaceMembersSize = interface_->member()->size();
			while (memberIndex <= interfaceMembersSize && !matches)
			{
				const NamedElementPtr& cddOperation = interface_->member()->at(memberIndex - 1);
				if (std::dynamic_pointer_cast<Operation>(cddOperation))
				{
					matches = operation == cddOperation;
				}
				memberIndex++;
			}
			interfaceIndex++;
		}
	}
	return matches;
}

pscs::semantics::structuredclassifiers::CS_LinkKind CS_Object::getLinkKind(const CS_LinkPtr& link, const CS_InteractionPointPtr& interactionPoint)
{
	// If the given interaction point belongs to this object, and if the given
	// interaction point is used as an end of the link,
	// then the links targets the environment of the object (enumeration literal
	// ToEnvironment) if all the feature values of the link
	// (but one for the interaction point) refer to values which are not themselves
	// values for features of this object.
	// If all the feature values of the link refer to values which are themselves
	// values for features of this object,
	// the link targets the internals of the object (enumeration literal
	// ToInternal). Otherwise, the link has no particular meaning
	// in the context defined by the object and the interaction point (enumeration
	// literal None).
	if (!link->hasValueForAFeature(interactionPoint))
	{
		return CS_LinkKind::None;
	}
	CS_LinkKind kind = CS_LinkKind::ToInternal;
	FeatureValueListPtr featureValues = link->getFeatureValues();
	unsigned int i = 1,
			featureValuesSize = featureValues->size();
	while (i <= featureValuesSize && kind != CS_LinkKind::None)
	{
		const FeatureValuePtr& value = featureValues->at(i - 1);
		if (value->values->empty())
		{
			kind = CS_LinkKind::None;
		}
		else
		{
			ValuePtr v = value->values->at(0);
			bool vIsAValueForAFeatureOfContext;
			if (v->equals(interactionPoint))
			{
				vIsAValueForAFeatureOfContext = true;
			}
			else if (CS_InteractionPointPtr vAsInteractionPoint = std::dynamic_pointer_cast<CS_InteractionPoint>(v))
			{
				v = vAsInteractionPoint->owner;
				vIsAValueForAFeatureOfContext = this->hasValueForAFeature(v);
			}
			else
			{
				vIsAValueForAFeatureOfContext = this->hasValueForAFeature(v);
			}
			if (!vIsAValueForAFeatureOfContext)
			{
				kind = CS_LinkKind::ToEnvironment;
			}
		}
		i++;
	}
	return kind;
}

CS_LinkListPtr CS_Object::getLinks(const CS_InteractionPointPtr& interactionPoint)
{
	// Get all links (available at the locus of this object) where the given
	// interaction point is used as a feature value
	// (i.e. the interaction is an end such links)
	const ExtensionalValueListPtr& extensionalValues = locus->extensionalValues;
	CS_LinkListPtr connectorInstances(new CS_LinkList());
	for (const ExtensionalValuePtr& value : *extensionalValues)
	{
		if (CS_LinkPtr link = std::dynamic_pointer_cast<CS_Link>(value))
		{
			if (this->getLinkKind(link, interactionPoint) != CS_LinkKind::None)
			{
				connectorInstances->push_back(link);
			}
		}
	}
	return connectorInstances;
}

bool CS_Object::hasValueForAFeature(const ValuePtr& value)
{
	// Returns true if the given value object is used as a value for a feature value
	// of this object
	FeatureValueListPtr allFeatureValues = this->getFeatureValues();
	unsigned int i = 1,
			allFeatureValuesSize = allFeatureValues->size();
	bool isAValue = false;
	while (i <= allFeatureValuesSize && !isAValue)
	{
		const FeatureValuePtr& featureValue = allFeatureValues->at(i - 1);
		if (!featureValue->values->empty())
		{
			const ValueListPtr& valuesForCurrentFeature = featureValue->values;
			unsigned int j = 1,
					valuesForCurrentFeatureSize = valuesForCurrentFeature->size();
			while (j <= valuesForCurrentFeatureSize && !isAValue)
			{
				isAValue = featureValue->values->at(j - 1)->equals(value);
				j++;
			}
		}
		i++;
	}
	return isAValue;
}

void CS_Object::sendOut(const EventOccurrencePtr& eventOccurrence, const PortPtr& onPort)
{
	// Select a CS_InteractionPoint value playing onPort,
	// and send the event occurrence to this interaction point
	FeatureValuePtr featureValue = this->getFeatureValue(onPort);
	const ValueListPtr& values = featureValue->values;
	ReferenceListPtr potentialTargets(new ReferenceList());
	for (const ValuePtr& value : *values)
	{
		potentialTargets->push_back(std::dynamic_pointer_cast<Reference>(value));
	}
	CS_RequestPropagationStrategyPtr strategy =
						std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
	ReferenceListPtr targets = strategy->select(potentialTargets, SendSignalActionActivationPtr(new SendSignalActionActivation()));
	for (const ReferencePtr target : *targets)
	{
		CS_InteractionPointPtr interactionPoint = std::dynamic_pointer_cast<CS_InteractionPoint>(target);
		this->sendOut(eventOccurrence, interactionPoint);
	}
}

ExecutionPtr CS_Object::dispatchOut(const OperationPtr& operation, const PortPtr& onPort)
{
	// Select a CS_InteractionPoint value playing onPort,
	// and dispatches the operation to this interaction point
	ExecutionPtr execution = nullptr;
	FeatureValuePtr featureValue = this->getFeatureValue(onPort);
	const ValueListPtr& values = featureValue->values;
	ReferenceListPtr potentialTargets(new ReferenceList());
	for (const ValuePtr& value : *values)
	{
		potentialTargets->push_back(std::dynamic_pointer_cast<Reference>(value));
	}
	CS_RequestPropagationStrategyPtr strategy =
						std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
	ReferenceListPtr targets = strategy->select(potentialTargets, CallOperationActionActivationPtr(new CallOperationActionActivation()));
	// if targets is empty, no dispatch target has been found,
	// and the operation call is lost
	if (targets->size() >= 1)
	{
		CS_InteractionPointPtr target = std::dynamic_pointer_cast<CS_InteractionPoint>(targets->at(0));
		execution = this->dispatchOut(operation, target);
	}
	return execution;
}

ExecutionPtr CS_Object::dispatchIn(const OperationPtr& operation, const PortPtr& onPort)
{
	// delegates dispatching to composite referent
	// Select a CS_InteractionPoint value playing onPort,
	// and dispatches the operation call to this interaction point
	FeatureValuePtr featureValue = this->getFeatureValue(onPort);
	const ValueListPtr& values = featureValue->values;
	int choice = std::dynamic_pointer_cast<ChoiceStrategy>(locus->factory->getStrategy("choice"))->choose(featureValue->values->size()) - 1;
	CS_InteractionPointPtr interactionPoint = std::dynamic_pointer_cast<CS_InteractionPoint>(values->at(choice));
	return interactionPoint->dispatch(operation);
}

void CS_Object::sendIn(const EventOccurrencePtr& eventOccurrence, const PortPtr& onPort)
{
	// Select a Reference value playing onPort,
	// and send the signal instance to this interaction point
	FeatureValuePtr featureValue = this->getFeatureValue(onPort);
	const ValueListPtr& values = featureValue->values;
	ReferenceListPtr potentialTargets(new ReferenceList());
	for (const ValuePtr& value : *values)
	{
		potentialTargets->push_back(std::dynamic_pointer_cast<Reference>(value));
	}
	CS_RequestPropagationStrategyPtr strategy =
						std::dynamic_pointer_cast<CS_RequestPropagationStrategy>(locus->factory->getStrategy("requestPropagation"));
	ReferenceListPtr targets = strategy->select(potentialTargets, SendSignalActionActivationPtr(new SendSignalActionActivation()));
	for (const ReferencePtr target : *targets)
	{
		target->send(eventOccurrence);
	}
}

bool CS_Object::checkAllParents(const ClassifierPtr& type, const ClassifierPtr& classifier)
{
	// If the given classifier is not an Interface, behaves like in fUML.
	// Otherwise, check if the given type (or one of its direct or indirect
	// ancestors)
	// has an InterfaceRealization relationships with the given classifier.
	bool matched = false;
	if (std::dynamic_pointer_cast<Interface>(classifier) == nullptr)
	{
		matched = Object_::checkAllParents(type, classifier);
	}
	else if (std::dynamic_pointer_cast<Class_>(type) == nullptr)
	{
		matched = false;
	}
	else if (this->realizesInterface(std::dynamic_pointer_cast<Class_>(type), std::dynamic_pointer_cast<Interface>(classifier)))
	{
		matched = true;
	}
	else
	{
		const ClassifierListPtr& directParents = type->general;
		unsigned int i = 1,
				directParentsSize = directParents->size();
		while (!matched && i <= directParentsSize)
		{
			const ClassifierPtr& directParent = directParents->at(i - 1);
			matched = this->checkAllParents(directParent, classifier);
			i++;
		}
	}
	return matched;
}

bool CS_Object::realizesInterface(const Class_Ptr& type, const InterfacePtr& interface_)
{
	// Checks if the given type has an InterfaceRealization relationship
	// with the given interface or a descendant of the interface.
	const InterfaceRealizationListPtr& realizations = type->interfaceRealization;
	bool realized = false;
	unsigned int i = 1,
			realizationsSize = realizations->size();
	while (i <= realizationsSize && !realized)
	{
		const InterfaceRealizationPtr& realization = realizations->at(i - 1);
		const InterfacePtr& contract = realization->contract;
		if (contract == interface_)
		{
			realized = true;
		}
		else if (this->isDescendant(contract, interface_))
		{
			realized = true;
		}
		i++;
	}
	return realized;
}

bool CS_Object::isDescendant(const InterfacePtr& contract, const InterfacePtr& interface_)
{
	// Checks if the given contract is a descendant of the given interface_
	bool matched = false;
	const ClassifierListPtr& descendants = contract->general;
	unsigned int i = 1,
			descendantsSize = descendants->size();
	while (i <= descendantsSize && !matched)
	{
		if (InterfacePtr descendant = std::dynamic_pointer_cast<Interface>(descendants->at(i - 1)))
		{
			if (descendant == interface_)
			{
				matched = true;
			}
			else
			{
				matched = this->isDescendant(descendant, interface_);
			}
		}
		i++;
	}
	return matched;
}
