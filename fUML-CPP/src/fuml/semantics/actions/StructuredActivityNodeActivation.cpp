/*
 * StructuredActivityNodeActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>

#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/ObjectToken.h>

void StructuredActivityNodeActivation::setThisStructuredActivityNodeActivationPtr(
		std::weak_ptr<StructuredActivityNodeActivation> thisStructuredActivityNodeActivationPtr)
{
	this->thisStructuredActivityNodeActivationPtr = thisStructuredActivityNodeActivationPtr;
	ActionActivation::setThisActionActivationPtr(thisStructuredActivityNodeActivationPtr);
}

void StructuredActivityNodeActivation::doAction()
{
	// If the structured activity node has mustIsolate=true, then carry out
	// its behavior with isolation.
	// Otherwise just activate it normally.

	if (std::dynamic_pointer_cast<StructuredActivityNode>(this->node)->mustIsolate) {
		_beginIsolation();
		this->doStructuredActivity();
		_endIsolation();
	} else {
		this->doStructuredActivity();
	}
} // doAction

void StructuredActivityNodeActivation::doStructuredActivity()
{
	// Run all activations of contained nodes. When this is complete,
	// return.
	// (This is the default behavior for a structured activity node used
	// simply as a group. It is overridden for the execution of conditional
	// and loop nodes.)

	ActionPtr action = std::dynamic_pointer_cast<Action>(this->node);

	// *** Concurrently send offers from all input pins. ***
	InputPinListPtr inputPins = action->input;
	for (const InputPinPtr& inputPin : *inputPins) {
		PinActivationPtr pinActivation = this->getPinActivation(inputPin);
		pinActivation->sendUnofferedTokens();
	}

	this->activationGroup->run(this->activationGroup->nodeActivations);
} // doStructuredActivity

void StructuredActivityNodeActivation::terminate()
{
	// Terminate the execution of all contained node activations (which
	// completes the performance of the structured activity node
	// activation), and then terminate this node itself.

	this->terminateAll();
	ActionActivation::terminate();
} // terminate

ActivityNodeActivationPtr StructuredActivityNodeActivation::getNodeActivation(
		const ActivityNodePtr&)
{
	// If this structured activity node activation is not for the given
	// node, then check if there is an activation for the node in the
	// activation group.

	ActivityNodeActivationPtr thisActivation = ActivityNodeActivation::getNodeActivation(node);

	ActivityNodeActivationPtr activation = nullptr;
	if (thisActivation != nullptr) {
		activation = thisActivation;
	} else if (this->activationGroup != nullptr) {
		activation = this->activationGroup->getNodeActivation(node);
	}

	return activation;
} // getNodeActivation

ActivityNodeListPtr StructuredActivityNodeActivation::makeActivityNodeList(
		const ExecutableNodeListPtr& nodes)
{
	// Return an activity node list containing the given list of executable
	// nodes
	// and any pins that they own.

	ActivityNodeListPtr activityNodes(new ActivityNodeList());

	for (const ActivityNodePtr& node : *nodes) {
		activityNodes->push_back(node);

		ActionPtr action = std::dynamic_pointer_cast<Action>(node);

		if (action) {
			InputPinListPtr inputPins = action->input;
			for (const InputPinPtr& inputPin : *inputPins) {
				activityNodes->push_back(inputPin);
			}

			OutputPinListPtr outputPins = action->output;
			for (const OutputPinPtr& outputPin : *outputPins) {
				activityNodes->push_back(outputPin);
			}
		}
	}

	return activityNodes;
} // makeActivityNodeList

ValueListPtr StructuredActivityNodeActivation::getPinValues(
		const OutputPinPtr& pin)
{
	// Return the values of the tokens on the pin activation corresponding
	// to the given pin in the internal activation group for this node
	// activation.

	PinActivationPtr pinActivation = std::dynamic_pointer_cast<PinActivation>(this->activationGroup
			->getNodeActivation(pin));
	const TokenListPtr& tokens = pinActivation->getTokens();

	ValueListPtr values(new ValueList());
	for (const TokenPtr& token : *tokens) {
		const ValuePtr& value = std::dynamic_pointer_cast<ObjectToken>(token)->value;
		if (value != nullptr) {
			values->push_back(value);
		}
	}

	return values;
} // getPinValues

void StructuredActivityNodeActivation::putPinValues(
		const OutputPinPtr& pin, const ValueListPtr& values)
{
	// Place tokens for the given values on the pin activation corresponding
	// to the given output pin on the internal activation group for this
	// node activation.

	PinActivationPtr pinActivation = std::dynamic_pointer_cast<PinActivation>(this->activationGroup
			->getNodeActivation(pin));

	for (const ValuePtr& value : *values) {
		ObjectTokenPtr token(new ObjectToken());
		token->setThisObjectTokenPtr(token);
		token->value = value;
		pinActivation->addToken(token);
	}
} // putPinValues

void StructuredActivityNodeActivation::createNodeActivations()
{
	// Create an activation group and create node activations for all the
	// nodes within the structured activity node.

	ActionActivation::createNodeActivations();

	this->activationGroup.reset(new ActivityNodeActivationGroup());
	this->activationGroup->containingNodeActivation = this->thisStructuredActivityNodeActivationPtr.lock();
	this->activationGroup
			->createNodeActivations(std::dynamic_pointer_cast<StructuredActivityNode>(this->node)->node);

} // createNodeActivations

void StructuredActivityNodeActivation::createEdgeInstances()
{
	// Create instances for all edges owned by this node.

	this->activationGroup
			->createEdgeInstances(std::dynamic_pointer_cast<StructuredActivityNode>(this->node)->edge);
} // createEdgeInstances

bool StructuredActivityNodeActivation::isSourceFor(
		const ActivityEdgeInstancePtr& edgeInstance)
{
	// Returns true if this node is either the source for the given
	// edgeInstance itself or if it contains the source in its
	// activation group.

	bool isSource = ActionActivation::isSourceFor(edgeInstance);
	if (!isSource) {
		isSource = this->activationGroup->hasSourceFor(edgeInstance);
	}
	return isSource;
} // isSourceFor

void StructuredActivityNodeActivation::terminateAll()
{
	// Terminate the execution of all contained node activations (which
	// completes the performance of the structured activity node
	// activation).

	this->activationGroup->terminateAll();
} // terminateAll

bool StructuredActivityNodeActivation::isSuspended()
{
	// Check if the activation group for this node is suspended.

	return this->activationGroup->isSuspended();
} // isSuspended

TokenListPtr StructuredActivityNodeActivation::completeAction()
{
	// Only actually complete this structured activity node if it is not
	// suspended.

	TokenListPtr incomingTokens(new TokenList());
	if (!this->isSuspended()) {
		incomingTokens = ActionActivation::completeAction();
	}
	return incomingTokens;
} // completeAction

void StructuredActivityNodeActivation::resume()
{
	// When this structured activity node is resumed after being suspended,
	// then complete its prior firing and, if there are more incoming
	// tokens, fire it again. If, after that, the node is not suspended,
	// then finish its resumption.

	TokenListPtr incomingTokens = ActionActivation::completeAction();
	if (incomingTokens->size() > 0) {
		this->fire(incomingTokens);
	}
	if (!this->isSuspended()) {
		ActivityNodeActivation::resume();
	}
} // resume
