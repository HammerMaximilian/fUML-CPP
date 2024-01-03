/*
 * DecisionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_DECISIONNODE_H_
#define UML_ACTIVITIES_DECISIONNODE_H_

#include <uml/activities/ControlNode.h>

namespace uml::activities
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

#endif /* UML_ACTIVITIES_DECISIONNODE_H_ */
