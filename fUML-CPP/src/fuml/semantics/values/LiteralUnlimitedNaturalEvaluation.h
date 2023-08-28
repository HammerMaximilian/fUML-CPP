/*
 * LiteralUnlimitedNaturalEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALUNLIMITEDNATURALEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALUNLIMITEDNATURALEVALUATION_H_

#include <fuml/semantics/values/LiteralEvaluation.h>

namespace fuml::semantics::values
{
	class LiteralUnlimitedNaturalEvaluation : public LiteralEvaluation
	{
		public:
			virtual ~LiteralUnlimitedNaturalEvaluation() = default;
		
			virtual ValuePtr evaluate() override;
	};  // LiteralUnlimitedNaturalEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALUNLIMITEDNATURALEVALUATION_H_ */
