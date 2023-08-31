/*
 * FumlExample.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_FUMLEXAMPLE_H_
#define EXAMPLES_FUMLEXAMPLE_H_

#include <fuml/semantics/fwd.h>

namespace examples
{
	class InMemoryModel;
}

namespace examples
{
	class FumlExample
	{
		protected:
			LocusPtr locus = nullptr;
			ExecutionFactoryPtr factory = nullptr;
			ExecutorPtr executor = nullptr;
			Object_Ptr context = nullptr;
			ParameterValueListPtr inputs = std::make_shared<ParameterValueList>();
			ParameterValueListPtr outputs = std::make_shared<ParameterValueList>();
			std::shared_ptr<examples::InMemoryModel> inMemoryModel = nullptr;

		public:
			virtual ~FumlExample() = 0;

			virtual void execute();
			void addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr&);

		protected:
			FumlExample();
	};
}

#endif /* EXAMPLES_FUMLEXAMPLE_H_ */
