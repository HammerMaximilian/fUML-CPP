/*
 * CreateLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_
#define FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_

#include <memory>
#include "WriteLinkAction.h"
#include "LinkEndCreationDataList.h"

namespace fuml::syntax::actions
{
	class CreateLinkAction : public WriteLinkAction
	{
		public:
			std::shared_ptr<LinkEndCreationDataList> endData = std::make_shared<LinkEndCreationDataList>();

		public:
			void addEndData(const std::shared_ptr<LinkEndCreationData>&);
	}; // CreateLinkAction
}

using CreateLinkAction = fuml::syntax::actions::CreateLinkAction;
using CreateLinkActionPtr = std::shared_ptr<CreateLinkAction>;

#endif /* FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_ */
