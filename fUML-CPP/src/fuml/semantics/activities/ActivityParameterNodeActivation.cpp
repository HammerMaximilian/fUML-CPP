/*
 * ActivityParameterNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityParameterNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityParameterNodeStreamingParameterListener.h>
#include <fuml/semantics/activities/ObjectToken.h>
#include <fuml/semantics/commonbehavior/StreamingParameterValue.h>
#include <fuml/syntax/activities/ActivityParameterNode.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/Behavior.h>

void ActivityParameterNodeActivation::setThisActivityParameterNodeActivationPtr(
	std::weak_ptr<ActivityParameterNodeActivation> thisActivityParameterNodeActivationPtr)
{
	this->thisActivityParameterNodeActivationPtr = thisActivityParameterNodeActivationPtr;
	ObjectNodeActivation::setThisObjectNodeActivationPtr(thisActivityParameterNodeActivationPtr);
}

void ActivityParameterNodeActivation::run()
{
	// If this activation is for an input activity parameter node for a
	// stream parameter, then register a listener for this activation
	// with the streaming parameter value corresponding to the parameter.

	ObjectNodeActivation::run();

	ParameterPtr parameter = std::dynamic_pointer_cast<ActivityParameterNode>(this->node)->parameter;
	ParameterValuePtr parameterValue = this->getActivityExecution()->getParameterValue(parameter);
	StreamingParameterValuePtr streamingParameterValue = std::dynamic_pointer_cast<StreamingParameterValue>(
		parameterValue);
	if (this->node->incoming->size() == 0 && streamingParameterValue)
	{
		ActivityParameterNodeStreamingParameterListenerPtr listener(
			new ActivityParameterNodeStreamingParameterListener());
		listener->nodeActivation = this->thisActivityParameterNodeActivationPtr.lock();
		streamingParameterValue->register_(listener);
		utils::Debug::println("[run] Registering for streaming parameter " + parameter->name + ".");
	}
} // run

void ActivityParameterNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// If there are no incoming edges, this is an activation of an input
	// activity parameter node.
	// Get the values from the input parameter indicated by the activity
	// parameter node and offer those values as object tokens.
	// If there are one or more incoming edges, this is an activation of an
	// output activity parameter node.
	// If the output parameter is not streaming, take the tokens offered on
	// incoming edges and add them to the set of tokens being offered.
	// If the output parameter is streaming, post the values from the
	// the tokens offered on incoming edges to the parameter value.
	// (Note that an output activity parameter node may fire multiple times,
	// accumulating tokens offered to it.)

	ParameterPtr parameter = std::dynamic_pointer_cast<ActivityParameterNode>(this->node)->parameter;
	ParameterValuePtr parameterValue = this->getActivityExecution()->getParameterValue(parameter);

	if (this->node->incoming->size() == 0)
	{
		utils::Debug::println("[fire] Input activity parameter node " + this->node->name + "...");
		if (parameterValue != nullptr)
		{
			utils::Debug::println(
				"[fire] Parameter has " + std::to_string(parameterValue->values->size()) + " value(s).");
			const ValueListPtr& values = parameterValue->values;
			for (const ValuePtr& value : *values)
			{
				;
				ObjectTokenPtr token(new ObjectToken());
				token->value = value;
				this->addToken(token);
			}
			this->sendUnofferedTokens();
		}
	}

	else
	{
		utils::Debug::println("[fire] Output activity parameter node " + this->node->name + "...");

		this->addTokens(incomingTokens);

		StreamingParameterValuePtr streamingParameterValue = std::dynamic_pointer_cast<StreamingParameterValue>(
			parameterValue);

		if (streamingParameterValue)
		{
			ValueListPtr values(new ValueList());
			for (const TokenPtr& token : *incomingTokens)
			{
				ValuePtr value = token->getValue();
				if (value != nullptr)
				{
					values->push_back(value);
					utils::Debug::println(
						"[event] Post activity=" + this->getActivityExecution()->getBehavior()->name + " parameter="
							+ parameterValue->parameter->name + " value=" + std::to_string(value->hashCode()));
				}
			}
			streamingParameterValue->post(values);
			ObjectNodeActivation::clearTokens();
		}
	}

} // fire

void ActivityParameterNodeActivation::clearTokens()
{
	// Clear all held tokens only if this is an input parameter node.

	if (this->node->incoming->size() == 0)
	{
		ObjectNodeActivation::clearTokens();
	}
} // clearTokens
