/*
 * DestroyObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_DESTROYOBJECTACTION_H_
#define UML_ACTIONS_DESTROYOBJECTACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class DestroyObjectAction : public Action
	{
		public:
			bool isDestroyLinks = false;
			bool isDestroyOwnedObjects = false;
			InputPinPtr target = nullptr;

		public:
			virtual ~DestroyObjectAction() = default;

			void setIsDestroyLinks(bool);
			void setIsDestroyOwnedObjects(bool);
			void setTarget(const InputPinPtr& target);
	};
// DestroyObjectAction
}

#endif /* UML_ACTIONS_DESTROYOBJECTACTION_H_ */
