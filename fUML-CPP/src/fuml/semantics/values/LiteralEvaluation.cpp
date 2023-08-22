/*
 * LiteralEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include "LiteralEvaluation.h"

#include "fuml/syntax/values/ValueSpecification.h"
#include "fuml/syntax/simpleclassifiers/PrimitiveType.h"
#include "fuml/semantics/loci/Locus.h"
#include "fuml/semantics/loci/ExecutionFactory.h"

using namespace fuml::semantics::values;

LiteralEvaluation::~LiteralEvaluation()
{
}

std::shared_ptr<fuml::syntax::simpleclassifiers::PrimitiveType> LiteralEvaluation::getType(std::string builtInTypeName)
{
	// Get the type of the specification. If that is null, then use the
	// built-in type of the given name.

	std::shared_ptr<fuml::syntax::simpleclassifiers::PrimitiveType> type =
			std::dynamic_pointer_cast<fuml::syntax::simpleclassifiers::PrimitiveType>(this->specification->type);

	if (type == nullptr) {
		//type = this->locus->factory->getBuiltInType(builtInTypeName);
	}

	return type;
} // getType
