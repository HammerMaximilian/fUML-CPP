/*
 * InputPin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_INPUTPIN_H_
#define FUML_SYNTAX_ACTIONS_INPUTPIN_H_

#include <fuml/syntax/actions/Pin.h>

namespace fuml::syntax::actions
{
	class InputPin : virtual public Pin
	{
		public:
			virtual ~InputPin() = default;

	};
// InputPin
}

#endif /* FUML_SYNTAX_ACTIONS_INPUTPIN_H_ */
