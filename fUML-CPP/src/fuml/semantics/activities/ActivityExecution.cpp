/*
 * ActivityExecution.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityExecution.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/ActivityParameterNodeActivation.h>
#include <fuml/semantics/activities/ObjectToken.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityParameterNode.h>
#include <fuml/syntax/classification/Parameter.h>

void ActivityExecution::setThisActivityExecutionPtr(std::weak_ptr<ActivityExecution> thisActivityExecutionPtr)
{
	this->thisActivityExecutionPtr = thisActivityExecutionPtr;
	Object_::setThisObject_Ptr(thisActivityExecutionPtr);
}

void ActivityExecution::execute()
{
	// Execute the activity for this execution by creating an activity node
	// activation group and activating all the activity nodes in the
	// activity. If the activity has no streaming input parameters, then, when
	// the execution is complete, copy the values on the tokens offered by
	// output parameter nodes to the corresponding output parameters.

	ActivityPtr activity = std::dynamic_pointer_cast<Activity>(this->getTypes()->at(0));

	utils::Debug::println("[execute] Activity " + activity->name + "...");
	utils::Debug::println("[event] Execute activity=" + activity->name);

	this->isStreaming = false;
	unsigned int i = 1;
	const ParameterListPtr& parameters = activity->ownedParameter;
	unsigned int parametersSize = parameters->size();
	while (i <= parametersSize && !this->isStreaming)
	{
		ParameterPtr parameter = parameters->at(i - 1);
		this->isStreaming = (parameter->direction == ParameterDirectionKind::in
			|| parameter->direction == ParameterDirectionKind::inout) && parameter->isStream;
		i = i + 1;
	}

	utils::Debug::println("[execute] isStreaming = " + this->isStreaming);

	this->activationGroup.reset(new ActivityNodeActivationGroup());
	this->activationGroup->activityExecution = this->thisActivityExecutionPtr.lock();
	this->activationGroup->activate(activity->node, activity->edge);

	if (!this->isStreaming)
	{
		this->complete();
	}
} // execute

void ActivityExecution::complete()
{
	// Copy the values on the tokens offered by output parameter nodes for
	// non-stream parameters to the corresponding output parameter values.

	ActivityPtr activity = std::dynamic_pointer_cast<Activity>(this->getTypes()->at(0));

	ActivityParameterNodeActivationListPtr outputActivations = this->activationGroup->getOutputParameterNodeActivations();

	for (const ActivityParameterNodeActivationPtr& outputActivation : *outputActivations)
	{
		ParameterPtr parameter = std::dynamic_pointer_cast<ActivityParameterNode>(outputActivation->node)->parameter;

		if (!parameter->isStream)
		{
			ParameterValuePtr parameterValue(new ParameterValue());
			parameterValue->parameter = parameter;

			TokenListPtr tokens = outputActivation->getTokens();
			for (const TokenPtr& token : *tokens)
			{
				const ValuePtr& value = std::dynamic_pointer_cast<ObjectToken>(token)->value;
				if (value != nullptr)
				{
					parameterValue->values->push_back(value);
					utils::Debug::println(
						"[event] Output activity=" + activity->name + " parameter=" + parameterValue->parameter->name
							+ " value=" + std::to_string(value->hashCode()));
				}
			}

			this->setParameterValue(parameterValue);
		}
	}

	utils::Debug::println("[execute] Activity " + activity->name + " completed.");
} // complete

ValuePtr ActivityExecution::copy()
{
	// Create a new activity execution that is a copy of this execution.
	// [Note: This currently just returns a non-executing execution for the
	// same activity as this execution.]

	return Execution::copy();
} // copy

ValuePtr ActivityExecution::new_()
{
	// Create a new activity execution with empty properties.

	ActivityExecutionPtr newValue(new ActivityExecution());
	newValue->setThisActivityExecutionPtr(newValue);
	return newValue;
} // new_

void ActivityExecution::terminate()
{
	// Terminate all node activations. If this execution is non-streaming,
	// then this is sufficient to result in the activity execution ultimately
	// completing. Otherwise, explicitly complete the execution.

	if (this->activationGroup != nullptr)
	{
		this->activationGroup->terminateAll();
	}

	if (this->isStreaming)
	{
		this->complete();
	}
} // terminate
