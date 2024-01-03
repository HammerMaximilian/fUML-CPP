/*
 * Slot.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <uml/classification/Slot.h>
#include "uml/values/ValueSpecification.h"

void Slot::setDefiningFeature(StructuralFeaturePtr definingFeature)
{
	this->definingFeature = definingFeature;
} // setDefiningFeature

void Slot::addValue(ValueSpecificationPtr value)
{
	this->addOwnedElement(value);
	this->value->push_back(value);
} // addValue

void Slot::_setOwningInstance(InstanceSpecificationPtr owningInstance)
{
	this->owningInstance = owningInstance;
} // _setOwningInstance
