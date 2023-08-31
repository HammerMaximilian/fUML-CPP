/*
 * Environment.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_ENVIRONMENT_ENVIRONMENT_H_
#define UTILS_ENVIRONMENT_ENVIRONMENT_H_

#include <fuml/semantics/fwd.h>

namespace fuml::environment
{
	class InMemoryModel;
}

namespace fuml::environment
{
	class Environment
	{
		protected:
			LocusPtr locus = nullptr;
			Object_Ptr context = nullptr;
			ParameterValueListPtr inputs = std::make_shared<ParameterValueList>();
			ParameterValueListPtr outputs = std::make_shared<ParameterValueList>();
			std::shared_ptr<InMemoryModel> inMemoryModel = nullptr;

		public:
			virtual ~Environment() = 0;

			virtual void execute();

		protected:
			Environment();

			void addBuiltInType(std::string);
			void addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr&);
	};
}

#endif /* UTILS_ENVIRONMENT_ENVIRONMENT_H_ */
