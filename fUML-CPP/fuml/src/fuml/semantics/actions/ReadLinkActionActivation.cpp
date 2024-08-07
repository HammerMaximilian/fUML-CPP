/*
 * ReadLinkActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReadLinkActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <uml/actions/LinkEndData.h>
#include <uml/actions/ReadLinkAction.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Association.h>

void ReadLinkActionActivation::doAction()
{
	// Get the extent, at the current execution locus, of the association to
	// which the action applies.
	// For all links that match the link end data, place the value of the
	// remaining "open" end on the result pin.

	ReadLinkActionPtr action = AS(ReadLinkAction, this->node);
	const LinkEndDataListPtr& endDataList = action->endData;
	LinkEndDataPtr openEnd = nullptr;

	for (const LinkEndDataPtr& endData : *endDataList)
	{
		if (endData->value == nullptr)
		{
			openEnd = endData;
			break;
		}
	}

	ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(this->getAssociation());

	FeatureValueListPtr featureValues(new FeatureValueList());
	for (const ExtensionalValuePtr& value : *extent)
	{
		LinkPtr link = AS(Link, value);
		if (this->linkMatchesEndData(link, endDataList))
		{
			FeatureValuePtr featureValue = link->getFeatureValue(openEnd->end);
			if (!openEnd->end->isOrdered || featureValues->size() == 0)
			{
				featureValues->push_back(featureValue);
			}
			else
			{
				int n = featureValue->position;
				bool continueSearching = true;
				unsigned int k = 0;
				while (continueSearching && k < featureValues->size())
				{
					k = k + 1;
					continueSearching = featureValues->at(k - 1)->position < n;
				}
				if (continueSearching)
				{
					featureValues->push_back(featureValue);
				}
				else
				{
					featureValues->insert(featureValues->begin() + (k - 1), featureValue);
				}
			}
		}
	}

	for (const FeatureValuePtr& featureValue : *featureValues)
	{
		this->putToken(action->result, featureValue->values->at(0));
	}

	// Now that matching is done, ensure that all tokens on end data input
	// pins
	// are consumed.
	for (const LinkEndDataPtr& endData : *endDataList)
	{
		if (endData->value != nullptr)
		{
			this->takeTokens(endData->value);
		}
	}
} // doAction
