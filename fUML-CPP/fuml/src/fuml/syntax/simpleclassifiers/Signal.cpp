/*
 * Signal.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/simpleclassifiers/Signal.h>

void Signal::setThisSignalPtr(std::weak_ptr<Signal> thisSignalPtr)
{
	this->thisSignalPtr = thisSignalPtr;
	Classifier::setThisClassifierPtr(thisSignalPtr);
}

void Signal::addOwnedAttribute(const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
} // addOwnedAttribute
