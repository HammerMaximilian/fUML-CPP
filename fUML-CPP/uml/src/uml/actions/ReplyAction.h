/*
 * ReplyAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_REPLYACTION_H_
#define UML_ACTIONS_REPLYACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
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

#endif /* UML_ACTIONS_REPLYACTION_H_ */
