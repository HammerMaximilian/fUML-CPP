/*
 * ReplyActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReplyActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ReturnInformation.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <uml/actions/ReplyAction.h>
#include <uml/commonbehavior/CallEvent.h>
#include <uml/commonbehavior/Trigger.h>

void ReplyActionActivation::doAction()
{
	// Reply to the call represented by the return information on
	// the return information pin using the reply values given
	// on the reply value pins.

	ReplyActionPtr action = AS(ReplyAction, this->node);
	const TriggerPtr& replyToCall = action->replyToCall;
	const InputPinListPtr& replyValuePins = action->replyValue;
	const InputPinPtr& returnInformationPin = action->returnInformation;

	ValueListPtr values = this->takeTokens(returnInformationPin);
	ReturnInformationPtr returnInformation = AS(ReturnInformation, values->at(0));
	fuml::Debug::println(
		"[doAction] action = " + action->name + " returnInformation = "
			+ std::to_string(returnInformation->hashCode()));

	CallEventPtr callEvent = AS(CallEvent, replyToCall->event);

	if (callEvent && (callEvent->operation == returnInformation->getOperation()))
	{

		ParameterValueListPtr parameterValues(new ParameterValueList());
		for (const InputPinPtr& replyValuePin : *replyValuePins)
		{
			ParameterValuePtr parameterValue(new ParameterValue());
			parameterValue->values = this->takeTokens(replyValuePin);
			parameterValues->push_back(parameterValue);
		}

		returnInformation->reply(parameterValues);
	}
} // doAction
