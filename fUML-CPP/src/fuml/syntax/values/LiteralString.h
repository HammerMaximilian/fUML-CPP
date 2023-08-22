/*
 * LiteralString.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALSTRING_H_
#define FUML_SYNTAX_VALUES_LITERALSTRING_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <memory>
#include <string>

namespace fuml::syntax::values
{
	class LiteralString : public LiteralSpecification
	{
		public:
			std::string value = "";

		public:
			void setValue(std::string);
	}; // LiteralString
}

using LiteralString = fuml::syntax::values::LiteralString;
using LiteralStringPtr = std::shared_ptr<LiteralString>;

#endif /* FUML_SYNTAX_VALUES_LITERALSTRING_H_ */
