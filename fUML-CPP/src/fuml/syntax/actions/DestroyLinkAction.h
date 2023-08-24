/*
 * DestroyLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_
#define FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_

#include <fuml/syntax/actions/WriteLinkAction.h>

namespace fuml::syntax::actions
{
	class DestroyLinkAction : public WriteLinkAction
	{
		public:
			LinkEndDestructionDataListPtr endData = std::make_shared<LinkEndDestructionDataList>();

		public:
			virtual ~DestroyLinkAction() = default;
		
			void addEndData(const LinkEndDestructionDataPtr&);
	}; // DestroyLinkAction
}

#endif /* FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_ */
