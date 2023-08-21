/*
 * TestIdentityAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_
#define FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class InputPin;
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class TestIdentityAction : public Action
	{
		public:
			std::shared_ptr<InputPin> second = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;
			std::shared_ptr<InputPin> first = nullptr;

		public:
			void setFirst(const std::shared_ptr<InputPin>&);
			void setSecond(const std::shared_ptr<InputPin>&);
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // TestIdentityAction
}

#endif /* FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_ */
