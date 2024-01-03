/*
 * CallEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_CALLEVENT_H_
#define UML_COMMONBEHAVIOR_CALLEVENT_H_

#include <uml/commonbehavior/Event.h>

namespace uml::commonbehavior
{
	class CallEvent : public Event
	{
		public:
			OperationPtr operation = nullptr;

		public:
			virtual ~CallEvent() = default;

			void setOperation(const OperationPtr&);
	};
// CallEvent
}

#endif /* UML_COMMONBEHAVIOR_CALLEVENT_H_ */
