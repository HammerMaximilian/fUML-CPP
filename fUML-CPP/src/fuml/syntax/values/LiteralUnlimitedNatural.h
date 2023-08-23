/*
 * LiteralUnlimitedNatural.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_
#define FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>

namespace fuml::syntax::values
{
	class LiteralUnlimitedNatural : public LiteralSpecification
	{
		public:
			UMLPrimitiveTypes::unlimitedNatural value = 0;

		public:
			void setValue(UMLPrimitiveTypes::unlimitedNatural);
	}; // LiteralUnlimitedNatural
}

#endif /* FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_ */
