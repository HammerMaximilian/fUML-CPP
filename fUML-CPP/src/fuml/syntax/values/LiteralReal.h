/*
 * LiteralReal.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALREAL_H_
#define FUML_SYNTAX_VALUES_LITERALREAL_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <memory>

namespace fuml::syntax::values
{
	class LiteralReal : public LiteralSpecification
	{
		public:
			float value = 0.0f;

		public:
			void setValue(float);
	}; // LiteralReal
}

using LiteralReal = fuml::syntax::values::LiteralReal;
using LiteralRealPtr = std::shared_ptr<LiteralReal>;

#endif /* FUML_SYNTAX_VALUES_LITERALREAL_H_ */
