/*
 * RealGreaterThanFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealRelationalFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealGreaterThanFunctionBehaviorExecution : public RealRelationalFunctionBehaviorExecution
	{
		public:
			RealGreaterThanFunctionBehaviorExecution();
			virtual ~RealGreaterThanFunctionBehaviorExecution() = default;

			virtual bool doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealGreaterThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_ */
