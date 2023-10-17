/*
 * EventOccurrence.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::commonbehavior
{
	class EventOccurrence : public fuml::FumlObject
	{
		public:
			ReferencePtr target = nullptr;

		private:
			EventOccurrencePtr_w thisEventOccurrencePtr;
			EventOccurrence_SendingBehaviorExecutionPtr behavior;

		public:
			virtual ~EventOccurrence() = 0;
			void setThisEventOccurrencePtr(EventOccurrencePtr);

			void sendTo(const ReferencePtr&);
			void doSend();
			virtual bool match(const TriggerPtr&) = 0;
			bool matchAny(const TriggerListPtr&);
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) = 0;

		private:
			void _startObjectBehavior();

	};
// EventOccurrence
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_H_ */
