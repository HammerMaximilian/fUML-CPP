/*
 * SignalEventOccurrence.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/SignalEventOccurrence.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/simpleclassifiers/SignalInstance.h>
#include <uml/commonbehavior/SignalEvent.h>
#include <uml/commonbehavior/Trigger.h>
#include <uml/simpleclassifiers/Signal.h>

bool SignalEventOccurrence::match(const TriggerPtr& trigger)
{
	// Match a trigger if it references a signal event whose signal is the type of the
	// signal instance or one of its supertypes.

	bool matches = false;
	SignalEventPtr event = std::dynamic_pointer_cast<SignalEvent>(trigger->event);

	if (event)
	{
		matches = this->signalInstance->isInstanceOf(event->signal);
	}
	return matches;
} // match

ParameterValueListPtr SignalEventOccurrence::getParameterValues(const EventPtr& event)
{
	// Return parameter values for the features of the signal instance, in order,
	// corresponding to the attributes of the declared signal of the given event.
	// These are intended to be treated as if they are the values of effective
	// parameters of direction "in".
	// (Note that the given event must be a signal event, and the signal instance
	// of this signal event occurrence must be a direct or indirect instance of
	// the event signal.)

	ParameterValueListPtr parameterValues(new ParameterValueList());
	SignalEventPtr signalEvent = std::dynamic_pointer_cast<SignalEvent>(event);

	if (signalEvent)
	{
		StructuralFeatureListPtr memberFeatures = this->signalInstance->getMemberFeatures(signalEvent->signal);
		for (const StructuralFeaturePtr& feature : *memberFeatures)
		{
			ParameterValuePtr parameterValue(new ParameterValue());
			parameterValue->values = this->signalInstance->getFeatureValue(feature)->values;
			parameterValues->push_back(parameterValue);
		}
	}
	return parameterValues;
} // getParameterValues
