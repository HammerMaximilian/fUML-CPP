/*
 * ReadExtentAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_
#define FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ReadExtentAction : public Action
	{
		public:
			ClassifierPtr classifier = nullptr;
			OutputPinPtr result = nullptr;

		public:
			void setResult(const OutputPinPtr&);
			void setClassifier(const ClassifierPtr&);
	}; // ReadExtentAction
}

#endif /* FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_ */
