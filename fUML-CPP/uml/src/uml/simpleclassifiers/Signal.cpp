/*
 * Signal.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/Property.h>
#include <uml/simpleclassifiers/Signal.h>

void Signal::setThisSignalPtr(SignalPtr_w thisSignalPtr)
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
