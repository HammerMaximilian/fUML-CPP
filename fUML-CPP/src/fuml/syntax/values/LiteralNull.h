/*
 * LiteralNull.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_LITERALNULL_H_
#define FUML_SYNTAX_VALUES_LITERALNULL_H_

#include <fuml/syntax/values/LiteralSpecification.h>
#include <memory>

namespace fuml::syntax::values
{
	class LiteralNull : public LiteralSpecification
	{
	}; // LiteralNull
}

using LiteralNull = fuml::syntax::values::LiteralNull;
using LiteralNullPtr = std::shared_ptr<LiteralNull>;

#endif /* FUML_SYNTAX_VALUES_LITERALNULL_H_ */
