/*
 * ConnectableElement.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_CONNECTABLEELEMENT_H_
#define UML_STRUCTUREDCLASSIFIERS_CONNECTABLEELEMENT_H_

#include <uml/commonstructure/TypedElement.h>

namespace uml::structuredclassifiers
{
    class ConnectableElement : virtual public TypedElement // PSCS-specific
    {
    	public:
    		ConnectorEndListPtr end = std::make_shared<ConnectorEndList>();

    	public:
    		virtual ~ConnectableElement() = 0;
    }; // ConnectableElement
}

#endif /* UML_STRUCTUREDCLASSIFIERS_CONNECTABLEELEMENT_H_ */
