/*
 * LiteralStringEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALSTRINGEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALSTRINGEVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralStringEvaluation : LiteralEvaluation
	{
		public:
			virtual ValuePtr evaluate() override;
	};  // LiteralStringEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALSTRINGEVALUATION_H_ */
