/*
 * StructuredClassifier.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_STRUCTUREDCLASSIFIER_H_
#define UML_STRUCTUREDCLASSIFIERS_STRUCTUREDCLASSIFIER_H_

#include <uml/classification/Classifier.h>

namespace uml::structuredclassifiers
{
    class StructuredClassifier : virtual public Classifier // PSCS-specific
    {
    	public:
    		PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();
    		ConnectorListPtr ownedConnector = std::make_shared<ConnectorList>();
    		PropertyListPtr part = std::make_shared<PropertyList>();

    	public:
    		virtual ~StructuredClassifier() = 0;

    		void addOwnedAttribute(const PropertyPtr&);
    		void addOwnedConnector(const ConnectorPtr&);
    };
}

#endif /* UML_STRUCTUREDCLASSIFIERS_STRUCTUREDCLASSIFIER_H_ */
