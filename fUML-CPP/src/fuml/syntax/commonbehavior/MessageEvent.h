/*
 * MessageEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_

#include <Event.h>

namespace fuml::syntax::commonbehavior
{
	class MessageEvent : public Event
	{
		public:
			~MessageEvent() = 0;
	}; // MessageEvent
}

using MessageEvent = fuml::syntax::commonbehavior::MessageEvent;
using MessageEventPtr = std::shared_ptr<MessageEvent>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_ */
