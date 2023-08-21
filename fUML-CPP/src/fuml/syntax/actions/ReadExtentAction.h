/*
 * ReadExtentAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_
#define FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_

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
	class ReadExtentAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::classification::Classifier> classifier = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setResult(const std::shared_ptr<OutputPin>&);
			void setClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // ReadExtentAction
}


#endif /* FUML_SYNTAX_ACTIONS_READEXTENTACTION_H_ */