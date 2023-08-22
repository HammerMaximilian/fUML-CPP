/*
 * StartObjectBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class StartObjectBehaviorAction : public Action
	{
		public:
			std::shared_ptr<InputPin> object = nullptr;

		public:
			void setObject(const std::shared_ptr<InputPin>&);
	}; // StartObjectBehaviorAction
}

using StartObjectBehaviorAction = fuml::syntax::actions::StartObjectBehaviorAction;
using StartObjectBehaviorActionPtr = std::shared_ptr<StartObjectBehaviorAction>;

#endif /* FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_ */
