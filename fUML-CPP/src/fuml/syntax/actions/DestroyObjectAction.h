/*
 * DestroyObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class DestroyObjectAction : public Action
	{
		public:
			bool isDestroyLinks = false;
			bool isDestroyOwnedObjects = false;
			InputPinPtr target = nullptr;

		public:
			void setIsDestroyLinks(bool);
			void setIsDestroyOwnedObjects(bool);
			void setTarget(const InputPinPtr& target);
	}; // DestroyObjectAction
}

#endif /* FUML_SYNTAX_ACTIONS_DESTROYOBJECTACTION_H_ */
