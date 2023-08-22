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
			virtual std::shared_ptr<fuml::syntax::values::ValueSpecification> specify() override;
			virtual bool equals(const std::shared_ptr<fuml::semantics::values::Value>&) override;
			virtual std::shared_ptr<fuml::semantics::values::Value> copy() override;
			virtual std::string toString() override;

		protected:
			virtual std::shared_ptr<fuml::semantics::values::Value> new_() override;
	}; // StringValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRINGVALUE_H_ */
