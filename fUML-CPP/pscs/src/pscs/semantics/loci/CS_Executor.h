/*
 * CS_Executor.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_LOCI_CS_EXECUTOR_H_
#define PSCS_SEMANTICS_LOCI_CS_EXECUTOR_H_

#include <fuml/semantics/loci/Executor.h>

namespace pscs::semantics::loci
{
	class CS_Executor : public Executor
	{
		public:
			virtual ~CS_Executor() = default;

			virtual ReferencePtr start(const Class_Ptr&, const ParameterValueListPtr&) override;
	}; // CS_Executor
}

#endif /* PSCS_SEMANTICS_LOCI_CS_EXECUTOR_H_ */
