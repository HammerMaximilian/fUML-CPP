/*
 * SendSignalActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/SendSignalActionActivation.h>

#include <fuml/semantics/commonbehavior/SignalEventOccurrence.h>
#include <fuml/semantics/simpleclassifiers/SignalInstance.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/Signal.h>

void SendSignalActionActivation::doAction()
{
	// Get the value from the target pin. If the value is not a reference,
	// then do nothing.
	// Otherwise, construct a signal using the values from the argument pins
	// and send it to the referent object.

	SendSignalActionPtr action = AS(SendSignalAction, this->node);
	ValuePtr target = this->takeTokens(action->target)->at(0);

	ReferencePtr reference = AS(Reference, target);

	if (reference)
	{
		const SignalPtr& signal = action->signal;

		SignalInstancePtr signalInstance(new SignalInstance());
		signalInstance->type = signal;

		const PropertyListPtr& attributes = signal->ownedAttribute;
		const InputPinListPtr& argumentPins = action->argument;
		unsigned int attributesSize = attributes->size();
		for (unsigned int i = 0; i < attributesSize; i++)
		{
			const PropertyPtr& attribute = attributes->at(i);
			const InputPinPtr& argumentPin = argumentPins->at(i);
			ValueListPtr values = this->takeTokens(argumentPin);
			signalInstance->setFeatureValue(attribute, values, 0);
		}

		SignalEventOccurrencePtr signalEventOccurrence(new SignalEventOccurrence());
		signalEventOccurrence->setThisEventOccurrencePtr(signalEventOccurrence);
		signalEventOccurrence->signalInstance = AS(SignalInstance, signalInstance->copy());
		signalEventOccurrence->sendTo(reference);
	}
} // doAction
