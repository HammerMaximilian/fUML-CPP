/*
 * UnmarshallAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_UNMARSHALLACTION_H_
#define FUML_SYNTAX_ACTIONS_UNMARSHALLACTION_H_

#include <memory>
#include "Action.h"
#include "OutputPinList.h"

namespace fuml::syntax::classification
{
	class Classifier;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class UnmarshallAction : public Action
	{
		public:
			std::shared_ptr<InputPin> object = nullptr;
			std::shared_ptr<OutputPinList> result = std::make_shared<OutputPinList>();
			std::shared_ptr<fuml::syntax::classification::Classifier> unmarshallType = nullptr;

		public:
			void setObject(const std::shared_ptr<InputPin>&);
			void addResult(const std::shared_ptr<OutputPin>&);
			void setUnmarshallType(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // UnmarshallAction
}

using UnmarshallAction = fuml::syntax::actions::UnmarshallAction;
using UnmarshallActionPtr = std::shared_ptr<UnmarshallAction>;

#endif /* FUML_SYNTAX_ACTIONS_UNMARSHALLACTION_H_ */
