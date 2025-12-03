/*
 * AddVariableValueAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_ADDVARIABLEVALUEACTION_H_
#define UML_ACTIONS_ADDVARIABLEVALUEACTION_H_

#include <uml/actions/WriteVariableAction.h>

namespace uml::actions
{
	class AddVariableValueAction : virtual public WriteVariableAction
	{
		public:
			bool isReplaceAll = false;
			InputPinPtr insertAt = nullptr;

		public:
			virtual ~AddVariableValueAction() = default;

			void setIsReplaceAll(bool);
			void setInsertAt(const InputPinPtr&);
	};
// AddVariableValueAction
}

#endif /* UML_ACTIONS_ADDVARIABLEVALUEACTION_H_ */
