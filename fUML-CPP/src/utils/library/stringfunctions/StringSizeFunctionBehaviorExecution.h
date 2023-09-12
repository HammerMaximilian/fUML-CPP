/*
 * StringSizeFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSIZEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSIZEFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::stringfunctions
{
	class StringSizeFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			StringSizeFunctionBehaviorExecution();
			virtual ~StringSizeFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// StringSizeFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_STRINGFUNCTIONS_STRINGSIZEFUNCTIONBEHAVIOREXECUTION_H_ */
