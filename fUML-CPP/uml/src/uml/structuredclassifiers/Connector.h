/*
 * Connector.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_CONNECTOR_H_
#define UML_STRUCTUREDCLASSIFIERS_CONNECTOR_H_

#include <uml/classification/Feature.h>

namespace uml::structuredclassifiers
{
    class Connector : public Feature // PSCS-specific
    {
    	public:
    		ConnectorKind kind;
    		ConnectorEndListPtr end = std::make_shared<ConnectorEndList>();
    		AssociationPtr type = nullptr;
    		ConnectorListPtr redefinedConnector = std::make_shared<ConnectorList>();

    	public:
    		virtual ~Connector() = default;

    		void addEnd(const ConnectorEndPtr&);
    		void setType(const AssociationPtr&);
    		void addRedefinedConnector(const ConnectorPtr&);
    }; // Connector
}

#endif /* UML_STRUCTUREDCLASSIFIERS_CONNECTOR_H_ */
