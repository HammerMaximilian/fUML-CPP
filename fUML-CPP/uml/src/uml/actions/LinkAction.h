/*
 * LinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_LINKACTION_H_
#define UML_ACTIONS_LINKACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class LinkAction : public Action
	{
		public:
			LinkEndDataListPtr endData = std::make_shared<LinkEndDataList>();
			InputPinListPtr inputValue = std::make_shared<InputPinList>();

		public:
			virtual ~LinkAction() = 0;

			virtual void addEndData(const LinkEndDataPtr&);
			void addInputValue(const InputPinPtr&);
	};
// LinkAction
}

#endif /* UML_ACTIONS_LINKACTION_H_ */
