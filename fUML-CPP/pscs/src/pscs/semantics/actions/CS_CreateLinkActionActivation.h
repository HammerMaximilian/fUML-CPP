/*
 * CS_CreateLinkActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CREATELINKACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_CREATELINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/CreateLinkActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_CreateLinkActionActivation : public CreateLinkActionActivation
	{
		public:
			virtual ~CS_CreateLinkActionActivation() = default;

			virtual void doAction() override;
	}; // CS_CreateLinkActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_CREATELINKACTIONACTIVATION_H_ */
