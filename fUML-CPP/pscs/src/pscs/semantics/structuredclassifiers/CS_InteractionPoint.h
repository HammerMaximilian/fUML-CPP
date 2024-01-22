/*
 * CS_InteractionPoint.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_H_

#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_InteractionPoint : public Reference
	{
		public:
			CS_ReferencePtr owner = nullptr;
			PortPtr definingPort = nullptr;

		public:
			virtual ~CS_InteractionPoint() = default;

			virtual void startBehavior(const Class_Ptr&, const ParameterValueListPtr&) override;
			virtual ExecutionPtr dispatch(const OperationPtr&) override;
			virtual void send(const EventOccurrencePtr&) override;
			virtual ValuePtr copy() override;
			virtual bool checkAllParents(const ClassifierPtr&, const ClassifierPtr&) override;

		protected:
			virtual ValuePtr new_() override;

	}; // CS_InteractionPoint
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_H_ */
