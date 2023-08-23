/*
 * PrimitiveValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_

#include <fuml/syntax/fwd.h>
#include <fuml/semantics/values/Value.h>

namespace fuml::semantics::simpleclassifiers
{
	class PrimitiveValue : public Value
	{
		public:
			PrimitiveTypePtr type = nullptr;

		public:
			virtual ~PrimitiveValue() = 0;

			virtual ValuePtr copy() override;
			virtual ClassifierListPtr getTypes() override;
	}; // PrimitiveValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_ */
