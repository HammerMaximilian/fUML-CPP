/*
 * ReadExtentAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_READEXTENTACTION_H_
#define UML_ACTIONS_READEXTENTACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class ReadExtentAction : public Action
	{
		public:
			ClassifierPtr classifier = nullptr;
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadExtentAction() = default;

			void setResult(const OutputPinPtr&);
			void setClassifier(const ClassifierPtr&);
	};
// ReadExtentAction
}

#endif /* UML_ACTIONS_READEXTENTACTION_H_ */
