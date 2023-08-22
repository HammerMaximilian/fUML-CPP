/*
 * AcceptEventAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_
#define FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_

#include "Action.h"
#include "OutputPinList.h"
#include "fuml/syntax/commonbehavior/TriggerList.h"

namespace fuml::syntax::actions
{
	class AcceptEventAction : public Action
	{
		public:
			bool isUnmarshall = false;
			std::shared_ptr<OutputPinList> result = std::make_shared<OutputPinList>();
			std::shared_ptr<fuml::syntax::commonbehavior::TriggerList> trigger = std::make_shared<fuml::syntax::commonbehavior::TriggerList>();

		public:
			void setIsUnmarshall(bool);
			void addTrigger(
					const std::shared_ptr<fuml::syntax::commonbehavior::Trigger>&);
			void addResult(const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
	}; // AcceptEventAction
}

using AcceptEventAction = fuml::syntax::actions::AcceptEventAction;
using AcceptEventActionPtr = std::shared_ptr<AcceptEventAction>;

#endif /* FUML_SYNTAX_ACTIONS_ACCEPTEVENTACTION_H_ */
