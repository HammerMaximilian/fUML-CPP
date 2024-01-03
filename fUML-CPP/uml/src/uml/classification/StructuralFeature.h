/*
 * StructuralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_STRUCTURALFEATURE_H_
#define UML_CLASSIFICATION_STRUCTURALFEATURE_H_

#include <uml/classification/Feature.h>
#include <uml/commonstructure/MultiplicityElement.h>
#include <uml/commonstructure/TypedElement.h>

namespace uml::classification
{
	class StructuralFeature : virtual public Feature, virtual public MultiplicityElement, virtual public TypedElement
	{
		public:
			bool isReadOnly = false;

		public:
			virtual ~StructuralFeature() = default;

			virtual void setIsReadOnly(bool);
	};
// StructuralFeature
}

#endif /* UML_CLASSIFICATION_STRUCTURALFEATURE_H_ */
