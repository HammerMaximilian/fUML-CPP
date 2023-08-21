/*
 * LiteralEvaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_LITERALEVALUATION_H_
#define FUML_SEMANTICS_VALUES_LITERALEVALUATION_H_

#include "Evaluation.h"

namespace fuml::syntax::simpleclassifiers
{
	class PrimitiveType;
}

namespace fuml::semantics::values
{
	class LiteralEvaluation : public Evaluation
	{
		public:
			virtual ~LiteralEvaluation() = 0;

			std::shared_ptr<fuml::syntax::simpleclassifiers::PrimitiveType> getType(std::string);
	}; // LiteralEvaluation
}

#endif /* FUML_SEMANTICS_VALUES_LITERALEVALUATION_H_ */
