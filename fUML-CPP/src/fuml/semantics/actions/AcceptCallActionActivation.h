/*
 * AcceptCallActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_ACCEPTCALLACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_ACCEPTCALLACTIONACTIVATION_H_

#include <fuml/semantics/actions/AcceptEventActionActivation.h>

namespace fuml::semantics::actions
{
	class AcceptCallActionActivation : public AcceptEventActionActivation
	{
		public:
			virtual ~AcceptCallActionActivation() = default;

			virtual void accept(const EventOccurrencePtr&) override;

	};
// AcceptCallActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_ACCEPTCALLACTIONACTIVATION_H_ */
