/*
 * ReadExtentActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReadExtentActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/ReadExtentAction.h>

void ReadExtentActionActivation::doAction()
{
	// Get the extent, at the current execution locus, of the classifier
	// (which must be a class) identified in the action.
	// Place references to the resulting set of objects on the result pin.

	ReadExtentActionPtr action = AS(ReadExtentAction, this->node);
	ExtensionalValueListPtr objects = this->getExecutionLocus()->getExtent(action->classifier);

	ValueListPtr references(new ValueList());
	for (const ValuePtr& object : *objects)
	{
		ReferencePtr reference(new Reference());
		reference->referent = AS(Object_, object);
		references->push_back(reference);
	}

	this->putTokens(action->result, references);
} // doAction
