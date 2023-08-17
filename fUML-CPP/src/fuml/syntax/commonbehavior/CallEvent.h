/*
 * CallEvent.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_

#include <memory>
#include "Event.h"

namespace fuml::syntax::classification
{
	class Operation;
}

namespace fuml::syntax::commonbehavior
{
	class CallEvent : public Event
	{
		public:
			std::shared_ptr<fuml::syntax::classification::Operation> operation = nullptr;

		public:
			void setOperation(const std::shared_ptr<fuml::syntax::classification::Operation>&);
	}; // CallEvent
}


#endif /* FUML_SYNTAX_COMMONBEHAVIOR_CALLEVENT_H_ */
