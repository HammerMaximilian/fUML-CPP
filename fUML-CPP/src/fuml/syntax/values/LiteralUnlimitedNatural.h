/*
 * LiteralUnlimitedNatural.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_
#define FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_

#include "LiteralSpecification.h"
#include "UMLPrimitiveTypes/unlimitedNatural.h"

namespace fuml::syntax::values
{
	class LiteralUnlimitedNatural : public fuml::syntax::values::LiteralSpecification
	{
		public:
			UMLPrimitiveTypes::unlimitedNatural value = 0;

		public:
			void setValue(UMLPrimitiveTypes::unlimitedNatural);
	}; // LiteralUnlimitedNatural
}

using LiteralUnlimitedNatural = fuml::syntax::values::LiteralUnlimitedNatural;
using LiteralUnlimitedNaturalPtr = std::shared_ptr<LiteralUnlimitedNatural>;

#endif /* FUML_SYNTAX_VALUES_LITERALUNLIMITEDNATURAL_H_ */
