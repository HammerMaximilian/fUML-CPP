/*
 * DestroyLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_
#define FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_

#include <memory>
#include "WriteLinkAction.h"
#include "LinkEndDestructionDataList.h"

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

#endif /* FUML_SYNTAX_ACTIONS_DESTROYLINKACTION_H_ */
