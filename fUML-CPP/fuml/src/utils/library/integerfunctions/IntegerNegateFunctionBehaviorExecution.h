/*
 * IntegerNegateFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERNEGATEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERNEGATEFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerNegateFunctionBehaviorExecution : public IntegerFunctionBehaviorExecution
	{
		public:
			IntegerNegateFunctionBehaviorExecution();
			virtual ~IntegerNegateFunctionBehaviorExecution() = default;

			virtual int doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerNegateFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERNEGATEFUNCTIONBEHAVIOREXECUTION_H_ */
