/*
 * CS_CallOperationActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_CallOperationActionActivation.h>

#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/actions/CS_ConstructStrategy.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/classification/Operation.h>
#include <uml/classification/Parameter.h>
#include <uml/packages/Stereotype.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/structuredclassifiers/Port.h>

void CS_CallOperationActionActivation::doAction()
{
    CallOperationActionPtr action = AS(CallOperationAction, this->node);
    // First determines if this is a call to a constructor and if a default
    // construction strategy needs to be applied.
    // This is a call to a constructor if the called operation has
    // stereotype <<Create>> applied.
    // The default construction strategy is used if no method is associated with the
    // <<Create>> operation.
    // Otherwise, behaves as in fUML.
    if (action->onPort == nullptr && this->isCreate(action->operation)
            && action->operation->method->empty())
    {
        LocusPtr locus = this->getExecutionLocus();
        CS_ConstructStrategyPtr strategy = AS(CS_ConstructStrategy, locus->factory->getStrategy("constructStrategy"));
        ValuePtr target = this->takeTokens(action->target)->at(0);
        if (CS_ReferencePtr reference = AS(CS_Reference, target))
        {
            strategy->construct(action->operation, reference->compositeReferent);
            const ParameterListPtr& parameters = action->operation->ownedParameter;
            const OutputPinListPtr& resultPins = action->result;
            ValueListPtr values(new ValueList());
            values->push_back(target);
            for (const ParameterPtr& parameter : *parameters)
            {
                if (parameter->direction == ParameterDirectionKind::return_)
                {
                    const OutputPinPtr& resultPin = resultPins->at(0);
                    this->putTokens(resultPin, values);
                }
            }
        }
    }
    else
    {
        CallOperationActionActivation::doAction();
    }
}

ExecutionPtr CS_CallOperationActionActivation::getCallExecution()
{
    // If onPort is not specified, behaves like in fUML
    // If onPort is specified, and if the value on the target input pin is a
    // reference, dispatch the operation
    // to it and return the resulting execution object.
    // As compared to fUML, instead of dispatching directly to target reference
    // by calling operation dispatch:
    // - If the invoked BehavioralFeature is on a provided Interface but not on any
    // required Interface,
    // then, when the InvocationAction is executed, the invocation is made into the
    // object given on
    // the target InputPin through the given Port
    // - If the invoked BehavioralFeature is on a required Interface but not on any
    // provided Interface,
    // then, if the InvocationAction is being executed inside the object given on
    // the target InputPin,
    // the invocation is forwarded out of the target object through the given Port.
    // - If the invoked BehavioralFeature is on both a provided and a required
    // Interface,
    // then, if the InvocationAction is being executed inside the object given on
    // the target InputPin,
    // the invocation is made out of the target object through the given Port.
    // Otherwise the invocation is made into the target object through the given
    // Port.
	CallOperationActionPtr action = AS(CallOperationAction, this->node);
    ExecutionPtr execution = nullptr;
    if (action->onPort == nullptr)
    {
        execution = CallOperationActionActivation::getCallExecution();
    }
    else
    {
        ValuePtr  target = this->takeTokens(action->target)->at(0);
        if (CS_ReferencePtr targetReference = AS(CS_Reference, target))
        {
            // Tries to determine if the operation call has to be
            // dispatched to the environment or to the internals of
            // target, through onPort
            const Object_Ptr& executionContext = this->group.lock()->getActivityExecution()->context;
            bool operationIsOnProvidedInterface = this->isOperationProvided(action->onPort, action->operation);
            bool operationIsOnRequiredInterface = this->isOperationRequired(action->onPort, action->operation);
            // Operation on a provided interface only
            if (operationIsOnProvidedInterface && !operationIsOnRequiredInterface)
            {
                execution = targetReference->dispatchIn(action->operation, action->onPort);
            }
            // Operation is on a required interface only
            else if (!operationIsOnProvidedInterface && operationIsOnRequiredInterface)
            {
                // If not executing in the context of the target,
                // Semantics are undefined.
                // Otherwise, dispatch outside.
                if (executionContext == targetReference->referent || targetReference->compositeReferent->contains(executionContext))
                {
                    execution = targetReference->dispatchOut(action->operation, action->onPort);
                }
            }
            // Operation is both on a provided and a required interface
            else if (operationIsOnProvidedInterface && operationIsOnRequiredInterface)
            {
                if (executionContext == targetReference->referent || targetReference->compositeReferent->contains(executionContext))
                {
                    execution = targetReference->dispatchOut(action->operation, action->onPort);
                }
                else
                {
                    execution = targetReference->dispatchIn(action->operation, action->onPort);
                }
            }
        }
    }
    return execution;
}

bool CS_CallOperationActionActivation::isOperationProvided(const PortPtr& port, const OperationPtr& operation)
{
    bool isProvided = false;
    if (IS(Interface, operation->owner.lock()))
    {
        // We have to look in provided interfaces of the port if
        // they define directly or indirectly the Operation
        unsigned int interfaceIndex = 1;
        // Iterates on provided interfaces of the port
        const InterfaceListPtr& providedInterfaces = port->provided;
        unsigned int providedInterfacesSize = providedInterfaces->size();
        while (interfaceIndex <= providedInterfacesSize && !isProvided)
        {
            const InterfacePtr& interface_ = providedInterfaces->at(interfaceIndex - 1);
            // Iterates on members of the current Interface
            const NamedElementListPtr& members = interface_->member();
            unsigned int memberIndex = 1,
            				memberSize = members->size();
            while (memberIndex <= memberSize && !isProvided)
            {
                const NamedElementPtr& cddOperation = members->at(memberIndex - 1);
                if (IS(Operation, cddOperation))
                {
                    isProvided = operation == cddOperation;
                }
                memberIndex++;
            }
            interfaceIndex++;
        }
    }
    return isProvided;
}

bool CS_CallOperationActionActivation::isOperationRequired(const PortPtr& port, const OperationPtr& operation)
{
    bool isRequired = false;
    unsigned int interfaceIndex = 1;
    // Iterates on provided interfaces of the port
    const InterfaceListPtr& requiredInterfaces = port->required;
    unsigned int requiredInterfacesSize = requiredInterfaces->size();
    while (interfaceIndex <= requiredInterfacesSize && !isRequired)
    {
        const InterfacePtr& interface_ = requiredInterfaces->at(interfaceIndex - 1);
        // Iterates on members of the current Interface
        const NamedElementListPtr& members = interface_->member();
        unsigned int memberIndex = 1,
						memberSize = members->size();
        while (memberIndex <= memberSize && !isRequired)
        {
            const NamedElementPtr& cddOperation = members->at(memberIndex - 1);
            if (IS(Operation, cddOperation))
            {
                isRequired = operation == cddOperation;
            }
            memberIndex++;
        }
        interfaceIndex++;
    }
    return isRequired;
}

bool CS_CallOperationActionActivation::isCreate(const OperationPtr& o)
{
    // FIXME This code is Eclipse specific
    // How to handle this in the spec?
    const StereotypeListPtr& appliedStereotypes = o->appliedStereotype;
    unsigned int i = 0,
    				appliedStereotypesSize = appliedStereotypes->size();
    bool isCreate = false;
    while (i < appliedStereotypesSize && !isCreate)
    {
        const StereotypePtr& s = appliedStereotypes->at(i);
        if (s->name == "Create")
        {
            isCreate = true;
        }
    }
    return isCreate;
}
