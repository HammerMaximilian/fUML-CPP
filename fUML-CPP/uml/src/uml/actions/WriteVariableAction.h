/*
 * WriteVariableAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_WRITEVARIABLEACTION_H_
#define UML_ACTIONS_WRITEVARIABLEACTION_H_

#include <uml/actions/VariableAction.h>

namespace uml::actions
{
	class WriteVariableAction : virtual public VariableAction
	{
		public:
			InputPinPtr value = nullptr;

		public:
			virtual ~WriteVariableAction() = 0;

			void setValue(const InputPinPtr&);
	};
// WriteVariableAction
}


#endif /* UML_ACTIONS_WRITEVARIABLEACTION_H_ */
