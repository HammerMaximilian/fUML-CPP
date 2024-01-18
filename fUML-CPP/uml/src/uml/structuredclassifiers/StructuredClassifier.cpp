/*
 * StructuredClassifier.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <uml/structuredclassifiers/StructuredClassifier.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Connector.h>

StructuredClassifier::~StructuredClassifier()
{
}

void StructuredClassifier::addOwnedAttribute(const PropertyPtr& ownedAttribute)
{
	Classifier::addAttribute(ownedAttribute);
	Namespace::addOwnedMember(ownedAttribute);
	this->ownedAttribute->push_back(ownedAttribute);

	if(ownedAttribute->isComposite)
	{
		this->part->push_back(ownedAttribute);
	}
}

void StructuredClassifier::addOwnedConnector(const ConnectorPtr& ownedConnector)
{
	Classifier::addFeature(ownedConnector);
	Namespace::addOwnedMember(ownedConnector);
	this->ownedConnector->push_back(ownedConnector);
}
