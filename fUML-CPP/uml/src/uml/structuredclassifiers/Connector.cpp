/*
 * Connector.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>

void Connector::addEnd(const ConnectorEndPtr& end)
{
	Element::addOwnedElement(end);
	this->end->push_back(end);
}

void Connector::setType(const AssociationPtr& type)
{
	this->type = type;
}

void Connector::addRedefinedConnector(const ConnectorPtr& redefinedConnector)
{
	RedefinableElement::addRedefinedElement(redefinedConnector);
	this->redefinedConnector->push_back(redefinedConnector);
}
