/*
 * EventAccepter.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EVENTACCEPTER_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EVENTACCEPTER_H_

#include <fuml/semantics/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::commonbehavior
{
	class EventAccepter : public utils::FumlObject
	{
		public:
		virtual ~EventAccepter() = 0;

		virtual void accept(const EventOccurrencePtr&) = 0;
		virtual bool match(const EventOccurrencePtr&) = 0;
	}; // EventAccepter
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EVENTACCEPTER_H_ */
