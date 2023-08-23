/*
 * LinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/LinkAction.h>

LinkAction::~LinkAction()
{
}

void LinkAction::addEndData(
	const LinkEndDataPtr& endData)
{
	this->endData->push_back(endData);
} //addEndData

void LinkAction::addInputValue(
	const InputPinPtr& inputValue)
{
	Action::addInput(inputValue);
	this->inputValue->push_back(inputValue);
}
