/*
 * ConnectorEnd.cpp
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/structuredclassifiers/ConnectableElement.h>

void ConnectorEnd::setThisConnectorEndPtr(ConnectorEndPtr_w thisConnectorEndPtr)
{
	this->thisConnectorEndPtr = thisConnectorEndPtr;
	Element::setThisElementPtr(thisConnectorEndPtr);
}

void ConnectorEnd::setRole(const ConnectableElementPtr& role)
{
	this->role = role;
	role->end->push_back(thisConnectorEndPtr.lock());
}

void ConnectorEnd::setPartWithPort(const PropertyPtr& partWithPort)
{
	this->partWithPort = partWithPort;
}
