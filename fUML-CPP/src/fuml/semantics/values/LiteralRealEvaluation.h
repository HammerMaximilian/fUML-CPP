/*
 * LiteralRealEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALREALEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALREALEVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralRealEvaluation : LiteralEvaluation
	{
		public:
			virtual ValuePtr evaluate() override;
	};  // LiteralRealEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALREALEVALUATION_H_ */
