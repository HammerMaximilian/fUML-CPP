/*
 * InterfaceRealization.cpp
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#include <uml/simpleclassifiers/InterfaceRealization.h>

#include <uml/simpleclassifiers/Interface.h>

void InterfaceRealization::setContract(const InterfacePtr& contract)
{
	this->contract = contract;
	Dependency::addSupplier(contract);
}

void InterfaceRealization::_setImplementingClassifier(const BehavioredClassifierPtr& implementingClassifier)
{
	this->implementingClassifier = implementingClassifier;
}
