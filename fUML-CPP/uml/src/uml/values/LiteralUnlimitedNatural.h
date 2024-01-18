/*
 * LiteralUnlimitedNatural.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALUNLIMITEDNATURAL_H_
#define UML_VALUES_LITERALUNLIMITEDNATURAL_H_

#include <uml/values/LiteralSpecification.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>

namespace uml::values
{
	class LiteralUnlimitedNatural : public LiteralSpecification
	{
		public:
			UMLPrimitiveTypes::unlimitedNatural value = 0;

		public:
			virtual ~LiteralUnlimitedNatural() = default;

			void setValue(UMLPrimitiveTypes::unlimitedNatural);
	};
// LiteralUnlimitedNatural
}

#endif /* UML_VALUES_LITERALUNLIMITEDNATURAL_H_ */
