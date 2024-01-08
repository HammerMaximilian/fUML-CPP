/*
 * ConnectorEnd.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_CONNECTOREND_H_
#define UML_STRUCTUREDCLASSIFIERS_CONNECTOREND_H_

#include <uml/commonstructure/MultiplicityElement.h>

namespace uml::structuredclassifiers
{
    class ConnectorEnd : public MultiplicityElement // PSCS-specific
    {
    	public:
    		ConnectableElementPtr role = nullptr;
    		PropertyPtr partWithPort = nullptr;

    	private:
    		ConnectorEndPtr_w thisConnectorEndPtr;

    	public:
    		virtual ~ConnectorEnd() = default;
    		void setThisConnectorEndPtr(ConnectorEndPtr_w);

    		void setRole(const ConnectableElementPtr&);
    		void setPartWithPort(const PropertyPtr&);
    }; // ConnectorEnd
}

#endif /* UML_STRUCTUREDCLASSIFIERS_CONNECTOREND_H_ */
