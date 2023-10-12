/*
 * ReclassifyObjectAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/ReclassifyObjectAction.h>

void ReclassifyObjectAction::setIsReplaceAll(bool isReplaceAll)
{
	this->isReplaceAll = isReplaceAll;
} // setIsReplaceAll

void ReclassifyObjectAction::addOldClassifier(const ClassifierPtr& oldClassifier)
{
	this->oldClassifier->push_back(oldClassifier);
} // addOldClassifier

void ReclassifyObjectAction::addNewClassifier(const ClassifierPtr& newClassifier)
{
	this->newClassifier->push_back(newClassifier);
} // addNewClassifier

void ReclassifyObjectAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
}
