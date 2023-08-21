/*
 * StructuredActivityNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "StructuredActivityNode.h"
#include "fuml/syntax/activities/ActivityEdge.h"

using namespace fuml::syntax::actions;

void StructuredActivityNode::setThisPtr(std::weak_ptr<StructuredActivityNode> thisStructuredActivityNodePtr)
{
	ExecutableNode::setThisPtr(thisStructuredActivityNodePtr);
	this->thisStructuredActivityNodePtr = thisStructuredActivityNodePtr;
}

void StructuredActivityNode::setMustIsolate(bool mustIsolate)
{
	this->mustIsolate = mustIsolate;
} // setMustIsolate

void StructuredActivityNode::addNode(
	const std::shared_ptr<fuml::syntax::activities::ActivityNode>& node)
{
	this->node->push_back(node);
	node->_setInStructuredNode(this->thisStructuredActivityNodePtr.lock());
} // addNode

void StructuredActivityNode::addEdge(
	const std::shared_ptr<fuml::syntax::activities::ActivityEdge>& edge)
{
	this->edge->push_back(edge);
	edge->_setInStructuredNode(this->thisStructuredActivityNodePtr.lock());
} // addEdge

void StructuredActivityNode::addStructuredNodeOutput(
	const std::shared_ptr<fuml::syntax::actions::OutputPin>& structuredNodeOutput)
{
	this->addOutput(structuredNodeOutput);
	this->structuredNodeOutput->push_back(structuredNodeOutput);
} // addStructuredNodeOutput

void StructuredActivityNode::addStructuredNodeInput(
	const std::shared_ptr<fuml::syntax::actions::InputPin>& structuredNodeInput)
{
	this->addInput(structuredNodeInput);
	this->structuredNodeInput->push_back(structuredNodeInput);
} // addStructuredNodeInput

void StructuredActivityNode::_setContext(const std::shared_ptr<fuml::syntax::classification::Classifier>& context)
{
	Action::_setContext(context);
	for (const std::shared_ptr<fuml::syntax::activities::ActivityNode>& node : *(this->node)) {
		std::shared_ptr<Action> action = std::dynamic_pointer_cast<Action>(node);
		if (action) {
			action->_setContext(context);
		}
	}
} // _setContext

void StructuredActivityNode::_setActivity(
	const std::shared_ptr<fuml::syntax::activities::Activity>& activity)
{
	Action::_setActivity(activity);
	this->activity = activity;
} // _setActivity
