/*
 * CS_ExecutionFactory.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_LOCI_CS_EXECUTIONFACTORY_H_
#define PSCS_SEMANTICS_LOCI_CS_EXECUTIONFACTORY_H_

#include <fuml/semantics/loci/ExecutionFactory.h>

namespace pscs::semantics::loci
{
	class CS_ExecutionFactory : public ExecutionFactory
	{
		public:
			virtual ~CS_ExecutionFactory() = default;

			virtual SemanticVisitorPtr instantiateVisitor(const ElementPtr&) override;
	}; // CS_ExecutionFactory
}

#endif /* PSCS_SEMANTICS_LOCI_CS_EXECUTIONFACTORY_H_ */
