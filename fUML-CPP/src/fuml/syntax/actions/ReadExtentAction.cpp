/*
 * ReadExtentAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReadExtentAction.h>

using namespace fuml::syntax::actions;

void ReadExtentAction::setResult(const std::shared_ptr<OutputPin>& result)
{
	Action::addOutput(result);
	this->result = result;
} // setResult

void ReadExtentAction::setClassifier(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& classifier)
{
	this->classifier = classifier;
} // setClassifier

