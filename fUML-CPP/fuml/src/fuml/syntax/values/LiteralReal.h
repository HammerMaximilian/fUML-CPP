/*
 * LiteralReal.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALREAL_H_
#define FUML_SYNTAX_VALUES_LITERALREAL_H_

#include <fuml/syntax/values/LiteralSpecification.h>

namespace fuml::syntax::values
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

#endif /* FUML_SYNTAX_VALUES_LITERALREAL_H_ */
