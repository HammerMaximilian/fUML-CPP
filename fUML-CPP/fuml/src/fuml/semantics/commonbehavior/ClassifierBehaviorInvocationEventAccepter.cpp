/*
 * ClassifierBehaviorInvocationEventAccepter.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/ClassifierBehaviorInvocationEventAccepter.h>

#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/commonbehavior/InvocationEventOccurrence.h>
#include <fuml/semantics/commonbehavior/ObjectActivation.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <uml/commonbehavior/Behavior.h>
#include <uml/structuredclassifiers/Class_.h>

void fuml::semantics::commonbehavior::ClassifierBehaviorInvocationEventAccepter::setThisClassifierBehaviorInvocationEventAccepterPtr(
	ClassifierBehaviorInvocationEventAccepterPtr_w thisClassifierBehaviorInvocationEventAccepterPtr)
{
	this->thisClassifierBehaviorInvocationEventAccepterPtr = thisClassifierBehaviorInvocationEventAccepterPtr;
}

void ClassifierBehaviorInvocationEventAccepter::invokeBehavior(const Class_Ptr& classifier,
	const ParameterValueListPtr& inputs)
{
	// Set the classifier for this classifier behavior invocation event accepter
	// to the given class.
	// If the given class is a behavior, set the execution to be the object
	// of the object activation of the classifier behavior execution.
	// Otherwise the class must be an active class, so get an execution
	// object for the classifier behavior for the class.
	// Set the input parameters for the execution to the given values.
	// Then register this event accepter with the object activation.

	// Debug.println("[invokeBehavior] Invoking behavior for " + classifier.name +
	// "...");

	this->classifier = classifier;
	const Object_Ptr& object = this->objectActivation->object;

	BehaviorPtr behavior = AS(Behavior, classifier);

	if (behavior)
	{
		this->execution = AS(Execution, object);
	}
	else
	{
		this->execution = object->locus->factory->createExecution(classifier->classifierBehavior, object);
	}

	if (inputs != nullptr)
	{
		for (const ParameterValuePtr& input : *inputs)
		{
			this->execution->setParameterValue(input);
		}
	}

	this->objectActivation->register_(this->thisClassifierBehaviorInvocationEventAccepterPtr.lock());
} // invokeBehvior

bool ClassifierBehaviorInvocationEventAccepter::match(const EventOccurrencePtr& eventOccurrence)
{
	// Return true if the given event occurrence is an invocation event
	// occurrence for the execution of this classifier behavior invocation
	// event accepter.

	bool matches = false;
	InvocationEventOccurrencePtr invocationEventOccurrence = AS(InvocationEventOccurrence, eventOccurrence);

	if (invocationEventOccurrence)
	{
		matches = (invocationEventOccurrence->execution == this->execution);
	}
	return matches;
} // match

void ClassifierBehaviorInvocationEventAccepter::accept(const EventOccurrencePtr& eventOccurrence)
{
	// Accept an invocation event occurrence. Execute the execution of this
	// classifier behavior invocation event accepter.

	InvocationEventOccurrencePtr invocationEventOccurrence = AS(InvocationEventOccurrence, eventOccurrence);

	if (invocationEventOccurrence)
	{
		this->execution->execute();
	}
} // accept

void ClassifierBehaviorInvocationEventAccepter::terminate()
{
	// Terminate the associated execution.
	// If the execution is not itself the object of the object activation,
	// then destroy it.

	this->execution->terminate();

	if (this->execution != this->objectActivation->object)
	{
		this->execution->destroy();
	}
} // terminate
