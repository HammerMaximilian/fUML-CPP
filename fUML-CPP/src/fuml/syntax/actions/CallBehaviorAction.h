/*
 * CallBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_

#include <fuml/syntax/actions/CallAction.h>

namespace fuml::syntax::actions
{
	class CallBehaviorAction : public CallAction
	{
		public:
			BehaviorPtr behavior = nullptr;

		public:
			virtual ~CallBehaviorAction() = default;
		
			void setBehavior(
					const BehaviorPtr&);
	}; // CallBehaviorAction
}

#endif /* FUML_SYNTAX_ACTIONS_CALLBEHAVIORACTION_H_ */
