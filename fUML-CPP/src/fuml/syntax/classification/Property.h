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
			AssociationPtr owningAssociation = nullptr;
			DataTypePtr datatype = nullptr;
			AssociationPtr association = nullptr;
			Class_Ptr class_ = nullptr;
			PropertyPtr opposite = nullptr;
			ValueSpecificationPtr defaultValue = nullptr;
			bool isID = false;

		public:
			void setIsReadOnly(bool);
			void setAggregation(
				AggregationKind);
			void _setAssociation(
				const AssociationPtr&);
			void _setClass(const Class_Ptr&);
			void _setDatatype(const DataTypePtr&);
			void setIsID(bool);
			void _setOwningAssociation(
				const AssociationPtr&);
			void _setOpposite(const PropertyPtr&);
	}; // Property
}

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_ */
