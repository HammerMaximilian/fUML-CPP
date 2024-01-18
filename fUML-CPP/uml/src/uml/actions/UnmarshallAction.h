/*
 * UnmarshallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_UNMARSHALLACTION_H_
#define UML_ACTIONS_UNMARSHALLACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class UnmarshallAction : public Action
	{
		public:
			InputPinPtr object = nullptr;
			OutputPinListPtr result = std::make_shared<OutputPinList>();
			ClassifierPtr unmarshallType = nullptr;

		public:
			virtual ~UnmarshallAction() = default;

			void setObject(const InputPinPtr&);
			void addResult(const OutputPinPtr&);
			void setUnmarshallType(const ClassifierPtr&);
	};
// UnmarshallAction
}

#endif /* UML_ACTIONS_UNMARSHALLACTION_H_ */
