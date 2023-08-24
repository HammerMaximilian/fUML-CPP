/*
 * EventOccurrence_SendingBehaviorExecution.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_SENDINGBEHAVIOREXECUTION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_SENDINGBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::semantics::commonbehavior
{
	class EventOccurrence_SendingBehaviorExecution : public Execution
	{
		public:
			EventOccurrencePtr self = nullptr;

		public:
			EventOccurrence_SendingBehaviorExecution(const EventOccurrencePtr&);
			virtual ~EventOccurrence_SendingBehaviorExecution() = default;

			void _startObjectBehavior();
			virtual void execute() override;
			virtual ValuePtr new_() override;
			virtual std::string toString() override;
	}; // EventOccurrence_SendingBehaviorExecution
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EVENTOCCURRENCE_SENDINGBEHAVIOREXECUTION_H_ */
