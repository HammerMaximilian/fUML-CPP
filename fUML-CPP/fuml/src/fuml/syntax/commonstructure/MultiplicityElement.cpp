/*
 * MultiplicityElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/MultiplicityElement.h>
#include <fuml/syntax/values/LiteralInteger.h>
#include <fuml/syntax/values/LiteralUnlimitedNatural.h>

MultiplicityElement::MultiplicityElement()
{
	// This constructor sets upperValue and lowerValue consistently with the
	// initializers for upper and lower.

	this->setUpper(1);
	this->setLower(1);
} // MultiplicityElement

void MultiplicityElement::setIsOrdered(bool isOrdered)
{
	this->isOrdered = isOrdered;
} // setIsOrdered

void MultiplicityElement::setIsUnique(bool isUnique)
{
	this->isUnique = isUnique;
} // setIsUnique

void MultiplicityElement::setUpperValue(const ValueSpecificationPtr& upperValue)
{
	this->upperValue = upperValue;

	LiteralUnlimitedNaturalPtr literalUnlimitedNatural = std::dynamic_pointer_cast<LiteralUnlimitedNatural>(upperValue);

	if (literalUnlimitedNatural)
	{
		this->upper = literalUnlimitedNatural->value;
	}
} // setUpperValue

void MultiplicityElement::setLowerValue(const ValueSpecificationPtr& lowerValue)
{
	this->lowerValue = lowerValue;

	LiteralIntegerPtr literalInteger = std::dynamic_pointer_cast<LiteralInteger>(lowerValue);

	if (literalInteger)
	{
		this->lower = literalInteger->value;
	}
} // setLowerValue

void MultiplicityElement::setUpper(int upper)
{
	// Note: This is a convenience operation that may be used _instead_ of
	// setUpperValue, not in addition to it.

	this->upper = upper;
	this->upperValue = std::make_shared<LiteralUnlimitedNatural>();
	(std::dynamic_pointer_cast<LiteralUnlimitedNatural>(this->upperValue))->setValue(this->upper);
} // setUpper

void MultiplicityElement::setLower(int lower)
{
	// Note: This is a convenience operation that may be used _instead_ of
	// setLowerValue, not in addition to it.

	this->lower = lower;
	this->lowerValue = std::make_shared<LiteralInteger>();
	(std::dynamic_pointer_cast<LiteralInteger>(this->lowerValue))->setValue(this->lower);
} // setLower
