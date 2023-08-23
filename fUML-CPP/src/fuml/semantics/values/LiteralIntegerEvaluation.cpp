/*
 * LiteralIntegerEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/simplesclassifiers/IntegerValue.h>
#include <fuml/semantics/values/LiteralIntegerEvaluation.h>
#include <fuml/syntax/values/LiteralInteger.h>

ValuePtr LiteralIntegerEvaluation::evaluate()
{
	// Evaluate a literal integer, producing a integer value.

	LiteralIntegerPtr literal = std::dynamic_pointer_cast<LiteralInteger>(this->specification);
	IntegerValuePtr integerValue(new IntegerValue());
	integerValue->type = this->getType("Integer");
	integerValue->value = literal->value;

	return integerValue;
} //evaluate
