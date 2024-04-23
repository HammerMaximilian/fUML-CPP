/*
 * CS_CallOperationActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CALLOPERATIONACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_CALLOPERATIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/CallOperationActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_CallOperationActionActivation : public CallOperationActionActivation
	{
		public:
			virtual ~CS_CallOperationActionActivation() = default;

			virtual void doAction() override;
			virtual ExecutionPtr getCallExecution() override;
			virtual OutputPinListPtr getOfferingOutputPins() override; // Extension
			bool isOperationProvided(const PortPtr&, const OperationPtr&);
			bool isOperationRequired(const PortPtr&, const OperationPtr&);
			bool isCreate(const OperationPtr&);
	}; // CS_CallOperationActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_CALLOPERATIONACTIONACTIVATION_H_ */
