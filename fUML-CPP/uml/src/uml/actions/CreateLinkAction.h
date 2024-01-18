/*
 * CreateLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CREATELINKACTION_H_
#define UML_ACTIONS_CREATELINKACTION_H_

#include <uml/actions/WriteLinkAction.h>

namespace uml::actions
{
	class CreateLinkAction : public WriteLinkAction
	{
		public:
			LinkEndCreationDataListPtr endData = std::make_shared<LinkEndCreationDataList>();

		public:
			virtual ~CreateLinkAction() = default;

			void addEndData(const LinkEndCreationDataPtr&);
	};
// CreateLinkAction
}

#endif /* UML_ACTIONS_CREATELINKACTION_H_ */
