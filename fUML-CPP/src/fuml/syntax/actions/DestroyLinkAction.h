/*
 * DestroyLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_
#define FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_

#include <fuml/syntax/actions/LinkEndDestructionDataList.h>
#include <fuml/syntax/actions/WriteLinkAction.h>
#include <memory>

namespace fuml::syntax::actions
{
	class DestroyLinkAction : public WriteLinkAction
	{
		public:
			std::shared_ptr<LinkEndDestructionDataList> endData = std::make_shared<LinkEndDestructionDataList>();

		public:
			void addEndData(const std::shared_ptr<LinkEndDestructionData>&);
	}; // DestroyLinkAction
}

using DestroyLinkAction = fuml::syntax::actions::DestroyLinkAction;
using DestroyLinkActionPtr = std::shared_ptr<DestroyLinkAction>;

#endif /* FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_ */
