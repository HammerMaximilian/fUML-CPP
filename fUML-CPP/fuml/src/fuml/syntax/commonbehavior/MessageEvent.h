/*
 * MessageEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_

#include <fuml/syntax/commonbehavior/Event.h>

namespace fuml::syntax::commonbehavior
{
	class MessageEvent : public Event
	{
		public:
			virtual ~MessageEvent() = 0;
	};
// MessageEvent
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_MESSAGEEVENT_H_ */
