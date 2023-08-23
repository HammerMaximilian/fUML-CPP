/*
 * CreateObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class CreateObjectAction : public Action
	{
		public:
			OutputPinPtr result = nullptr;
			ClassifierPtr classifier = nullptr;

		public:
			void setClassifier(const ClassifierPtr&);
			void setResult(const OutputPinPtr& result);
	}; // CreateObjectAction
}

#endif /* FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_ */
