/*
 * ReduceAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_REDUCEACTION_H_
#define FUML_SYNTAX_ACTIONS_REDUCEACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <memory>

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
namespace fuml::syntax::actions
{
	class InputPin;
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ReduceAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::Behavior> reducer = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;
			std::shared_ptr<InputPin> collection = nullptr;
			bool isOrdered;

		public:
			void setIsOrdered(bool);
			void setReducer(const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>&);
			void setCollection(const std::shared_ptr<InputPin>&);
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ReduceAction
}

using ReduceAction = fuml::syntax::actions::ReduceAction;
using ReduceActionPtr = std::shared_ptr<ReduceAction>;

#endif /* FUML_SYNTAX_ACTIONS_REDUCEACTION_H_ */
