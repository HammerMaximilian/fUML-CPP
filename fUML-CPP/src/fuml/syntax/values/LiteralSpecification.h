/*
 * LiteralSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALSPECIFICATION_H_
#define FUML_SYNTAX_VALUES_LITERALSPECIFICATION_H_

#include <fuml/syntax/values/ValueSpecification.h>
#include <memory>

namespace fuml::syntax::values
{
	class LiteralSpecification : public ValueSpecification
	{
		public:
			virtual ~LiteralSpecification() = 0;
	}; // LiteralSpecification
}

using LiteralSpecification = fuml::syntax::values::LiteralSpecification;
using LiteralSpecificationPtr = std::shared_ptr<LiteralSpecification>;

#endif /* FUML_SYNTAX_VALUES_LITERALSPECIFICATION_H_ */
