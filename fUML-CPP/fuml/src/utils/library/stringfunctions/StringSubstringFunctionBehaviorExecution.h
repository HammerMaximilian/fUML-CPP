/*
 * StringSubstringFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSUBSTRINGFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSUBSTRINGFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::stringfunctions
{
	class StringSubstringFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			StringSubstringFunctionBehaviorExecution();
			virtual ~StringSubstringFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// StringSubstringFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSUBSTRINGFUNCTIONBEHAVIOREXECUTION_H_ */
