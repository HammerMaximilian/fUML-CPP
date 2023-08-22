/*
 * Value.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_VALUE_H_
#define FUML_SEMANTICS_VALUES_VALUE_H_

#include "fuml/semantics/loci/SemanticVisitor.h"
#include "fuml/syntax/classification/ClassifierList.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::values
{
	class Value : public fuml::semantics::loci::SemanticVisitor
	{
		public:
			virtual ~Value() = 0;

			virtual std::shared_ptr<fuml::syntax::values::ValueSpecification> specify() = 0;
			virtual bool equals(const std::shared_ptr<fuml::semantics::values::Value>&);
			virtual std::shared_ptr<fuml::semantics::values::Value> copy();
			virtual std::shared_ptr<fuml::syntax::classification::ClassifierList> getTypes() = 0;
			bool hasType(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			bool isInstanceOf(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			bool checkAllParents(const std::shared_ptr<fuml::syntax::classification::Classifier>&,
					const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			virtual std::string toString() = 0;

		protected:
			virtual std::shared_ptr<fuml::semantics::values::Value> new_() = 0;
	}; // Value
}

using Value = fuml::semantics::values::Value;
using ValuePtr = std::shared_ptr<Value>;

#endif /* FUML_SEMANTICS_VALUES_VALUE_H_ */
