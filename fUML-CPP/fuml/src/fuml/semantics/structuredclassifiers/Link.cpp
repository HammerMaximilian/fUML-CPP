/*
 * Link.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/structuredclassifiers/Link.h>

#include <fuml/Debug.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Association.h>

void Link::setThisLinkPtr(LinkPtr_w thisLinkPtr)
{
	this->thisLinkPtr = thisLinkPtr;
	ExtensionalValue::setThisExtensionalValuePtr(thisLinkPtr);
}

void Link::destroy()
{
	// Remove the type of this link and destroy it.
	// Shift the positions of the feature values of any remaining links in
	// the extent of the same association, for ends that are ordered.

	fuml::Debug::println(std::string("[destroy] link = " + this->identifier));

	PropertyListPtr ends = this->type->memberEnd;
	ExtensionalValueListPtr extent = this->locus->getExtent(this->type);

	for (const ExtensionalValuePtr& otherLink : *extent)
	{
		for (const PropertyPtr& end : *ends)
		{
			if (end->isOrdered)
			{
				FeatureValuePtr featureValue = otherLink->getFeatureValue(end);
				if (this->getFeatureValue(end)->position < featureValue->position)
				{
					featureValue->position = featureValue->position - 1;
				}
			}
		}
	}

	this->type = nullptr;
	ExtensionalValue::destroy();
} // destroy

ValuePtr Link::copy()
{
	// Create a new link with the same type, locus and feature values as
	// this link.

	LinkPtr newValue = AS(Link, ExtensionalValue::copy());
	newValue->setThisExtensionalValuePtr(newValue);

	newValue->type = this->type;

	return newValue;
} // copy

ClassifierListPtr Link::getTypes()
{
	// Return the single type of this link (if any).

	ClassifierListPtr types = nullptr;

	if (this->type == nullptr)
	{
		types.reset(new ClassifierList());
	}
	else
	{
		types.reset(new ClassifierList());
		types->push_back(this->type);
	}

	return types;
} // getTypes

bool Link::isMatchingLink(const ExtensionalValuePtr& link, const PropertyPtr& end)
{
	// Test whether the given link matches the values of this link on all
	// ends other than the given end.

	PropertyListPtr ends = this->type->memberEnd;

	bool matches = true;
	unsigned int i = 1;
	unsigned int endSize = ends->size();
	while (matches && i <= endSize)
	{
		PropertyPtr otherEnd = ends->at(i - 1);
		if (otherEnd != end
			&& !this->getFeatureValue(otherEnd)->values->at(0)->equals(link->getFeatureValue(otherEnd)->values->at(0)))
		{
			matches = false;
		}
		i = i + 1;
	}

	return matches;
} // isMatchingLink

FeatureValueListPtr Link::getOtherFeatureValues(const ExtensionalValueListPtr& extent, const PropertyPtr& end)
{
	// Return all feature values for the given end of links in the given
	// extent whose other ends match this link.

	FeatureValueListPtr featureValues(new FeatureValueList());
	for (const ExtensionalValuePtr& link : *extent)
	{
		if (link != this->thisLinkPtr.lock())
		{
			if (isMatchingLink(link, end))
			{
				featureValues->push_back(link->getFeatureValue(end));
			}
		}
	}
	return featureValues;
} // getOtherFeatureValues

void Link::addTo(const LocusPtr& locus)
{
	// Add this link to the extent of its association at the given locus.
	// Shift the positions of ends of other links, as appropriate, for ends
	// that are ordered.

	fuml::Debug::println(std::string("[addTo] link = " + this->identifier));

	PropertyListPtr ends = this->type->memberEnd;
	ExtensionalValueListPtr extent = locus->getExtent(this->type);

	for (const PropertyPtr& end : *ends)
	{
		if (end->isOrdered)
		{
			FeatureValuePtr featureValue = this->getFeatureValue(end);
			FeatureValueListPtr otherFeatureValues = this->getOtherFeatureValues(extent, end);
			int n = otherFeatureValues->size();
			if (featureValue->position < 0 || featureValue->position > n)
			{
				featureValue->position = n + 1;
			}
			else
			{
				if (featureValue->position == 0)
				{
					featureValue->position = 1;
				}
				for (const FeatureValuePtr& otherFeatureValue : *otherFeatureValues)
				{
					if (featureValue->position <= otherFeatureValue->position)
					{
						otherFeatureValue->position = otherFeatureValue->position + 1;
					}
				}
			}
		}
	}

	locus->add(this->thisLinkPtr.lock());
} // addTo

ValuePtr Link::new_()
{
	// Create a new link with no type or properies.
	LinkPtr newLink(new Link());
	newLink->setThisExtensionalValuePtr(newLink);
	return newLink;
} // new_
