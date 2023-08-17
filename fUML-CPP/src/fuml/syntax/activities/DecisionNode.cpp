/*
 * DecisionNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "DecisionNode.h"

using namespace fuml::syntax::activities;

void DecisionNode::setDecisionInput(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& decisionInput)
{
	this->decisionInput = decisionInput;
} // setDecisionInput

void DecisionNode::setDecisionInputFlow(
	const std::shared_ptr<fuml::syntax::activities::ObjectFlow>& decisionInputFlow)
{
	this->decisionInputFlow = decisionInputFlow;
} // setDecisionInputFlow
