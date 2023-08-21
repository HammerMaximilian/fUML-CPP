/*
 * SendSignalAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_
#define FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_

#include <memory>
#include "InvocationAction.h"

namespace fuml::syntax::simpleclassifiers
{
	class Signal;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class SendSignalAction : public InvocationAction
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::Signal> signal = nullptr;
			std::shared_ptr<InputPin> target = nullptr;

		public:
			void setTarget(const std::shared_ptr<InputPin>&);
			void setSignal(const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>&);
	}; // SendSignalAction
}

#endif /* FUML_SYNTAX_ACTIONS_SENDSIGNALACTION_H_ */
