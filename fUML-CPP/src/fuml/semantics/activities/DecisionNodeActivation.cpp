/*
 * DecisionNodeActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/activities/DecisionNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/Token.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/values/Value.h>
#include <fuml/syntax/activities/DecisionNode.h>
#include <fuml/syntax/activities/ObjectFlow.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/Behavior.h>

void DecisionNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Get the decision values and test them on each guard.
	// Forward the offer over the edges for which the test succeeds.

	fuml::Debug::println("[fire] Decision node " + this->node->name + "...");

	TokenListPtr removedControlTokens = this->removeJoinedControlTokens(incomingTokens);
	ValueListPtr decisionValues = this->getDecisionValues(incomingTokens);

	const ActivityEdgeInstanceListPtr& outgoingEdges = this->outgoingEdges;
	for (const ActivityEdgeInstancePtr& edgeInstance : *outgoingEdges)
	{

		ValueSpecificationPtr guard = edgeInstance->edge->guard;

		TokenListPtr offeredTokens(new TokenList());
		for (unsigned int j = 0; j < incomingTokens->size(); j++)
		{
			const TokenPtr& incomingToken = incomingTokens->at(j);
			const ValuePtr& decisionValue = decisionValues->at(j);
			if (this->test(guard, decisionValue))
			{
				offeredTokens->push_back(incomingToken);
			}
		}

		if (offeredTokens->size() > 0)
		{
			for (const TokenPtr& removedControlToken : *removedControlTokens)
			{
				offeredTokens->push_back(removedControlToken);
			}
			edgeInstance->sendOffer(offeredTokens);
		}
	}
} // fire

ValueListPtr DecisionNodeActivation::getDecisionValues(const TokenListPtr& incomingTokens)
{
	// If there is neither a decision input flow nor a decision input
	// behavior, then return the set of values from the incoming tokens.
	// [In this case, the single incoming edge must be an object flow.]
	// If there is a decision input flow, but no decision input behavior,
	// then return a list of the decision input values equal in size to the
	// number of incoming tokens.
	// If there is both a decision input flow and a decision input behavior,
	// then execute the decision input behavior once for each incoming token
	// and return the set of resulting values.
	// If the primary incoming edge is an object flow, then the value on
	// each object token is passed to the decision input behavior, along
	// with the decision input flow value, if any.
	// If the primary incoming edge is a control flow, then the decision
	// input behavior only receives the decision input flow, if any.

	ValuePtr decisionInputValue = this->getDecisionInputFlowValue();

	ValueListPtr decisionValues(new ValueList());
	for (const TokenPtr& incomingToken : *incomingTokens)
	{
		ValuePtr value = this->executeDecisionInputBehavior(incomingToken->getValue(), decisionInputValue);
		decisionValues->push_back(value);
	}

	unsigned int i = 0;
	for (const ValuePtr& decisionValue : *decisionValues)
	{
		fuml::Debug::println(
			"[getDecisionValues] decisionValues[" + std::to_string(i++) + "] = "
				+ std::to_string(decisionValue->hashCode()));
	}

	return decisionValues;
} // getDecisionValues

ValuePtr DecisionNodeActivation::executeDecisionInputBehavior(const ValuePtr& inputValue,
	const ValuePtr& decisionInputValue)
{
	// Create the decision input execution from the decision input behavior.
	// If the behavior has input parameter(s), set the input parameter(s) of
	// the execution to the given value(s).
	// Execute the decision input execution and then remove it.
	// Return the value of the output parameter of the execution.
	// If there is no decision input behavior, the decision input value is
	// returned, if one is given, otherwise the input value is used as the
	// decision value.

	fuml::Debug::println("[executeDecisionBehavior] inputValue = " + std::to_string(inputValue->hashCode()));

	BehaviorPtr decisionInputBehavior = std::dynamic_pointer_cast<DecisionNode>(this->node)->decisionInput;

	ValuePtr decisionInputResult = nullptr;

	if (decisionInputBehavior == nullptr)
	{

		if (decisionInputValue != nullptr)
		{
			decisionInputResult = decisionInputValue;
		}
		else
		{
			decisionInputResult = inputValue;
		}

	}
	else
	{

		this->decisionInputExecution = this->getExecutionLocus()->factory->createExecution(decisionInputBehavior,
			this->getExecutionContext());

		unsigned int i = 1;
		unsigned int j = 0;
		const ParameterListPtr& decisionInputBehaviorOwnedParameter = decisionInputBehavior->ownedParameter;
		unsigned int decisionInputBehaviorOwnedParameterSize = decisionInputBehaviorOwnedParameter->size();
		while ((j == 0 || (j == 1 && decisionInputValue != nullptr)) && i <= decisionInputBehaviorOwnedParameterSize)
		{
			const ParameterPtr& parameter = decisionInputBehaviorOwnedParameter->at(i - 1);
			if (parameter->direction == ParameterDirectionKind::in
				|| parameter->direction == ParameterDirectionKind::inout)
			{
				ParameterValuePtr inputParameterValue(new ParameterValue());
				inputParameterValue->parameter = parameter;

				j = j + 1;
				if (j == 1 && inputValue != nullptr)
				{
					inputParameterValue->values->push_back(inputValue);
				}
				else
				{
					inputParameterValue->values->push_back(decisionInputValue);
				}

				this->decisionInputExecution->setParameterValue(inputParameterValue);

			}
			i = i + 1;
		}

		this->decisionInputExecution->execute();

		ParameterValueListPtr outputParameterValues = this->decisionInputExecution->getOutputParameterValues();
		decisionInputExecution->destroy();

		decisionInputResult = outputParameterValues->at(0)->values->at(0);
	}

	return decisionInputResult;
} // executeDecisionInputBehavior

void DecisionNodeActivation::terminate()
{
	// Terminate the decision input execution, if any, and then terminate
	// this activation.

	if (this->decisionInputExecution != nullptr)
	{
		this->decisionInputExecution->terminate();
	}

	ActivityNodeActivation::terminate();
} // terminate

bool DecisionNodeActivation::isReady()
{
	// Check that all incoming edges have sources that are offering tokens.
	// [This should be at most two incoming edges, if there is a decision
	// input flow.]

	bool ready = true;
	for (const ActivityEdgeInstancePtr& incomingEdge : *(this->incomingEdges))
	{
		ready = incomingEdge->hasOffer();
		if (!ready)
			break;
	}

	return ready;
} // isReady

TokenListPtr DecisionNodeActivation::takeOfferedTokens()
{
	// Get tokens from the incoming edge that is not the decision input
	// flow.

	ObjectFlowPtr decisionInputFlow = std::dynamic_pointer_cast<DecisionNode>(this->node)->decisionInputFlow;

	TokenListPtr allTokens(new TokenList());
	const ActivityEdgeInstanceListPtr& incomingEdges = this->incomingEdges;

	for (const ActivityEdgeInstancePtr& edgeInstance : *incomingEdges)
	{
		if (edgeInstance->edge != decisionInputFlow)
		{
			TokenListPtr tokens = edgeInstance->takeOfferedTokens();
			for (const TokenPtr& token : *tokens)
			{
				allTokens->push_back(token);
			}
		}
	}

	return allTokens;
} // takeOfferedTokens

ValuePtr DecisionNodeActivation::getDecisionInputFlowValue()
{
	// Take the next token available on the decision input flow, if any, and
	// return its value.

	ActivityEdgeInstancePtr decisionInputFlowInstance = this->getDecisionInputFlowInstance();

	ValuePtr value = nullptr;
	if (decisionInputFlowInstance != nullptr)
	{
		TokenListPtr tokens = decisionInputFlowInstance->takeOfferedTokens();
		if (tokens->size() > 0)
		{
			value = tokens->at(0)->getValue();
		}
	}

	return value;
} // getDecisionInputFlowValue

ActivityEdgeInstancePtr DecisionNodeActivation::getDecisionInputFlowInstance()
{
	// Get the activity edge instance for the decision input flow, if any.

	ActivityEdgePtr decisionInputFlow = std::dynamic_pointer_cast<DecisionNode>(this->node)->decisionInputFlow;

	ActivityEdgeInstancePtr edgeInstance = nullptr;
	if (decisionInputFlow != nullptr)
	{
		for (const ActivityEdgeInstancePtr& incomingEdge : *(this->incomingEdges))
		{
			if (incomingEdge->edge == decisionInputFlow)
			{
				edgeInstance = incomingEdge;
				break;
			}
		}
	}

	return edgeInstance;
}

bool DecisionNodeActivation::test(const ValueSpecificationPtr& guard, const ValuePtr& value)
{
	// Test if the given value matches the guard. If there is no guard,
	// return true.

	bool guardResult = true;
	if (guard != nullptr)
	{
		ValuePtr guardValue = this->getExecutionLocus()->executor->evaluate(guard);
		guardResult = guardValue->equals(value);
	}

	return guardResult;
} // test

TokenListPtr DecisionNodeActivation::removeJoinedControlTokens(const TokenListPtr& incomingTokens)
{
	// If the primary incoming edge is an object flow, then remove any
	// control tokens from the incoming tokens and return them.
	// [Control tokens may effectively be offered on an object flow outgoing
	// from a join node that has both control and object flows incoming.]

	TokenListPtr removedControlTokens(new TokenList());

	if (this->hasObjectFlowInput())
	{
		TokenList::iterator it = incomingTokens->begin();
		TokenList::iterator itEnd = incomingTokens->end();

		for (; it != itEnd; it++)
		{
			TokenPtr token = *it;
			if (token->isControl())
			{
				removedControlTokens->push_back(token);
				it = incomingTokens->erase(it);
			}
		}
	}

	return removedControlTokens;
} // removeJoinedControlTokens

bool DecisionNodeActivation::hasObjectFlowInput()
{
	// Check that the primary incoming edge is an object flow.

	ActivityEdgePtr decisionInputFlow = std::dynamic_pointer_cast<DecisionNode>(this->node)->decisionInputFlow;

	bool isObjectFlow = false;
	for (const ActivityEdgeInstancePtr& incomingEdge : *(this->incomingEdges))
	{
		const ActivityEdgePtr& edge = incomingEdge->edge;
		isObjectFlow = (edge != decisionInputFlow) && (std::dynamic_pointer_cast<ObjectFlow>(edge) != nullptr);
		if (isObjectFlow)
			break;
	}

	return isObjectFlow;
} // hasObjectFlowInput
