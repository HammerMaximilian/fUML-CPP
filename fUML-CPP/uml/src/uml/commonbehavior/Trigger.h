/*
 * Trigger.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_TRIGGER_H_
#define UML_COMMONBEHAVIOR_TRIGGER_H_

#include <uml/commonstructure/NamedElement.h>

namespace uml::commonbehavior
{
	class Trigger : public NamedElement
	{
		public:
			EventPtr event = nullptr;

		public:
			virtual ~Trigger() = default;

			void setEvent(const EventPtr&);
	};
// Trigger
}

#endif /* UML_COMMONBEHAVIOR_TRIGGER_H_ */
