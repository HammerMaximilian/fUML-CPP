/*
 * LiteralNullEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALNULLEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALNULLEVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralNullEvaluation : LiteralEvaluation
	{
		public:
			virtual ValuePtr evaluate() override;
	};  // LiteralNullEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALNULLEVALUATION_H_ */
