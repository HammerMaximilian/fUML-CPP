/*
 * IntegerFunctionBehaviorExecution_ReturnBoolean.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERFUNCTIONBEHAVIOREXECUTION_RETURNBOOLEAN_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERFUNCTIONBEHAVIOREXECUTION_RETURNBOOLEAN_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerFunctionBehaviorExecution_ReturnBoolean : public OpaqueBehaviorExecution
	{
		public:
			virtual ~IntegerFunctionBehaviorExecution_ReturnBoolean() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) = 0;
	};
// IntegerFunctionBehaviorExecution_ReturnBoolean
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERFUNCTIONBEHAVIOREXECUTION_RETURNBOOLEAN_H_ */
