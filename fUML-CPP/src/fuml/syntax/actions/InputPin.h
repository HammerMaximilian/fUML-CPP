/*
 * InputPin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_INPUTPIN_H_
#define FUML_SYNTAX_ACTIONS_INPUTPIN_H_

#include "fuml/syntax/actions/Pin.h"

namespace fuml::syntax::actions
{
	class InputPin: virtual public fuml::syntax::actions::Pin
	{
	}; // InputPin
}

using InputPin = fuml::syntax::actions::InputPin;
using InputPinPtr = std::shared_ptr<InputPin>;

#endif /* FUML_SYNTAX_ACTIONS_INPUTPIN_H_ */
