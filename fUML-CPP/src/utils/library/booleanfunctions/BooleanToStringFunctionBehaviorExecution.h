/*
 * BooleanToStringFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanToStringFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~BooleanToStringFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// BooleanToStringFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_ */
