/*
 * CallBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_

#include <memory>
#include "CallAction.h"

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}

namespace fuml::syntax::actions
{
	class CallBehaviorAction : public CallAction
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::Behavior> behavior = nullptr;

		public:
			void setBehavior(
					const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>&);
	}; // CallBehaviorAction
}

using CallBehaviorAction = fuml::syntax::actions::CallBehaviorAction;
using CallBehaviorActionPtr = std::shared_ptr<CallBehaviorAction>;

#endif /* FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_ */
