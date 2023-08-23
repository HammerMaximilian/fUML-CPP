/*
 * SendSignalAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_
#define FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_

#include <fuml/syntax/actions/InvocationAction.h>

namespace fuml::syntax::actions
{
	class SendSignalAction : public InvocationAction
	{
		public:
			SignalPtr signal = nullptr;
			InputPinPtr target = nullptr;

		public:
			void setTarget(const InputPinPtr&);
			void setSignal(const SignalPtr&);
	}; // SendSignalAction
}

#endif /* FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_ */
