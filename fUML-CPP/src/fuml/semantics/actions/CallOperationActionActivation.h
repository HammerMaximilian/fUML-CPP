/*
 * CallOperationActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CALLOPERATIONACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CALLOPERATIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/CallActionActivation.h>

namespace fuml::semantics::actions
{
	class CallOperationActionActivation : public CallActionActivation
	{
		public:
			virtual ~CallOperationActionActivation() = default;

			virtual bool isReady() override;
			virtual ExecutionPtr getCallExecution() override;
			virtual ParameterListPtr getParameters() override;

	}; // CallOperationActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CALLOPERATIONACTIONACTIVATION_H_ */
