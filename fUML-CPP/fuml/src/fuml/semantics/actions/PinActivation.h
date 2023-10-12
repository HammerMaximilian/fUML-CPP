/*
 * PinActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_PINACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_PINACTIVATION_H_

#include <fuml/semantics/activities/ObjectNodeActivation.h>

namespace fuml::semantics::actions
{
	class PinActivation : public ObjectNodeActivation
	{
		public:
			ActionActivationPtr actionActivation = nullptr;

		public:
			virtual ~PinActivation() = 0;

			virtual void fire(const TokenListPtr&) override;
			virtual TokenListPtr takeOfferedTokens() override;

	};
// PinActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_PINACTIVATION_H_ */
