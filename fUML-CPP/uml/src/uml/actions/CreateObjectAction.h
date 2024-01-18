/*
 * CreateObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CREATEOBJECTACTION_H_
#define UML_ACTIONS_CREATEOBJECTACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class CreateObjectAction : public Action
	{
		public:
			OutputPinPtr result = nullptr;
			ClassifierPtr classifier = nullptr;

		public:
			virtual ~CreateObjectAction() = default;

			void setClassifier(const ClassifierPtr&);
			void setResult(const OutputPinPtr& result);
	};
// CreateObjectAction
}

#endif /* UML_ACTIONS_CREATEOBJECTACTION_H_ */
