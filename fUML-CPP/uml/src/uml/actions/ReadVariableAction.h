/*
 * ReadVariableAction.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIONS_READVARIABLEACTION_H_
#define UML_ACTIONS_READVARIABLEACTION_H_

#include <uml/actions/VariableAction.h>

namespace uml::actions
{
	class ReadVariableAction : virtual public VariableAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadVariableAction() = default;

			void setResult(const OutputPinPtr&);
	};
// ReadVariableAction
}


#endif /* UML_ACTIONS_READVARIABLEACTION_H_ */
