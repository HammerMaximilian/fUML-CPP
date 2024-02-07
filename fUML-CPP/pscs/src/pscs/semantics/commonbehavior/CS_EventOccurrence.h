/*
 * CS_EventOccurrence.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCE_H_
#define PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCE_H_

#include <fuml/semantics/commonbehavior/EventOccurrence.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::commonbehavior
{
	class CS_EventOccurrence : public EventOccurrence
	{
		public:
			EventOccurrencePtr wrappedEventOccurrence = nullptr;
			CS_InteractionPointPtr interactionPoint = nullptr;
			bool propagationInward;
			PortPtr onPort = nullptr;

		private:
			CS_EventOccurrencePtr_w thisCS_EventOccurrencePtr;

		public:
			virtual ~CS_EventOccurrence() = default;
			void setThisCS_EventOccurrencePtr(CS_EventOccurrencePtr_w);

			virtual bool match(const TriggerPtr&) override;
			virtual void doSend() override;
			void sendInTo(const CS_ReferencePtr&, const PortPtr&);
			void sendOutTo(const CS_ReferencePtr&, const PortPtr&);
			virtual ParameterValueListPtr getParameterValues(const EventPtr&) override;
	}; // CS_EventOccurrence
}

#endif /* PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCE_H_ */
