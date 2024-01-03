/*
 * StartObjectBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_STARTOBJECTBEHAVIORACTION_H_
#define UML_ACTIONS_STARTOBJECTBEHAVIORACTION_H_

#include <uml/actions/InvocationAction.h>

namespace uml::actions
{
	class StartObjectBehaviorAction : public InvocationAction
	{
		public:
			InputPinPtr object = nullptr;

		public:
			virtual ~StartObjectBehaviorAction() = default;

			void setObject(const InputPinPtr&);
	};
// StartObjectBehaviorAction
}

#endif /* UML_ACTIONS_STARTOBJECTBEHAVIORACTION_H_ */
