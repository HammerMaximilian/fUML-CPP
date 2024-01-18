/*
 * InstanceValueEvaluation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/classification/InstanceValueEvaluation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/DataValue.h>
#include <fuml/semantics/simpleclassifiers/EnumerationValue.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/classification/Classifier.h>
#include <uml/classification/InstanceSpecification.h>
#include <uml/classification/InstanceValue.h>
#include <uml/classification/Slot.h>
#include <uml/commonbehavior/Behavior.h>
#include <uml/simpleclassifiers/DataType.h>
#include <uml/simpleclassifiers/Enumeration.h>
#include <uml/simpleclassifiers/EnumerationLiteral.h>

ValuePtr InstanceValueEvaluation::evaluate()
{
	// If the instance specification is for an enumeration, then return the
	// identified enumeration literal.
	// If the instance specification is for a data type (but not a primitive
	// value or an enumeration), then create a data value of the given data
	// type.
	// If the instance specification is for an object, then create an object
	// at the current locus with the specified types.
	// Set each feature of the created value to the result of evaluating the
	// value specifications for the specified slot for the feature.

	InstanceSpecificationPtr instance = std::dynamic_pointer_cast<InstanceValue>(this->specification)->instance;
	const ClassifierListPtr& types = instance->classifier;
	const ClassifierPtr& myType = types->at(0);

	fuml::Debug::println(std::string("[evaluate] type = " + myType->name));

	ValuePtr value;
	EnumerationLiteralPtr enumerationLiteral = std::dynamic_pointer_cast<EnumerationLiteral>(instance);

	if (enumerationLiteral)
	{
		EnumerationValuePtr enumerationValue(new EnumerationValue());
		enumerationValue->type = std::dynamic_pointer_cast<Enumeration>(myType);
		enumerationValue->literal = enumerationLiteral;
		value = enumerationValue;
	}
	else
	{
		StructuredValuePtr structuredValue = nullptr;
		DataTypePtr dataType = std::dynamic_pointer_cast<DataType>(myType);

		if (dataType)
		{
			DataValuePtr dataValue(new DataValue());
			dataValue->type = dataType;
			structuredValue = dataValue;
		}
		else
		{
			Object_Ptr object = nullptr;
			BehaviorPtr behavior = std::dynamic_pointer_cast<Behavior>(myType);
			if (behavior)
			{
				object = this->locus->factory->createExecution(behavior, nullptr);
			}
			else
			{
				object.reset(new Object_());
				for (const ClassifierPtr& type : *types)
				{
					object->types->push_back(std::dynamic_pointer_cast<Class_>(type));
				}
			}

			this->locus->add(object);

			ReferencePtr reference(new Reference());
			reference->referent = object;
			structuredValue = reference;
		}

		structuredValue->createFeatureValues();

		const SlotListPtr& instanceSlots = instance->slot;
		for (const SlotPtr& slot : *instanceSlots)
		{
			ValueListPtr values(new ValueList());
			const ValueSpecificationListPtr& slotValues = slot->value;
			for (const ValueSpecificationPtr& slotValue : *slotValues)
			{
				values->push_back(this->locus->executor->evaluate(slotValue));
			}
			structuredValue->setFeatureValue(slot->definingFeature, values, 0);
		}

		value = structuredValue;
	}

	return value;
} // evaluate
