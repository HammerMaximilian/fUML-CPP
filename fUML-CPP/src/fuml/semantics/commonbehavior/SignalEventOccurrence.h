/*
 * SignalEventOccurrence.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_SIGNALEVENTOCCURRENCE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_SIGNALEVENTOCCURRENCE_H_

#include <fuml/semantics/commonbehavior/EventOccurrence.h>

namespace fuml::semantics::commonbehavior
{
	class SignalEventOccurrence : public EventOccurrence
	{
		public:
			SignalInstancePtr signalInstance;

		public:
			virtual bool match(const TriggerPtr&) override;
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) override;
	}; // SignalEventOccurrence
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_SIGNALEVENTOCCURRENCE_H_ */
