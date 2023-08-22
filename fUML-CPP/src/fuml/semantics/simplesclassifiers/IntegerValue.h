/*
 * IntegerValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_INTEGERVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_INTEGERVALUE_H_

#include "PrimitiveValue.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::simpleclassifiers
{
	class IntegerValue : public PrimitiveValue
	{
		public:
			int value = 0;

		public:
			virtual std::shared_ptr<fuml::syntax::values::ValueSpecification> specify() override;
			virtual bool equals(const std::shared_ptr<fuml::semantics::values::Value>&) override;
			virtual std::shared_ptr<fuml::semantics::values::Value> copy() override;
			virtual std::string toString() override;

		protected:
			virtual std::shared_ptr<fuml::semantics::values::Value> new_() override;
	}; // IntegerValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_INTEGERVALUE_H_ */
