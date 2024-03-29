/*
 * ExpansionRegion.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/ExpansionNode.h>
#include <uml/actions/ExpansionRegion.h>

void ExpansionRegion::setThisExpansionRegionPtr(ExpansionRegionPtr_w thisExpansionRegionPtr)
{
	StructuredActivityNode::setThisStructuredActivityNodePtr(thisExpansionRegionPtr);
	this->thisExpansionRegionPtr = thisExpansionRegionPtr;
}

void ExpansionRegion::setMode(ExpansionKind mode)
{
	this->mode = mode;
} // setMode

void ExpansionRegion::addInputElement(const ExpansionNodePtr& inputElement)
{
	this->inputElement->push_back(inputElement);
	inputElement->_setRegionAsInput(this->thisExpansionRegionPtr.lock());
} // addInputElement

void ExpansionRegion::addOutputElement(const ExpansionNodePtr& outputElement)
{
	this->outputElement->push_back(outputElement);
	outputElement->_setRegionAsOutput(this->thisExpansionRegionPtr.lock());
} // addOutputElement
