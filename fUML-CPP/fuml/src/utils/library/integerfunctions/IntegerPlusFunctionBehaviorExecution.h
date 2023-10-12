/*
 * IntegerPlusFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERPLUSFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERPLUSFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerPlusFunctionBehaviorExecution : public IntegerFunctionBehaviorExecution
	{
		public:
			IntegerPlusFunctionBehaviorExecution();
			virtual ~IntegerPlusFunctionBehaviorExecution() = default;

			virtual int doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerPlusFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERPLUSFUNCTIONBEHAVIOREXECUTION_H_ */
