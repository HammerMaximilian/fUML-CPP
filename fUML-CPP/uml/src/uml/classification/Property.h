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

namespace uml::classification
{
	class Property : public StructuralFeature
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

		public:
			virtual ~Property() = default;

			virtual void setIsReadOnly(bool) override;
			void setAggregation(AggregationKind);
			void _setAssociation(const AssociationPtr&);
			void _setClass(const Class_Ptr&);
			void _setDatatype(const DataTypePtr&);
			void setIsID(bool);
			void _setOwningAssociation(const AssociationPtr&);
			void _setOpposite(const PropertyPtr&);
	};
// Property
}

#endif /* UML_CLASSIFICATION_PROPERTY_H_ */
