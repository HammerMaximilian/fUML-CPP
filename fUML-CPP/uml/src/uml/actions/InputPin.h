/*
 * InputPin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_INPUTPIN_H_
#define UML_ACTIONS_INPUTPIN_H_

#include <uml/actions/Pin.h>

namespace uml::actions
{
	class InputPin : virtual public Pin
	{
		public:
			virtual ~InputPin() = default;

	};
// InputPin
}

#endif /* UML_ACTIONS_INPUTPIN_H_ */
