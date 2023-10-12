/*
 * RealAbsFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALABSFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALABSFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealAbsFunctionBehaviorExecution : public RealFunctionBehaviorExecution
	{
		public:
			RealAbsFunctionBehaviorExecution();
			virtual ~RealAbsFunctionBehaviorExecution() = default;

			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealAbsFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALABSFUNCTIONBEHAVIOREXECUTION_H_ */
