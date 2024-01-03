/*
 * Value.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_VALUE_H_
#define FUML_SEMANTICS_VALUES_VALUE_H_

#include <fuml/semantics/fwd.h>
#include <fuml/semantics/loci/SemanticVisitor.h>
#include <uml/fwd.h>

namespace fuml::semantics::values
{
	class Value : public SemanticVisitor
	{
		public:
			virtual ~Value() = 0;

			virtual ValueSpecificationPtr specify() = 0;
			virtual bool equals(const ValuePtr&);
			virtual ValuePtr copy();
			virtual ClassifierListPtr getTypes() = 0;
			bool hasType(const ClassifierPtr&);
			bool isInstanceOf(const ClassifierPtr&);
			bool checkAllParents(const ClassifierPtr&, const ClassifierPtr&);
			virtual std::string toString() = 0;

		protected:
			virtual ValuePtr new_() = 0;
	};
// Value
}

#endif /* FUML_SEMANTICS_VALUES_VALUE_H_ */
