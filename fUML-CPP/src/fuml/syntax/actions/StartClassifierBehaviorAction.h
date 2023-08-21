/*
 * StartClassifierBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class StartClassifierBehaviorAction : public Action
	{
		public:
			std::shared_ptr<InputPin> object = nullptr;

		public:
			void setObject(const std::shared_ptr<InputPin>&);
	}; // StartClassifierBehaviorAction
}

#endif /* FUML_SYNTAX_ACTIONS_STARTCLASSIFIERBEHAVIORACTION_H_ */
