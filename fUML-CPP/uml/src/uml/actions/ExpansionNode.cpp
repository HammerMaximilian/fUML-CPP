/*
 * ExpansionNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <uml/actions/ExpansionNode.h>

void ExpansionNode::_setRegionAsInput(const ExpansionRegionPtr& regionAsInput)
{
	this->regionAsInput = regionAsInput;
} // _setRegionAsInput

void ExpansionNode::_setRegionAsOutput(const ExpansionRegionPtr& regionAsOutput)
{
	this->regionAsOutput = regionAsOutput;
} // _setRegionAsOutput
