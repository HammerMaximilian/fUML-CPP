/*
 * DecisionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_
#define FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_

#include "ControlNode.h"

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
namespace fuml::syntax::activities
{
	class ObjectFlow;
}

namespace fuml::syntax::activities
{
	class DecisionNode : public fuml::syntax::activities::ControlNode
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::Behavior> decisionInput = nullptr;
			std::shared_ptr<fuml::syntax::activities::ObjectFlow> decisionInputFlow = nullptr;

		public:
			void setDecisionInput(
					const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>&);
			void setDecisionInputFlow(
					const std::shared_ptr<fuml::syntax::activities::ObjectFlow>&);
	}; // DecisionNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_ */
