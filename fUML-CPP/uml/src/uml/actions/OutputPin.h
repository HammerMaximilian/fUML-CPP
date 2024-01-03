/*
 * OutputPin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_OUTPUTPIN_H_
#define UML_ACTIONS_OUTPUTPIN_H_

#include <uml/actions/Pin.h>

namespace uml::actions
{
	class OutputPin : virtual public Pin
	{
		public:
			virtual ~OutputPin() = default;

	};
// OutputPin
}

#endif /* UML_ACTIONS_OUTPUTPIN_H_ */
