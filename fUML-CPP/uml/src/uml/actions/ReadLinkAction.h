/*
 * ReadLinkAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_READLINKACTION_H_
#define UML_ACTIONS_READLINKACTION_H_

#include <uml/actions/LinkAction.h>

namespace uml::actions
{
	class ReadLinkAction : public LinkAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadLinkAction() = default;

			void setResult(const OutputPinPtr&);
	};
// ReadLinkAction
}

#endif /* UML_ACTIONS_READLINKACTION_H_ */
