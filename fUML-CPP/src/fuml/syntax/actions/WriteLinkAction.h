/*
 * WriteLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_WRITELINKACTION_H_
#define FUML_SYNTAX_ACTIONS_WRITELINKACTION_H_

#include <fuml/syntax/actions/LinkAction.h>

namespace fuml::syntax::actions
{
	class WriteLinkAction : public LinkAction
	{
		public:
			virtual ~WriteLinkAction() = 0;
	};
// WriteLinkAction
}

#endif /* FUML_SYNTAX_ACTIONS_WRITELINKACTION_H_ */
