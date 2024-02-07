/*
 * CS_AcceptCallActionActivation.cpp
 *
 *  Created on: 01.02.2024
 *      Author: maha6913
 */

#include <pscs/semantics/actions/CS_AcceptCallActionActivation.h>

#include <pscs/semantics/commonbehavior/CS_EventOccurrence.h>
#include <pscs/semantics/fwd.h>

void CS_AcceptCallActionActivation::accept(const EventOccurrencePtr& eventOccurrence)
{
    // If the accepted event occurrence is a CS_EventOccurrence then the wrapped
    // event occurrence is extracted. The acceptance process is the one define
    // by AcceptCallActionActivation defined in fUML.
    if (CS_EventOccurrencePtr cS_EventOccurrence = AS(CS_EventOccurrence, eventOccurrence))
    {
        AcceptCallActionActivation::accept(cS_EventOccurrence->wrappedEventOccurrence);
    }
    else
    {
        AcceptCallActionActivation::accept(eventOccurrence);
    }
}
