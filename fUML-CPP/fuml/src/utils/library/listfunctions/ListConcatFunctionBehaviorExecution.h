/*
 * ListConcatFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LISTFUNCTIONS_LISTCONCATFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_LISTFUNCTIONS_LISTCONCATFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::listfunctions
{
	class ListConcatFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			ListConcatFunctionBehaviorExecution();
			virtual ~ListConcatFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// ListConcatFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_LISTFUNCTIONS_LISTCONCATFUNCTIONBEHAVIOREXECUTION_H_ */
