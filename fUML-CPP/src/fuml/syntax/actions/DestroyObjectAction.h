/*
 * DestroyObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class DestroyObjectAction : public Action
	{
		public:
			bool isDestroyLinks = false;
			bool isDestroyOwnedObjects = false;
			std::shared_ptr<InputPin> target = nullptr;

		public:
			void setIsDestroyLinks(bool);
			void setIsDestroyOwnedObjects(bool);
			void setTarget(const std::shared_ptr<InputPin>& target);
	}; // DestroyObjectAction
}

using DestroyObjectAction = fuml::syntax::actions::DestroyObjectAction;
using DestroyObjectActionPtr = std::shared_ptr<DestroyObjectAction>;

#endif /* FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_ */
