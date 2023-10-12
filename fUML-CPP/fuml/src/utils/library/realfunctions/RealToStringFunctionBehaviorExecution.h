/*
 * RealToStringFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealToStringFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			RealToStringFunctionBehaviorExecution();
			virtual ~RealToStringFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// RealToStringFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_ */
