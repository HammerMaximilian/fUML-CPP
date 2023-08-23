/*
 * LiteralBooleanEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALBOOLEANEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALBOOLEANEVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralBooleanEvaluation : LiteralEvaluation
	{
		public:
			virtual ValuePtr evaluate() override;
	}; // LiteralBooleanEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALBOOLEANEVALUATION_H_ */
