/*
 * LiteralString.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALSTRING_H_
#define UML_VALUES_LITERALSTRING_H_

#include <uml/values/LiteralSpecification.h>
#include <string>

namespace uml::values
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

#endif /* UML_VALUES_LITERALSTRING_H_ */
