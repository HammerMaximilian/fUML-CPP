/*
 * SignalEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_SIGNALEVENT_H_
#define UML_COMMONBEHAVIOR_SIGNALEVENT_H_

#include <uml/commonbehavior/MessageEvent.h>

namespace uml::commonbehavior
{
	class SignalEvent : public MessageEvent
	{
		public:
			SignalPtr signal = nullptr;

		public:
			virtual ~SignalEvent() = default;

			void setSignal(const SignalPtr&);
	};
// SignalEvent
}

#endif /* UML_COMMONBEHAVIOR_SIGNALEVENT_H_ */
