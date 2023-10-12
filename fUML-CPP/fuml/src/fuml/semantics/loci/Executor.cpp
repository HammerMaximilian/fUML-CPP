/*
 * Executor.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/loci/Executor.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/semantics/values/Evaluation.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/syntax/values/ValueSpecification.h>

ParameterValueListPtr Executor::execute(const BehaviorPtr& behavior, const Object_Ptr& context,
	const ParameterValueListPtr& inputs)
{
	// Execute the given behavior with the given input values in the given
	// context, producing the given output values.
	// There must be one input parameter value for each input (in or in-out)
	// parameter of the behavior.
	// The returned values include one parameter value for each output
	// (in-out, out or return) parameter of the behavior.
	// The execution instance is destroyed at completion.

	ExecutionPtr execution = this->locus->factory->createExecution(behavior, context);

	for (const ParameterValuePtr& input : *inputs)
	{
		execution->setParameterValue(input);
	}

	execution->execute();
	ParameterValueListPtr outputValues = execution->getOutputParameterValues();
	execution->destroy();

	return outputValues;
} // execute

ValuePtr Executor::evaluate(const ValueSpecificationPtr& specification)
{
	// Evaluate the given value specification, returning the specified
	// value.

	return this->locus->factory->createEvaluation(specification)->evaluate();
} // evaluate

ReferencePtr Executor::start(const Class_Ptr& type, const ParameterValueListPtr& inputs)
{
	// Instantiate the given class and start any behavior of the resulting
	// object.
	// (The behavior of an object includes any classifier behaviors for an
	// active object or the class of the object itself, if that is a
	// behavior.)

	fuml::Debug::println(std::string("[start] Starting " + type->name + "..."));

	Object_Ptr object = this->locus->instantiate(type);

	fuml::Debug::println(std::string("[start] Object = " + object->toString()));
	object->startBehavior(type, inputs);

	ReferencePtr reference(new Reference());
	reference->referent = object;

	return reference;
} // start
