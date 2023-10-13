/*
 * ConditionalNodeActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ConditionalNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ClauseActivation.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/actions/Clause.h>
#include <fuml/syntax/actions/ConditionalNode.h>
#include <fuml/syntax/actions/OutputPin.h>

void ConditionalNodeActivation::setThisConditionalNodeActivationPtr(
	ConditionalNodeActivationPtr_w thisConditionalNodeActivationPtr)
{
	this->thisConditionalNodeActivationPtr = thisConditionalNodeActivationPtr;
	StructuredActivityNodeActivation::setThisStructuredActivityNodeActivationPtr(thisConditionalNodeActivationPtr);
}

void ConditionalNodeActivation::doStructuredActivity()
{
	// Run all the non-executable, non-pin nodes in the conditional node.
	// Activate all clauses in the conditional node and pass control to
	// those that are ready (i.e., have no predecessors).
	// If one or more clauses have succeeded in being selected, choose one
	// non-deterministically and run its body, then copy the outputs of that
	// clause to the output pins of the node.

	ConditionalNodePtr node = std::dynamic_pointer_cast<ConditionalNode>(this->node);

	const ActivityNodeActivationListPtr& nodeActivations = this->activationGroup->nodeActivations;
	ActivityNodeActivationListPtr nonExecutableNodeActivations(new ActivityNodeActivationList());
	for (const ActivityNodeActivationPtr& nodeActivation : *nodeActivations)
	{
		ExecutableNodePtr executableNode = std::dynamic_pointer_cast<ExecutableNode>(nodeActivation->node);
		PinPtr pin = std::dynamic_pointer_cast<Pin>(nodeActivation->node);

		if (!(executableNode || pin))
		{
			nonExecutableNodeActivations->push_back(nodeActivation);
		}
	}

	this->activationGroup->run(nonExecutableNodeActivations);

	this->clauseActivations->clear();
	const ClauseListPtr& clauses = node->clause;
	for (const ClausePtr& clause : *clauses)
	{
		ClauseActivationPtr clauseActivation(new ClauseActivation());
		clauseActivation->clause = clause;
		clauseActivation->conditionalNodeActivation = this->thisConditionalNodeActivationPtr.lock();
		this->clauseActivations->push_back(clauseActivation);
	}

	this->selectedClauses->clear();

	ClauseActivationListPtr readyClauseActivations(new ClauseActivationList());
	unsigned int i = 0;
	for (const ClauseActivationPtr& clauseActivation : *(this->clauseActivations))
	{
		fuml::Debug::println(
			"[doStructuredActivity] clauseActivations[" + std::to_string(i) + "] = "
				+ std::to_string(clauseActivation->hashCode()));
		if (clauseActivation->isReady())
		{
			fuml::Debug::println("[doStructuredActivity] Clause activation is ready.");
			readyClauseActivations->push_back(clauseActivation);
		}
		i++;
	}

	// *** Give control to all ready clauses concurrently. ***
	for (const ClauseActivationPtr& clauseActivation : *readyClauseActivations)
	{
		fuml::Debug::println(
			"[doStructuredActivity] Giving control to " + std::to_string(clauseActivation->hashCode()) + "...");
		clauseActivation->receiveControl();
	}

	this->selectedClause = nullptr;
	if (this->selectedClauses->size() > 0 && this->isRunning())
	{
		fuml::Debug::println(
			"[doStructuredActivity] " + std::to_string(this->selectedClauses->size()) + " clause(s) selected.");

		// *** If multiple clauses are selected, choose one
		// non-deterministically. ***
		int i = std::dynamic_pointer_cast<ChoiceStrategy>(this->getExecutionLocus()->factory->getStrategy("choice"))
			->choose(this->selectedClauses->size());
		this->selectedClause = this->selectedClauses->at(i - 1);

		fuml::Debug::println(
			"[doStructuredActivity] Running selectedClauses[" + std::to_string(i) + "] = "
				+ std::to_string(this->selectedClause->hashCode()));

		for (const ClausePtr& clause : *clauses)
		{
			if (clause != selectedClause)
			{
				ExecutableNodeListPtr testNodes = clause->test;
				for (const ExecutableNodePtr& testNode : *testNodes)
				{
					this->activationGroup->getNodeActivation(testNode)->terminate();
				}
			}
		}

		this->activationGroup->runNodes(this->makeActivityNodeList(this->selectedClause->body));
	}
} // doStructuredActivity

void ConditionalNodeActivation::completeBody()
{
	// Complete the activation of the body of a conditional note by
	// copying the outputs of the selected clause (if any) to the output
	// pins of the node and terminating the activation of all nested nodes.

	if (this->selectedClause != nullptr)
	{
		ConditionalNodePtr node = std::dynamic_pointer_cast<ConditionalNode>(this->node);
		OutputPinListPtr resultPins = node->result;
		OutputPinListPtr bodyOutputPins = this->selectedClause->bodyOutput;
		unsigned int resultPinsSize = resultPins->size();
		for (unsigned int k = 0; k < resultPinsSize; k++)
		{
			OutputPinPtr resultPin = resultPins->at(k);
			OutputPinPtr bodyOutputPin = bodyOutputPins->at(k);
			this->putTokens(resultPin, this->getPinValues(bodyOutputPin));
		}
	}
	this->activationGroup->terminateAll();
} // completeBody

TokenListPtr ConditionalNodeActivation::completeAction()
{
	// Only complete the conditional node if it is not suspended.

	if (!this->isSuspended())
	{
		completeBody();
	}
	return StructuredActivityNodeActivation::completeAction();
} // completeAction

ClauseActivationPtr ConditionalNodeActivation::getClauseActivation(const ClausePtr& clause)
{
	// Get the clause activation corresponding to the given clause.

	ClauseActivationPtr selectedClauseActivation = nullptr;
	for (const ClauseActivationPtr& clauseActivation : *(this->clauseActivations))
	{
		if (clauseActivation->clause == clause)
		{
			selectedClauseActivation = clauseActivation;
			break;
		}
	}

	return selectedClauseActivation;
} // getClauseActivation

void ConditionalNodeActivation::runTest(const ClausePtr& clause)
{
	// Run the test for the given clause.

	if (this->isRunning())
	{
		this->activationGroup->runNodes(this->makeActivityNodeList(clause->test));
	}
} // runTest

void ConditionalNodeActivation::selectBody(const ClausePtr& clause)
{
	// Add the clause to the list of selected clauses.

	this->selectedClauses->push_back(clause);

} // selectBody

void ConditionalNodeActivation::resume()
{
	// When this conditional node is resumed after being suspended, complete
	// its body and then resume it as a structured activity node.
	// [Note that this presumes that accept event actions are not allowed
	// in the test part of a clause of a conditional node.]

	completeBody();
	StructuredActivityNodeActivation::resume();
} // resume
