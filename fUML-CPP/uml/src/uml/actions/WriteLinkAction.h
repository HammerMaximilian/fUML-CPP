/*
 * WriteLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_WRITELINKACTION_H_
#define UML_ACTIONS_WRITELINKACTION_H_

#include <uml/actions/LinkAction.h>

namespace uml::actions
{
	class WriteLinkAction : public LinkAction
	{
		public:
			virtual ~WriteLinkAction() = 0;
	};
// WriteLinkAction
}

#endif /* UML_ACTIONS_WRITELINKACTION_H_ */
