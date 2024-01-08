/*
 * Element.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/Element.h>
#include <algorithm>

Element::~Element()
{
}

void Element::setThisElementPtr(ElementPtr_w thisElementPtr)
{
	this->thisElementPtr = thisElementPtr;
}

void Element::addOwnedElement(const ElementPtr& ownedElement)
{
	this->ownedElement->push_back(ownedElement);
	ownedElement->owner = thisElementPtr.lock();
} // addOwnedElement

void Element::applyStereotype(const StereotypePtr& stereotype)
{
	if(std::find(this->appliedStereotype->begin(), this->appliedStereotype->end(), stereotype) == this->appliedStereotype->end())
	{
		appliedStereotype->push_back(stereotype);
	}
}

void Element::unapplyStereotype(const StereotypePtr& stereotype)
{
	this->appliedStereotype->erase(std::remove(this->appliedStereotype->begin(), this->appliedStereotype->end(), stereotype), this->appliedStereotype->end());
}
