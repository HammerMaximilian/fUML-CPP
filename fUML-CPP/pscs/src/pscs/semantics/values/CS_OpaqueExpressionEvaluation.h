/*
 * CS_OpaqueExpressionEvaluation.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATION_H_
#define PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATION_H_

#include <fuml/semantics/fwd.h>
#include <fuml/semantics/values/Evaluation.h>

namespace pscs::semantics::values
{
	class CS_OpaqueExpressionEvaluation : public Evaluation
	{
		public:
			virtual ~CS_OpaqueExpressionEvaluation() = default;

			virtual Value evaluate() override;
			ValueListPtr executeExpressionBehavior();
	}; // CS_OpaqueExpressionEvaluation
}



#endif /* PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATION_H_ */
