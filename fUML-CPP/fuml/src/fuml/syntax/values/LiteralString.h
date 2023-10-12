/*
 * LiteralString.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALSTRING_H_
#define FUML_SYNTAX_VALUES_LITERALSTRING_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <string>

namespace fuml::syntax::values
{
	class LiteralString : public LiteralSpecification
	{
		public:
			std::string value = "";

		public:
			virtual ~LiteralString() = default;

			void setValue(std::string);
	};
// LiteralString
}

#endif /* FUML_SYNTAX_VALUES_LITERALSTRING_H_ */
