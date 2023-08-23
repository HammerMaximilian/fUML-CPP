/*
 * CreateObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/CreateObjectAction.h>
#include <fuml/syntax/classification/Classifier.h>

using namespace fuml::syntax::actions;

void CreateObjectAction::setClassifier(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& endData)
{
	this->classifier = classifier;
} // setClassifier

void CreateObjectAction::setResult(
	const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setClassifier
