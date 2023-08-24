/*
 * CallOperationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_

#include <fuml/syntax/actions/CallAction.h>

namespace fuml::syntax::actions
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
	}; // CallBehaviorAction
}

#endif /* FUML_SYNTAX_ACTIONS_CALLOPERATIONACTION_H_ */
