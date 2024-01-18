/*
 * MessageEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_MESSAGEEVENT_H_
#define UML_COMMONBEHAVIOR_MESSAGEEVENT_H_

#include <uml/commonbehavior/Event.h>

namespace uml::commonbehavior
{
	class MessageEvent : public Event
	{
		public:
			virtual ~MessageEvent() = 0;
	};
// MessageEvent
}

#endif /* UML_COMMONBEHAVIOR_MESSAGEEVENT_H_ */
