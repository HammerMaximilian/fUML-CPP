/*
 * CreateLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_
#define FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_

#include <fuml/syntax/actions/WriteLinkAction.h>

namespace fuml::syntax::actions
{
	class CreateLinkAction : public WriteLinkAction
	{
		public:
			LinkEndCreationDataListPtr endData = std::make_shared<LinkEndCreationDataList>();

		public:
			void addEndData(const LinkEndCreationDataPtr&);
	}; // CreateLinkAction
}

#endif /* FUML_SYNTAX_ACTIONS_CREATELINKACTION_H_ */
