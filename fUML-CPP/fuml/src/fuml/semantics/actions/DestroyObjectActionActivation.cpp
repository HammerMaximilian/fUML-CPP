/*
 * DestroyObjectActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/DestroyObjectActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <uml/actions/DestroyObjectAction.h>
#include <uml/classification/Property.h>

void DestroyObjectActionActivation::doAction()
{
	// Get the value on the target input pin.
	// If the value is not a reference, then the action has no effect.
	// Otherwise, do the following.
	// If isDestroyLinks is true, destroy all links in which the referent
	// participates.
	// If isDestroyOwnedObjects is true, destroy all objects owned by the
	// referent via either composite attributes or composition links.
	// Destroy the referent object.

	DestroyObjectActionPtr action = AS(DestroyObjectAction, this->node);
	ValuePtr value = this->takeTokens(action->target)->at(0);

	this->destroyObject(value, action->isDestroyLinks, action->isDestroyOwnedObjects);
} // doAction

void DestroyObjectActionActivation::destroyObject(const ValuePtr& value, bool isDestroyLinks,
	bool isDestroyOwnedObjects)
{
	// If the given value is a reference, then destroy the referenced
	// object, per the given destroy action attribute values.

	ReferencePtr reference = AS(Reference, value);

	if (reference)
	{
		fuml::Debug::println("[destroyObject] object = " + reference->referent->identifier);

		if (isDestroyLinks || isDestroyOwnedObjects)
		{
			const ExtensionalValueListPtr& extensionalValues = this->getExecutionLocus()->extensionalValues;
			for (const ExtensionalValuePtr& extensionalValue : *extensionalValues)
			{
				LinkPtr link = AS(Link, extensionalValue);

				if (link)
				{
					if (this->valueParticipatesInLink(reference, link))
					{
						if (isDestroyOwnedObjects)
						{
							ValuePtr compositeValue = this->getCompositeValue(reference, link);
							if (compositeValue != nullptr)
							{
								fuml::Debug::println("[destroyObject] Destroying (linked) owned object ...");
								this->destroyObject(compositeValue, isDestroyLinks, isDestroyOwnedObjects);
							}
						}
						if (isDestroyLinks && !link->getTypes()->empty())
						{
							link->destroy();
						}
					}
				}
			}
		}

		if (isDestroyOwnedObjects)
		{
			FeatureValueListPtr objectFeatureValues = reference->getFeatureValues();
			for (const FeatureValuePtr& featureValue : *objectFeatureValues)
			{
				if (AS(Property, featureValue->feature)->aggregation
					== AggregationKind::composite)
				{
					fuml::Debug::println("[destroyObject] Destroying owned objects...");
					const ValueListPtr& values = featureValue->values;
					for (const ValuePtr& ownedValue : *values)
					{
						this->destroyObject(ownedValue, isDestroyLinks, isDestroyOwnedObjects);
					}
				}
			}
		}

		reference->destroy();
	}
}

ValuePtr DestroyObjectActionActivation::getCompositeValue(const ReferencePtr& reference, const LinkPtr& link)
{
	// If the given reference participates in the given link as a composite,
	// then return the opposite value. Otherwise return null.

	FeatureValueListPtr linkFeatureValues = link->getFeatureValues();

	ValuePtr compositeValue = nullptr;
	for (const FeatureValuePtr& featureValue : *linkFeatureValues)
	{
		const ValuePtr& value = featureValue->values->at(0);
		if (!value->equals(reference)
			&& AS(Property, featureValue->feature)->aggregation == AggregationKind::composite)
		{
			compositeValue = value;
			break;
		}
	}

	return compositeValue;
}
