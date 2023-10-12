/*
 * RealNegateFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALNEGATEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALNEGATEFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/realfunctions/RealFunctionBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealNegateFunctionBehaviorExecution : public RealFunctionBehaviorExecution
	{
		public:
			RealNegateFunctionBehaviorExecution();
			virtual ~RealNegateFunctionBehaviorExecution() = default;

			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) override;
			virtual ValuePtr new_() override;
	};
// RealNegateFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALNEGATEFUNCTIONBEHAVIOREXECUTION_H_ */
