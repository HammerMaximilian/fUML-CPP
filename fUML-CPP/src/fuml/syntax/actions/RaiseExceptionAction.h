/*
 * RaiseExceptionAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_
#define FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class RaiseExceptionAction : public Action
	{
		public:
			InputPinPtr exception = nullptr;

		public:
			virtual ~RaiseExceptionAction() = default;

			void setException(const InputPinPtr&);
	};
// RaiseExceptionAction
}

#endif /* FUML_SYNTAX_ACTIONS_RAISEEXCEPTIONACTION_H_ */
