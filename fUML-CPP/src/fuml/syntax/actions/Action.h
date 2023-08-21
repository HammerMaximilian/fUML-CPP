/*
 * Action.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACTION_H_
#define FUML_SYNTAX_ACTIONS_ACTION_H_

#include "fuml/syntax/activities/ExecutableNode.h"
#include "OutputPinList.h"
#include "InputPinList.h"

namespace fuml::syntax::classification
{
	class Classifier;
}

namespace fuml::syntax::actions
{
	class Action : public fuml::syntax::activities::ExecutableNode
	{
		public:
			std::shared_ptr<OutputPinList> output = std::make_shared<OutputPinList>();
			std::shared_ptr<InputPinList> input = std::make_shared<InputPinList>();
			std::shared_ptr<fuml::syntax::classification::Classifier> context = nullptr;
			bool isLocallyReentrant = false;

		public:
			virtual ~Action() = 0;

			void setIsLocallyReentrant(bool);
			void _setContext(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void _setActivity(
					const std::shared_ptr<fuml::syntax::activities::Activity>&);

		protected:
			void addInput(const std::shared_ptr<fuml::syntax::actions::InputPin>&);
			void addOutput(const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
	}; // Action
}

#endif /* FUML_SYNTAX_ACTIONS_ACTION_H_ */
