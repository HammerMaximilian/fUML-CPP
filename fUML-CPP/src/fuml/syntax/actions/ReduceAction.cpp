/*
 * ReduceAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ReduceAction.h"

using namespace fuml::syntax::actions;

void ReduceAction::setIsOrdered(bool isOrdered)
{
	this->isOrdered = isOrdered;
} //setIsOrdered

void ReduceAction::setReducer(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& reducer)
{
	this->reducer = reducer;
} // setReducer

void ReduceAction::setCollection(const std::shared_ptr<InputPin>& collection)
{
	Action::addInput(collection);
	this->collection = collection;
} // setCollection

void ReduceAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
