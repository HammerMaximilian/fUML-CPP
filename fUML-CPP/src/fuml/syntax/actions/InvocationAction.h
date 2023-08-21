/*
 * InvocationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_INVOCATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_INVOCATIONACTION_H_

#include <memory>
#include "Action.h"
#include "InputPinList.h"

namespace fuml::syntax::actions
{
	class InvocationAction : public Action
	{
		public:
			std::shared_ptr<InputPinList> argument = std::make_shared<InputPinList>();
		public:
			virtual ~InvocationAction() = 0;

			void addArgument(const std::shared_ptr<InputPin>&);
	}; // InvocationAction
}

#endif /* FUML_SYNTAX_ACTIONS_INVOCATIONACTION_H_ */