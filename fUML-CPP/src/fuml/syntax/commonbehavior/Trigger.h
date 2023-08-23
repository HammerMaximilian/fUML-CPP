/*
 * Trigger.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_

#include <memory>
#include <fuml/syntax/commonstructure/NamedElement.h>

namespace fuml::syntax::commonbehavior
{
	class Event;
}

namespace fuml::syntax::commonbehavior
{
	class Trigger : public fuml::syntax::commonstructure::NamedElement
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::Event> event = nullptr;

		public:
			void setEvent(const std::shared_ptr<fuml::syntax::commonbehavior::Event>&);
	}; // Trigger
}

using Trigger = fuml::syntax::commonbehavior::Trigger;
using TriggerPtr = std::shared_ptr<Trigger>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_TRIGGER_H_ */
