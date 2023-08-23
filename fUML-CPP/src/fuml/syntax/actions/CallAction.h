/*
 * CallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CALLACTION_H_
#define FUML_SYNTAX_ACTIONS_CALLACTION_H_

#include <fuml/syntax/actions/InvocationAction.h>

namespace fuml::syntax::actions
{
	class CallAction : public InvocationAction
	{
		public:
			bool isSynchronous = true;
			OutputPinListPtr result = std::make_shared<OutputPinList>();

		public:
			virtual ~CallAction() = 0;

			void addResult(const OutputPinPtr&);
	}; // CallAction
}

#endif /* FUML_SYNTAX_ACTIONS_CALLACTION_H_ */
