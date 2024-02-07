/*
 * EventOccurrence.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::commonbehavior
{
	class EventOccurrence : public uml::UmlObject
	{
		public:
			ReferencePtr target = nullptr;

		private:
			EventOccurrencePtr_w thisEventOccurrencePtr;
			EventOccurrence_SendingBehaviorExecutionPtr behavior;

		public:
			virtual ~EventOccurrence() = 0;
			void setThisEventOccurrencePtr(EventOccurrencePtr_w);

			void sendTo(const ReferencePtr&);
			virtual void doSend();
			virtual bool match(const TriggerPtr&) = 0;
			bool matchAny(const TriggerListPtr&);
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) = 0;

		private:
			void _startObjectBehavior();

	};
// EventOccurrence
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_ */
