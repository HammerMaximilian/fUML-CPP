/*
 * MultiplicityElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "MultiplicityElement.h"

#include "fuml/syntax/values/LiteralInteger.h"
#include "fuml/syntax/values/LiteralUnlimitedNatural.h"
#include "fuml/syntax/values/ValueSpecification.h"

using namespace fuml::syntax::commonstructure;

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

void MultiplicityElement::setUpperValue(
	const std::shared_ptr<fuml::syntax::values::ValueSpecification>& upperValue)
{
	this->upperValue = upperValue;

	std::shared_ptr<fuml::syntax::values::LiteralUnlimitedNatural> literalUnlimitedNatural =
			std::dynamic_pointer_cast<fuml::syntax::values::LiteralUnlimitedNatural>(upperValue);

	if (literalUnlimitedNatural)
	{
		this->upper = literalUnlimitedNatural->value;
	}
} // setUpperValue

void MultiplicityElement::setLowerValue(
	const std::shared_ptr<fuml::syntax::values::ValueSpecification>& lowerValue)
{
	this->lowerValue = lowerValue;

	std::shared_ptr<fuml::syntax::values::LiteralInteger> literalInteger =
			std::dynamic_pointer_cast<fuml::syntax::values::LiteralInteger>(lowerValue);

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
	this->upperValue = std::make_shared<fuml::syntax::values::LiteralUnlimitedNatural>();
	(std::dynamic_pointer_cast<fuml::syntax::values::LiteralUnlimitedNatural>(this->upperValue))->setValue(this->upper);
} // setUpper

void MultiplicityElement::setLower(int lower)
{
	// Note: This is a convenience operation that may be used _instead_ of
	// setLowerValue, not in addition to it.

	this->lower = lower;
	this->lowerValue = std::make_shared<fuml::syntax::values::LiteralInteger>();
	(std::dynamic_pointer_cast<fuml::syntax::values::LiteralInteger>(this->lowerValue))->setValue(this->lower);
} // setLower
