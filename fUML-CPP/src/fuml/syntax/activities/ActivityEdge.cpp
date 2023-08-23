/*
 * ActivityEdge.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ActivityEdge.h>
#include <fuml/syntax/activities/ActivityNode.h>
#include <fuml/syntax/values/ValueSpecification.h>

using namespace fuml::syntax::activities;

ActivityEdge::~ActivityEdge()
{
}

void ActivityEdge::setThisPtr(std::weak_ptr<ActivityEdge> thisActivityEdgePtr)
{
	this->thisActivityEdgePtr = thisActivityEdgePtr;
	fuml::syntax::commonstructure::Element::setThisPtr(thisActivityEdgePtr);
}

void ActivityEdge::setTarget(
	const std::shared_ptr<fuml::syntax::activities::ActivityNode>& target)
{
	this->target = target;
	target->_addIncoming(thisActivityEdgePtr.lock());
} // setTarget

void ActivityEdge::setSource(
	const std::shared_ptr<fuml::syntax::activities::ActivityNode>& source)
{
	this->source = source;
	source->_addOutgoing(thisActivityEdgePtr.lock());
} // setSource

void ActivityEdge::setGuard(const std::shared_ptr<fuml::syntax::values::ValueSpecification>& guard)
{
	if (guard != nullptr) {
		fuml::syntax::commonstructure::Element::addOwnedElement(guard);
	}

	this->guard = guard;
} // setGuard

void ActivityEdge::_setActivity(
	const std::shared_ptr<fuml::syntax::activities::Activity>& activity)
{
	this->activity = activity;
} // _setActivity

void ActivityEdge::_setInStructuredNode(
	const std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>& inStructuredNode)
{
	this->inStructuredNode = inStructuredNode;
} // _setInStructuredNode
