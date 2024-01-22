/*
 * CS_ReadSelfActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_READSELFACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_READSELFACTIONACTIVATION_H_

#include <fuml/semantics/actions/ReadSelfActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_ReadSelfActionActivation : public ReadSelfActionActivation
	{
		public:
			virtual ~CS_ReadSelfActionActivation() = default;

			virtual void doAction() override;
	}; // CS_ReadSelfActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_READSELFACTIONACTIVATION_H_ */
