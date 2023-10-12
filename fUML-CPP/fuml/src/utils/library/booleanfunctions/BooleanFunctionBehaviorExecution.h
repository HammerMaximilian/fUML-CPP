/*
 * BooleanFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~BooleanFunctionBehaviorExecution() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) = 0;
	};
// BooleanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANFUNCTIONBEHAVIOREXECUTION_H_ */
