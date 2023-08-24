/*
 * DataValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_DATAVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_DATAVALUE_H_

#include <fuml/semantics/simplesclassifiers/CompoundValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class DataValue : public CompoundValue
	{
		public:
			DataTypePtr type = nullptr;

		public:
			virtual ~DataValue() = default;
		
			virtual ClassifierListPtr getTypes() override;
			virtual ValuePtr copy() override;

		protected:
			virtual ValuePtr new_() override;
	}; // DataValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_DATAVALUE_H_ */
