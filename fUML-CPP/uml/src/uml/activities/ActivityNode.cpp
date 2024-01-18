/*
 * ActivityNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/activities/ActivityNode.h>

ActivityNode::~ActivityNode()
{
}

void ActivityNode::_setActivity(const ActivityPtr& activity)
{
	this->activity = activity;
} // _setActivity

void ActivityNode::_setInStructuredNode(const StructuredActivityNodePtr& inStructuredNode)
{
	this->inStructuredNode = inStructuredNode;
} // _setInStructuredNode

void ActivityNode::_addIncoming(const ActivityEdgePtr& incoming)
{
	this->incoming->push_back(incoming);
} // _addIncoming

void ActivityNode::_addOutgoing(const ActivityEdgePtr& outgoing)
{
	this->outgoing->push_back(outgoing);
} // _addOutgoing
