/*
 * AcceptCallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_
#define FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_

#include <fuml/syntax/actions/AcceptEventAction.h>
#include <memory>

namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class AcceptCallAction : public AcceptEventAction
	{
		public:
			std::shared_ptr<OutputPin> returnInformation = nullptr;

		public:
			void setReturnInformation(const std::shared_ptr<OutputPin>&);
	}; // AcceptCallAction
}

using AcceptCallAction = fuml::syntax::actions::AcceptCallAction;
using AcceptCallActionPtr = std::shared_ptr<AcceptCallAction>;

#endif /* FUML_SYNTAX_ACTIONS_ACCEPTCALLACTION_H_ */
