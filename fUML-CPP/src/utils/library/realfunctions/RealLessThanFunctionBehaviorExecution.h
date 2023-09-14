/*
 * RealLessThanFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealRelationalFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealLessThanFunctionBehaviorExecution : public RealRelationalFunctionBehaviorExecution
	{
		public:
			RealLessThanFunctionBehaviorExecution();
			virtual ~RealLessThanFunctionBehaviorExecution() = default;

			virtual bool doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealLessThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_ */
