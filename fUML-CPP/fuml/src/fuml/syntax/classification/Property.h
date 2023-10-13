/*
 * Property.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_
#define FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_

#include <fuml/syntax/classification/StructuralFeature.h>
#include <fuml/syntax/classification/AggregationKind.h>

namespace fuml::syntax::classification
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

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_ */
