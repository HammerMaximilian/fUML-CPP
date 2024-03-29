/*
 * CreateObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/CreateObjectAction.h>
#include <uml/classification/Classifier.h>

void CreateObjectAction::setClassifier(const ClassifierPtr& classifier)
{
	this->classifier = classifier;
} // setClassifier

void CreateObjectAction::setResult(const OutputPinPtr& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult
