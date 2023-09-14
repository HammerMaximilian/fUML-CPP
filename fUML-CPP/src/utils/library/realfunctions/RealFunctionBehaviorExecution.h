/*
 * RealFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~RealFunctionBehaviorExecution() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual float doRealFunction(const std::shared_ptr<std::vector<float>>&) = 0;
	};
// RealFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALFUNCTIONBEHAVIOREXECUTION_H_ */
