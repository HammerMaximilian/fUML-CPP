/*
 * CallEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_

#include <fuml/syntax/commonbehavior/Event.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Operation;
}
using Operation = fuml::syntax::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;

namespace fuml::syntax::commonbehavior
{
	class CallEvent : public Event
	{
		public:
			OperationPtr operation = nullptr;

		public:
			void setOperation(const OperationPtr&);
	}; // CallEvent
}

using CallEvent = fuml::syntax::commonbehavior::CallEvent;
using CallEventPtr = std::shared_ptr<CallEvent>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_ */
