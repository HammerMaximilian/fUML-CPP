/*
 * DataType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_

#include <memory>
#include <vector>
#include "fuml/syntax/classification/Classifier.h"
#include "fuml/syntax/classification/PropertyList.h"

namespace fuml::syntax::classification
{
	class Property;
}
using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

namespace fuml::syntax::simpleclassifiers
{
	class DataType : public fuml::syntax::classification::Classifier
	{
		public:
			PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();

		private:
			std::weak_ptr<DataType> thisDataTypePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<DataType>);

			void addOwnedAttribute(
				const PropertyPtr&);
	}; // DataType
}

using DataType = fuml::syntax::simpleclassifiers::DataType;
using DataTypePtr = std::shared_ptr<DataType>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_ */
