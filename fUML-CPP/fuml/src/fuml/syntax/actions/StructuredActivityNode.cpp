/*
 * StructuredActivityNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/activities/ActivityEdge.h>

void StructuredActivityNode::setThisStructuredActivityNodePtr(
		StructuredActivityNodePtr_w thisStructuredActivityNodePtr)
{
	ExecutableNode::setThisExecutableNodePtr(thisStructuredActivityNodePtr);
	this->thisStructuredActivityNodePtr = thisStructuredActivityNodePtr;
}

void StructuredActivityNode::setMustIsolate(bool mustIsolate)
{
	this->mustIsolate = mustIsolate;
} // setMustIsolate

void StructuredActivityNode::addNode(const ActivityNodePtr& node)
{
	this->node->push_back(node);
	node->_setInStructuredNode(this->thisStructuredActivityNodePtr.lock());
} // addNode

void StructuredActivityNode::addEdge(const ActivityEdgePtr& edge)
{
	this->edge->push_back(edge);
	edge->_setInStructuredNode(this->thisStructuredActivityNodePtr.lock());
} // addEdge

void StructuredActivityNode::addStructuredNodeOutput(const OutputPinPtr& structuredNodeOutput)
{
	this->addOutput(structuredNodeOutput);
	this->structuredNodeOutput->push_back(structuredNodeOutput);
} // addStructuredNodeOutput

void StructuredActivityNode::addStructuredNodeInput(const InputPinPtr& structuredNodeInput)
{
	this->addInput(structuredNodeInput);
	this->structuredNodeInput->push_back(structuredNodeInput);
} // addStructuredNodeInput

void StructuredActivityNode::_setContext(const ClassifierPtr& context)
{
	Action::_setContext(context);
	for (const ActivityNodePtr& node : *(this->node))
	{
		ActionPtr action = std::dynamic_pointer_cast<Action>(node);
		if (action)
		{
			action->_setContext(context);
		}
	}
} // _setContext

void StructuredActivityNode::_setActivity(const ActivityPtr& activity)
{
	Action::_setActivity(activity);
	this->activity = activity;
} // _setActivity
