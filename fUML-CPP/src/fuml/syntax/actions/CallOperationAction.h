/*
 * CallOperationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_

#include <memory>
#include "CallAction.h"

namespace fuml::syntax::classification
{
	class Operation;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class CallOperationAction : public CallAction
	{
		public:
			std::shared_ptr<fuml::syntax::classification::Operation> operation = nullptr;
			std::shared_ptr<InputPin> target = nullptr;

		public:
			void setTarget(const std::shared_ptr<InputPin>&);
			void setOperation(const std::shared_ptr<fuml::syntax::classification::Operation>&);
	}; // CallBehaviorAction
}

using CallOperationAction = fuml::syntax::actions::CallOperationAction;
using CallOperationActionPtr = std::shared_ptr<CallOperationAction>;

#endif /* FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_ */
