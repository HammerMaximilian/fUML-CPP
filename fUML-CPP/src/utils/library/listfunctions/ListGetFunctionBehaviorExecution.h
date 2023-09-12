/*
 * ListGetFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LISTFUNCTIONS_LISTGETFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_LISTFUNCTIONS_LISTGETFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::listfunctions
{
	class ListGetFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			ListGetFunctionBehaviorExecution();
			virtual ~ListGetFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// ListGetFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_LISTFUNCTIONS_LISTGETFUNCTIONBEHAVIOREXECUTION_H_ */
