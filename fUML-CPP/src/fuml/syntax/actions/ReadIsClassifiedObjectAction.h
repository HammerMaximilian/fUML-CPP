/*
 * ReadIsClassifiedObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Classifier;
}
namespace fuml::syntax::actions
{
	class InputPin;
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ReadIsClassifiedObjectAction : public Action
	{
		public:
			bool isDirect = false;
			std::shared_ptr<fuml::syntax::classification::Classifier> classifier = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;
			std::shared_ptr<InputPin> object = nullptr;

		public:
			void setIsDirect(bool);
			void setClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void setResult(const std::shared_ptr<OutputPin>&);
			void setObject(const std::shared_ptr<InputPin>&);
	}; // ReadIsClassifiedObjectAction
}

using ReadIsClassifiedObjectAction = fuml::syntax::actions::ReadIsClassifiedObjectAction;
using ReadIsClassifiedObjectActionPtr = std::shared_ptr<ReadIsClassifiedObjectAction>;

#endif /* FUML_SYNTAX_ACTIONS_READISCLASSIFIEDOBJECTACTION_H_ */
