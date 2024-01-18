/*
 * DestroyLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_DESTROYLINKACTION_H_
#define UML_ACTIONS_DESTROYLINKACTION_H_

#include <uml/actions/WriteLinkAction.h>

namespace uml::actions
{
	class DestroyLinkAction : public WriteLinkAction
	{
		public:
			LinkEndDestructionDataListPtr endData = std::make_shared<LinkEndDestructionDataList>();

		public:
			virtual ~DestroyLinkAction() = default;

			void addEndData(const LinkEndDestructionDataPtr&);
	};
// DestroyLinkAction
}

#endif /* UML_ACTIONS_DESTROYLINKACTION_H_ */
