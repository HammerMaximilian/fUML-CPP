/*
 * InputPinActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_INPUTPINACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_INPUTPINACTIVATION_H_

#include <fuml/semantics/actions/PinActivation.h>

namespace fuml::semantics::actions
{
	class InputPinActivation : public PinActivation
	{
		public:
			StreamingParameterValuePtr streamingParameterValue = nullptr;

		public:
			virtual ~InputPinActivation() = default;

			virtual void receiveOffer() override;
			virtual void fire(const TokenListPtr&) override;
			virtual bool isReady() override;
			bool isReadyForStreaming();
			bool isStreaming();
			bool streamingIsTerminated();
			int getTotalValueCount();

	};
// InputPinActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_INPUTPINACTIVATION_H_ */
