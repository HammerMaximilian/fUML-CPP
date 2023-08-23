/*
 * LiteralBooleanEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/simplesclassifiers/BooleanValue.h>
#include <fuml/semantics/values/LiteralBooleanEvaluation.h>
#include <fuml/syntax/values/LiteralBoolean.h>

ValuePtr LiteralBooleanEvaluation::evaluate()
{
	// Evaluate a literal boolean, producing a boolean value.

	LiteralBooleanPtr literal = std::dynamic_pointer_cast<LiteralBoolean>(this->specification);
	BooleanValuePtr booleanValue(new BooleanValue());
	booleanValue->type = this->getType("Boolean");
	booleanValue->value = literal->value;

	return booleanValue;
} //evaluate
