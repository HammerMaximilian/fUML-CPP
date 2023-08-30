/*
 * CreateLinkActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/CreateLinkActionActivation.h>

#include <fuml/semantics/actions/LinkActionActivation.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/syntax/actions/CreateLinkAction.h>
#include <fuml/syntax/actions/LinkEndCreationData.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/structuredclassifiers/Association.h>

void CreateLinkActionActivation::doAction()
{
	// If the association has any unique ends, then destroy an existing link
	// that matches all ends of the link being created.
	// Get the extent at the current execution locus of the association for
	// which a link is being created.
	// Destroy all links that have a value for any end for which
	// isReplaceAll is true.
	// Create a new link for the association, at the current locus, with the
	// given end data values,
	// inserted at the given insertAt position (for ordered ends).

	CreateLinkActionPtr action = std::dynamic_pointer_cast<CreateLinkAction>(this->node);
	const LinkEndCreationDataListPtr& endDataList = action->endData;

	AssociationPtr linkAssociation = this->getAssociation();
	ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(linkAssociation);

	bool unique = false;
	for (const LinkEndCreationDataPtr& linkEndCreationData : *endDataList)
	{
		if (linkEndCreationData->end->isUnique)
		{
			unique = true;
		}
	}

	for (const ExtensionalValuePtr& value : *extent)
	{

		LinkPtr link = std::dynamic_pointer_cast<Link>(value);

		bool match = true;
		bool destroy = false;
		for (const LinkEndCreationDataPtr& endData : *endDataList)
		{
			if (this->endMatchesEndData(link, endData))
			{
				if (endData->isReplaceAll)
				{
					destroy = true;
				}
			}
			else
			{
				match = false;
			}
		}
		if (destroy || (unique && match))
		{
			link->destroy();
		}
	}

	LinkPtr newLink(new Link());
	newLink->setThisLinkPtr(newLink);
	newLink->type = linkAssociation;

	for (const LinkEndCreationDataPtr& endData : *endDataList)
	{
		int insertAt = 0;
		if (endData->insertAt != nullptr)
		{
			insertAt = std::dynamic_pointer_cast<UnlimitedNaturalValue>(this->takeTokens(endData->insertAt)->at(0))
				->value;
		}

		newLink->setFeatureValue(endData->end, this->takeTokens(endData->value), insertAt);
	}

	newLink->addTo(this->getExecutionLocus());
}
