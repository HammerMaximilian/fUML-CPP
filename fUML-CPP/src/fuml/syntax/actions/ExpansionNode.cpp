/*
 * ExpansionNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include "ExpansionNode.h"

using namespace fuml::syntax::actions;

void ExpansionNode::_setRegionAsInput(
		const std::shared_ptr<fuml::syntax::actions::ExpansionRegion>& regionAsInput) {
	this->regionAsInput = regionAsInput;
} // _setRegionAsInput

void ExpansionNode::_setRegionAsOutput(
		const std::shared_ptr<fuml::syntax::actions::ExpansionRegion>& regionAsOutput) {
	this->regionAsOutput = regionAsOutput;
} // _setRegionAsOutput
