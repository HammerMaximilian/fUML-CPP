/*
 * Element.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "Element.h"

#include "ElementList.h"

using namespace fuml::syntax::commonstructure;

Element::~Element()
{
}

void Element::setThisPtr(std::weak_ptr<fuml::syntax::commonstructure::Element> thisElementPtr)
{
	this->thisElementPtr = thisElementPtr;
}

void Element::addOwnedElement(
	const std::shared_ptr<fuml::syntax::commonstructure::Element>& ownedElement)
{
	this->ownedElement->push_back(ownedElement);
	ownedElement->owner = thisElementPtr.lock();
} // addOwnedElement
