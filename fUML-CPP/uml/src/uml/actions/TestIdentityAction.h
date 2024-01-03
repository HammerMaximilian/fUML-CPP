/*
 * TestIdentityAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_TESTIDENTITYACTION_H_
#define UML_ACTIONS_TESTIDENTITYACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class TestIdentityAction : public Action
	{
		public:
			InputPinPtr second = nullptr;
			OutputPinPtr result = nullptr;
			InputPinPtr first = nullptr;

		public:
			virtual ~TestIdentityAction() = default;

			void setFirst(const InputPinPtr&);
			void setSecond(const InputPinPtr&);
			void setResult(const OutputPinPtr&);
	};
// TestIdentityAction
}

#endif /* UML_ACTIONS_TESTIDENTITYACTION_H_ */
