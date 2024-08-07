/*
 * ExpansionNodeActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ExpansionNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ExpansionRegionActivation.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <uml/actions/ExpansionNode.h>
#include <uml/actions/ExpansionRegion.h>

void ExpansionNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Take tokens from all incoming edges.

	fuml::Debug::println("[fire] Expansion node " + this->node->name + "...");

	this->addTokens(incomingTokens);
} // fire

void ExpansionNodeActivation::receiveOffer()
{
	// Forward the offer on to the expansion region.

	this->getExpansionRegionActivation()->receiveOffer();
} // receiveOffer

bool ExpansionNodeActivation::isReady()
{
	// An expansion node is always fired by its expansion region.

	return false;
} // isReady

ExpansionRegionActivationPtr ExpansionNodeActivation::getExpansionRegionActivation()
{
	// Return the expansion region activation corresponding to this
	// expansion node, in the context of the activity node activation group
	// this expansion node activation is in.

	ExpansionNodePtr node = AS(ExpansionNode, this->node);

	ExpansionRegionPtr region = node->regionAsInput;
	if (region == nullptr)
	{
		region = node->regionAsOutput;
	}

	return AS(ExpansionRegionActivation, this->group.lock()->getNodeActivation(region));

} // getExpansionRegionActivation
