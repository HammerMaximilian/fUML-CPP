/*
 * CallOperationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CALLOPERATIONACTION_H_
#define UML_ACTIONS_CALLOPERATIONACTION_H_

#include <uml/actions/CallAction.h>

namespace uml::actions
{
	class CallOperationAction : public CallAction
	{
		public:
			OperationPtr operation = nullptr;
			InputPinPtr target = nullptr;

		public:
			virtual ~CallOperationAction() = default;

			void setTarget(const InputPinPtr&);
			void setOperation(const OperationPtr&);
	};
// CallBehaviorAction
}

#endif /* UML_ACTIONS_CALLOPERATIONACTION_H_ */
