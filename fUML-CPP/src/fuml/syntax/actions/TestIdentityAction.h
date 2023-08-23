/*
 * TestIdentityAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_
#define FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class TestIdentityAction : public Action
	{
		public:
			InputPinPtr second = nullptr;
			OutputPinPtr result = nullptr;
			InputPinPtr first = nullptr;

		public:
			void setFirst(const InputPinPtr&);
			void setSecond(const InputPinPtr&);
			void setResult(const OutputPinPtr&);
	}; // TestIdentityAction
}

#endif /* FUML_SYNTAX_ACTIONS_TESTIDENTITYACTION_H_ */
