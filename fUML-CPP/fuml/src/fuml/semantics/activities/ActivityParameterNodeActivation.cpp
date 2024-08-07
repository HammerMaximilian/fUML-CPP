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
#include <uml/activities/ActivityParameterNode.h>
#include <uml/classification/Parameter.h>
#include <uml/commonbehavior/Behavior.h>

void ActivityParameterNodeActivation::setThisActivityParameterNodeActivationPtr(
	ActivityParameterNodeActivationPtr_w thisActivityParameterNodeActivationPtr)
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

	ParameterPtr parameter = AS(ActivityParameterNode, this->node)->parameter;
	ParameterValuePtr parameterValue = this->getActivityExecution()->getParameterValue(parameter);
	StreamingParameterValuePtr streamingParameterValue = AS(StreamingParameterValue, parameterValue);
	if (this->node->incoming->size() == 0 && streamingParameterValue)
	{
		ActivityParameterNodeStreamingParameterListenerPtr listener(
			new ActivityParameterNodeStreamingParameterListener());
		listener->nodeActivation = this->thisActivityParameterNodeActivationPtr.lock();
		streamingParameterValue->register_(listener);
		fuml::Debug::println("[run] Registering for streaming parameter " + parameter->name + ".");
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

	ParameterPtr parameter = AS(ActivityParameterNode, this->node)->parameter;
	ParameterValuePtr parameterValue = this->getActivityExecution()->getParameterValue(parameter);

	if (this->node->incoming->size() == 0)
	{
		fuml::Debug::println("[fire] Input activity parameter node " + this->node->name + "...");
		if (parameterValue != nullptr)
		{
			fuml::Debug::println(
				"[fire] Parameter has " + std::to_string(parameterValue->values->size()) + " value(s).");
			const ValueListPtr& values = parameterValue->values;
			for (const ValuePtr& value : *values)
			{
				ObjectTokenPtr token(new ObjectToken());
				token->setThisObjectTokenPtr(token);
				token->value = value;
				this->addToken(token);
			}
			this->sendUnofferedTokens();
		}
	}

	else
	{
		fuml::Debug::println("[fire] Output activity parameter node " + this->node->name + "...");

		this->addTokens(incomingTokens);

		StreamingParameterValuePtr streamingParameterValue = AS(StreamingParameterValue, parameterValue);

		if (streamingParameterValue)
		{
			ValueListPtr values(new ValueList());
			for (const TokenPtr& token : *incomingTokens)
			{
				ValuePtr value = token->getValue();
				if (value != nullptr)
				{
					values->push_back(value);
					fuml::Debug::println(
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
