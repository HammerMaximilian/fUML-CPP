/*
 * ReadLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READLINKACTION_H_
#define FUML_SYNTAX_ACTIONS_READLINKACTION_H_

#include <fuml/syntax/actions/LinkAction.h>

namespace fuml::syntax::actions
{
	class ReadLinkAction : public LinkAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			void setResult(const OutputPinPtr&);
	}; // ReadLinkAction
}

#endif /* FUML_SYNTAX_ACTIONS_READLINKACTION_H_ */
