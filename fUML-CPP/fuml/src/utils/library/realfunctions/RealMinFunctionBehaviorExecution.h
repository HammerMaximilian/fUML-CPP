/*
 * RealMinFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALMINFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALMINFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealMinFunctionBehaviorExecution : public RealFunctionBehaviorExecution
	{
		public:
			RealMinFunctionBehaviorExecution();
			virtual ~RealMinFunctionBehaviorExecution() = default;

			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealMinFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALMINFUNCTIONBEHAVIOREXECUTION_H_ */
