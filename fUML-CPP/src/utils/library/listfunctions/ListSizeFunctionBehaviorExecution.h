/*
 * ListSizeFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LISTFUNCTIONS_LISTSIZEFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_LISTFUNCTIONS_LISTSIZEFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::listfunctions
{
	class ListSizeFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			ListSizeFunctionBehaviorExecution();
			virtual ~ListSizeFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// ListSizeFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_LISTFUNCTIONS_LISTSIZEFUNCTIONBEHAVIOREXECUTION_H_ */
