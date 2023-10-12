/*
 * ExpansionRegionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ExpansionRegionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ExpansionActivationGroup.h>
#include <fuml/semantics/actions/ExpansionNodeActivation.h>
#include <fuml/semantics/actions/OutputPinActivation.h>
#include <fuml/semantics/actions/TokenSet.h>
#include <fuml/semantics/activities/Token.h>
#include <fuml/semantics/values/Value.h>
#include <fuml/syntax/actions/ExpansionRegion.h>
#include <fuml/syntax/actions/InputPin.h>

void ExpansionRegionActivation::setThisExpansionRegionActivationPtr(
	std::weak_ptr<ExpansionRegionActivation> thisExpansionRegionActivationPtr)
{
	this->thisExpansionRegionActivationPtr = thisExpansionRegionActivationPtr;
	ActionActivation::setThisActionActivationPtr(thisExpansionRegionActivationPtr);
}

TokenListPtr ExpansionRegionActivation::takeOfferedTokens()
{
	// Take the tokens from the input pin and input expansion node
	// activations and save them.

	ActionActivation::takeOfferedTokens();

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);
	const InputPinListPtr& inputPins = region->input;
	const ExpansionNodeListPtr& inputElements = region->inputElement;

	this->inputTokens->clear();
	this->inputExpansionTokens->clear();

	for (const InputPinPtr& inputPin : *inputPins)
	{
		TokenSetPtr tokenSet(new TokenSet());
		tokenSet->tokens = this->getPinActivation(inputPin)->takeTokens();
		this->inputTokens->push_back(tokenSet);
	}

	int n = this->numberOfValues();

	for (const ExpansionNodePtr& inputElement : *inputElements)
	{
		ExpansionNodeActivationPtr expansionNodeActivation = this->getExpansionNodeActivation(inputElement);
		expansionNodeActivation->fire(expansionNodeActivation->takeOfferedTokens());
		TokenListPtr tokens = expansionNodeActivation->takeTokens();
		TokenSetPtr tokenSet(new TokenSet());
		int j = 1;
		while (j <= n)
		{
			tokenSet->tokens->push_back(tokens->at(j - 1));
			j = j + 1;
		}
		this->inputExpansionTokens->push_back(tokenSet);
	}

	return TokenListPtr(new TokenList());
} // takeOfferedTokens

void ExpansionRegionActivation::doAction()
{
	// If the expansion region has mustIsolate=true, then carry out its
	// behavior with isolation.
	// Otherwise just activate it normally.

	if (std::dynamic_pointer_cast<StructuredActivityNode>(this->node)->mustIsolate)
	{
		_beginIsolation();
		this->doStructuredActivity();
		_endIsolation();
	}
	else
	{
		this->doStructuredActivity();
	}
} // doAction

void ExpansionRegionActivation::doStructuredActivity()
{
	// Create a number of expansion region activation groups equal to the
	// number of values expanded in the region,
	// setting the region inputs and group inputs for each group.
	// Run the body of the region in each group, either iteratively or in
	// parallel.
	// Add the outputs of each activation group to the corresonding output
	// expansion node activations.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);
	const InputPinListPtr& inputPins = region->input;
	const ExpansionNodeListPtr& inputElements = region->inputElement;
	const ExpansionNodeListPtr& outputElements = region->outputElement;

	this->activationGroups->clear();
	unsigned int n = this->inputExpansionTokens->at(0)->tokens->size();
	unsigned int k = 1;
	while (k <= n)
	{
		ExpansionActivationGroupPtr activationGroup(new ExpansionActivationGroup());
		activationGroup->regionActivation = this->thisExpansionRegionActivationPtr.lock();
		activationGroup->index = k;

		unsigned int j = 1;
		unsigned int inputPinsSize = inputPins->size();
		while (j <= inputPinsSize)
		{
			OutputPinActivationPtr regionInput(new OutputPinActivation());
			regionInput->run();
			activationGroup->regionInputs->push_back(regionInput);
			j = j + 1;
		}

		j = 1;
		unsigned int inputElementsSize = inputElements->size();
		while (j <= inputElementsSize)
		{
			OutputPinActivationPtr groupInput(new OutputPinActivation());
			groupInput->run();
			activationGroup->groupInputs->push_back(groupInput);
			j = j + 1;
		}

		j = 1;
		unsigned int outputElementsSize = outputElements->size();
		while (j <= outputElementsSize)
		{
			OutputPinActivationPtr groupOutput(new OutputPinActivation());
			groupOutput->run();
			activationGroup->groupOutputs->push_back(groupOutput);
			j = j + 1;
		}

		activationGroup->createNodeActivations(region->node);
		activationGroup->createEdgeInstances(region->edge);
		this->activationGroups->push_back(activationGroup);

		k = k + 1;
	}

	if (region->mode == ExpansionKind::iterative)
	{
		fuml::Debug::println("[doStructuredActivity] Expansion mode = iterative");
		this->next = 1;
		this->runIterative();
	}
	else if (region->mode == ExpansionKind::parallel)
	{
		fuml::Debug::println("[doStructuredActivity] Expansion mode = parallel");
		this->runParallel();
	}

	this->doOutput();
} // doStructuredActivity

void ExpansionRegionActivation::runIterative()
{
	// Run the body of the region iteratively, either until all activation
	// groups have run or until the region is suspended.

	const ExpansionActivationGroupListPtr& activationGroups = this->activationGroups;

	const unsigned int activationGroupsSize = activationGroups->size();
	while ((unsigned int) this->next <= activationGroupsSize && !this->isSuspended())
	{
		ExpansionActivationGroupPtr activationGroup = activationGroups->at(this->next - 1);
		this->runGroup(activationGroup);
		this->next = this->next + 1;
	}
} // runIterative

void ExpansionRegionActivation::runParallel()
{
	// Run the body of the region concurrently.

	const ExpansionActivationGroupListPtr& activationGroups = this->activationGroups;

	// *** Activate all groups concurrently. ***
	for (const ExpansionActivationGroupPtr& activationGroup : *activationGroups)
	{
		this->runGroup(activationGroup);
	}
} // runParallel

void ExpansionRegionActivation::doOutput()
{
	// Place tokens on the output expansion nodes.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);
	const ExpansionNodeListPtr& outputElements = region->outputElement;

	fuml::Debug::println(
		"[doOutput] Expansion region " + region->name + " is " + (this->isSuspended() ? "suspended." : "completed."));

	if (!this->isSuspended())
	{
		for (const ExpansionActivationGroupPtr& activationGroup : *activationGroups)
		{
			const OutputPinActivationListPtr& groupOutputs = activationGroup->groupOutputs;
			const unsigned int groupOutputsSize = groupOutputs->size();
			for (unsigned int j = 0; j < groupOutputsSize; j++)
			{
				const OutputPinActivationPtr& groupOutput = groupOutputs->at(j);
				const ExpansionNodePtr& outputElement = outputElements->at(j);
				this->getExpansionNodeActivation(outputElement)->addTokens(groupOutput->takeTokens());
			}
		}
	}
} // doOutput

void ExpansionRegionActivation::terminate()
{
	// Terminate the execution of all contained node activations (which
	// completes the performance of the expansion region activation).

	const ExpansionActivationGroupListPtr& activationGroups = this->activationGroups;
	for (const ExpansionActivationGroupPtr& activationGroup : *activationGroups)
	{
		const OutputPinActivationListPtr& groupOutputs = activationGroup->groupOutputs;

		_beginIsolation();
		for (const OutputPinActivationPtr& groupOutput : *groupOutputs)
		{
			groupOutput->fire(groupOutput->takeOfferedTokens());
		}
		activationGroup->terminateAll();
		_endIsolation();
	}

	ActionActivation::terminate();
} // terminate

void ExpansionRegionActivation::sendOffers()
{
	// Fire all output expansion nodes and send offers on all outgoing
	// control flows.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);

	// *** Send offers from all output expansion nodes concurrently. ***
	const ExpansionNodeListPtr& outputElements = region->outputElement;
	for (const ExpansionNodePtr& outputElement : *outputElements)
	{
		this->getExpansionNodeActivation(outputElement)->sendUnofferedTokens();
	}

	// Send offers on all outgoing control flows.
	ActionActivation::sendOffers();
} // sendOffers

void ExpansionRegionActivation::runGroup(const ExpansionActivationGroupPtr& activationGroup)
{
	// Set up the inputs for the group with the given index, run the group
	// and then fire the group outputs.

	if (this->isRunning())
	{
		fuml::Debug::println(
			"[runGroup] groupInput[0] = "
				+ std::to_string(
					this->inputExpansionTokens->at(0)->tokens->at(activationGroup->index - 1)->getValue()->hashCode()));

		const TokenSetListPtr& inputTokens = this->inputTokens;
		const unsigned int inputTokensSize = inputTokens->size();
		for (unsigned int j = 0; j < inputTokensSize; j++)
		{
			const TokenSetPtr& tokenSet = inputTokens->at(j);
			const OutputPinActivationPtr& regionInput = activationGroup->regionInputs->at(j);
			regionInput->clearTokens();
			regionInput->addTokens(tokenSet->tokens);
			regionInput->sendUnofferedTokens();
		}

		const TokenSetListPtr& inputExpansionTokens = this->inputExpansionTokens;
		const unsigned int inputExpansionTokensSize = inputExpansionTokens->size();
		for (unsigned int j = 0; j < inputExpansionTokensSize; j++)
		{
			const TokenSetPtr& tokenSet = inputExpansionTokens->at(j);
			const OutputPinActivationPtr& groupInput = activationGroup->groupInputs->at(j);
			groupInput->clearTokens();
			if (tokenSet->tokens->size() >= (unsigned int) activationGroup->index)
			{
				groupInput->addToken(tokenSet->tokens->at(activationGroup->index - 1));
			}
			groupInput->sendUnofferedTokens();
		}

		activationGroup->run(activationGroup->nodeActivations);

		this->terminateGroup(activationGroup);
	}
} // runGroup

void ExpansionRegionActivation::terminateGroup(const ExpansionActivationGroupPtr& activationGroup)
{
	// Terminate the given activation group, after preserving any group
	// outputs.
	if (this->isRunning() & !this->isSuspended())
	{
		const OutputPinActivationListPtr& groupOutputs = activationGroup->groupOutputs;
		for (const OutputPinActivationPtr& groupOutput : *groupOutputs)
		{
			groupOutput->fire(groupOutput->takeOfferedTokens());
		}

		activationGroup->terminateAll();
	}
} // terminateGroup

ExpansionNodeActivationPtr ExpansionRegionActivation::getExpansionNodeActivation(const ExpansionNodePtr&)
{
	// Return the expansion node activation corresponding to the given
	// expansion node, in the context of the activity node activation group
	// this expansion region activation is in.
	// [Note: Expansion regions do not own their expansion nodes. Instead,
	// they are own as object nodes by the enclosing activity or group.
	// Therefore, they will already be activated along with their expansion
	// region.]

	return std::dynamic_pointer_cast<ExpansionNodeActivation>(this->group->getNodeActivation(node));
} // getExpansionNodeActivation

int ExpansionRegionActivation::numberOfValues()
{
	// Return the number of values to be acted on by the expansion region of
	// this activation, which is the minimum of the number of values offered
	// to each of the input expansion nodes of the activation.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);
	ExpansionNodeListPtr inputElements = region->inputElement;

	unsigned int n = this->getExpansionNodeActivation(inputElements->at(0))->countOfferedValues();
	unsigned int i = 2;
	const unsigned int inputElementsSize = inputElements->size();
	while (i <= inputElementsSize)
	{
		unsigned int count = this->getExpansionNodeActivation(inputElements->at(i - 1))->countOfferedValues();
		if (count < n)
		{
			n = count;
		}
		i = i + 1;
	}

	return n;
} // numberOfValues

bool ExpansionRegionActivation::isSuspended()
{
	// Check if the activation group for this node is suspended.

	bool suspended = false;
	for (const ActivityNodeActivationGroupPtr& group : *(this->activationGroups))
	{
		suspended = group->isSuspended();
		if (suspended)
			break;
	}

	return suspended;
} // isSuspended

void ExpansionRegionActivation::resume(const ExpansionActivationGroupPtr& activationGroup)
{
	// Resume an expansion region after the suspension of the given
	// activation group. If the region is iterative, then continue with the
	// iteration. If the region is parallel, and there are no more suspended
	// activation groups, then generate the expansion node output.

	ExpansionRegionPtr region = std::dynamic_pointer_cast<ExpansionRegion>(this->node);

	ActivityNodeActivation::resume();
	this->terminateGroup(activationGroup);
	if (region->mode == ExpansionKind::iterative)
	{
		this->runIterative();
	}

	this->doOutput();
} // resume
