/*
 * LinkActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/LinkActionActivation.h>

#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <uml/actions/LinkAction.h>
#include <uml/actions/LinkEndDestructionData.h>
#include <uml/classification/Property.h>

LinkActionActivation::~LinkActionActivation()
{
}

bool LinkActionActivation::linkMatchesEndData(const LinkPtr& link, const LinkEndDataListPtr& endDataList)
{
	// Test whether the given link matches the given end data.

	bool matches = true;
	for (const LinkEndDataPtr& endData : *endDataList)
	{
		matches = this->endMatchesEndData(link, endData);
		if (matches)
			break;
	}

	return matches;
} // linkMatchesEndData

bool LinkActionActivation::endMatchesEndData(const LinkPtr& link, const LinkEndDataPtr& endData)
{
	// Test whether the appropriate end of the given link matches the given
	// end data.

	bool matches = false;
	if (endData->value == nullptr)
	{
		matches = true;
	}
	else
	{
		PropertyPtr end = endData->end;
		FeatureValuePtr linkFeatureValue = link->getFeatureValue(end);
		ValuePtr endValue = this->getTokens(endData->value)->at(0);
		LinkEndDestructionDataPtr linkEndDestructionData = std::dynamic_pointer_cast<LinkEndDestructionData>(endData);
		if (linkEndDestructionData)
		{
			if (!linkEndDestructionData->isDestroyDuplicates && !end->isUnique && end->isOrdered)
			{
				int destroyAt = std::dynamic_pointer_cast<UnlimitedNaturalValue>(
					this->getTokens(linkEndDestructionData->destroyAt)->at(0))->value;
				matches = linkFeatureValue->values->at(0)->equals(endValue) && linkFeatureValue->position == destroyAt;
			}
			else
			{
				matches = linkFeatureValue->values->at(0)->equals(endValue);
			}
		}
		else
		{
			matches = linkFeatureValue->values->at(0)->equals(endValue);
		}
	}

	return matches;
} // endMatchesEndData

AssociationPtr LinkActionActivation::getAssociation()
{
	// Get the association for the link action of this activation.

	return std::dynamic_pointer_cast<LinkAction>(this->node)->endData->at(0)->end->association.lock();
} // getAssociation
