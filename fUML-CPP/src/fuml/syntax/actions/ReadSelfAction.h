/*
 * ReadSelfAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READSELFACTION_H_
#define FUML_SYNTAX_ACTIONS_READSELFACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ReadSelfAction : public Action
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadSelfAction() = default;
		
			void setResult(const OutputPinPtr&);
	}; // ReadSelfAction
}

#endif /* FUML_SYNTAX_ACTIONS_READSELFACTION_H_ */
