/*
 * ActivityEdge.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ActivityEdge.h>
#include <fuml/syntax/activities/ActivityNode.h>
#include <fuml/syntax/values/ValueSpecification.h>

ActivityEdge::~ActivityEdge()
{
}

void ActivityEdge::setThisActivityEdgePtr(std::weak_ptr<ActivityEdge> thisActivityEdgePtr)
{
	this->thisActivityEdgePtr = thisActivityEdgePtr;
	Element::setThisElementPtr(thisActivityEdgePtr);
}

void ActivityEdge::setTarget(const ActivityNodePtr& target)
{
	this->target = target;
	target->_addIncoming(thisActivityEdgePtr.lock());
} // setTarget

void ActivityEdge::setSource(const ActivityNodePtr& source)
{
	this->source = source;
	source->_addOutgoing(thisActivityEdgePtr.lock());
} // setSource

void ActivityEdge::setGuard(const ValueSpecificationPtr& guard)
{
	if (guard != nullptr)
	{
		Element::addOwnedElement(guard);
	}

	this->guard = guard;
} // setGuard

void ActivityEdge::_setActivity(const ActivityPtr& activity)
{
	this->activity = activity;
} // _setActivity

void ActivityEdge::_setInStructuredNode(const StructuredActivityNodePtr& inStructuredNode)
{
	this->inStructuredNode = inStructuredNode;
} // _setInStructuredNode
