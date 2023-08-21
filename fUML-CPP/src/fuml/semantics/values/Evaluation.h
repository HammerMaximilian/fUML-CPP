/*
 * Evaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_EVALUATION_H_
#define FUML_SEMANTICS_VALUES_EVALUATION_H_

#include <memory>
#include "fuml/semantics/loci/SemanticVisitor.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}
namespace fuml::semantics::loci
{
	class Locus;
}
namespace fuml::semantics::values
{
	class Value;
}

namespace fuml::semantics::values
{
	class Evaluation : public fuml::semantics::loci::SemanticVisitor
	{
		public:
			std::shared_ptr<fuml::syntax::values::ValueSpecification> specification = nullptr;
			std::shared_ptr<fuml::semantics::loci::Locus> locus = nullptr;

		public:
			virtual ~Evaluation() = 0;

			virtual std::shared_ptr<fuml::semantics::values::Value> evaluate() = 0;
	}; // Evaluation
}

#endif /* FUML_SEMANTICS_VALUES_EVALUATION_H_ */
