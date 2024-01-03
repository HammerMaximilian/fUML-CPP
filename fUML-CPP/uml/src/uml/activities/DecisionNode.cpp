/*
 * DecisionNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/activities/DecisionNode.h>

void DecisionNode::setDecisionInput(const BehaviorPtr& decisionInput)
{
	this->decisionInput = decisionInput;
} // setDecisionInput

void DecisionNode::setDecisionInputFlow(const ObjectFlowPtr& decisionInputFlow)
{
	this->decisionInputFlow = decisionInputFlow;
} // setDecisionInputFlow
