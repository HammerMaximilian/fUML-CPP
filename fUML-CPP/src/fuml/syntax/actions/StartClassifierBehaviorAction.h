/*
 * StartClassifierBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class StartClassifierBehaviorAction : public Action
	{
		public:
			InputPinPtr object = nullptr;

		public:
			virtual ~StartClassifierBehaviorAction() = default;
		
			void setObject(const InputPinPtr&);
	}; // StartClassifierBehaviorAction
}

#endif /* FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_ */
