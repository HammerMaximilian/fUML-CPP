/*
 * RealInverseFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALINVERSEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALINVERSEFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealInverseFunctionBehaviorExecution : public RealFunctionBehaviorExecution
	{
		public:
			RealInverseFunctionBehaviorExecution();
			virtual ~RealInverseFunctionBehaviorExecution() = default;

			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealInverseFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALINVERSEFUNCTIONBEHAVIOREXECUTION_H_ */
