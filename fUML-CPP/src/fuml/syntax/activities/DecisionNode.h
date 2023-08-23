/*
 * DecisionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_
#define FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_

#include <fuml/syntax/activities/ControlNode.h>
#include <memory>

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;

namespace fuml::syntax::activities
{
	class ObjectFlow;
}
using ObjectFlow = fuml::syntax::activities::ObjectFlow;
using ObjectFlowPtr = std::shared_ptr<ObjectFlow>;

namespace fuml::syntax::activities
{
	class DecisionNode : public ControlNode
	{
		public:
			BehaviorPtr decisionInput = nullptr;
			ObjectFlowPtr decisionInputFlow = nullptr;

		public:
			void setDecisionInput(
					const BehaviorPtr&);
			void setDecisionInputFlow(
					const ObjectFlowPtr&);
	}; // DecisionNode
}

using DecisionNode = fuml::syntax::activities::DecisionNode;
using DecisionNodePtr = std::shared_ptr<DecisionNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_ */
