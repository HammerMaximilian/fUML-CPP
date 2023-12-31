/*
 * OutputPin.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_OUTPUTPIN_H_
#define FUML_SYNTAX_ACTIONS_OUTPUTPIN_H_

#include <fuml/syntax/actions/Pin.h>

namespace fuml::syntax::actions
{
	class OutputPin : virtual public Pin
	{
		public:
			virtual ~OutputPin() = default;

	};
// OutputPin
}

#endif /* FUML_SYNTAX_ACTIONS_OUTPUTPIN_H_ */
