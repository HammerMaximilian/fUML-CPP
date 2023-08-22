/*
 * EnumerationValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_ENUMERATIONVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_ENUMERATIONVALUE_H_

#include "fuml/semantics/values/Value.h"
#include "fuml/syntax/classification/ClassifierList.h"

namespace fuml::syntax::simpleclassifiers
{
	class Enumeration;
	class EnumerationLiteral;
}
namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::simpleclassifiers
{
	class EnumerationValue : public fuml::semantics::values::Value
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::Enumeration> type = nullptr;
			std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteral> literal = nullptr;

		public:
			virtual std::shared_ptr<fuml::syntax::values::ValueSpecification> specify() override;
			virtual bool equals(const std::shared_ptr<fuml::semantics::values::Value>&) override;
			virtual std::shared_ptr<fuml::semantics::values::Value> copy() override;
			virtual std::shared_ptr<fuml::syntax::classification::ClassifierList> getTypes() override;
			virtual std::string toString() override;

		protected:
			virtual std::shared_ptr<fuml::semantics::values::Value> new_() override;
	}; // EnumerationValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_ENUMERATIONVALUE_H_ */
