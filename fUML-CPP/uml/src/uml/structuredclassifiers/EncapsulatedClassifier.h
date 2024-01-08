/*
 * EncapsulatedClassifier.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_STRUCTUREDCLASSIFIERS_ENCAPSULATEDCLASSIFIER_H_
#define UML_STRUCTUREDCLASSIFIERS_ENCAPSULATEDCLASSIFIER_H_

#include <uml/structuredclassifiers/StructuredClassifier.h>

namespace uml::structuredclassifiers
{
    class EncapsulatedClassifier : public StructuredClassifier // PSCS-specific
    {
    	public:
    		PortListPtr ownedPort = std::make_shared<PortList>();

    	public:
    		virtual ~EncapsulatedClassifier() = 0;

    		void addOwnedPort(const PortPtr&);
    }; // EncapsulatedClassifier
}

#endif /* UML_STRUCTUREDCLASSIFIERS_ENCAPSULATEDCLASSIFIER_H_ */
