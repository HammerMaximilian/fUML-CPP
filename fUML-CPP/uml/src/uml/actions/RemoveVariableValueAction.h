/*
 * RemoveVariableValueAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_REMOVEVARIABLEVALUEACTION_H_
#define UML_ACTIONS_REMOVEVARIABLEVALUEACTION_H_

#include <uml/actions/WriteVariableAction.h>

namespace uml::actions
{
	class RemoveVariableValueAction : virtual public WriteVariableAction
	{
		public:
			bool isRemoveDuplicates= false;
			InputPinPtr removeAt = nullptr;

		public:
			virtual ~RemoveVariableValueAction() = default;

			void setIsRemoveDuplicates(bool);
			void setRemoveAt(const InputPinPtr&);
	};
// RemoveVariableValueAction
}

#endif /* UML_ACTIONS_REMOVEVARIABLEVALUEACTION_H_ */
