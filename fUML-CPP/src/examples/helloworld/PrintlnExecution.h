/*
 * PrintlnExecution.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_HELLOWORLD_PRINTLNEXECUTION_H_
#define EXAMPLES_HELLOWORLD_PRINTLNEXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace examples::HelloWorldExample
{
	class PrintlnExecution : public OpaqueBehaviorExecution
	{
		public:
			PrintlnExecution();
			virtual ~PrintlnExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// BooleanFunctionBehaviorExecution
}

#endif /* EXAMPLES_HELLOWORLD_PRINTLNEXECUTION_H_ */
