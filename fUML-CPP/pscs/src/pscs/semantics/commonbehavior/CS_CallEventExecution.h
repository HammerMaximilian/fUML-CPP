/*
 * CS_CallEventExecution.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_COMMONBEHAVIOR_CS_CALLEVENTEXECUTION_H_
#define PSCS_SEMANTICS_COMMONBEHAVIOR_CS_CALLEVENTEXECUTION_H_

#include <fuml/semantics/commonbehavior/CallEventExecution.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::commonbehavior
{
	class CS_CallEventExecution : public CallEventExecution
	{
		public:
			CS_InteractionPointPtr interactionPoint = nullptr;

		public:
			virtual ~CS_CallEventExecution() = default;

			virtual EventOccurrencePtr createEventOccurrence() override;
			virtual ValuePtr copy() override;

		protected:
			virtual ValuePtr new_() override;
	}; // CS_CallEventExecution
}

#endif /* PSCS_SEMANTICS_COMMONBEHAVIOR_CS_CALLEVENTEXECUTION_H_ */
