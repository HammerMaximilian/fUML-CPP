/*
 * LiteralBoolean.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_
#define FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <memory>

namespace fuml::syntax::values
{
	class LiteralBoolean : public LiteralSpecification
	{
		public:
			bool value = false;

		public:
			void setValue(bool);
	}; // LiteralBoolean
}

using LiteralBoolean = fuml::syntax::values::LiteralBoolean;
using LiteralBooleanPtr = std::shared_ptr<LiteralBoolean>;

#endif /* FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_ */
