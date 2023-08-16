/*
 * InstanceSpecification.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "InstanceSpecification.h"

#include "Slot.h"

using namespace fuml::syntax::classification;

void InstanceSpecification::setThisPtr(std::weak_ptr<fuml::syntax::classification::InstanceSpecification> thisInstanceSpecificationPtr)
{
	this->thisInstanceSpecificationPtr = thisInstanceSpecificationPtr;
	fuml::syntax::commonstructure::Element::setThisPtr(thisInstanceSpecificationPtr);
}

void InstanceSpecification::addClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>& classifier)
{
	this->classifier->push_back(classifier);
} // addClassifier

void InstanceSpecification::addSlot(const std::shared_ptr<fuml::syntax::classification::Slot>& slot)
{
	this->addOwnedElement(slot);
	this->slot->push_back(slot);
	slot->_setOwningInstance(thisInstanceSpecificationPtr.lock());
} // addSlot
