/*
 * IntegerMaxFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMAXFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMAXFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerMaxFunctionBehaviorExecution : public IntegerFunctionBehaviorExecution
	{
		public:
			IntegerMaxFunctionBehaviorExecution();
			virtual ~IntegerMaxFunctionBehaviorExecution() = default;

			virtual int doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerMaxFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERMAXFUNCTIONBEHAVIOREXECUTION_H_ */
