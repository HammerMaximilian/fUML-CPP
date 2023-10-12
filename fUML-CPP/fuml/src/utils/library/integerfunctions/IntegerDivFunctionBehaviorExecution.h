/*
 * IntegerDivFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerDivFunctionBehaviorExecution : public IntegerFunctionBehaviorExecution
	{
		public:
			IntegerDivFunctionBehaviorExecution();
			virtual ~IntegerDivFunctionBehaviorExecution() = default;

			virtual int doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerDivFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERDIVFUNCTIONBEHAVIOREXECUTION_H_ */
