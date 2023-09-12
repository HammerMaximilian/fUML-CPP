/*
 * IntegerLessThanFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/integerfunctions/IntegerRelationalFunctionBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerLessThanFunctionBehaviorExecution : public IntegerRelationalFunctionBehaviorExecution
	{
		public:
			IntegerLessThanFunctionBehaviorExecution();
			virtual ~IntegerLessThanFunctionBehaviorExecution() = default;

			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// IntegerLessThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERLESSTHANFUNCTIONBEHAVIOREXECUTION_H_ */
