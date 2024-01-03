/*
 * UnmarshallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/UnmarshallAction.h>

void UnmarshallAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
}

void UnmarshallAction::addResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
}

void UnmarshallAction::setUnmarshallType(const ClassifierPtr& unmarshallType)
{
	this->unmarshallType = unmarshallType;
}
