/*
 * StructuredValue.cpp
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/simpleclassifiers/StructuredValue.h>

#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/syntax/classification/Classifier.h>
#include <fuml/syntax/classification/InstanceSpecification.h>
#include <fuml/syntax/classification/InstanceValue.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/classification/Slot.h>
#include <fuml/syntax/classification/StructuralFeature.h>
#include <fuml/syntax/commonstructure/NamedElement.h>
#include <fuml/syntax/values/ValueSpecification.h>

StructuredValue::~StructuredValue()
{
}

ValueSpecificationPtr StructuredValue::specify()
{
	// Return an instance value that specifies this structured value.

	InstanceValuePtr instanceValue(new InstanceValue());
	InstanceSpecificationPtr instance(new InstanceSpecification());

	instanceValue->type = nullptr;
	instanceValue->instance = instance;

	instance->classifier = this->getTypes();

	FeatureValueListPtr featureValues = this->getFeatureValues();

	for (const FeatureValuePtr& featureValue : *featureValues)
	{
		SlotPtr slot(new Slot());
		slot->definingFeature = featureValue->feature;

		const ValueListPtr& values = featureValue->values;
		for (const ValuePtr& value : *values)
		{
			slot->value->push_back(value->specify());
		}

		instance->slot->push_back(slot);
	}

	return instanceValue;
}

StructuralFeatureListPtr StructuredValue::getMemberFeatures(const ClassifierPtr& type)
{
	// Return the features for this structured value that are members of the
	// given type. (That is, they are owned or inherited by the given type,
	// excluding private features of supertypes that are not inherited.)

	StructuralFeatureListPtr features = this->getStructuralFeatures();
	StructuralFeatureListPtr memberFeatures(new StructuralFeatureList());

	if (type != nullptr)
	{
		const NamedElementListPtr& members = type->allMembers();
		for (const StructuralFeaturePtr& feature : *features)
		{
			bool isMember = false;
			unsigned int k = 1;
			while (k <= members->size() && !isMember)
			{
				const NamedElementPtr& member = members->at(k - 1);
				isMember = feature == member;
				k = k + 1;
			}
			if (isMember)
			{
				memberFeatures->push_back(feature);
			}
		}
	}

	return memberFeatures;
}

StructuralFeatureListPtr StructuredValue::getStructuralFeatures()
{
	// Get all structural features of the types of this structured
	// value and all of their supertypes (including private features
	// that are not inherited).

	StructuralFeatureListPtr features(new StructuralFeatureList());
	ClassifierListPtr types = this->getTypes();

	for (const ClassifierPtr& type : *types)
	{
		StructuralFeatureListPtr typeFeatures = this->getStructuralFeaturesForType(type);

		for (const StructuralFeaturePtr& supertypeFeature : *typeFeatures)
		{
			features->push_back(supertypeFeature);
		}
	}

	return features;
}

StructuralFeatureListPtr StructuredValue::getStructuralFeaturesForType(const ClassifierPtr& type)
{
	// Get all structural features of the given type and all of its
	// supertypes (including private features that are not inherited).

	StructuralFeatureListPtr features(new StructuralFeatureList());

	// Get feature values for the owned structural features of the given type.
	NamedElementListPtr ownedMembers = type->ownedMember;
	for (const NamedElementPtr& ownedMember : *ownedMembers)
	{
		StructuralFeaturePtr structuralFeature = std::dynamic_pointer_cast<StructuralFeature>(ownedMember);
		if (structuralFeature)
		{
			features->push_back(structuralFeature);
		}
	}

	// Add features for the structural features of the supertypes
	// of the given type. (Note that the features for supertypes
	// always come after the owned features.)
	ClassifierListPtr supertypes = type->general;
	for (const ClassifierPtr& supertype : *supertypes)
	{
		StructuralFeatureListPtr supertypeFeatures = this->getStructuralFeaturesForType(supertype);
		for (const StructuralFeaturePtr& supertypeFeature : *supertypeFeatures)
		{
			features->push_back(supertypeFeature);
		}
	}

	return features;
}

void StructuredValue::createFeatureValues()
{
	// Create empty feature values for all non-association-end structural
	// features of the types of this structured value and all its supertypes
	// (including private features that are not inherited).

	this->addFeatureValues(FeatureValueListPtr(new FeatureValueList()));
}

void StructuredValue::addFeatureValues(const FeatureValueListPtr& oldFeatureValues)
{
	// Add feature values for all non-association-end structural features
	// of the types of this structured value and all its supertypes
	// (including private features that are not inherited). If a feature
	// has an old feature value in the given list, then use that to
	// initialize the values of the corresponding new feature value.
	// Otherwise leave the values of the new feature value empty.

	// Note: Any common features that appear twice in the list will simply
	// have their values set multiple times to the same thing.

	StructuralFeatureListPtr features = this->getStructuralFeatures();
	for (const StructuralFeaturePtr& feature : *features)
	{
		if (!this->checkForAssociationEnd(feature))
		{
			this->setFeatureValue(feature, this->getValues(feature, oldFeatureValues), 0);
		}
	}
}

bool StructuredValue::checkForAssociationEnd(const StructuralFeaturePtr& feature)
{
	bool isAssociationEnd = false;
	PropertyPtr property = std::dynamic_pointer_cast<Property>(feature);
	if (property)
	{
		isAssociationEnd = (property->association.lock() != nullptr);
	}
	return isAssociationEnd;
}

ValueListPtr StructuredValue::getValues(const NamedElementPtr& feature, const FeatureValueListPtr& featureValues)
{
	// Return the values from the feature value in the given list for the
	// given feature. If there is no such feature value, return an empty
	// list.

	FeatureValuePtr foundFeatureValue = nullptr;

	unsigned int i = 1;
	unsigned int featureValuesSize = featureValues->size();
	while (foundFeatureValue == nullptr && i <= featureValuesSize)
	{
		const FeatureValuePtr& featureValue = featureValues->at(i - 1);
		if (featureValue->feature == feature)
		{
			foundFeatureValue = featureValue;
		}
		i = i + 1;
	}

	ValueListPtr values;
	if (foundFeatureValue == nullptr)
	{
		values.reset(new ValueList());
	}
	else
	{
		values = foundFeatureValue->values;
	}

	return values;
}

