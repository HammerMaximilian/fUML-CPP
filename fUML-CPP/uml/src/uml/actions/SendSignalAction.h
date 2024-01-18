/*
 * SendSignalAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_SENDSIGNALACTION_H_
#define UML_ACTIONS_SENDSIGNALACTION_H_

#include <uml/actions/InvocationAction.h>

namespace uml::actions
{
	class SendSignalAction : public InvocationAction
	{
		public:
			SignalPtr signal = nullptr;
			InputPinPtr target = nullptr;

		public:
			virtual ~SendSignalAction() = default;

			void setTarget(const InputPinPtr&);
			void setSignal(const SignalPtr&);
	};
// SendSignalAction
}

#endif /* UML_ACTIONS_SENDSIGNALACTION_H_ */
