/*
 * ClearVariableAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_CLEARVARIABLEACTION_H_
#define UML_ACTIONS_CLEARVARIABLEACTION_H_

#include <uml/actions/VariableAction.h>

namespace uml::actions
{
	class ClearVariableAction : virtual public VariableAction
	{
		public:
			virtual ~ClearVariableAction() = default;
	};
// ClearVariableAction
}

#endif /* UML_ACTIONS_CLEARVARIABLEACTION_H_ */
