/*
 * ReadIsClassifiedObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_
#define UML_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
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
	};
// ReadIsClassifiedObjectAction
}

#endif /* UML_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_ */
