/*
 * Trigger.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_

#include <fuml/syntax/commonstructure/NamedElement.h>

namespace fuml::syntax::commonbehavior
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

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_ */
