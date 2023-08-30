/*
 * DecisionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_
#define FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_

#include <fuml/syntax/activities/ControlNode.h>

namespace fuml::syntax::activities
{
	class DecisionNode : public ControlNode
	{
		public:
			BehaviorPtr decisionInput = nullptr;
			ObjectFlowPtr decisionInputFlow = nullptr;

		public:
			virtual ~DecisionNode() = default;

			void setDecisionInput(const BehaviorPtr&);
			void setDecisionInputFlow(const ObjectFlowPtr&);
	};
// DecisionNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_DECISIONNODE_H_ */
