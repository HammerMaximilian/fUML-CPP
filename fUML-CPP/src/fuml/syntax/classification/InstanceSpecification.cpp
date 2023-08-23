/*
 * InstanceSpecification.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/InstanceSpecification.h>
#include <fuml/syntax/classification/Slot.h>

void InstanceSpecification::setThisPtr(std::weak_ptr<InstanceSpecification> thisInstanceSpecificationPtr)
{
	this->thisInstanceSpecificationPtr = thisInstanceSpecificationPtr;
	Element::setThisPtr(thisInstanceSpecificationPtr);
}

void InstanceSpecification::addClassifier(const ClassifierPtr& classifier)
{
	this->classifier->push_back(classifier);
} // addClassifier

void InstanceSpecification::addSlot(const SlotPtr& slot)
{
	this->addOwnedElement(slot);
	this->slot->push_back(slot);
	slot->_setOwningInstance(thisInstanceSpecificationPtr.lock());
} // addSlot
