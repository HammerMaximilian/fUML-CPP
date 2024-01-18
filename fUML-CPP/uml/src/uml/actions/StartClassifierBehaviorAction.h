/*
 * StartClassifierBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_
#define UML_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class StartClassifierBehaviorAction : public Action
	{
		public:
			InputPinPtr object = nullptr;

		public:
			virtual ~StartClassifierBehaviorAction() = default;

			void setObject(const InputPinPtr&);
	};
// StartClassifierBehaviorAction
}

#endif /* UML_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_ */
