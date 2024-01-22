/*
 * CS_CreateObjectActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CREATEOBJECTACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_CREATEOBJECTACTIONACTIVATION_H_

#include <fuml/semantics/actions/CreateObjectActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_CreateObjectActionActivation : public CreateObjectActionActivation
	{
		public:
			virtual ~CS_CreateObjectActionActivation() = default;

			virtual void doAction() override;
	}; // CS_CreateObjectActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_CREATEOBJECTACTIONACTIVATION_H_ */
