/*
 * InvocationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_INVOCATIONACTION_H_
#define UML_ACTIONS_INVOCATIONACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class InvocationAction : public Action
	{
		public:
			InputPinListPtr argument = std::make_shared<InputPinList>();
		public:
			virtual ~InvocationAction() = 0;

			void addArgument(const InputPinPtr&);
	};
// InvocationAction
}

#endif /* UML_ACTIONS_INVOCATIONACTION_H_ */
