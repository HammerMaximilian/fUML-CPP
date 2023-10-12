/*
 * Evaluation.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_EVALUATION_H_
#define FUML_SEMANTICS_VALUES_EVALUATION_H_

#include <fuml/semantics/fwd.h>
#include <fuml/semantics/loci/SemanticVisitor.h>
#include <fuml/syntax/fwd.h>

namespace fuml::semantics::values
{
	class Evaluation : public SemanticVisitor
	{
		public:
			ValueSpecificationPtr specification = nullptr;
			LocusPtr locus = nullptr;

		public:
			virtual ~Evaluation() = 0;

			virtual ValuePtr evaluate() = 0;
	};
// Evaluation
}

#endif /* FUML_SEMANTICS_VALUES_EVALUATION_H_ */
