/*
 * Executor.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_EXECUTOR_H_
#define FUML_SEMANTICS_LOCI_EXECUTOR_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::loci
{
	class Executor : public uml::UmlObject
	{
		public:
			LocusPtr_w locus;

		public:
			virtual ~Executor() = default;

			ParameterValueListPtr execute(const BehaviorPtr&, const Object_Ptr&, const ParameterValueListPtr&);
			ValuePtr evaluate(const ValueSpecificationPtr&);
			virtual ReferencePtr start(const Class_Ptr&, const ParameterValueListPtr&);
	};
// Executor
}

#endif /* FUML_SEMANTICS_LOCI_EXECUTOR_H_ */
