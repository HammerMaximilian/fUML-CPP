/*
 * StringConcatFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_STRINGFUNCTIONS_STRINGCONCATFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_STRINGFUNCTIONS_STRINGCONCATFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::stringfunctions
{
	class StringConcatFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			StringConcatFunctionBehaviorExecution();
			virtual ~StringConcatFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// StringConcatFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_STRINGFUNCTIONS_STRINGCONCATFUNCTIONBEHAVIOREXECUTION_H_ */
