/*
 * Executor.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_EXECUTOR_H_
#define FUML_SEMANTICS_LOCI_EXECUTOR_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::loci
{
	class Executor : public fuml::FumlObject
	{
		public:
			LocusPtr locus = nullptr;

		public:
			virtual ~Executor() = default;

			ParameterValueListPtr execute(const BehaviorPtr&, const Object_Ptr&, const ParameterValueListPtr&);
			ValuePtr evaluate(const ValueSpecificationPtr&);
			ReferencePtr start(const Class_Ptr&, const ParameterValueListPtr&);
	};
// Executor
}

#endif /* FUML_SEMANTICS_LOCI_EXECUTOR_H_ */
