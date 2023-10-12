/*
 * StringValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUE_H_
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUE_H_

#include <fuml/semantics/simpleclassifiers/PrimitiveValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class StringValue : public PrimitiveValue
	{
		public:
			std::string value = "";

		public:
			virtual ~StringValue() = default;

			virtual ValueSpecificationPtr specify() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	};
// StringValue
}

#endif /* FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUE_H_ */
