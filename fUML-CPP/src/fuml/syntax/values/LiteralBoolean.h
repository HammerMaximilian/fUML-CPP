/*
 * LiteralBoolean.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_
#define FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_

#include "LiteralSpecification.h"

namespace fuml::syntax::values
{
	class LiteralBoolean : public fuml::syntax::values::LiteralSpecification
	{
		public:
			bool value = false;

		public:
			void setValue(bool);
	};
} // LiteralBoolean

#endif /* FUML_SYNTAX_VALUES_LITERALBOOLEAN_H_ */
