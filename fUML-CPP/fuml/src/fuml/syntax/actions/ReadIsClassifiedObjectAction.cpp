/*
 * ReadIsClassifiedObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReadIsClassifiedObjectAction.h>

void ReadIsClassifiedObjectAction::setIsDirect(bool isDirect)
{
	this->isDirect = isDirect;
} // setIsDirect

void ReadIsClassifiedObjectAction::setClassifier(const ClassifierPtr& classifier)
{
	this->classifier = classifier;
} // setClassifier

void ReadIsClassifiedObjectAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject

void ReadIsClassifiedObjectAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
