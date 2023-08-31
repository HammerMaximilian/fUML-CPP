/*
 * PrintlnExecution.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef PRINTLNEXECUTION_H_
#define PRINTLNEXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace examples::HelloWorldExample
{
	class PrintlnExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~PrintlnExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// BooleanFunctionBehaviorExecution
}

#endif /* PRINTLNEXECUTION_H_ */
