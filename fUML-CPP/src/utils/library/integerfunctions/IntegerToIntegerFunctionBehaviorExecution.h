/*
 * IntegerToIntegerFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerToIntegerFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			IntegerToIntegerFunctionBehaviorExecution();
			virtual ~IntegerToIntegerFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// IntegerToIntegerFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_ */
