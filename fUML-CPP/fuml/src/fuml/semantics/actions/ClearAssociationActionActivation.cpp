/*
 * ClearAssociationActionActivation.cpp
 *
 *  Created on: 29.08.2023
 *      Author: maha6913
 */

#include <fuml/semantics/actions/ClearAssociationActionActivation.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <uml/actions/ClearAssociationAction.h>
#include <uml/structuredclassifiers/Association.h>

void ClearAssociationActionActivation::doAction()
{
	// Get the extent, at the current execution locus, of the given
	// association.
	// Read the object input pin. Destroy all links in which the object
	// participates.

	ClearAssociationActionPtr action = std::dynamic_pointer_cast<ClearAssociationAction>(this->node);

	ExtensionalValueListPtr extent = this->getExecutionLocus()->getExtent(action->association);
	ValuePtr objectValue = this->takeTokens(action->object)->at(0);

	for (const ExtensionalValuePtr& extensionalValue : *extent)
	{
		LinkPtr link = std::dynamic_pointer_cast<Link>(extensionalValue);
		if (this->valueParticipatesInLink(objectValue, link))
		{
			link->destroy();
		}
	}
} // doAction
