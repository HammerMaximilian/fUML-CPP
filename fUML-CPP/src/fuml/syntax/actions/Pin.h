/*
 * Pin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_PIN_H_
#define FUML_SYNTAX_ACTIONS_PIN_H_

#include "fuml/syntax/commonstructure/MultiplicityElement.h"
#include "fuml/syntax/activities/ObjectNode.h"

namespace fuml::syntax::actions
{
	class Pin:
		virtual public fuml::syntax::commonstructure::MultiplicityElement,
		virtual public fuml::syntax::activities::ObjectNode
	{
		public:
			virtual ~Pin() = 0;
	}; // Pin
}

#endif /* FUML_SYNTAX_ACTIONS_PIN_H_ */
