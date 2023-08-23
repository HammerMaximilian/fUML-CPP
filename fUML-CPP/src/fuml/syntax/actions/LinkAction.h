/*
 * LinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKACTION_H_
#define FUML_SYNTAX_ACTIONS_LINKACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class LinkAction : public Action
	{
		public:
			LinkEndDataListPtr endData = std::make_shared<LinkEndDataList>();
			InputPinListPtr inputValue = std::make_shared<InputPinList>();

		public:
			virtual ~LinkAction() = 0;

			void addEndData(const LinkEndDataPtr&);
			void addInputValue(const InputPinPtr&);
	}; // LinkAction
}

#endif /* FUML_SYNTAX_ACTIONS_LINKACTION_H_ */
