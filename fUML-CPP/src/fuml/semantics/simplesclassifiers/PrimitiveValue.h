/*
 * PrimitiveValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_

#include "fuml/semantics/values/Value.h"
#include "fuml/syntax/classification/ClassifierList.h"

namespace fuml::syntax::simpleclassifiers
{
	class PrimitiveType;
}

namespace fuml::semantics::simpleclassifiers
{
	class PrimitiveValue : public fuml::semantics::values::Value
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::PrimitiveType> type = nullptr;
		public:
			virtual ~PrimitiveValue() = 0;

			virtual std::shared_ptr<fuml::semantics::values::Value> copy() override;
			virtual std::shared_ptr<fuml::syntax::classification::ClassifierList> getTypes() override;
	}; // PrimitiveValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_PRIMITIVEVALUE_H_ */
