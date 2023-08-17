/*
 * SignalEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_

#include <memory>
#include "MessageEvent.h"

namespace fuml::syntax::simpleclassifiers
{
	class Signal;
}

namespace fuml::syntax::commonbehavior
{
	class SignalEvent : public MessageEvent
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::Signal> signal = nullptr;

		public:
			void setSignal(
				const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>&);
	}; // SignalEvent
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_SIGNALEVENT_H_ */
