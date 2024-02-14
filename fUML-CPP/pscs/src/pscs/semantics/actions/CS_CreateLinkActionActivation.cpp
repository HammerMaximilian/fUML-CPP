/*
 * CS_CreateLinkActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_CreateLinkActionActivation.h>

#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_Link.h>
#include <uml/actions/CreateLinkAction.h>
#include <uml/actions/LinkEndCreationData.h>
#include <uml/classification/Property.h>
#include <uml/structuredclassifiers/Association.h>

void CS_CreateLinkActionActivation::doAction()
{
    // Get the extent at the current execution locus of the association for
    // which a link is being created.
    // Destroy all links that have a value for any end for which
    // isReplaceAll is true.
    // Create a new link for the association, at the current locus, with the
    // given end data values,
    // inserted at the given insertAt position (for ordered ends).
    // fUML semantics is extended in the sense that a CS_Link is created instead of
    // a Link
    CreateLinkActionPtr action = AS(CreateLinkAction, this->node);
    LinkEndCreationDataListPtr endDataList(new LinkEndCreationDataList());
    for (const LinkEndDataPtr& data : *(action->endData))
    {
        endDataList->push_back(AS(LinkEndCreationData, data));
    }
    AssociationPtr linkAssociation = this->getAssociation();
    ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(linkAssociation);
    bool unique = false;
    for (const LinkEndCreationDataPtr& endCreationData : *endDataList)
    {
        if (endCreationData->end->isUnique)
        {
            unique = true;
        }
    }
    for (const ExtensionalValuePtr& value : *extent)
    {
        LinkPtr link = AS(Link, value);
        bool match = true;
        bool destroy = false;
        for(const LinkEndCreationDataPtr& endData : *endDataList)
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
    CS_LinkPtr newLink(new CS_Link());
    newLink->setThisLinkPtr(newLink);

    newLink->type = linkAssociation;

    for (const LinkEndCreationDataPtr& endData : *endDataList)
    {
        int insertAt = 0;
        if (endData->insertAt != nullptr)
        {
            insertAt = (AS(UnlimitedNaturalValue, this->takeTokens(endData->insertAt)->at(0)))->value;
        }
        newLink->setFeatureValue(endData->end, this->takeTokens(endData->value), insertAt);
    }
    newLink->addTo(this->getExecutionLocus());
}
