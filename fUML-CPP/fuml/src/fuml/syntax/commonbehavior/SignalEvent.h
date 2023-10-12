/*
 * SignalEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_

#include <fuml/syntax/commonbehavior/MessageEvent.h>

namespace fuml::syntax::commonbehavior
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

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_ */
