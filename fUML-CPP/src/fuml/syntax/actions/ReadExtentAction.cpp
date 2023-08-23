/*
 * ReadExtentAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReadExtentAction.h>

void ReadExtentAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult

void ReadExtentAction::setClassifier(
	const ClassifierPtr& classifier)
{
	this->classifier = classifier;
} // setClassifier

