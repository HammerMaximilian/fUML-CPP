/*
 * CreateObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::classification
{
	class Classifier;
}
namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class CreateObjectAction : public Action
	{
		public:
			std::shared_ptr<OutputPin> result = nullptr;
			std::shared_ptr<fuml::syntax::classification::Classifier> classifier = nullptr;

		public:
			void setClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void setResult(const std::shared_ptr<OutputPin>& result);
	}; // CreateObjectAction
}

using CreateObjectAction = fuml::syntax::actions::CreateObjectAction;
using CreateObjectActionPtr = std::shared_ptr<CreateObjectAction>;

#endif /* FUML_SYNTAX_ACTIONS_CREATEOBJECTACTION_H_ */
