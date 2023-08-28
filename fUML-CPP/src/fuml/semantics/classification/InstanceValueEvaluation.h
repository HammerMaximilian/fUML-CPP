/*
 * InstanceValueEvaluation.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_CLASSIFICATION_INSTANCEVALUEEVALUATION_H_
#define FUML_SEMANTICS_CLASSIFICATION_INSTANCEVALUEEVALUATION_H_

#include <fuml/semantics/values/Evaluation.h>

namespace fuml::semantics::classification
{
	class InstanceValueEvaluation : public Evaluation
	{
		public:
			virtual ~InstanceValueEvaluation() = default;

			virtual ValuePtr evaluate() override;
	}; //
}

#endif /* FUML_SEMANTICS_CLASSIFICATION_INSTANCEVALUEEVALUATION_H_ */
