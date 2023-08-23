/*
 * Slot.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <Slot.h>

#include <fuml/syntax/values/ValueSpecification.h>

using namespace fuml::syntax::classification;

void Slot::setDefiningFeature(
		std::shared_ptr<fuml::syntax::classification::StructuralFeature> definingFeature)
{
	this->definingFeature = definingFeature;
} // setDefiningFeature

void Slot::addValue(std::shared_ptr<fuml::syntax::values::ValueSpecification> value)
{
	this->addOwnedElement(value);
	this->value->push_back(value);
} // addValue

void Slot::_setOwningInstance(
		std::shared_ptr<fuml::syntax::classification::InstanceSpecification> owningInstance)
{
	this->owningInstance = owningInstance;
} // _setOwningInstance
