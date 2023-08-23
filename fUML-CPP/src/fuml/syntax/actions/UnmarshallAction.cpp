/*
 * UnmarshallAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/UnmarshallAction.h>
#include <vector>

using namespace fuml::syntax::actions;

void UnmarshallAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
}

void UnmarshallAction::addResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result->push_back(result);
}

void UnmarshallAction::setUnmarshallType(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& unmarshallType)
{
	this->unmarshallType = unmarshallType;
}
