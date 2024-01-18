/*
 * DataType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_DATATYPE_H_
#define UML_SIMPLECLASSIFIERS_DATATYPE_H_

#include <uml/classification/Classifier.h>
#include <uml/fwd.h>

namespace uml::simpleclassifiers
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

#endif /* UML_SIMPLECLASSIFIERS_DATATYPE_H_ */
