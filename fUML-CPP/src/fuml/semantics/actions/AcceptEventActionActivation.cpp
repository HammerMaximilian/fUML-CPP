/*
 * AcceptEventActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/AcceptEventActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/AcceptEventActionEventAccepter.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/commonbehavior/SignalEventOccurrence.h>
#include <fuml/semantics/simpleclassifiers/SignalInstance.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/syntax/actions/AcceptEventAction.h>
#include <fuml/syntax/commonbehavior/Trigger.h>

void AcceptEventActionActivation::setThisAcceptEventActionActivationPtr(
	std::weak_ptr<AcceptEventActionActivation> thisAcceptEventActionActivationPtr)
{
	this->thisAcceptEventActionActivationPtr = thisAcceptEventActionActivationPtr;
	ActionActivation::setThisActionActivationPtr(thisAcceptEventActionActivationPtr);
}

void AcceptEventActionActivation::initialize(const ActivityNodePtr& node, const ActivityNodeActivationGroupPtr& group)
{
	// Initialize this accept event action activation to be not waiting for an event.

	ActionActivation::initialize(node, group);
	this->waiting = false;
} // initialize

void AcceptEventActionActivation::run()
{
	// Create an event accepter and initialize waiting to false.

	ActionActivation::run();

	this->eventAccepter.reset(new AcceptEventActionEventAccepter());
	this->eventAccepter->actionActivation = this->thisAcceptEventActionActivationPtr.lock();

	this->waiting = false;
} // run

void AcceptEventActionActivation::fire(const TokenListPtr&)
{
	// Register the event accepter for this accept event action activation
	// with the context object of the enclosing activity execution
	// and wait for an event to be accepted.

	utils::Debug::println("[fire] Action " + this->node->name + "...");

	this->getExecutionContext()->register_(this->eventAccepter);
	this->waiting = true;
	this->firing = false;

	this->suspend();
} // fire

bool AcceptEventActionActivation::isReady()
{
	// An accept event action activation is ready to fire only if it is not
	// already waiting for an event.

	bool ready;
	if (this->waiting)
	{
		ready = false;
	}
	else
	{
		ready = ActionActivation::isReady();
	}

	return ready;
} // isReady

void AcceptEventActionActivation::doAction()
{
	// Do nothing. [This will never be called.]

	return;
} // doAction

void AcceptEventActionActivation::accept(const EventOccurrencePtr& eventOccurrence)
{
	// Accept the given event occurrence.
	// If the action does not unmarshall, then, if the event occurrence is
	// a signal event occurrence, place the signal instance of the signal
	// event occurrence on the result pin, if any.
	// If the action does unmarshall, then get the parameter values of the
	// event occurrence, and place the values for each parameter on the
	// corresponding output pin.
	// Concurrently fire all output pins while offering a single control
	// token.
	// If there are no incoming edges, then re-register this accept event
	// action execution with the context object.

	AcceptEventActionPtr action = std::dynamic_pointer_cast<AcceptEventAction>(this->node);
	const OutputPinListPtr& resultPins = action->result;

	utils::Debug::println(
		"[accept] action = " + action->name + ", eventOccurrence = " + std::to_string(eventOccurrence->hashCode()));

	if (this->running)
	{
		if (!action->isUnmarshall)
		{
			SignalEventOccurrencePtr signalEventOccurrence = std::dynamic_pointer_cast<SignalEventOccurrence>(
				eventOccurrence);
			if (signalEventOccurrence)
			{
				SignalInstancePtr signalInstance = signalEventOccurrence->signalInstance;
				utils::Debug::println(
					"[accept] isUnmarshall = false, signalInstance = " + std::to_string(signalInstance->hashCode()));
				ValueListPtr result(new ValueList());
				result->push_back(signalInstance);
				if (resultPins->size() > 0)
				{
					this->putTokens(resultPins->at(0), result);
				}
			}
		}
		else
		{
			ParameterValueListPtr parameterValues = eventOccurrence->getParameterValues(action->trigger->at(0)->event);
			unsigned int parameterValuesSize = parameterValues->size();
			for (unsigned int i = 0; i < parameterValuesSize; i++)
			{
				const ParameterValuePtr& parameterValue = parameterValues->at(i);
				const OutputPinPtr& resultPin = resultPins->at(i);
				this->putTokens(resultPin, parameterValue->values);
			}
		}

		this->sendOffers();

		this->waiting = false;

		utils::Debug::println("[accept] Checking if " + this->node->name + " should fire again...");
		this->receiveOffer();

		this->resume();
	}
} // accept

bool AcceptEventActionActivation::match(const EventOccurrencePtr& eventOccurrence)
{
	// Return true if the given event occurrence matches a trigger of the
	// accept event action of this activation.

	AcceptEventActionPtr action = std::dynamic_pointer_cast<AcceptEventAction>(this->node);
	const TriggerListPtr& triggers = action->trigger;

	return eventOccurrence->matchAny(triggers);
} // match

void AcceptEventActionActivation::terminate()
{
	// Terminate this action and unregister its event accepter.

	ActionActivation::terminate();

	if (this->waiting)
	{
		this->getExecutionContext()->unregister(this->eventAccepter);
		this->waiting = false;
	}
} // terminate
