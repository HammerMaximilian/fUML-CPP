/*
 * IntegerValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_INTEGERVALUE_H_
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_INTEGERVALUE_H_

#include <fuml/semantics/simpleclassifiers/PrimitiveValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class IntegerValue : public PrimitiveValue
	{
		public:
			int value = 0;

		public:
			virtual ~IntegerValue() = default;

			virtual ValueSpecificationPtr specify() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	};
// IntegerValue
}

#endif /* FUML_SEMANTICS_SIMPLECLASSIFIERS_INTEGERVALUE_H_ */
