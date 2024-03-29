/*
 * CentralBufferNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/CentralBufferNodeActivation.h>

#include <fuml/Debug.h>
#include <uml/activities/ActivityNode.h>

void CentralBufferNodeActivation::fire(const TokenListPtr& incomingTokens)
{
	// Add all incoming tokens to the central buffer node.
	// Offer any tokens that have not yet been offered.

	fuml::Debug::println("[fire] " + std::string(typeid(*(this->node.get())).name()) + " " + this->node->name);

	this->addTokens(incomingTokens);
	this->sendUnofferedTokens();
} // fire
