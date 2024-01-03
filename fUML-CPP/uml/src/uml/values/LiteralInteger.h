/*
 * LiteralInteger.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALINTEGER_H_
#define UML_VALUES_LITERALINTEGER_H_

#include <uml/values/LiteralSpecification.h>

namespace uml::values
{
	class LiteralInteger : public LiteralSpecification
	{
		public:
			int value = 0;

		public:
			virtual ~LiteralInteger() = default;

			void setValue(int);
	};
// LiteralInteger
}

#endif /* UML_VALUES_LITERALINTEGER_H_ */
