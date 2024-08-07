/*
 * Property.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_PROPERTY_H_
#define UML_CLASSIFICATION_PROPERTY_H_

#include <uml/classification/StructuralFeature.h>
#include <uml/classification/AggregationKind.h>
#include <uml/structuredclassifiers/ConnectableElement.h>

namespace uml::classification
{
	class Property : public StructuralFeature, public ConnectableElement
	{
		public:
			bool isDerived = false;
			bool isReadOnly = false;
			bool isDerivedUnion = false;
			AggregationKind aggregation = AggregationKind::none;
			bool isComposite = false;
			AssociationPtr_w owningAssociation;
			DataTypePtr_w datatype;
			AssociationPtr_w association;
			Class_Ptr_w class_;
			PropertyPtr_w opposite;
			ValueSpecificationPtr defaultValue = nullptr;
			bool isID = false;
			InterfacePtr interface = nullptr; // PSCS-specific

		public:
			virtual ~Property() = default;

			virtual void setIsReadOnly(bool) override;
			void setAggregation(AggregationKind);
			void _setAssociation(const AssociationPtr&);
			void _setClass(const Class_Ptr&);
			void _setDatatype(const DataTypePtr&);
			void setDefaultValue(const ValueSpecificationPtr&);
			void setIsID(bool);
			void _setOwningAssociation(const AssociationPtr&);
			void _setOpposite(const PropertyPtr&);
			void _setInterface(const InterfacePtr&); // PSCS-specific
	};
// Property
}

#endif /* UML_CLASSIFICATION_PROPERTY_H_ */
