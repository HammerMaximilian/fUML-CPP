/*
 * LiteralEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/values/LiteralEvaluation.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/ValueSpecification.h>

LiteralEvaluation::~LiteralEvaluation()
{
}

PrimitiveTypePtr LiteralEvaluation::getType(std::string builtInTypeName)
{
	// Get the type of the specification. If that is null, then use the
	// built-in type of the given name.

	PrimitiveTypePtr type = std::dynamic_pointer_cast<PrimitiveType>(this->specification->type);

	if (type == nullptr)
	{
		//type = this->locus->factory->getBuiltInType(builtInTypeName);
	}

	return type;
} // getType
