/*
 * ValueSpecificationActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ValueSpecificationActionActivation.h>

#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <uml/actions/ValueSpecificationAction.h>

void ValueSpecificationActionActivation::doAction()
{
	// Evaluate the value specification for the action and place the result
	// on the result pin of the action.

	ValueSpecificationActionPtr action = AS(ValueSpecificationAction, this->node);

	ValuePtr value = this->getExecutionLocus()->executor->evaluate(action->value);
	this->putToken(action->result, value);

} // doAction
