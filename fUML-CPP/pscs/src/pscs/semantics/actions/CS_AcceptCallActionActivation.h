/*
 * CS_AcceptCallActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_ACCEPTCALLACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_ACCEPTCALLACTIONACTIVATION_H_

#include <fuml/semantics/actions/AcceptCallActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_AcceptCallActionActivation : public AcceptCallActionActivation
	{
		public:
			virtual ~CS_AcceptCallActionActivation() = default;

			virtual void accept(const EventOccurrencePtr&) override;
	}; // CS_AcceptCallActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_ACCEPTCALLACTIONACTIVATION_H_ */
