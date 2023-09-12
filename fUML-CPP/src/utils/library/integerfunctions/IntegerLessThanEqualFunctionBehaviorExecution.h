/*
 * IntegerLessThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerRelationalFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerLessThanEqualFunctionBehaviorExecution : public IntegerRelationalFunctionBehaviorExecution
	{
		public:
			IntegerLessThanEqualFunctionBehaviorExecution();
			virtual ~IntegerLessThanEqualFunctionBehaviorExecution() = default;

			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerLessThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
