/*
 * CallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLACTION_H_

#include <memory>
#include "InvocationAction.h"
#include "OutputPinList.h"

namespace fuml::syntax::actions
{
	class CallAction : public InvocationAction
	{
		public:
			bool isSynchronous = true;
			std::shared_ptr<OutputPinList> result = std::make_shared<OutputPinList>();

		public:
			virtual ~CallAction() = 0;

			void addResult(const std::shared_ptr<OutputPin>&);
	}; // CallAction
}

using CallAction = fuml::syntax::actions::CallAction;
using CallActionPtr = std::shared_ptr<CallAction>;

#endif /* FUML_SYNTAX_ACTIONS_CALLACTION_H_ */
