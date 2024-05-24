/*
 * CS_AcceptEventActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_H_

#include <fuml/semantics/actions/AcceptEventActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_AcceptEventActionActivation : public AcceptEventActionActivation
	{
		public:
			virtual ~CS_AcceptEventActionActivation() = default;

			virtual void accept(const EventOccurrencePtr&) override;
	}; // CS_AcceptEventActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_ACCEPTEVENTACTIONACTIVATION_H_ */
