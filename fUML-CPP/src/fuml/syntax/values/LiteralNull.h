/*
 * LiteralNull.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALNULL_H_
#define FUML_SYNTAX_VALUES_LITERALNULL_H_

#include <fuml/syntax/values/LiteralSpecification.h>

namespace fuml::syntax::values
{
	class LiteralNull : public LiteralSpecification
	{
		public:
			virtual ~LiteralNull() = default;

	};
// LiteralNull
}

#endif /* FUML_SYNTAX_VALUES_LITERALNULL_H_ */
