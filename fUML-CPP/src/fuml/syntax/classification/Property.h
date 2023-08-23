/*
 * Property.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_
#define FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_

#include <memory>
#include <fuml/syntax/classification/StructuralFeature.h>
#include <fuml/syntax/classification/AggregationKind.h>

namespace fuml::syntax::simpleclassifiers
{
	class DataType;
}
using DataType = fuml::syntax::simpleclassifiers::DataType;
using DataTypePtr = std::shared_ptr<DataType>;

namespace fuml::syntax::structuredclassifiers
{
	class Association;
	class Class_;
}
using Association = fuml::syntax::structuredclassifiers::Association;
using AssociationPtr = std::shared_ptr<Association>;
using Class_ = fuml::syntax::structuredclassifiers::Class_;
using Class_Ptr = std::shared_ptr<Class_>;

namespace fuml::syntax::values
{
	class ValueSpecification;
}
using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;

namespace fuml::syntax::classification
{
	class Property : public StructuralFeature
	{
		using PropertyPtr = std::shared_ptr<Property>;

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

using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_ */
