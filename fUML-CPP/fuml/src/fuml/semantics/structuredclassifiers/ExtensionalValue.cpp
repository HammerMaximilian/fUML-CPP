/*
 * ExtensionalValue.cpp
 *
 *  Created on: 26.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/ExtensionalValue.h>

#include <fuml/semantics/loci/Locus.h>

ExtensionalValue::~ExtensionalValue()
{
}

void ExtensionalValue::setThisExtensionalValuePtr(ExtensionalValuePtr_w thisExtensionalValuePtr)
{
	this->thisExtensionalValuePtr = thisExtensionalValuePtr;
}

void ExtensionalValue::destroy()
{
	// Remove this value from its locus (if it has not already been
	// destroyed).

	if (this->locus != nullptr)
	{
		this->locus->remove(this->thisExtensionalValuePtr.lock());
	}
} // destroy

ValuePtr ExtensionalValue::copy()
{
	// Create a new extensional value with the same feature values at the
	// same locus as this one.

	ExtensionalValuePtr newValue = std::dynamic_pointer_cast<ExtensionalValue>(CompoundValue::copy());
	newValue->setThisExtensionalValuePtr(newValue);

	if (this->locus != nullptr)
	{
		this->locus->add(newValue);
	}
	else
	{
		this->identifier = "";
	}

	return newValue;
} // copy

std::string ExtensionalValue::toString()
{
	return this->identifier + CompoundValue::toString();
} // toString
