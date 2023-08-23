/*
 * ReplyAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_REPLYACTION_H_
#define FUML_SYNTAX_ACTIONS_REPLYACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/actions/InputPinList.h>
#include <memory>

namespace fuml::syntax::commonbehavior
{
	class Trigger;
}

namespace fuml::syntax::actions
{
	class ReplyAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::Trigger> replyToCall = nullptr;
			std::shared_ptr<InputPinList> replyValue = std::make_shared<InputPinList>();
			std::shared_ptr<InputPin> returnInformation = nullptr;

		public:
			void setReplyToCall(const std::shared_ptr<fuml::syntax::commonbehavior::Trigger>&);
			void addReplyValue(const std::shared_ptr<InputPin>&);
			void setReturnInformation(const std::shared_ptr<InputPin>&);
	}; // ReplyAction
}

using ReplyAction = fuml::syntax::actions::ReplyAction;
using ReplyActionPtr = std::shared_ptr<ReplyAction>;

#endif /* FUML_SYNTAX_ACTIONS_REPLYACTION_H_ */
