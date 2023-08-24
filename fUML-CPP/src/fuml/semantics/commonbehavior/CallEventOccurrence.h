/*
 * CallEventOccurrence.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_H_

#include <fuml/semantics/commonbehavior/EventOccurrence.h>

namespace fuml::semantics::commonbehavior
{
	class CallEventOccurrence : public EventOccurrence
	{
		public:
			CallEventExecutionPtr execution = nullptr;

		public:
			virtual ~CallEventOccurrence() = default;
		
			OperationPtr getOperation();
			virtual bool match(const TriggerPtr&) override;
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) override;
			void setOutputParameterValues(const ParameterValueListPtr&);
			void returnFromCall();
	}; // CallEventOccurrence
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_H_ */
