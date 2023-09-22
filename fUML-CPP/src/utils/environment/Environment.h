/*
 * Environment.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_ENVIRONMENT_ENVIRONMENT_H_
#define UTILS_ENVIRONMENT_ENVIRONMENT_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>

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

			virtual void execute(std::string);

		protected:
			Environment();

			virtual void add(const ExtensionalValuePtr&);
			virtual void addBuiltInType(std::string);
			virtual void addBuiltInType(const PrimitiveTypePtr&);
			virtual void addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr&);

		private:
			void addBooleanFunctionsPrototypes();
			void addIntegerFunctionsPrototypes();
			void addListFunctionsPrototypes();
			void addRealFunctionsPrototypes();
			void addStringFunctionsPrototypes();
			void addUnlimitedNaturalFunctionsPrototypes();
	};
}

#endif /* UTILS_ENVIRONMENT_ENVIRONMENT_H_ */
