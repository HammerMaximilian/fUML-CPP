/*
 * Activity.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "Activity.h"
#include "ActivityNode.h"
#include "ActivityEdge.h"
#include "fuml/syntax/actions/Action.h"
#include "fuml/syntax/actions/StructuredActivityNode.h"

#include <algorithm>

using namespace fuml::syntax::activities;

void Activity::setThisPtr(std::weak_ptr<fuml::syntax::activities::Activity> thisActivityPtr)
{
	this->thisActivityPtr = thisActivityPtr;
	fuml::syntax::structuredclassifiers::Class_::setThisPtr(thisActivityPtr);
}

void Activity::setIsReadOnly(bool isReadOnly)
{
	this->isReadOnly = isReadOnly;
} // setIsReadOnly

void Activity::addNode(
	const std::shared_ptr<fuml::syntax::activities::ActivityNode>& node)
{
	if (std::find(this->node->begin(), this->node->end(), node) == this->node->end())
	{
		fuml::syntax::commonstructure::Element::addOwnedElement(node);

		this->node->push_back(node);
		node->_setActivity(thisActivityPtr.lock());
	}

	std::shared_ptr<fuml::syntax::actions::StructuredActivityNode> structuredActivityNode =
			std::dynamic_pointer_cast<fuml::syntax::actions::StructuredActivityNode>(node);

	if (structuredActivityNode &&
			(std::find(this->structuredNode->begin(), this->structuredNode->end(), node) == this->structuredNode->end())) {
		this->structuredNode->push_back(structuredActivityNode);
	}

} // addNode

void Activity::addStructuredNode(const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>& node)
{
	this->addNode(node);
}

void Activity::addGroup(const std::shared_ptr<fuml::syntax::activities::ActivityGroup>& group)
{
	this->group->push_back(group);
}

void Activity::addEdge(
	const std::shared_ptr<fuml::syntax::activities::ActivityEdge>& edge)
{
	fuml::syntax::commonstructure::Element::addOwnedElement(edge);

	this->edge->push_back(edge);
	edge->_setActivity(thisActivityPtr.lock());
} // addEdge

void Activity::_setContext(
	const std::shared_ptr<fuml::syntax::commonbehavior::BehavioredClassifier>& context)
{
	// Note: The context of an activity should be set only _after_ all nodes
	// have been added to the activity.

	fuml::syntax::commonbehavior::Behavior::_setContext(context);

	for (const std::shared_ptr<fuml::syntax::activities::ActivityNode>& node : *(this->node))
	{
		std::shared_ptr<fuml::syntax::actions::Action> action =
				std::dynamic_pointer_cast<fuml::syntax::actions::Action>(node);
		if (action)
		{
			action->_setContext(context);
		}
	}
} // _setContext
