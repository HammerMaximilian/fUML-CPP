/*
 * RealGreaterThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealRelationalFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealGreaterThanEqualFunctionBehaviorExecution : public RealRelationalFunctionBehaviorExecution
	{
		public:
			RealGreaterThanEqualFunctionBehaviorExecution();
			virtual ~RealGreaterThanEqualFunctionBehaviorExecution() = default;

			virtual bool doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealGreaterThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
