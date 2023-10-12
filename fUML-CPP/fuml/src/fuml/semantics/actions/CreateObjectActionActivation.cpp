/*
 * CreateObjectActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/CreateObjectActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/syntax/actions/CreateObjectAction.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>

void CreateObjectActionActivation::doAction()
{
	// Create an object with the given classifier (which must be a class) as
	// its type, at the same locus as the action activation.
	// Place a reference to the object on the result pin of the action.

	CreateObjectActionPtr action = std::dynamic_pointer_cast<CreateObjectAction>(this->node);

	ReferencePtr reference(new Reference());
	reference->referent = this->getExecutionLocus()->instantiate(std::dynamic_pointer_cast<Class_>(action->classifier));

	this->putToken(action->result, reference);

} // doAction
