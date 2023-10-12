/*
 * RealLessThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealRelationalFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealLessThanEqualFunctionBehaviorExecution : public RealRelationalFunctionBehaviorExecution
	{
		public:
			RealLessThanEqualFunctionBehaviorExecution();
			virtual ~RealLessThanEqualFunctionBehaviorExecution() = default;

			virtual bool doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealLessThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
