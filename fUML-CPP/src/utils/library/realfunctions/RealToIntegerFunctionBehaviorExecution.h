/*
 * RealToRealFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealToIntegerFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			RealToIntegerFunctionBehaviorExecution();
			virtual ~RealToIntegerFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// RealToIntegerFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_ */
