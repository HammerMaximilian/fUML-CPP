/*
 * AcceptEventActionEventAccepter.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_H_
#define FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_H_

#include <fuml/semantics/commonbehavior/EventAccepter.h>

namespace fuml::semantics::actions
{
	class AcceptEventActionEventAccepter : public EventAccepter
	{
		public:
			AcceptEventActionActivationPtr actionActivation = nullptr;

		public:
			virtual ~AcceptEventActionEventAccepter() = default;

			virtual void accept(const EventOccurrencePtr&);
			virtual bool match(const EventOccurrencePtr&);
	}; // AcceptEventActionEventAccepter
}

#endif /* FUML_SEMANTICS_ACTIONS_ACCEPTEVENTACTIONEVENTACCEPTER_H_ */
