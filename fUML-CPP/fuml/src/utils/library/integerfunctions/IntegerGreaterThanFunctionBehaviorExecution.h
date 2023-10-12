/*
 * IntegerGreaterThanFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerRelationalFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerGreaterThanFunctionBehaviorExecution : public IntegerRelationalFunctionBehaviorExecution
	{
		public:
			IntegerGreaterThanFunctionBehaviorExecution();
			virtual ~IntegerGreaterThanFunctionBehaviorExecution() = default;

			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerGreaterThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_ */
