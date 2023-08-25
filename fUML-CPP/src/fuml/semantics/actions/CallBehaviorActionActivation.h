/*
 * CallBehaviorActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CALLBEHAVIORACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CALLBEHAVIORACTIONACTIVATION_H_

#include <fuml/semantics/actions/CallActionActivation.h>

namespace fuml::semantics::actions
{
	class CallBehaviorActionActivation : public CallActionActivation
	{
		public:
			virtual ~CallBehaviorActionActivation() = default;

			virtual ExecutionPtr getCallExecution() override;
			virtual ParameterListPtr getParameters() override;

	}; // CallBehaviorActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CALLBEHAVIORACTIONACTIVATION_H_ */
