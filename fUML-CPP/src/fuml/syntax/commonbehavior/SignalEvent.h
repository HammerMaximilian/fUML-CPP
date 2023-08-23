/*
 * SignalEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_

#include <fuml/syntax/commonbehavior/MessageEvent.h>
#include <memory>

namespace fuml::syntax::simpleclassifiers
{
	class Signal;
}
using Signal = fuml::syntax::simpleclassifiers::Signal;
using SignalPtr = std::shared_ptr<Signal>;

namespace fuml::syntax::commonbehavior
{
	class SignalEvent : public MessageEvent
	{
		public:
			SignalPtr signal = nullptr;

		public:
			void setSignal(
				const SignalPtr&);
	}; // SignalEvent
}

using SignalEvent = fuml::syntax::commonbehavior::SignalEvent;
using SignalEventPtr = std::shared_ptr<SignalEvent>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_ */
