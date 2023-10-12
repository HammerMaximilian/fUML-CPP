/*
 * DestroyLinkActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/DestroyLinkActionActivation.h>

#include <fuml/Debug.h>
#include <fuml/semantics/loci/ChoiceStrategy.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/syntax/actions/DestroyLinkAction.h>
#include <fuml/syntax/actions/LinkEndDestructionData.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/structuredclassifiers/Association.h>

void DestroyLinkActionActivation::doAction()
{
	// Get the extent, at the current execution locus, of the association
	// for which links are being destroyed.
	// Destroy all links that match the given link end destruction data.
	// For unique ends, or non-unique ends for which isDestroyDuplicates is
	// true, match links with a matching value for that end.
	// For non-unique, ordered ends for which isDestroyDuplicates is false,
	// match links with an end value at the given destroyAt position. [Must
	// a value be given, too, in this case?]
	// For non-unique, non-ordered ends for which isDestroyDuplicates is
	// false, pick one matching link (if any) non-deterministically. [The
	// semantics of this case is not clear from the current spec.]

	fuml::Debug::println("[doAction] DestroyLinkAction...");

	DestroyLinkActionPtr action = std::dynamic_pointer_cast<DestroyLinkAction>(this->node);
	const LinkEndDestructionDataListPtr& destructionDataList = action->endData;

	fuml::Debug::println("[doAction] end data size = " + std::to_string(destructionDataList->size()));

	bool destroyOnlyOne = false;
	for (const LinkEndDestructionDataPtr& endData : *destructionDataList)
	{
		destroyOnlyOne = !endData->end->isUnique && !endData->end->isOrdered && !endData->isDestroyDuplicates;
		if (destroyOnlyOne)
			break;
	}

	LinkEndDataListPtr endDataList(new LinkEndDataList());
	for (const LinkEndDestructionDataPtr& endData : *destructionDataList)
	{
		fuml::Debug::println("[doAction] Matching end = " + endData->end->name);
		endDataList->push_back(endData);
	}

	ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(this->getAssociation());
	ExtensionalValueListPtr matchingLinks(new ExtensionalValueList());

	for (const ExtensionalValuePtr& value : *extent)
	{
		LinkPtr link = std::dynamic_pointer_cast<Link>(value);
		if (this->linkMatchesEndData(link, endDataList))
		{
			matchingLinks->push_back(link);
		}
	}

	// Now that matching is done, ensure that all tokens on end data input
	// pins
	// are consumed.
	for (const LinkEndDestructionDataPtr& endData : *destructionDataList)
	{
		const PropertyPtr& end = endData->end;
		if (!endData->isDestroyDuplicates && !end->isUnique && end->isOrdered)
		{
			this->takeTokens(endData->destroyAt);
		}
		fuml::Debug::println("[doAction] Consuming tokens for end " + end->name);
		this->takeTokens(endData->value);
	}

	if (destroyOnlyOne)
	{
		// *** If there is more than one matching link,
		// non-deterministically choose one. ***
		if (matchingLinks->size() > 0)
		{
			int i = std::dynamic_pointer_cast<ChoiceStrategy>(this->getExecutionLocus()->factory->getStrategy("choice"))
				->choose(matchingLinks->size());
			matchingLinks->at(i - 1)->destroy();
		}
	}
	else
	{
		for (const ExtensionalValuePtr& matchingLink : *matchingLinks)
		{
			matchingLink->destroy();
		}
	}
} // doAction
