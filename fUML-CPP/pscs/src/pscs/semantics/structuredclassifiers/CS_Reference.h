/*
 * CS_Reference.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCE_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCE_H_

#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_Reference : Reference
	{
		public:
			CS_ObjectPtr compositeReferent = nullptr;

		public:
			virtual ~CS_Reference() = default;

			ExecutionPtr dispatchIn(const OperationPtr&, const CS_InteractionPointPtr&);
			void sendIn(const EventOccurrencePtr&, const CS_InteractionPointPtr&);
			void sendOut(const EventOccurrencePtr&, const PortPtr&);
			ExecutionPtr dispatchOut(const OperationPtr&, const PortPtr&);
			ExecutionPtr dispatchIn(const OperationPtr&, const PortPtr&);
			void sendIn(const EventOccurrencePtr&, const PortPtr&);
			ExecutionPtr dispatchOut(const OperationPtr&, CS_InteractionPointPtr&);
			void sendOut(const EventOccurrencePtr&, const CS_InteractionPointPtr&);
			virtual ValuePtr copy() override;
	}; // CS_Reference
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCE_H_ */
