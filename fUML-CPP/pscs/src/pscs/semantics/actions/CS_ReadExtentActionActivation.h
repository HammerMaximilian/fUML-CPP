/*
 * CS_ReadExtentActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_READEXTENTACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_READEXTENTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ReadExtentActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_ReadExtentActionActivation : public ReadExtentActionActivation
	{
		public:
			virtual ~CS_ReadExtentActionActivation() = default;

			virtual void doAction() override;
	}; // CS_ReadExtentActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_READEXTENTACTIONACTIVATION_H_ */
