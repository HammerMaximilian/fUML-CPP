/*
 * UnlimitedNaturalValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_UNLIMITEDNATURALVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_UNLIMITEDNATURALVALUE_H_

#include "PrimitiveValue.h"
#include "UMLPrimitiveTypes/unlimitedNatural.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::simpleclassifiers
{
	class UnlimitedNaturalValue : public PrimitiveValue
	{
		public:
			UMLPrimitiveTypes::unlimitedNatural value = 0;

		public:
			virtual ValueSpecificationPtr specify() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	}; // UnlimitedNaturalValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_UNLIMITEDNATURALVALUE_H_ */
