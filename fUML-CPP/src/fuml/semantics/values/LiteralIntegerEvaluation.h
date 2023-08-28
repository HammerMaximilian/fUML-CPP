/*
 * LiteralIntegerEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALINTEGEREVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALINTEGEREVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralIntegerEvaluation : public LiteralEvaluation
	{
		public:
			virtual ~LiteralIntegerEvaluation() = default;
		
			virtual ValuePtr evaluate() override;
	};  // LiteralIntegerEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALINTEGEREVALUATION_H_ */
