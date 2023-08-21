/*
 * Clause.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "Clause.h"

using namespace fuml::syntax::actions;

void Clause::setThisPtr(std::weak_ptr<Clause> thisClausePtr)
{
	fuml::syntax::commonstructure::Element::setThisPtr(thisClausePtr);
	this->thisClausePtr = thisClausePtr;
}

void Clause::addPredecessorClause(
	const std::shared_ptr<fuml::syntax::actions::Clause>& predecessorClause)
{
	this->predecessorClause->push_back(predecessorClause);
	predecessorClause->successorClause->push_back(thisClausePtr.lock());
} // addPredecessorClause

void Clause::addTest(
	const std::shared_ptr<fuml::syntax::activities::ExecutableNode>& test)
{
	this->test->push_back(test);
} // addTest

void Clause::addBody(
	const std::shared_ptr<fuml::syntax::activities::ExecutableNode>& body)
{
	this->body->push_back(body);
} // addBody

void Clause::setDecider(const std::shared_ptr<fuml::syntax::actions::OutputPin>& decider)
{
	this->decider = decider;
} // setDecider

void Clause::addBodyOutput(
	const std::shared_ptr<fuml::syntax::actions::OutputPin>& bodyOutput)
{
	this->bodyOutput->push_back(bodyOutput);
} // addBodyOutput
