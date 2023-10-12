/*
 * BooleanToBooleanFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOBOOLEANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOBOOLEANFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanToBooleanFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			BooleanToBooleanFunctionBehaviorExecution();
			virtual ~BooleanToBooleanFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// BooleanToBooleanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANTOBOOLEANFUNCTIONBEHAVIOREXECUTION_H_ */
