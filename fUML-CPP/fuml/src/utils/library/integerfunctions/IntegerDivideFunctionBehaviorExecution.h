/*
 * IntegerDivideFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVIDEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVIDEFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerDivideFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			IntegerDivideFunctionBehaviorExecution();
			virtual ~IntegerDivideFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// IntegerDivideFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVIDEFUNCTIONBEHAVIOREXECUTION_H_ */
