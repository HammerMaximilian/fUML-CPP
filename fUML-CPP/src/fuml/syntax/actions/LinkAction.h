/*
 * LinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKACTION_H_
#define FUML_SYNTAX_ACTIONS_LINKACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/actions/InputPinList.h>
#include <fuml/syntax/actions/LinkEndDataList.h>
#include <memory>

namespace fuml::syntax::actions
{
	class LinkAction : public Action
	{
		public:
			std::shared_ptr<LinkEndDataList> endData = std::make_shared<LinkEndDataList>();
			std::shared_ptr<InputPinList> inputValue = std::make_shared<InputPinList>();

		public:
			virtual ~LinkAction() = 0;

			void addEndData(const std::shared_ptr<LinkEndData>&);
			void addInputValue(const std::shared_ptr<InputPin>&);
	}; // LinkAction
}

using LinkAction = fuml::syntax::actions::LinkAction;
using LinkActionPtr = std::shared_ptr<LinkAction>;

#endif /* FUML_SYNTAX_ACTIONS_LINKACTION_H_ */
