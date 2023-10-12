/*
 * SendSignalActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_SENDSIGNALACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_SENDSIGNALACTIONACTIVATION_H_

#include <fuml/semantics/actions/InvocationActionActivation.h>

namespace fuml::semantics::actions
{
	class SendSignalActionActivation : public InvocationActionActivation
	{
		public:
			virtual ~SendSignalActionActivation() = default;

			virtual void doAction();

	};
// SendSignalActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_SENDSIGNALACTIONACTIVATION_H_ */
