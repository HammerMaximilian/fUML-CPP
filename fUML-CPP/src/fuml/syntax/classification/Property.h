/*
 * Property.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_
#define FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_

#include <memory>
#include "fuml/syntax/classification/StructuralFeature.h"
#include "fuml/syntax/classification/AggregationKind.h"

namespace fuml::syntax::simpleclassifiers
{
	class DataType;
}
namespace fuml::syntax::structuredclassifiers
{
	class Association;
	class Class_;
}
namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::syntax::classification
{
	class Property : public fuml::syntax::classification::StructuralFeature
	{
		public:
			bool isDerived = false;
			bool isReadOnly = false;
			bool isDerivedUnion = false;
			fuml::syntax::classification::AggregationKind aggregation = fuml::syntax::classification::AggregationKind::none;
			bool isComposite = false;
			std::shared_ptr<fuml::syntax::structuredclassifiers::Association> owningAssociation = nullptr;
			std::shared_ptr<fuml::syntax::simpleclassifiers::DataType> datatype = nullptr;
			std::shared_ptr<fuml::syntax::structuredclassifiers::Association> association = nullptr;
			std::shared_ptr<fuml::syntax::structuredclassifiers::Class_> class_ = nullptr;
			std::shared_ptr<fuml::syntax::classification::Property> opposite = nullptr;
			std::shared_ptr<fuml::syntax::values::ValueSpecification> defaultValue = nullptr;
			bool isID = false;

		public:
			void setIsReadOnly(bool);
			void setAggregation(
				fuml::syntax::classification::AggregationKind);
			void _setAssociation(
				const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>&);
			void _setClass(const std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>&);
			void _setDatatype(const std::shared_ptr<fuml::syntax::simpleclassifiers::DataType>&);
			void setIsID(bool);
			void _setOwningAssociation(
				const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>&);
			void _setOpposite(const std::shared_ptr<fuml::syntax::classification::Property>&);
	}; // Property
}

using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTY_H_ */
