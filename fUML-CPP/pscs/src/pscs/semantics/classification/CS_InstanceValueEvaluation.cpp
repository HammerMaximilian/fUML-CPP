/*
 * CS_InstanceValueEvaluation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/classification/CS_InstanceValueEvaluation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/simpleclassifiers/DataValue.h>
#include <fuml/semantics/simpleclassifiers/EnumerationValue.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/loci/CS_ExecutionFactory.h>
#include <pscs/semantics/loci/CS_Executor.h>
#include <pscs/semantics/loci/CS_Locus.h>
#include <pscs/semantics/structuredclassifiers/CS_Object.h>
#include <pscs/semantics/structuredclassifiers/CS_Reference.h>
#include <uml/classification/InstanceSpecification.h>
#include <uml/classification/InstanceValue.h>
#include <uml/classification/Slot.h>
#include <uml/commonbehavior/Behavior.h>
#include <uml/simpleclassifiers/Enumeration.h>
#include <uml/simpleclassifiers/EnumerationLiteral.h>

ValuePtr CS_InstanceValueEvaluation::evaluate()
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
	// Extends fUML semantics in the sense that when the instance specification
	// is for an object which is not typed by a Behavior, A CS_Reference (to a
	// CS_Object) is produced instead of a Reference (to an Object)
	InstanceSpecificationPtr instance = AS(InstanceValue, this->specification)->instance;
	const ClassifierListPtr& types = instance->classifier;
	const ClassifierPtr& myType = types->at(0);
	fuml::Debug::println("[evaluate] type = " + myType->name);
	ValuePtr value = nullptr;

	if (EnumerationLiteralPtr literal = AS(EnumerationLiteral, instance))
	{
		EnumerationValuePtr enumerationValue(new EnumerationValue());
		enumerationValue->type = AS(Enumeration, myType);
		enumerationValue->literal = literal;

		value = enumerationValue;
	}
	else
	{
		StructuredValuePtr structuredValue = nullptr;
		if (DataTypePtr dataType = AS(DataType, myType))
		{
			DataValuePtr dataValue(new DataValue());
			structuredValue = dataValue;
		}
		else
		{
			Object_Ptr object_;
			if (BehaviorPtr behavior = AS(Behavior, myType))
			{
				object_ = this->locus->factory->createExecution(behavior, nullptr);
			}
			else
			{
				CS_ObjectPtr newCS_Object(new CS_Object());
				newCS_Object->setThisCS_ObjectPtr(newCS_Object);
				object_ = newCS_Object;
				for(const ClassifierPtr& type : *types)
				{
					object_->types->push_back(AS(Class_, type));
				}
			}
			this->locus->add(object_);
			ReferencePtr reference;
			if (CS_ObjectPtr cS_Object = AS(CS_Object, object_))
			{
				reference.reset(new CS_Reference());
				AS(CS_Reference, reference)->compositeReferent = cS_Object;
			}
			else
			{
				reference.reset(new Reference());
			}
			reference->referent = object_;
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
}
