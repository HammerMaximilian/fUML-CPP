/*
 * EncapsulatedClassifier.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <uml/structuredclassifiers/EncapsulatedClassifier.h>
#include <uml/structuredclassifiers/Port.h>

EncapsulatedClassifier::~EncapsulatedClassifier()
{
}

void EncapsulatedClassifier::addOwnedPort(const PortPtr& ownedPort)
{
	StructuredClassifier::addOwnedAttribute(ownedPort);
	this->ownedPort->push_back(ownedPort);
}
