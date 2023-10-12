/*
 * LiteralNullEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/values/LiteralNullEvaluation.h>

ValuePtr LiteralNullEvaluation::evaluate()
{
	// Evaluate a literal null, returning nothing (since a null represents
	// an "absence of any value").

	return nullptr;
} //evaluate
