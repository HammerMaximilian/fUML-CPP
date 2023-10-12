/*
 * ClauseActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/ClauseActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ConditionalNodeActivation.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/syntax/actions/Clause.h>
#include <fuml/syntax/actions/OutputPin.h>

void ClauseActivation::receiveControl()
{
	// If all predecessors to the clause for this activation have run their
	// tests and failed, then run the test for this clause.
	// If the test succeeds, then terminate any other clauses that may be
	// running and run the body of this clause.
	// If the test fails, then pass control to successor clauses.

	fuml::Debug::println("[receiveControl] clauseActivation = " + std::to_string(this->hashCode()));

	if (this->isReady())
	{
		fuml::Debug::println("[receiveControl] Running test...");
		this->runTest();

		BooleanValuePtr decision = this->getDecision();

		// Note that the decision may be nullptr if the test was terminated
		// before completion.
		if (decision != nullptr)
		{
			if (decision->value == true)
			{
				fuml::Debug::println("[receiveControl] Test succeeded.");
				this->selectBody();
			}
			else
			{
				fuml::Debug::println("[receiveControl] Test failed.");

				ClauseActivationListPtr successors = this->getSuccessors();

				// *** Give control to all successors concurrently. ***
				for (const ClauseActivationPtr& successor : *successors)
				{
					successor->receiveControl();
				}
			}
		}
	}
} // receiveControl

bool ClauseActivation::isReady()
{
	// Test if all predecessors to this clause activation have failed.

	ClauseActivationListPtr predecessors = this->getPredecessors();

	bool ready = true;
	for (const ClauseActivationPtr& predecessor : *predecessors)
	{
		BooleanValuePtr decisionValue = predecessor->getDecision();

		// Note that the decision will be nullptr if the predecessor clause has
		// not run yet.
		if (decisionValue == nullptr)
		{
			ready = false;
		}
		else
		{
			ready = !decisionValue->value;
		}

		if (!ready)
			break;
	}

	return ready;
} // isReady

void ClauseActivation::runTest()
{
	// Run the test of the clause for this clause activation.

	this->conditionalNodeActivation->runTest(this->clause);
} // runTest

void ClauseActivation::selectBody()
{
	// Select the body of the clause for this clause activation.

	this->conditionalNodeActivation->selectBody(this->clause);
} // selectBody

BooleanValuePtr ClauseActivation::getDecision()
{
	// Get the value (if any) on the decider pin of the clause for this
	// clause activation.

	ValueListPtr deciderValues = this->conditionalNodeActivation->getPinValues(this->clause->decider);

	BooleanValuePtr deciderValue = nullptr;
	if (deciderValues->size() > 0)
	{
		deciderValue = std::dynamic_pointer_cast<BooleanValue>(deciderValues->at(0));
	}

	return deciderValue;
} // getDecision

ClauseActivationListPtr ClauseActivation::getPredecessors()
{
	// Return the clause activations for the predecessors of the clause for
	// this clause activation.

	ClauseActivationListPtr predecessors(new ClauseActivationList());

	ClauseListPtr predecessorClauses = this->clause->predecessorClause;
	for (const ClausePtr& predecessorClause : *predecessorClauses)
	{
		predecessors->push_back(this->conditionalNodeActivation->getClauseActivation(predecessorClause));
	}

	return predecessors;
} // getPredecessors

ClauseActivationListPtr ClauseActivation::getSuccessors()
{
	// Return the clause activations for the successors of the clause for
	// this clause activation.

	ClauseActivationListPtr successors(new ClauseActivationList());

	ClauseListPtr successorClauses = this->clause->successorClause;
	for (const ClausePtr& successorClause : *successorClauses)
	{
		successors->push_back(this->conditionalNodeActivation->getClauseActivation(successorClause));
	}

	return successors;
} // getSuccessors
