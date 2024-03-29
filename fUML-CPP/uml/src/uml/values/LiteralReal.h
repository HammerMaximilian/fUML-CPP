/*
 * LiteralReal.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALREAL_H_
#define UML_VALUES_LITERALREAL_H_

#include <uml/values/LiteralSpecification.h>

namespace uml::values
{
	class LiteralReal : public LiteralSpecification
	{
		public:
			float value = 0.0f;

		public:
			virtual ~LiteralReal() = default;

			void setValue(float);
	};
// LiteralReal
}

#endif /* UML_VALUES_LITERALREAL_H_ */
