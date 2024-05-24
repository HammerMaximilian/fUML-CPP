/*
 * LiteralUnlimitedNaturalEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/values/LiteralUnlimitedNaturalEvaluation.h>
#include <uml/values/LiteralUnlimitedNatural.h>

ValuePtr LiteralUnlimitedNaturalEvaluation::evaluate()
{
	// Evaluate a literal unlimited Natural, producing a unlimited Natural value.

	LiteralUnlimitedNaturalPtr literal = AS(LiteralUnlimitedNatural, this->specification);
	UnlimitedNaturalValuePtr unlimitedNaturalValue(new UnlimitedNaturalValue());
	unlimitedNaturalValue->type = this->getType("UnlimitedNatural");
	unlimitedNaturalValue->value = literal->value;

	return unlimitedNaturalValue;
} //evaluate
