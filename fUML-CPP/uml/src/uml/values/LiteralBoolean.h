/*
 * LiteralBoolean.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALBOOLEAN_H_
#define UML_VALUES_LITERALBOOLEAN_H_

#include <uml/values/LiteralSpecification.h>

namespace uml::values
{
	class LiteralBoolean : public LiteralSpecification
	{
		public:
			bool value = false;

		public:
			virtual ~LiteralBoolean() = default;

			void setValue(bool);
	};
// LiteralBoolean
}

#endif /* UML_VALUES_LITERALBOOLEAN_H_ */
