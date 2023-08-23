/*
 * ReduceAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReduceAction.h>

void ReduceAction::setIsOrdered(bool isOrdered)
{
	this->isOrdered = isOrdered;
} //setIsOrdered

void ReduceAction::setReducer(
	const BehaviorPtr& reducer)
{
	this->reducer = reducer;
} // setReducer

void ReduceAction::setCollection(const InputPinPtr& collection)
{
	Action::addInput(collection);
	this->collection = collection;
} // setCollection

void ReduceAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
