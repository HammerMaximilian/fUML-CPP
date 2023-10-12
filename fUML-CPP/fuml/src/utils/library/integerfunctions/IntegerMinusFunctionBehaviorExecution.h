/*
 * IntegerMinusFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMINUSFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMINUSFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerMinusFunctionBehaviorExecution : public IntegerFunctionBehaviorExecution
	{
		public:
			IntegerMinusFunctionBehaviorExecution();
			virtual ~IntegerMinusFunctionBehaviorExecution() = default;

			virtual int doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerMinusFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMINUSFUNCTIONBEHAVIOREXECUTION_H_ */
