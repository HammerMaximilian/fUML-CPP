/*
 * LinkAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "LinkAction.h"

using namespace fuml::syntax::actions;

LinkAction::~LinkAction()
{
}

void LinkAction::addEndData(
	const std::shared_ptr<LinkEndData>& endData)
{
	this->endData->push_back(endData);
} //addEndData

void LinkAction::addInputValue(
	const std::shared_ptr<InputPin>& inputValue)
{
	Action::addInput(inputValue);
	this->inputValue->push_back(inputValue);
}
