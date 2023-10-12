/*
 * Action.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ACTION_H_
#define FUML_SYNTAX_ACTIONS_ACTION_H_

#include <fuml/syntax/activities/ExecutableNode.h>

namespace fuml::syntax::classification
{
	class Classifier;
}

namespace fuml::syntax::actions
{
	class Action : public ExecutableNode
	{
		public:
			OutputPinListPtr output = std::make_shared<OutputPinList>();
			InputPinListPtr input = std::make_shared<InputPinList>();
			ClassifierPtr context = nullptr;
			bool isLocallyReentrant = false;

		public:
			virtual ~Action() = 0;

			void setIsLocallyReentrant(bool);
			virtual void _setContext(const ClassifierPtr&);
			void _setActivity(const ActivityPtr&);

		protected:
			void addInput(const InputPinPtr&);
			void addOutput(const OutputPinPtr&);
	};
// Action
}

#endif /* FUML_SYNTAX_ACTIONS_ACTION_H_ */
