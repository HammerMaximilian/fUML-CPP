/*
 * CS_SendSignalActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_SendSignalActionActivation.h>

#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/commonbehavior/SignalEventOccurrence.h>
#include <fuml/semantics/simpleclassifiers/SignalInstance.h>
#include <pscs/semantics/commonbehavior/CS_EventOccurrence.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/Signal.h>

void CS_SendSignalActionActivation::doAction()
{
    // If onPort is not specified, behaves like in fUML
    // If onPort is specified,
    // Get the value from the target pin. If the value is not a reference,
    // then do nothing.
    // Otherwise, construct a signal using the values from the argument pins
    // As compared to fUML, instead of sending directly to target reference
    // by calling operation send:
    // - if the target is to be the same as or a container of (directly or indirectly)
    // the object executing the Action, the Signal shall be related to a Reception belonging
    // to a required interface of onPort, and sendOut is called on the target reference
    // so that the signal will be sent to the environment
    // - if the target is NOT to be the same as or a container of (directly or indirectly)
    // the object executing the Action, the Signal shall be related to a Reception belonging
    // to a provided Interface of onPort, and operation sendIn is called so that the signal
    // will be sent to the internals of the target object
    SendSignalActionPtr action = AS(SendSignalAction, this->node);
    if (action->onPort == nullptr)
    {
        // Behaves like in fUML
        SendSignalActionActivation::doAction();
    }
    else
    {
        ValuePtr target = this->takeTokens(action->target)->at(0);
        if (CS_ReferencePtr reference = AS(CS_Reference, target))
        {
            // Constructs the signal instance
            const SignalPtr& signal = action->signal;
            SignalInstancePtr signalInstance(new SignalInstance());
            signalInstance->type = signal;

            const PropertyListPtr& attributes = signal->attribute;
            const InputPinListPtr& argumentPins = action->argument;
            unsigned int i = 0,
            		attributesSize = attributes->size();
            while (i < attributesSize)
            {
                const PropertyPtr& attribute = attributes->at(i);
                const InputPinPtr& argumentPin = argumentPins->at(i);
                ValueListPtr values = this->takeTokens(argumentPin);
                signalInstance->setFeatureValue(attribute, values, 0);
                i++;
            }
            // Construct the signal event occurrence
            SignalEventOccurrencePtr signalEventOccurrence(new SignalEventOccurrence());
            signalEventOccurrence->signalInstance = AS(SignalInstance, signalInstance->copy());

            CS_EventOccurrencePtr wrappingEventOccurrence(new CS_EventOccurrence());
            wrappingEventOccurrence->wrappedEventOccurrence = signalEventOccurrence;

            // Tries to determine if the signal has to be
            // sent to the environment or to the internals of
            // target, through onPort
            CS_ReferencePtr targetReference = reference;
            // Port onPort = action.onPort ;
            Object_Ptr executionContext = this->group.lock()->getActivityExecution()->context;
            if (executionContext == targetReference->referent || (targetReference->compositeReferent->contains(executionContext)))
            {
                wrappingEventOccurrence->sendOutTo(targetReference, action->onPort);
            }
            else
            {
                wrappingEventOccurrence->sendInTo(targetReference, action->onPort);
            }
        }
    }
}
