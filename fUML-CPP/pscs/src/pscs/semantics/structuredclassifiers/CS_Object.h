/*
 * CS_Object.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECT_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECT_H_

#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <pscs/semantics/fwd.h>
#include <pscs/semantics/structuredclassifiers/CS_LinkKind.h>
#include <uml/structuredclassifiers/ConnectorKind.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_Object : public Object_
	{
		public:
			virtual ~CS_Object() = default;

			ExecutionPtr dispatchIn(const OperationPtr&, const CS_InteractionPointPtr&);
			void sendIn(const EventOccurrencePtr&, const CS_InteractionPointPtr&);
			ReferenceListPtr selectTargetsForSending(const CS_LinkPtr&, const CS_InteractionPointPtr&, uml::structuredclassifiers::ConnectorKind, bool);
			ReferenceListPtr selectTargetsForDispatching(const CS_LinkPtr&, const CS_InteractionPointPtr&, uml::structuredclassifiers::ConnectorKind, const OperationPtr&, bool);
			void sendOut(const EventOccurrencePtr&, const CS_InteractionPointPtr&);
			ExecutionPtr dispatchOut(const OperationPtr&, CS_InteractionPointPtr&);
			virtual FeatureValuePtr getFeatureValue(const StructuralFeaturePtr&) override;
			virtual void setFeatureValue(const StructuralFeaturePtr&, const ValueListPtr&, int) override;
			bool contains(const Object_Ptr&);
			bool directlyContains(const Object_Ptr&);
			CS_ObjectListPtr getDirectContainers();
			bool isOperationProvided(const ReferencePtr&, const OperationPtr&);
			bool isOperationRequired(const ReferencePtr&, const OperationPtr&);
			CS_LinkKind getLinkKind(const CS_LinkPtr&, const CS_InteractionPointPtr&);
			CS_LinkListPtr getLinks(const CS_InteractionPointPtr&);
			bool hasValueForAFeature(const ValuePtr&);
			void sendOut(const EventOccurrencePtr&, const PortPtr&);
			ExecutionPtr dispatchOut(const OperationPtr&, const PortPtr&);
			ExecutionPtr dispatchIn(const OperationPtr&, const PortPtr&);
			void sendIn(const EventOccurrencePtr&, const PortPtr&);
			virtual bool checkAllParents(const ClassifierPtr&, const ClassifierPtr&) override;
			bool realizedInterface(const Class_Ptr&, const InterfacePtr&);
			bool isDescendant(const InterfacePtr&, const InterfacePtr&);
	}; // CS_Object
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECT_H_ */
