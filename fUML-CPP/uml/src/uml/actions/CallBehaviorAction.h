/*
 * CallBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CALLBEHAVIORACTION_H_
#define UML_ACTIONS_CALLBEHAVIORACTION_H_

#include <uml/actions/CallAction.h>

namespace uml::actions
{
	class CallBehaviorAction : public CallAction
	{
		public:
			BehaviorPtr behavior = nullptr;

		public:
			virtual ~CallBehaviorAction() = default;

			void setBehavior(const BehaviorPtr&);
	};
// CallBehaviorAction
}

#endif /* UML_ACTIONS_CALLBEHAVIORACTION_H_ */
