/*
 * RaiseExceptionAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_
#define FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class RaiseExceptionAction : public Action
	{
		public:
			std::shared_ptr<InputPin> exception = nullptr;

		public:
			void setException(const std::shared_ptr<InputPin>&);
	}; // RaiseExceptionAction
}

#endif /* FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_ */