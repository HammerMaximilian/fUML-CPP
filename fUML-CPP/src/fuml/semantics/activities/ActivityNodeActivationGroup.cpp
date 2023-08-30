/*
 * ActivityNodeActivationGroup.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>

#include <fuml/Debug.h>
#include <fuml/semantics/actions/ActionActivation.h>
#include <fuml/semantics/actions/ExpansionNodeActivation.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/actions/PinActivation.h>
#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>
#include <fuml/semantics/activities/ActivityEdgeInstance.h>
#include <fuml/semantics/activities/ActivityExecution.h>
#include <fuml/semantics/activities/ActivityNodeActivation.h>
#include <fuml/semantics/activities/ActivityParameterNodeActivation.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/activities/ActivityEdge.h>
#include <fuml/syntax/activities/ActivityNode.h>
#include <fuml/syntax/classification/Classifier.h>

void ActivityNodeActivationGroup::setThisActivityNodeActivationGroupPtr(
		std::weak_ptr<ActivityNodeActivationGroup> thisActivityNodeActivationGroup) {
	this->thisActivityNodeActivationGroupPtr = thisActivityNodeActivationGroup;
}

void ActivityNodeActivationGroup::run(
		const ActivityNodeActivationListPtr& activations)
{
	// Run the given node activations.
	// Then concurrently send offers to all input activity parameter node activations (if any).
	// Finally, concurrently send offers to all activations of other kinds of nodes that have
	// no incoming edges with the given set (if any).

	for (const ActivityNodeActivationPtr& activation : *activations) {
		activation->run();
	}

	utils::Debug::println("[run] Checking for enabled nodes...");

	ActivityNodeActivationListPtr enabledParameterNodeActivations(new ActivityNodeActivationList());
	ActivityNodeActivationListPtr enabledOtherActivations(new ActivityNodeActivationList());

	for (const ActivityNodeActivationPtr& activation : *activations) {

		utils::Debug::println("[run] Checking node " + activation->node->name + "...");

		PinActivationPtr pinActivation = std::dynamic_pointer_cast<PinActivation>(activation);
		ExpansionNodeActivationPtr expansionNodeActivation = std::dynamic_pointer_cast<ExpansionNodeActivation>(activation);

		if (!(pinActivation || expansionNodeActivation)) {

			bool isEnabled = this->checkIncomingEdges(
					activation->incomingEdges, activations);

			// For an action activation, also consider incoming edges to
			// input pins

			ActionActivationPtr actionActivation = std::dynamic_pointer_cast<ActionActivation>(actionActivation);

			if (isEnabled && actionActivation) {
				InputPinListPtr inputPins = std::dynamic_pointer_cast<Action>(activation->node)->input;

				for (const InputPinPtr& inputPin : *inputPins) {
					ActivityEdgeInstanceListPtr inputEdges = actionActivation->getPinActivation(inputPin)->incomingEdges;
					isEnabled = this->checkIncomingEdges(inputEdges, activations);

					if(isEnabled) break;
				}
			}

			if (isEnabled) {
				utils::Debug::println("[run] Node " + activation->node->name + " is enabled.");

				ActivityParameterNodeActivationPtr activityParameterNodeActivation = std::dynamic_pointer_cast<ActivityParameterNodeActivation>(activation);

				if (activityParameterNodeActivation) {
					enabledParameterNodeActivations->push_back(activation);
				} else {
					enabledOtherActivations->push_back(activation);
				}
			}
		}
	}

	// *** Send offers to all enabled activity parameter nodes concurrently. ***
	for (const ActivityNodeActivationPtr& activation : *enabledParameterNodeActivations) {
		utils::Debug::println("[run] Sending offer to activity parameter node " + activation->node->name + ".");
		activation->receiveOffer();
	}

	// *** Send offers to all other enabled nodes concurrently. ***
	for (const ActivityNodeActivationPtr& activation : *enabledOtherActivations) {
		utils::Debug::println("[run] Sending offer to node " + activation->node->name + ".");
		activation->receiveOffer();
	}
} // run

bool ActivityNodeActivationGroup::checkIncomingEdges(
		const ActivityEdgeInstanceListPtr& incomingEdges,
		const ActivityNodeActivationListPtr& activations)
{
	// Check if any incoming edges have a source in a given set of
	// activations.

	bool notFound = true;

	for (const ActivityEdgeInstancePtr& incomingEdge : *incomingEdges) {
		for (const ActivityNodeActivationPtr& activation : *activations) {
			if (activation->isSourceFor(incomingEdge)) {
				notFound = false;
			}
			if (notFound == false) break;
		}
		if (notFound == false) break;
	}

	return notFound;
} // checkIncomingEdges

void ActivityNodeActivationGroup::runNodes(
		const ActivityNodeListPtr& nodes)
{
	// Run the node activations associated with the given nodes in this
	// activation group.

	ActivityNodeActivationListPtr nodeActivations(new ActivityNodeActivationList());

	for (const ActivityNodePtr& node : *nodes) {
		ActivityNodeActivationPtr nodeActivation = this->getNodeActivation(node);
		if (nodeActivation != nullptr) {
			nodeActivations->push_back(nodeActivation);
		}
	}

	this->run(nodeActivations);
} // runNode

void ActivityNodeActivationGroup::activate(
		const ActivityNodeListPtr& nodes, const ActivityEdgeListPtr& edges)
{
	// Activate and run the given set of nodes with the given set of edges,
	// within this activation group.

	this->createNodeActivations(nodes);
	this->createEdgeInstances(edges);
	this->run(this->nodeActivations);
} // activate

void ActivityNodeActivationGroup::terminateAll()
{
	// Terminate all node activations in the group.

	utils::Debug::println("[terminateAll] Terminating activation group for "
			+ (this->activityExecution != nullptr ? "activity "
					+ this->activityExecution->getTypes()->at(0)->name
					: this->containingNodeActivation != nullptr ? "node "
							+ this->containingNodeActivation->node->name
							: "expansion region") + ".");

	const ActivityNodeActivationListPtr& nodeActivations = this->nodeActivations;
	for (const ActivityNodeActivationPtr& nodeActivation : *nodeActivations) {
		nodeActivation->terminate();
	}

	this->suspendedActivations->clear();
} // terminateAll

void ActivityNodeActivationGroup::createNodeActivations(
		const ActivityNodeListPtr& nodes)
{
	// Add activity node activations for the given set of nodes to this
	// group and create edge instances between them.

	for (const ActivityNodePtr& node : *nodes) {
		utils::Debug::println("[createNodeActivations] Creating a node activation for "
						+ node->name + "...");
		this->createNodeActivation(node);
	}
} // createNodeActivations

ActivityNodeActivationPtr ActivityNodeActivationGroup::createNodeActivation(
		const ActivityNodePtr& node)
{
	// Create an activity node activation for a given activity node in this
	// activity node activation group.

	ActivityNodeActivationPtr activation = std::dynamic_pointer_cast<ActivityNodeActivation>(this
			->getActivityExecution()->locus->factory->instantiateVisitor(node));
	activation->initialize(node, this->thisActivityNodeActivationGroupPtr.lock());

	this->nodeActivations->push_back(activation);

	activation->createNodeActivations();

	return activation;
} // createNodeActivation

ActivityNodeActivationPtr ActivityNodeActivationGroup::getNodeActivation(
		const ActivityNodePtr& node)
{
	// Return the node activation (if any) in this group,
	// or any nested group, corresponding to the given activity node.
	// If this is a group for a structured activity node activation,
	// also include the pin activations for that node activation.

	ActivityNodeActivationPtr activation = nullptr;

	PinPtr pin = std::dynamic_pointer_cast<Pin>(node);

	if (this->containingNodeActivation != nullptr && pin) {
		activation = this->containingNodeActivation->getPinActivation(pin);
	}

	if (activation == nullptr) {
		for (const ActivityNodeActivationPtr& nodeActivation : *(this->nodeActivations)) {
			activation = nodeActivation->getNodeActivation(node);

			if(activation) break;
		}
	}

	return activation;
} // getNodeActivation

void ActivityNodeActivationGroup::createEdgeInstances(
		const ActivityEdgeListPtr& edges)
{
	// Create instance edges for the given activity edges, as well as for
	// edge instances within any nodes activated in this group.

	for (const ActivityEdgePtr& edge : *edges) {

		utils::Debug::println("[createEdgeInstances] Creating an edge instance from "
				+ edge->source->name + " to " + edge->target->name + ".");

		ActivityEdgeInstancePtr edgeInstance(new ActivityEdgeInstance());
		edgeInstance->edge = edge;
		edgeInstance->group = this->thisActivityNodeActivationGroupPtr.lock();

		this->edgeInstances->push_back(edgeInstance);
		this->getNodeActivation(edge->source)->addOutgoingEdge(edgeInstance);
		this->getNodeActivation(edge->target)->addIncomingEdge(edgeInstance);
	}

	const ActivityNodeActivationListPtr& nodeActivations = this->nodeActivations;
	for (const ActivityNodeActivationPtr& nodeActivation : *nodeActivations) {
		nodeActivation->createEdgeInstances();
	}
} // createEdgeInstances

ActivityExecutionPtr ActivityNodeActivationGroup::getActivityExecution()
{
	// Return the activity execution to which this group belongs, directly
	// or indirectly.

	ActivityExecutionPtr activityExecution = this->activityExecution;
	if (activityExecution == nullptr) {
		activityExecution = this->containingNodeActivation->group->getActivityExecution();
	}

	return activityExecution;
} // getActivityExecution

ActivityParameterNodeActivationListPtr ActivityNodeActivationGroup::getOutputParameterNodeActivations()
{
	// Return the set of all activations in this group of activity parameter
	// nodes for output (inout, out and return) parameters.

	ActivityParameterNodeActivationListPtr parameterNodeActivations(new ActivityParameterNodeActivationList());
	const ActivityNodeActivationListPtr& nodeActivations = this->nodeActivations;
	for (const ActivityNodeActivationPtr& activation : *nodeActivations) {

		ActivityParameterNodeActivationPtr activityParameterNodeActivation = std::dynamic_pointer_cast<ActivityParameterNodeActivation>(activation);

		if (activityParameterNodeActivation) {
			if (activation->incomingEdges->size() > 0) {
				parameterNodeActivations->push_back(activityParameterNodeActivation);
			}
		}
	}

	return parameterNodeActivations;
} // getOutputParameterNodeActivations

bool ActivityNodeActivationGroup::hasSourceFor(
		const ActivityEdgeInstancePtr& edgeInstance)
{
	// Returns true if this activation group has a node activation
	// corresponding to the source of the given edge instance.

	bool hasSource = false;
	const ActivityNodeActivationListPtr& activations = this->nodeActivations;

	for (const ActivityNodeActivationPtr& activation : *activations) {
		hasSource = activation->isSourceFor(edgeInstance);

		if(hasSource) break;
	}
	return hasSource;
} // hasSourceFor

bool ActivityNodeActivationGroup::isSuspended()
{
	// Check if this activation group has any suspended activations and
	// is, therefore, itself suspended.

	return this->suspendedActivations->size() > 0;
} // isSuspended

void ActivityNodeActivationGroup::suspend(
		const ActivityNodeActivationPtr& activation)
{
	// Suspend the given activation in this activation group. If this is
	// the only suspended activation, and the activation group has a
	// containing node activation, then suspend that containing activation.

	utils::Debug::println("[suspend] node="
			+ (activation->node == nullptr ? "nullptr" : activation->node->name));

	if (!this->isSuspended()) {
		const StructuredActivityNodeActivationPtr& containingNodeActivation = this->containingNodeActivation;
		if (containingNodeActivation != nullptr) {
			containingNodeActivation->suspend();
		}
	}
	this->suspendedActivations->push_back(activation);
} // suspend

void ActivityNodeActivationGroup::resume(
		const ActivityNodeActivationPtr& activation)
{
	// Resume the given activation by removing it from the suspended
	// activation list for this activation group. If this is the last
	// suspended activation, and the activation group has a containing
	// node activation, then resume that containing activation.

	utils::Debug::println("[resume] node="
			+ (activation->node == nullptr ? "nullptr" : activation->node->name));

	[[maybe_unused]] bool found = false;
	ActivityNodeActivationList::iterator it = this->suspendedActivations->begin();
	ActivityNodeActivationList::iterator itEnd = this->suspendedActivations->end();

	for (; it != itEnd; it++) {
		if (*it == activation) {
			it = this->suspendedActivations->erase(it);
			found = true;
			break;
		}
	}
	if (!this->isSuspended()) {
		const StructuredActivityNodeActivationPtr& containingNodeActivation = this->containingNodeActivation;
		if (containingNodeActivation != nullptr) {
			containingNodeActivation->resume();
		}
	}
} // resume
