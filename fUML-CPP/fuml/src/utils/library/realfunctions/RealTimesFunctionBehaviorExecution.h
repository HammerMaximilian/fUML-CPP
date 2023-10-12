/*
 * RealTimesFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALTIMESFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALTIMESFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealTimesFunctionBehaviorExecution : public RealFunctionBehaviorExecution
	{
		public:
			RealTimesFunctionBehaviorExecution();
			virtual ~RealTimesFunctionBehaviorExecution() = default;

			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealTimesFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALTIMESFUNCTIONBEHAVIOREXECUTION_H_ */
