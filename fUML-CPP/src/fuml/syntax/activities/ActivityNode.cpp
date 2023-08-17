/*
 * ActivityNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ActivityNode.h"

using namespace fuml::syntax::activities;

ActivityNode::~ActivityNode()
{
}

void ActivityNode::_setActivity(
	const std::shared_ptr<fuml::syntax::activities::Activity>& activity)
{
	this->activity = activity;
} // _setActivity

void ActivityNode::_setInStructuredNode(
	const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>& inStructuredNode)
{
	this->inStructuredNode = inStructuredNode;
} // _setInStructuredNode

void ActivityNode::_addIncoming(
	const std::shared_ptr<fuml::syntax::activities::ActivityEdge>& incoming)
{
	this->incoming->push_back(incoming);
} // _addIncoming

void ActivityNode::_addOutgoing(
	const std::shared_ptr<fuml::syntax::activities::ActivityEdge>& outgoing)
{
	this->outgoing->push_back(outgoing);
} // _addOutgoing
