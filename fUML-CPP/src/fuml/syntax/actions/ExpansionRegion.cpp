/*
 * ExpansionRegion.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ExpansionRegion.h"

#include "ExpansionNode.h"

using namespace fuml::syntax::actions;

void ExpansionRegion::setThisPtr(std::weak_ptr<ExpansionRegion> thisExpansionRegionPtr)
{
	StructuredActivityNode::setThisPtr(thisExpansionRegionPtr);
	this->thisExpansionRegionPtr = thisExpansionRegionPtr;
}

void ExpansionRegion::setMode(
	fuml::syntax::actions::ExpansionKind mode)
{
	this->mode = mode;
} // setMode

void ExpansionRegion::addInputElement(
	const std::shared_ptr<fuml::syntax::actions::ExpansionNode>& inputElement)
{
	this->inputElement->push_back(inputElement);
	inputElement->_setRegionAsInput(this->thisExpansionRegionPtr.lock());
} // addInputElement

void ExpansionRegion::addOutputElement(
		const std::shared_ptr<fuml::syntax::actions::ExpansionNode>& outputElement) {
	this->outputElement->push_back(outputElement);
	outputElement->_setRegionAsOutput(this->thisExpansionRegionPtr.lock());
} // addOutputElement
