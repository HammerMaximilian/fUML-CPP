/*
 * Port.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <uml/structuredclassifiers/Port.h>

void Port::addRequired(const InterfacePtr& required)
{
	this->required->push_back(required);
}

void Port::addProvided(const InterfacePtr& provided)
{
	this->provided->push_back(provided);
}

void Port::addRedefinedPort(const PortPtr& redefinedPort)
{
	RedefinableElement::addRedefinedElement(redefinedPort);
	this->redefinedPort->push_back(redefinedPort);
}
