/*
 * CallEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_

#include <fuml/syntax/commonbehavior/Event.h>

namespace fuml::syntax::commonbehavior
{
	class CallEvent : public Event
	{
		public:
			OperationPtr operation = nullptr;

		public:
			virtual ~CallEvent() = default;
			
			void setOperation(const OperationPtr&);
	}; // CallEvent
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_ */
