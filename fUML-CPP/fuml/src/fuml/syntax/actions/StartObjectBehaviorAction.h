/*
 * StartObjectBehaviorAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_
#define FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_

#include <fuml/syntax/actions/InvocationAction.h>

namespace fuml::syntax::actions
{
	class StartObjectBehaviorAction : public InvocationAction
	{
		public:
			InputPinPtr object = nullptr;

		public:
			virtual ~StartObjectBehaviorAction() = default;

			void setObject(const InputPinPtr&);
	};
// StartObjectBehaviorAction
}

#endif /* FUML_SYNTAX_ACTIONS_STARTOBJECTBEHAVIORACTION_H_ */
