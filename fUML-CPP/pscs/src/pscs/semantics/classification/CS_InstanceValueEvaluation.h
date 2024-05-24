/*
 * CS_InstanceValueEvaluation.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_CLASSIFICATION_CS_INSTANCEVALUEEVALUATION_H_
#define PSCS_SEMANTICS_CLASSIFICATION_CS_INSTANCEVALUEEVALUATION_H_

#include <fuml/semantics/classification/InstanceValueEvaluation.h>

namespace pscs::semantics::classification
{
	class CS_InstanceValueEvaluation : public InstanceValueEvaluation
	{
		public:
			virtual ~CS_InstanceValueEvaluation() = default;

			virtual ValuePtr evaluate() override;
	}; // CS_InstanceValueEvaluation
}



#endif /* PSCS_SEMANTICS_CLASSIFICATION_CS_INSTANCEVALUEEVALUATION_H_ */
