/*
 * Port.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_PORT_H_
#define UML_STRUCTUREDCLASSIFIERS_PORT_H_

#include <uml/classification/Property.h>

namespace uml::structuredclassifiers
{
    class Port : public Property // PSCS-specific
    {
    	public:
    		bool isBehavior = false;
    		bool isConjugated = false;
    		bool isService = false;
    		InterfaceListPtr required = std::make_shared<InterfaceList>();
    		InterfaceListPtr provided = std::make_shared<InterfaceList>();
    		PortListPtr redefinedPort = std::make_shared<PortList>();

    	public:
    		virtual ~Port() = default;

    		void addRequired(const InterfacePtr&);
    		void addProvided(const InterfacePtr&);
    		void addRedefinedPort(const PortPtr&);
    }; // Port
}

#endif /* UML_STRUCTUREDCLASSIFIERS_PORT_H_ */
