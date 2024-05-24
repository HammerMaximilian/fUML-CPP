/*
 * CS_SendSignalActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_SENDSIGNALACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_SENDSIGNALACTIONACTIVATION_H_

#include <fuml/semantics/actions/SendSignalActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_SendSignalActionActivation : public SendSignalActionActivation
	{
	public:
		virtual ~CS_SendSignalActionActivation() = default;

		virtual void doAction() override;
	}; // CS_SendSignalActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_SENDSIGNALACTIONACTIVATION_H_ */
