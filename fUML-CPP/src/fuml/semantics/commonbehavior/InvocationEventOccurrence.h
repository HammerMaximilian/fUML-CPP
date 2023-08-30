/*
 * InvocationEventOccurrence.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_H_

#include <fuml/semantics/commonbehavior/EventOccurrence.h>

namespace fuml::semantics::commonbehavior
{
	class InvocationEventOccurrence : public EventOccurrence
	{
		public:
			ExecutionPtr execution;

		public:
			virtual ~InvocationEventOccurrence() = default;

			virtual bool match(const TriggerPtr&) override;
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) override;
	};
// InvocationEventOccurrence
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_H_ */
