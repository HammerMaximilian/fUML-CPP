/*
 * DataType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_

#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/fwd.h>

namespace fuml::syntax::simpleclassifiers
{
	class DataType : public Classifier
	{
		public:
			PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();

		private:
			DataTypePtr_w thisDataTypePtr;

		public:
			virtual ~DataType() = default;
			void setThisDataTypePtr(DataTypePtr_w);

			void addOwnedAttribute(const PropertyPtr&);
	};
// DataType
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_DATATYPE_H_ */
