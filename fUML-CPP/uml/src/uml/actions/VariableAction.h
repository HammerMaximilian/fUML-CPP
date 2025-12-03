/*
 * VariableAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_VARIABLEACTION_H_
#define UML_ACTIONS_VARIABLEACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class VariableAction : virtual public Action
	{
		public:
			VariablePtr variable = nullptr;

		public:
			virtual ~VariableAction() = 0;

			void setVariable(const VariablePtr&);
	};
// VariableAction
}

#endif /* UML_ACTIONS_VARIABLEACTION_H_ */
