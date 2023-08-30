/*
 * ActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/ActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>
#include <fuml/semantics/activities/ControlToken.h>
#include <fuml/semantics/activities/ForkNodeActivation.h>
#include <fuml/semantics/activities/ObjectToken.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/activities/ExceptionHandler.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/commonbehavior/Behavior.h>
#include <fuml/syntax/structuredclassifiers/Association.h>
#include <fuml/syntax/values/LiteralBoolean.h>

ActionActivation::~ActionActivation()
{
}

void ActionActivation::setThisActionActivationPtr(std::weak_ptr<ActionActivation> thisActionActivationPtr)
{
	this->thisActionActivationPtr = thisActionActivationPtr;
	ActivityNodeActivation::setThisActivityNodeActivationPtr(thisActionActivationPtr);
}

void ActionActivation::initialize(const ActivityNodePtr& node, const ActivityNodeActivationGroupPtr& group)
{
	// Initialize this action activation to be not firing.

	ActivityNodeActivation::initialize(node, group);
	this->firing = false;
} // initialize

void ActionActivation::run()
{
	// Run this action activation and any outgoing fork node attached to it.

	ActivityNodeActivation::run();

	if (this->outgoingEdges->size() > 0)
	{
		this->outgoingEdges->at(0)->target->run();
	}

	this->firing = false;
} // run

TokenListPtr ActionActivation::takeOfferedTokens()
{
	// If the action is not locally reentrant, then mark this activation as
	// firing.
	// Take any incoming offers of control tokens, then concurrently fire
	// all input pin activations.

	// Note: This is included here to happen in the same isolation scope as
	// the isReady test.
	ActionPtr action = std::dynamic_pointer_cast<Action>(this->node);
	this->firing = !(action->isLocallyReentrant);

	TokenListPtr offeredTokens(new TokenList());

	const ActivityEdgeInstanceListPtr& incomingEdges = this->incomingEdges;
	for (const ActivityEdgeInstancePtr& incomingEdge : *incomingEdges)
	{
		TokenListPtr tokens = incomingEdge->takeOfferedTokens();
		for (const TokenPtr& token : *tokens)
		{
			token->withdraw();
			offeredTokens->push_back(token);
		}
	}

	// *** Fire all input pins concurrently. ***
	const InputPinListPtr& inputPins = action->input;
	for (const InputPinPtr& pin : *inputPins)
	{
		PinActivationPtr pinActivation = this->getPinActivation(pin);
		TokenListPtr tokens = pinActivation->takeOfferedTokens();
		pinActivation->fire(tokens);
		for (const TokenPtr& token : *tokens)
		{
			offeredTokens->push_back(token);
		}
	}

	return offeredTokens;
} // takeOfferedTokens

void ActionActivation::fire(const TokenListPtr& incomingTokens)
{
	// Do the main action behavior then concurrently fire all output pin
	// activations
	// and offer a single control token. Then activate the action again,
	// if it is still ready to fire and has at least one token actually
	// being
	// offered to it.

	TokenListPtr firingTokens = incomingTokens;

	do
	{

		utils::Debug::println("[fire] Action " + this->node->name + "...");
		utils::Debug::println(
			"[event] Fire activity=" + this->getActivityExecution()->getBehavior()->name + " action="
				+ this->node->name);

		this->doAction();
		firingTokens = this->completeAction();

	}
	while (firingTokens->size() > 0);
} // fire

void ActionActivation::terminate()
{
	// Terminate this action activation and any outgoing fork node attached
	// to it.

	ActivityNodeActivation::terminate();

	if (this->outgoingEdges->size() > 0)
	{
		this->outgoingEdges->at(0)->target->terminate();
	}
} // terminate

TokenListPtr ActionActivation::completeAction()
{
	// Concurrently fire all output pin activations and offer a single
	// control token. Then check if the action should fire again
	// and, if so, return additional incoming tokens for this.

	this->sendOffers();

	utils::Debug::println("[fire] Checking if " + this->node->name + " should fire again...");

	_beginIsolation();
	TokenListPtr incomingTokens(new TokenList());
	this->firing = false;
	if (this->isReady())
	{
		incomingTokens = this->takeOfferedTokens();
		this->firing = (this->isFiring()) && (incomingTokens->size() > 0);
	}
	_endIsolation();

	return incomingTokens;
} // completeAction

bool ActionActivation::isReady()
{
	// Check that the action is ready to fire, including
	// that all input pin activations are ready.

	bool ready = isControlReady();

	const InputPinListPtr& inputPins = std::dynamic_pointer_cast<Action>(this->node)->input;

	for (const InputPinPtr& inputPin : *inputPins)
	{
		ready = this->getPinActivation(inputPin)->isReady();
		if (!ready)
			break;
	}

	return ready;
} // isReady

bool ActionActivation::isControlReady()
{
	// In addition to the default condition for being ready, check that,
	// if the action has isLocallyReentrant=false, then the activation is
	// not currently firing, and that the sources of all incoming edges
	// have offers. (This assumes that all edges directly incoming to the
	// action are control flows.)

	bool ready = ActivityNodeActivation::isReady()
		&& (std::dynamic_pointer_cast<Action>(this->node)->isLocallyReentrant || !this->isFiring());

	for (const ActivityEdgeInstancePtr& incomingEdge : *(this->incomingEdges))
	{
		ready = incomingEdge->hasOffer();
		if (!ready)
			break;
	}

	return ready;
} // isControlReady

bool ActionActivation::isFiring()
{
	// Indicate whether this action activation is currently firing or not.

	return this->firing;
} // isFiring

void ActionActivation::sendOffers()
{
	// Fire all output pins and send offers on all outgoing control flows.

	ActionPtr action = std::dynamic_pointer_cast<Action>(this->node);

	// *** Send offers from all output pins concurrently. ***
	OutputPinListPtr outputPins = this->getOfferingOutputPins();
	for (const OutputPinPtr& outputPin : *outputPins)
	{
		PinActivationPtr pinActivation = this->getPinActivation(outputPin);
		pinActivation->sendUnofferedTokens();
	}

	// Send offers on all outgoing control flows.
	if (this->outgoingEdges->size() > 0)
	{
		TokenListPtr tokens(new TokenList());
		tokens->push_back(ControlTokenPtr(new ControlToken()));
		this->addTokens(tokens);
		this->outgoingEdges->at(0)->sendOffer(tokens);
	}
} // sendOffers

OutputPinListPtr ActionActivation::getOfferingOutputPins()
{
	// Return the output pins of the action of this action activation from
	// which offers are to be sent when the action activation finishes firing.
	// (This is normally all the output pins of the action, but it can be
	// overridden in subclasses to only return a subset of the output pins.)

	return std::dynamic_pointer_cast<Action>(this->node)->output;
} // getOfferingOutputPins

void ActionActivation::createNodeActivations()
{
	// Create node activations for the input and output pins of the action
	// for this activation.
	// [Note: Pins are owned by their actions, not by the enclosing activity
	// (or group), so they must be activated through the action activation.]

	ActionPtr action = std::dynamic_pointer_cast<Action>(this->node);

	ActivityNodeListPtr inputPinNodes(new ActivityNodeList());
	const InputPinListPtr& inputPins = action->input;
	for (const InputPinPtr& inputPin : *inputPins)
	{
		inputPinNodes->push_back(inputPin);
	}

	this->group->createNodeActivations(inputPinNodes);

	for (const ActivityNodePtr& node : *inputPinNodes)
	{
		this->addPinActivation(std::dynamic_pointer_cast<PinActivation>(this->group->getNodeActivation(node)));
	}

	ActivityNodeListPtr outputPinNodes(new ActivityNodeList());
	const OutputPinListPtr& outputPins = action->output;
	for (const OutputPinPtr& outputPin : *outputPins)
	{
		outputPinNodes->push_back(outputPin);
	}

	this->group->createNodeActivations(outputPinNodes);

	for (const ActivityNodePtr& node : *outputPinNodes)
	{
		this->addPinActivation(std::dynamic_pointer_cast<PinActivation>(this->group->getNodeActivation(node)));
	}
} // createNodeActivations

void ActionActivation::addOutgoingEdge(const ActivityEdgeInstancePtr& edge)
{
	// If there are no outgoing activity edge instances, create a single
	// activity edge instance with a fork node execution at the other end.
	// Add the give edge to the fork node execution that is the target of
	// the activity edge instance out of this action execution.
	// [This assumes that all edges directly outgoing from the action are
	// control flows, with an implicit fork for offers out of the action.]

	ActivityNodeActivationPtr forkNodeActivation;

	if (this->outgoingEdges->size() == 0)
	{
		forkNodeActivation.reset(new ForkNodeActivation());
		forkNodeActivation->running = false;
		ActivityEdgeInstancePtr newEdge(new ActivityEdgeInstance());
		ActivityNodeActivation::addOutgoingEdge(newEdge);
		forkNodeActivation->addIncomingEdge(newEdge);
	}
	else
	{
		forkNodeActivation = this->outgoingEdges->at(0)->target;
	}

	forkNodeActivation->addOutgoingEdge(edge);
}

void ActionActivation::addPinActivation(const PinActivationPtr& pinActivation)
{
	// Add a pin activation to this action activation.

	this->pinActivations->push_back(pinActivation);
	pinActivation->actionActivation = this->thisActionActivationPtr.lock();
} // addPinActivation

PinActivationPtr ActionActivation::getPinActivation(const PinPtr& pin)
{
	// Precondition: The given pin is owned by the action of the action
	// activation.
	// Return the pin activation corresponding to the given pin.

	PinActivationPtr pinActivation = nullptr;
	for (const PinActivationPtr& thisPinActivation : *(this->pinActivations))
	{
		if (thisPinActivation->node == pin)
		{
			pinActivation = thisPinActivation;
			break;
		}
	}

	return pinActivation;
} // getPinActivation

void ActionActivation::putToken(const OutputPinPtr& pin, const ValuePtr& value)
{
	// Precondition: The action execution has fired and the given pin is
	// owned by the action of the action execution.
	// Place a token for the given value on the pin activation corresponding
	// to the given output pin.

	utils::Debug::println("[putToken] node = " + this->node->name);

	ObjectTokenPtr token(new ObjectToken());
	token->value = value;

	PinActivationPtr pinActivation = this->getPinActivation(pin);
	pinActivation->addToken(token);
} // putToken

void ActionActivation::putTokens(const OutputPinPtr& pin, const ValueListPtr& values)
{
	// Precondition: The action execution has fired and the given pin is
	// owned by the action of the action execution.
	// Place tokens for the given values on the pin activation corresponding
	// to the given output pin.

	for (const ValuePtr& value : *values)
	{
		this->putToken(pin, value);
	}
} // putTokens

ValueListPtr ActionActivation::getTokens(const InputPinPtr& pin)
{
	// Precondition: The action execution has fired and the given pin is
	// owned by the action of the action execution.
	// Get any tokens held by the pin activation corresponding to the given
	// input pin and return them
	// (but leave the tokens on the pin).

	utils::Debug::println("[getTokens] node = " + this->node->name + ", pin = " + pin->name);

	PinActivationPtr pinActivation = this->getPinActivation(pin);
	TokenListPtr tokens = pinActivation->getUnofferedTokens();

	ValueListPtr values(new ValueList());
	for (const TokenPtr& token : *tokens)
	{
		ValuePtr value = token->getValue();
		if (value != nullptr)
		{
			values->push_back(value);
		}
	}

	return values;
} // getTokens

ValueListPtr ActionActivation::takeTokens(const InputPinPtr& pin)
{
	// Precondition: The action execution has fired and the given pin is
	// owned by the action of the action execution.
	// Take any tokens held by the pin activation corresponding to the given
	// input pin and return them.

	utils::Debug::println("[takeTokens] node = " + this->node->name + ", pin = " + pin->name);

	PinActivationPtr pinActivation = this->getPinActivation(pin);
	TokenListPtr tokens = pinActivation->takeUnofferedTokens();

	ValueListPtr values(new ValueList());
	for (const TokenPtr& token : *tokens)
	{
		ValuePtr value = token->getValue();
		if (value != nullptr)
		{
			values->push_back(value);
		}
	}

	return values;
} // takeTokens

bool ActionActivation::isSourceFor(const ActivityEdgeInstancePtr& edgeInstance)
{
	// If this action has an outgoing fork node, check that the fork node is
	// the source of the given edge instance.

	bool isSource = false;
	if (this->outgoingEdges->size() > 0)
	{
		isSource = this->outgoingEdges->at(0)->target->isSourceFor(edgeInstance);
	}

	return isSource;
} // isSourceFor

bool ActionActivation::valueParticipatesInLink(const ValuePtr& value, const LinkPtr& link)
{
	// Test if the given value participates in the given link.

	FeatureValueListPtr linkFeatureValues = link->getFeatureValues();

	bool participates = false;
	for (const FeatureValuePtr& linksFeatureValue : *linkFeatureValues)
	{
		participates = linksFeatureValue->values->at(0)->equals(value);
		if (participates)
			break;
	}

	return participates;
} // valueParticipatesInLink

AssociationPtr ActionActivation::getAssociation(const StructuralFeaturePtr& feature)
{
	// If the given structural feature is an association end, then get
	// the associated association.

	AssociationPtr association = nullptr;
	PropertyPtr property = std::dynamic_pointer_cast<Property>(feature);
	if (property)
	{
		association = property->association;
	}

	return association;
} // getAssociation

ValueListPtr ActionActivation::getValues(const ValuePtr& sourceValue, const StructuralFeaturePtr& feature)
{
	// Get the values of the feature for the given source value.
	// If the feature is an association end, then get the values of
	// the feature end of the links with the source value as the
	// opposite end.
	// Otherwise, if the source value is a structured value, get
	// the values of the feature value for feature in the structured value.

	ValueListPtr values(new ValueList());

	AssociationPtr association = this->getAssociation(feature);
	if (association != nullptr)
	{
		LinkListPtr links = this->getMatchingLinks(association, feature, sourceValue);
		for (const LinkPtr& link : *links)
		{
			values->push_back(link->getFeatureValue(feature)->values->at(0));
		}
	}
	else
	{
		values = std::dynamic_pointer_cast<StructuredValue>(sourceValue)->getFeatureValue(feature)->values;
	}

	return values;
} // getValues

LinkListPtr ActionActivation::getMatchingLinks(const AssociationPtr& association, const StructuralFeaturePtr& end,
	const ValuePtr& oppositeValue)
{
	// Get the links of the given binary association whose end opposite
	// to the given end has the given value

	return this->getMatchingLinksForEndValue(association, end, oppositeValue, nullptr);
} // getMatchingLinks

LinkListPtr ActionActivation::getMatchingLinksForEndValue(const AssociationPtr& association,
	const StructuralFeaturePtr& end, const ValuePtr& oppositeValue, const ValuePtr& endValue)
{
	// Get the links of the given binary association whose end opposite
	// to the given end has the given opposite value and, optionally, that
	// has a given end value for the given end.

	PropertyPtr oppositeEnd = this->getOppositeEnd(association, end);

	ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(association);

	LinkListPtr links(new LinkList());
	for (const ExtensionalValuePtr& link : *extent)
	{
		if (link->getFeatureValue(oppositeEnd)->values->at(0)->equals(oppositeValue))
		{
			bool matches = true;
			if (endValue != nullptr)
			{
				matches = link->getFeatureValue(end)->values->at(0)->equals(endValue);
			}
			if (matches)
			{
				LinkPtr castedLink = std::dynamic_pointer_cast<Link>(link);
				if (!end->isOrdered || links->size() == 0)
				{
					links->push_back(castedLink);
				}
				else
				{
					int n = link->getFeatureValue(end)->position;
					bool continueSearching = true;
					unsigned int j = 0;
					for (const LinkPtr& link : *links)
					{
						j = j + 1;
						continueSearching = (link->getFeatureValue(end)->position < n);
					}
					if (continueSearching)
					{
						links->push_back(castedLink);
					}
					else
					{
						links->insert(links->begin() + (j - 1), castedLink);
					}
				}
			}
		}
	}

	return links;
} // getMatchingLinksForEndValue

PropertyPtr ActionActivation::getOppositeEnd(const AssociationPtr& association, const StructuralFeaturePtr& end)
{
	// Get the end of a binary association opposite to the given end.

	PropertyPtr oppositeEnd = association->memberEnd->at(0);
	if (oppositeEnd == end)
	{
		oppositeEnd = association->memberEnd->at(1);
	}

	return oppositeEnd;
} // getOppositeEnd

BooleanValuePtr ActionActivation::makeBooleanValue(bool value)
{
	// Make a Boolean value using the built-in Boolean primitive type.
	// [This ensures that Boolean values created internally are the same as
	// the default used for evaluating Boolean literals.]

	LiteralBooleanPtr booleanLiteral(new LiteralBoolean());
	booleanLiteral->value = value;
	return std::dynamic_pointer_cast<BooleanValue>(this->getExecutionLocus()->executor->evaluate(booleanLiteral));
} // makeBooleanValue

void ActionActivation::handle(const ValuePtr& exception, const ExceptionHandlerPtr& handler)
{
	// Handle the given exception by firing the body of the given
	// exception handler. After the body fires, transfer its outputs
	// to the output pins of this action activation.

	ExecutableNodeActivation::handle(exception, handler);
	this->transferOutputs(std::dynamic_pointer_cast<Action>(handler->handlerBody));
} // handle

void ActionActivation::transferOutputs(const ActionPtr& handlerBody)
{
	// Transfer the output values from activation of the given exception
	// handler body to the output pins of this action activation.

	ActionActivationPtr handlerBodyActivation = std::dynamic_pointer_cast<ActionActivation>(
		this->group->getNodeActivation(handlerBody));
	const OutputPinListPtr& sourceOutputs = handlerBody->output;
	OutputPinListPtr targetOutputs = std::dynamic_pointer_cast<Action>(this->node)->output;

	unsigned int sourceOutputsSize = sourceOutputs->size();

	for (unsigned int i = 0; i < sourceOutputsSize; i++)
	{
		const OutputPinPtr& sourcePin = sourceOutputs->at(i);
		const OutputPinPtr& targetPin = targetOutputs->at(i);

		PinActivationPtr sourcePinActivation = handlerBodyActivation->getPinActivation(sourcePin);
		TokenListPtr tokens = sourcePinActivation->takeTokens();
		ValueListPtr values(new ValueList());
		for (const TokenPtr& token : *tokens)
		{
			values->push_back(token->getValue());
		}

		this->putTokens(targetPin, values);
	}
} // transferOutputs
