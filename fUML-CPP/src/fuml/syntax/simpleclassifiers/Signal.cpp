/*
 * Signal.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Signal.h"

#include "fuml/syntax/classification/Property.h"

void Signal::setThisPtr(std::weak_ptr<Signal> thisSignalPtr)
{
	this->thisSignalPtr = thisSignalPtr;
	Classifier::setThisPtr(thisSignalPtr);
}

void Signal::addOwnedAttribute(
	const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);

	this->ownedAttribute->push_back(ownedAttribute);
} // addOwnedAttribute
