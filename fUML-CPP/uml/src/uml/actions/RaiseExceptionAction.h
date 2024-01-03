/*
 * RaiseExceptionAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_RAISEEXCEPTIONACTION_H_
#define UML_ACTIONS_RAISEEXCEPTIONACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class RaiseExceptionAction : public Action
	{
		public:
			InputPinPtr exception = nullptr;

		public:
			virtual ~RaiseExceptionAction() = default;

			void setException(const InputPinPtr&);
	};
// RaiseExceptionAction
}

#endif /* UML_ACTIONS_RAISEEXCEPTIONACTION_H_ */
