/*
 * Activity.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/StructuredActivityNode.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityEdge.h>
#include <algorithm>
#include <iterator>

void Activity::setThisActivityPtr(std::weak_ptr<Activity> thisActivityPtr)
{
	this->thisActivityPtr = thisActivityPtr;
	Class_::setThisClass_Ptr(thisActivityPtr);
}

void Activity::setIsReadOnly(bool isReadOnly)
{
	this->isReadOnly = isReadOnly;
} // setIsReadOnly

void Activity::addNode(
	const ActivityNodePtr& node)
{
	if (std::find(this->node->begin(), this->node->end(), node) == this->node->end())
	{
		Element::addOwnedElement(node);

		this->node->push_back(node);
		node->_setActivity(thisActivityPtr.lock());
	}

	StructuredActivityNodePtr structuredActivityNode =
			std::dynamic_pointer_cast<StructuredActivityNode>(node);

	if (structuredActivityNode &&
			(std::find(this->structuredNode->begin(), this->structuredNode->end(), node) == this->structuredNode->end())) {
		this->structuredNode->push_back(structuredActivityNode);
	}

} // addNode

void Activity::addStructuredNode(const StructuredActivityNodePtr& node)
{
	this->addNode(node);
}

void Activity::addGroup(const ActivityGroupPtr& group)
{
	this->group->push_back(group);
}

void Activity::addEdge(
	const ActivityEdgePtr& edge)
{
	Element::addOwnedElement(edge);

	this->edge->push_back(edge);
	edge->_setActivity(thisActivityPtr.lock());
} // addEdge

void Activity::_setContext(
	const BehavioredClassifierPtr& context)
{
	// Note: The context of an activity should be set only _after_ all nodes
	// have been added to the activity.

	Behavior::_setContext(context);

	for (const ActivityNodePtr& node : *(this->node))
	{
		ActionPtr action =
				std::dynamic_pointer_cast<Action>(node);
		if (action)
		{
			action->_setContext(context);
		}
	}
} // _setContext
