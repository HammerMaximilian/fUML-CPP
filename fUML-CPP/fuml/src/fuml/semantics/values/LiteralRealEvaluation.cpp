/*
 * LiteralRealEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/values/LiteralRealEvaluation.h>
#include <uml/values/LiteralReal.h>

ValuePtr LiteralRealEvaluation::evaluate()
{
	// Evaluate a real integer, producing a real value.

	LiteralRealPtr literal = std::dynamic_pointer_cast<LiteralReal>(specification);
	RealValuePtr realValue(new RealValue());
	realValue->type = this->getType("Real");
	realValue->value = literal->value;
	return realValue;
} //evaluate
