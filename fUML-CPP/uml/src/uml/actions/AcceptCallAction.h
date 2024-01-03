/*
 * AcceptCallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_ACCEPTCALLACTION_H_
#define UML_ACTIONS_ACCEPTCALLACTION_H_

#include <uml/actions/AcceptEventAction.h>
#include <uml/fwd.h>

namespace uml::actions
{
	class AcceptCallAction : public AcceptEventAction
	{
		public:
			OutputPinPtr returnInformation = nullptr;

		public:
			virtual ~AcceptCallAction() = default;

			void setReturnInformation(const OutputPinPtr&);
	};
// AcceptCallAction
}

#endif /* UML_ACTIONS_ACCEPTCALLACTION_H_ */
