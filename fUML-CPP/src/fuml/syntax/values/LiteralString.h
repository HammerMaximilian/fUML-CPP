/*
 * LiteralString.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALSTRING_H_
#define FUML_SYNTAX_VALUES_LITERALSTRING_H_

#include <string>
#include "LiteralSpecification.h"

namespace fuml::syntax::values
{
	class LiteralString : public fuml::syntax::values::LiteralSpecification
	{
		public:
			std::string value = "";

		public:
			void setValue(std::string);
	};
} // LiteralString

#endif /* FUML_SYNTAX_VALUES_LITERALSTRING_H_ */
