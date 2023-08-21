/*
 * ReadIsClassifiedObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ReadIsClassifiedObjectAction.h"

using namespace fuml::syntax::actions;

void ReadIsClassifiedObjectAction::setIsDirect(bool isDirect)
{
	this->isDirect = isDirect;
} // setIsDirect

void ReadIsClassifiedObjectAction::setClassifier(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& classifier)
{
	this->classifier = classifier;
} // setClassifier

void ReadIsClassifiedObjectAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject

void ReadIsClassifiedObjectAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
