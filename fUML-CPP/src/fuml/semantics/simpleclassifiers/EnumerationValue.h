/*
 * EnumerationValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_H_
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_H_

#include <fuml/semantics/values/Value.h>

namespace fuml::semantics::simpleclassifiers
{
	class EnumerationValue : public Value
	{
		public:
			EnumerationPtr type = nullptr;
			EnumerationLiteralPtr literal = nullptr;

		public:
			virtual ~EnumerationValue() = default;
		
			virtual ValueSpecificationPtr specify() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual ClassifierListPtr getTypes() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	}; // EnumerationValue
}

#endif /* FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_H_ */
