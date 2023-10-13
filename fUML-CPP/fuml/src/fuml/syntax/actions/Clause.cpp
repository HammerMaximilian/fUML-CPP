/*
 * Clause.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/Clause.h>

void Clause::setThisClausePtr(ClausePtr_w thisClausePtr)
{
	Element::setThisElementPtr(thisClausePtr);
	this->thisClausePtr = thisClausePtr;
}

void Clause::addPredecessorClause(const ClausePtr& predecessorClause)
{
	this->predecessorClause->push_back(predecessorClause);
	predecessorClause->successorClause->push_back(thisClausePtr.lock());
} // addPredecessorClause

void Clause::addTest(const ExecutableNodePtr& test)
{
	this->test->push_back(test);
} // addTest

void Clause::addBody(const ExecutableNodePtr& body)
{
	this->body->push_back(body);
} // addBody

void Clause::setDecider(const OutputPinPtr& decider)
{
	this->decider = decider;
} // setDecider

void Clause::addBodyOutput(const OutputPinPtr& bodyOutput)
{
	this->bodyOutput->push_back(bodyOutput);
} // addBodyOutput
