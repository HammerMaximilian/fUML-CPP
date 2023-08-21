/*
 * ReclassifyObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ReclassifyObjectAction.h"

using namespace fuml::syntax::actions;

void ReclassifyObjectAction::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setIsReplaceAll

void ReclassifyObjectAction::addOldClassifier(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& oldClassifier)
{
	this->oldClassifier->push_back(oldClassifier);
} // addOldClassifier

void ReclassifyObjectAction::addNewClassifier(
	const std::shared_ptr<fuml::syntax::classification::Classifier>& newClassifier)
{
	this->newClassifier->push_back(newClassifier);
} // addNewClassifier

void ReclassifyObjectAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
}
