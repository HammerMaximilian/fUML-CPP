/*
 * ActivityNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/ActivityNodeActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/Token.h>
#include <uml/activities/ActivityNode.h>

ActivityNodeActivation::~ActivityNodeActivation()
{
}

void fuml::semantics::activities::ActivityNodeActivation::setThisActivityNodeActivationPtr(
	ActivityNodeActivationPtr_w thisActivityNodeActivationPtr)
{
	this->thisActivityNodeActivationPtr = thisActivityNodeActivationPtr;
}

void ActivityNodeActivation::initialize(const ActivityNodePtr& node, const ActivityNodeActivationGroupPtr& group)
{
	// Initialize this node activation.

	this->node = node;
	this->group = group;
	this->running = false;
} // initialize

void ActivityNodeActivation::run()
{
	// Run the activation of this node.

	fuml::Debug::println(
		this->node == nullptr ?
			"[run] Anonymous activation of type " + std::string(typeid(*this).name()) :
			"[run] node = " + this->node->name);

	this->running = true;
} // run

void ActivityNodeActivation::receiveOffer()
{
	// Receive an offer from an incoming edge.
	// Check if all prerequisites have been satisfied. If so, fire.

	fuml::Debug::println("[receiveOffer] " + (this->node == nullptr ? "..." : "node = " + this->node->name));

	_beginIsolation();

	bool ready = this->isReady();

	TokenListPtr tokens(new TokenList());
	if (ready)
	{
		fuml::Debug::println("[receiveOffer] Firing.");
		tokens = this->takeOfferedTokens();
	}

	_endIsolation();

	if (ready)
	{
		this->fire(tokens);
	}
} // receiveOffer

TokenListPtr ActivityNodeActivation::takeOfferedTokens()
{
	// Get tokens from all incoming edges.

	TokenListPtr allTokens(new TokenList());
	ActivityEdgeInstanceListPtr incomingEdges = this->incomingEdges;
	for (const ActivityEdgeInstancePtr& incomingEdge : *incomingEdges)
	{
		TokenListPtr tokens = incomingEdge->takeOfferedTokens();
		for (const TokenPtr& token : *tokens)
		{
			allTokens->push_back(token);
		}
	}

	return allTokens;
} // takeOfferedTokens

void ActivityNodeActivation::sendOffers(const TokenListPtr& tokens)
{
	// Send offers for the given set of tokens over all outgoing edges (if
	// there are any tokens actually being offered).

	if (tokens->size() > 0)
	{

		// *** Send all outgoing offers concurrently. ***
		const ActivityEdgeInstanceListPtr& outgoingEdges = this->outgoingEdges;
		for (const ActivityEdgeInstancePtr& outgoingEdge : *outgoingEdges)
		{
			outgoingEdge->sendOffer(tokens);
		}
	}
} // sendOffers

void ActivityNodeActivation::terminate()
{
	// Terminate the activation of this node.

	fuml::Debug::println(this->running,
		this->node == nullptr ?
			"[terminate] Anonymous activation of type " + std::string(typeid(*this).name()) :
			"[terminate] node = " + this->node->name);

	this->running = false;
} // terminate

bool ActivityNodeActivation::isReady()
{
	// Check if all the prerequisites for this node have been satisfied.
	// By default, check that this node is running.

	return this->isRunning();
} // isReady

bool ActivityNodeActivation::isRunning()
{
	// Test whether this node activation is running.

	return this->running;
} // isRunning

void ActivityNodeActivation::addOutgoingEdge(const ActivityEdgeInstancePtr& edge)
{
	// Add an activity edge instance as an outgoing edge of this activity
	// node activation.

	edge->source = this->thisActivityNodeActivationPtr.lock();
	this->outgoingEdges->push_back(edge);
} // addOutgoingEdge

void ActivityNodeActivation::addIncomingEdge(const ActivityEdgeInstancePtr& edge)
{
	// Add an activity edge instance as an incoming edge of this activity
	// node activation.

	edge->target = this->thisActivityNodeActivationPtr.lock();
	this->incomingEdges->push_back(edge);
} // addIncomingEdge

void ActivityNodeActivation::createNodeActivations()
{
	// Create node activations for any subnodes of the node for this
	// activation.
	// For most kinds of nodes, this does nothing.

	return;
} // createNodeActivations

void ActivityNodeActivation::createEdgeInstances()
{
	// Create edge instances for any edge instances owned by the node for
	// this activation.
	// For most kinds of nodes, this does nothing.

	return;
} // createEdgeInstances

bool ActivityNodeActivation::isSourceFor(const ActivityEdgeInstancePtr& edgeInstance)
{
	// Check if this node activation is the effective source for the given
	// edge instance.

	return (edgeInstance->source.lock() == this->thisActivityNodeActivationPtr.lock());
} // isSourceFor

ActivityExecutionPtr ActivityNodeActivation::getActivityExecution()
{
	// Return the activity execution that contains this activity node
	// activation, directly or indirectly.

	return this->group.lock()->getActivityExecution();
} // getActivityExecution

Object_Ptr ActivityNodeActivation::getExecutionContext()
{
	// Get the context object for the containing activity execution.

	return this->getActivityExecution()->context;
} // getExecutionContext

LocusPtr ActivityNodeActivation::getExecutionLocus()
{
	// Get the locus of the containing activity execution.

	return this->getActivityExecution()->locus;
} // getExecutionLocus

ActivityNodeActivationPtr ActivityNodeActivation::getNodeActivation(const ActivityNodePtr& node)
{
	// Get the activity node activation corresponding to the given activity
	// node, in the context of this activity node activation.
	// By default, return this activity node activation, if it is for the
	// given node, otherwise return nothing.

	ActivityNodeActivationPtr activation = nullptr;
	if (node == this->node)
	{
		activation = this->thisActivityNodeActivationPtr.lock();
	}

	return activation;
} // getNodeActivation

void ActivityNodeActivation::addToken(const TokenPtr& token)
{
	// Transfer the given token to be held by this node.

	fuml::Debug::println("[addToken] " + (this->node == nullptr ? "..." : "node = " + this->node->name));

	TokenPtr transferredToken = token->transfer(this->thisActivityNodeActivationPtr.lock());
	this->heldTokens->push_back(transferredToken);
} // addToken

int ActivityNodeActivation::removeToken(const TokenPtr& token)
{
	// Remove the given token, if it is held by this node activation.
	// Return the position (counting from 1) of the removed token (0 if
	// there is none removed).

	bool notFound = true;
	unsigned int i = 1;
	unsigned int heldTokensSize = this->heldTokens->size();
	while (notFound && i <= heldTokensSize)
	{
		if (this->heldTokens->at(i - 1) == token)
		{
			fuml::Debug::println("[removeToken] " + (this->node == nullptr ? "..." : "node = " + this->node->name));
			this->heldTokens->erase(this->heldTokens->begin() + (i - 1));
			notFound = false;
		}
		i = i + 1;
	}

	if (notFound)
	{
		i = 0;
	}
	else
	{
		i = i - 1;
	}

	return i;
} // removeToken

void ActivityNodeActivation::addTokens(const TokenListPtr& tokens)
{
	// Transfer the given tokens to be the held tokens for this node.

	for (const TokenPtr& token : *tokens)
	{
		this->addToken(token);
	}
} // addTokens

TokenListPtr ActivityNodeActivation::takeTokens()
{
	// Take the tokens held by this node activation.

	TokenListPtr tokens = this->getTokens();
	this->clearTokens();

	return tokens;
} // takeTokens

void ActivityNodeActivation::clearTokens()
{
	// Remove all held tokens.

	while (this->heldTokens->size() > 0)
	{
		this->heldTokens->at(0)->withdraw();
	}
} // clearTokens

TokenListPtr ActivityNodeActivation::getTokens()
{
	// Get the tokens held by this node activation.

	TokenListPtr tokens(new TokenList());
	const TokenListPtr& heldTokens = this->heldTokens;
	for (const TokenPtr& heldToken : *heldTokens)
	{
		tokens->push_back(heldToken);
	}

	return tokens;
} // getTokens

void ActivityNodeActivation::suspend()
{
	// Suspend this activation within the activation group that contains it.

	this->group.lock()->suspend(this->thisActivityNodeActivationPtr.lock());
} // suspend

void ActivityNodeActivation::resume()
{
	// Resume this activation within the activation group that contains it.

	this->group.lock()->resume(this->thisActivityNodeActivationPtr.lock());
} // resume
