/*
 * ReadLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READLINKACTION_H_
#define FUML_SYNTAX_ACTIONS_READLINKACTION_H_

#include <memory>
#include "LinkAction.h"

namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ReadLinkAction : public LinkAction
	{
		public:
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ReadLinkAction
}

using ReadLinkAction = fuml::syntax::actions::ReadLinkAction;
using ReadLinkActionPtr = std::shared_ptr<ReadLinkAction>;

#endif /* FUML_SYNTAX_ACTIONS_READLINKACTION_H_ */
