/*
 * ConditionalNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ConditionalNode.h>
#include <fuml/syntax/actions/Clause.h>
#include <memory>
#include <vector>

using namespace fuml::syntax::actions;

void ConditionalNode::setIsDeterminate(bool isDeterminate) {
	this->isDeterminate = isDeterminate;
} // setIsDeterminate

void ConditionalNode::setIsAssured(bool isAssured) {
	this->isAssured = isAssured;
} // setIsAssured

void ConditionalNode::addClause(
		const std::shared_ptr<Clause>& clause) {
	fuml::syntax::commonstructure::Element::addOwnedElement(clause);
	this->clause->push_back(clause);
} // addClause

void ConditionalNode::addResult(const std::shared_ptr<OutputPin>& result) {
	StructuredActivityNode::addStructuredNodeOutput(result);
	this->result->push_back(result);
} // addResult
