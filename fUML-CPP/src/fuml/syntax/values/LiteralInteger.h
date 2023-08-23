/*
 * LiteralInteger.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALINTEGER_H_
#define FUML_SYNTAX_VALUES_LITERALINTEGER_H_

#include <fuml/syntax/values/LiteralSpecification.h>

namespace fuml::syntax::values
{
	class LiteralInteger : public LiteralSpecification
	{
		public:
			int value = 0;

		public:
			void setValue(int);
	}; // LiteralInteger
}

#endif /* FUML_SYNTAX_VALUES_LITERALINTEGER_H_ */
