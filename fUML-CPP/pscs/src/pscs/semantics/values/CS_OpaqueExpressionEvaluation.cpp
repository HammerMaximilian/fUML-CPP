/*
 * CS_OpaqueExpressionEvaluation.cpp
 *
 *  Created on: 29.01.2024
 *      Author: maha6913
 */

#include <pscs/semantics/values/CS_OpaqueExpressionEvaluation.h>

#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <pscs/semantics/fwd.h>
#include <uml/values/OpaqueExpression.h>

ValuePtr CS_OpaqueExpressionEvaluation::evaluate()
{
    // Execute the behavior associated with the context OpaqueExpression, if any.
    // If multiple return values are computed, then return the first one.
    // If no value are computed, return null
    ValueListPtr evaluation = this->executeExpressionBehavior();
    if (!evaluation->empty())
    {
        return evaluation->at(0);
    }
    else
    {
        return nullptr;
    }
}

ValueListPtr CS_OpaqueExpressionEvaluation::executeExpressionBehavior()
{
    // If a behavior is associated with the context OpaqueExpression,
    // then execute this behavior, and return computed values.
    // Otherwise, return an empty list of values.
    ValueListPtr evaluation(new ValueList());
    OpaqueExpressionPtr expression = std::dynamic_pointer_cast<OpaqueExpression>(specification);
    BehaviorPtr behavior = expression->behavior;
    if (behavior != nullptr)
    {
        ParameterValueListPtr inputs(new ParameterValueList());
        ParameterValueListPtr results = locus->executor->execute(behavior, nullptr, inputs);

        if(!results) results.reset(new ParameterValueList());

        for (const ParameterValuePtr& parameterValue : *results)
        { // results->size() should be 1
            ValueListPtr values = parameterValue->values;
            for (const ValuePtr& value : *values)
            {
                evaluation->push_back(value);
            }
        }
    }
    return evaluation;
}
