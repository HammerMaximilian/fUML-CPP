/*
 * ObjectActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/ObjectActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/ArrivalSignal.h>
#include <fuml/semantics/commonbehavior/ClassifierBehaviorInvocationEventAccepter.h>
#include <fuml/semantics/commonbehavior/GetNextEventStrategy.h>
#include <fuml/semantics/commonbehavior/InvocationEventOccurrence.h>
#include <fuml/semantics/commonbehavior/ObjectActivation_EventDispatchLoopExecution.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/syntax/commonbehavior/Behavior.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <UMLPrimitiveTypes/intList.h>

void ObjectActivation::setThisObjectActivationPtr(
		std::weak_ptr<ObjectActivation> thisObjectActivationPtr)
{
	this->thisObjectActivationPtr = thisObjectActivationPtr;
}

void ObjectActivation::stop()
{
	// Stop this object activation by terminating all classifier behavior
	// executions.

	const ClassifierBehaviorInvocationEventAccepterListPtr &classifierBehaviorInvocations =
			this->classifierBehaviorInvocations;
	for (const ClassifierBehaviorInvocationEventAccepterPtr &classifierBehaviorInvocation : *classifierBehaviorInvocations)
	{
		classifierBehaviorInvocation->terminate();
	}
} // stop

void ObjectActivation::register_(
		const EventAccepterPtr &accepter)
{
	// Register the given event accepter to wait for a dispatched signal
	// event.

	utils::Debug::println("[register] object = " + this->object->toString());
	utils::Debug::println("[register] accepter = " + accepter->hashCode());

	this->waitingEventAccepters->push_back(accepter);
} // register_

void ObjectActivation::unregister(
		const EventAccepterPtr &accepter)
{
	// Remove the given event accepter for the list of waiting event
	// accepters.

	utils::Debug::println("[unregister] object = " + this->object->toString());
	utils::Debug::println("[unregister] accepter = " + accepter->hashCode());

	bool notFound = true;
	unsigned int i = 1;
	unsigned int waitingEventAcceptersSize =
			this->waitingEventAccepters->size();
	while (notFound && i <= waitingEventAcceptersSize)
	{
		if (this->waitingEventAccepters->at(i - 1) == accepter)
		{
			this->waitingEventAccepters->erase(
					this->waitingEventAccepters->begin() + (i - 1));
			notFound = false;
		}
		i = i + 1;
	}

} // unregister

void ObjectActivation::dispatchNextEvent()
{
	// Get the next event occurrence out of the event pool.
	// If there are one or more waiting event accepters with triggers that
	// match the event occurrence, then dispatch it to exactly one of those
	// waiting accepters.

	if (this->eventPool->size() > 0)
	{
		EventOccurrencePtr eventOccurrence = this->getNextEvent();

		utils::Debug::println(
				"[dispatchNextEvent] eventOccurrence = "
						+ eventOccurrence->hashCode());

		UMLPrimitiveTypes::intList matchingEventAccepterIndexes;
		const EventAccepterListPtr &waitingEventAccepters =
				this->waitingEventAccepters;
		unsigned int i = 0;
		for (const EventAccepterPtr &eventAccepter : *waitingEventAccepters)
		{
			if (eventAccepter->match(eventOccurrence))
			{
				matchingEventAccepterIndexes.push_back(i);
			}
			i = i + 1;
		}

		if (matchingEventAccepterIndexes.size() > 0)
		{
			// *** Choose one matching event accepter non-deterministically. ***
			int j =
					std::dynamic_pointer_cast<ChoiceStrategy>(
							this->object->locus->factory->getStrategy("choice"))->choose(
							matchingEventAccepterIndexes.size());
			int k = matchingEventAccepterIndexes.at(j - 1);
			EventAccepterPtr selectedEventAccepter =
					this->waitingEventAccepters->at(k);
			this->waitingEventAccepters->erase(
					this->waitingEventAccepters->begin() + k);
			selectedEventAccepter->accept(eventOccurrence);
		}
	}
} // dispatchNextEvent

EventOccurrencePtr ObjectActivation::getNextEvent()
{
	// Get the next event from the event pool, using a get next event
	// strategy.

	return std::dynamic_pointer_cast<GetNextEventStrategy>(
			this->object->locus->factory->getStrategy("getNextEvent"))->getNextEvent(
			this->thisObjectActivationPtr.lock());
} // getNextEvent

void ObjectActivation::send(
		const EventOccurrencePtr &eventOccurrence)
{
	// Add an event occurrence to the event pool and signal that a
	// new event occurrence has arrived.

	this->eventPool->push_back(eventOccurrence);
	_send(ArrivalSignalPtr(new ArrivalSignal()));
} // send

void ObjectActivation::startBehavior(
		const Class_Ptr &classifier, const ParameterValueListPtr &inputs)
{
	// Start the event dispatch loop for this object activation (if it has
	// not already been started).
	// If a classifier is given that is a type of the object of this object
	// activation and there is not already a classifier behavior invocation
	// for it,
	// then create a classifier behavior invocation for it and add an invocation
	// event occurrence to the event pool.
	// Otherwise, create a classifier behavior invocation for each of the
	// types of the object of this object activation which has a classifier
	// behavior or which is a behavior itself
	// and for which there is not currently a classifier behavior invocation.

	// Start EventDispatchLoop
	_startObjectBehavior();

	if (classifier == nullptr)
	{
		utils::Debug::println(
				"[startBehavior] Starting behavior for all classifiers...");
		// *** Start all classifier behaviors concurrently. ***
		Class_ListPtr types = this->object->types;
		for (const Class_Ptr &type : *types)
		{
			BehaviorPtr behavior = std::dynamic_pointer_cast<Behavior>(type);
			if (behavior || type->classifierBehavior != nullptr)
			{
				this->startBehavior(type,
						ParameterValueListPtr(new ParameterValueList()));
			}
		}
	}
	else
	{
		utils::Debug::println(
				"[startBehavior] Starting behavior for " + classifier->name
						+ "...");

		_beginIsolation();
		bool notYetStarted = true;
		unsigned int i = 1;
		unsigned int classifierBehaviorInvocationsSize =
				this->classifierBehaviorInvocations->size();
		while (notYetStarted && i <= classifierBehaviorInvocationsSize)
		{
			notYetStarted =
					(this->classifierBehaviorInvocations->at(i - 1)->classifier
							!= classifier);
			i = i + 1;
		}

		if (notYetStarted)
		{
			ClassifierBehaviorInvocationEventAccepterPtr newInvocation(
					new ClassifierBehaviorInvocationEventAccepter());
			newInvocation->objectActivation =
					this->thisObjectActivationPtr.lock();
			this->classifierBehaviorInvocations->push_back(newInvocation);
			newInvocation->invokeBehavior(classifier, inputs);
			InvocationEventOccurrencePtr eventOccurrence(
					new InvocationEventOccurrence());
			eventOccurrence->execution = newInvocation->execution;
			this->eventPool->push_back(eventOccurrence);
			_send(ArrivalSignalPtr(new ArrivalSignal()));
		}
		_endIsolation();
	}
} // startBehavior

void ObjectActivation::_send(
		const ArrivalSignalPtr &signal_)
{
	this->behavior->_send(signal_);
} // _send

void ObjectActivation::_startObjectBehavior()
{
	this->behavior->_startObjectBehavior();
} // _startObjectBehavior

void ObjectActivation::_endIsolation()
{
	utils::Debug::println("[_endIsolation] End isolation.");
} // _endIsolation

void ObjectActivation::_beginIsolation()
{
	utils::Debug::println("[_beginIsolation] Begin isolation.");
} // _beginIsolation
