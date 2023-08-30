/*
 * OutputPinActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_OUTPUTPINACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_OUTPUTPINACTIVATION_H_

#include <fuml/semantics/actions/PinActivation.h>

namespace fuml::semantics::actions
{
	class OutputPinActivation : public PinActivation
	{
		public:
			virtual ~OutputPinActivation() = default;

	};
// OutputPinActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_OUTPUTPINACTIVATION_H_ */
