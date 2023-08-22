/*
 * ValueSpecification.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_VALUESPECIFICATION_H_
#define FUML_SYNTAX_VALUES_VALUESPECIFICATION_H_

#include <fuml/syntax/commonstructure/TypedElement.h>
#include <memory>

namespace fuml::syntax::values
{
	class ValueSpecification : public TypedElement
	{
		public:
			virtual ~ValueSpecification() = 0;
	};
}

using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;

#endif /* FUML_SYNTAX_VALUES_VALUESPECIFICATION_H_ */
