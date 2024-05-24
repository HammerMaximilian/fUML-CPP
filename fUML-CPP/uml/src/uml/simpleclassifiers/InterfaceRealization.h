/*
 * InterfaceRealization.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_SIMPLECLASSIFIERS_INTERFACEREALIZATION_H_
#define UML_SIMPLECLASSIFIERS_INTERFACEREALIZATION_H_

#include <uml/commonstructure/Realization.h>

namespace uml::simpleclassifiers
{
    class InterfaceRealization : public Realization // PSCS-specific
    {
    	public:
    		InterfacePtr contract = nullptr;
    		BehavioredClassifierPtr_w implementingClassifier;

    	public:
    		virtual ~InterfaceRealization() = default;

    		void setContract(const InterfacePtr&);
    		void _setImplementingClassifier(const BehavioredClassifierPtr&);
    }; // InterfaceRealization
}

#endif /* UML_SIMPLECLASSIFIERS_INTERFACEREALIZATION_H_ */
