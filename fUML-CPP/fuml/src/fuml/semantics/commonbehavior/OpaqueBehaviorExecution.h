/*
 * OpaqueBehaviorExecution.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::semantics::commonbehavior
{
	class OpaqueBehaviorExecution : public Execution
	{
		public:
			virtual ~OpaqueBehaviorExecution() = 0;

			virtual void execute() override;
			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) = 0;
	};
// OpaqueBehaviorExecution
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTION_H_ */
