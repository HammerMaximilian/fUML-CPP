/*
 * Pin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_PIN_H_
#define UML_ACTIONS_PIN_H_

#include <uml/commonstructure/MultiplicityElement.h>
#include <uml/activities/ObjectNode.h>

namespace uml::actions
{
	class Pin : virtual public MultiplicityElement, virtual public ObjectNode
	{
		public:
			virtual ~Pin() = 0;
	};
// Pin
}

#endif /* UML_ACTIONS_PIN_H_ */
