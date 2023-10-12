/*
 * IntegerGreaterThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerRelationalFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerGreaterThanEqualFunctionBehaviorExecution : public IntegerRelationalFunctionBehaviorExecution
	{
		public:
			IntegerGreaterThanEqualFunctionBehaviorExecution();
			virtual ~IntegerGreaterThanEqualFunctionBehaviorExecution() = default;

			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerGreaterThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
