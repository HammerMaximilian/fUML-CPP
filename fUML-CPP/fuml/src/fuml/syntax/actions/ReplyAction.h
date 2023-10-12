/*
 * ReplyAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_REPLYACTION_H_
#define FUML_SYNTAX_ACTIONS_REPLYACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ReplyAction : public Action
	{
		public:
			TriggerPtr replyToCall = nullptr;
			InputPinListPtr replyValue = std::make_shared<InputPinList>();
			InputPinPtr returnInformation = nullptr;

		public:
			virtual ~ReplyAction() = default;

			void setReplyToCall(const TriggerPtr&);
			void addReplyValue(const InputPinPtr&);
			void setReturnInformation(const InputPinPtr&);
	};
// ReplyAction
}

#endif /* FUML_SYNTAX_ACTIONS_REPLYACTION_H_ */
