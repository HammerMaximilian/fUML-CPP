/*
 * ReadIsClassifiedObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ReadIsClassifiedObjectAction : public Action
	{
		public:
			bool isDirect = false;
			ClassifierPtr classifier = nullptr;
			OutputPinPtr result = nullptr;
			InputPinPtr object = nullptr;

		public:
			virtual ~ReadIsClassifiedObjectAction() = default;
		
			void setIsDirect(bool);
			void setClassifier(const ClassifierPtr&);
			void setResult(const OutputPinPtr&);
			void setObject(const InputPinPtr&);
	}; // ReadIsClassifiedObjectAction
}

#endif /* FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_ */
