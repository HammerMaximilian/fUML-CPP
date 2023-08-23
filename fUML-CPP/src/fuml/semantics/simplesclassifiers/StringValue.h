/*
 * StringValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRINGVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRINGVALUE_H_

#include "PrimitiveValue.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::simpleclassifiers
{
	class StringValue : public PrimitiveValue
	{
		public:
			std::string value = "";

		public:
			virtual ValueSpecificationPtr specify() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	}; // StringValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRINGVALUE_H_ */
