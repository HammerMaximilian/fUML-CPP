/*
 * IntegerToStringFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerToStringFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			IntegerToStringFunctionBehaviorExecution();
			virtual ~IntegerToStringFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// IntegerToStringFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_ */
