/*
 * CS_DefaultConstructStrategy.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_DEFAULTCONSTRUCTSTRATEGY_H_
#define PSCS_SEMANTICS_ACTIONS_CS_DEFAULTCONSTRUCTSTRATEGY_H_

#include <pscs/semantics/actions/CS_ConstructStrategy.h>

namespace pscs::semantics::actions
{
	class CS_DefaultConstructStrategy : public CS_ConstructStrategy
	{
		public:
			LocusPtr locus = nullptr;
			AssociationPtr defaultAssociation = nullptr;
			Class_ListPtr generatedRealizingClasses = std::make_shared<Class_List>();

		public:
			virtual ~CS_DefaultConstructStrategy() = default;

			virtual Object_Ptr construct(const OperationPtr&, const CS_ObjectPtr&) override;
			Object_Ptr constructObject(const CS_ObjectPtr&, const Class_Ptr&);
			void addStructuralFeatureValue(const CS_ReferencePtr&, const PropertyPtr&, const ValuePtr&);
			void generateArrayPattern(const CS_ReferencePtr&, const ConnectorPtr&);
			ReferenceListPtr getValuesFromConnectorEnd(const CS_ReferencePtr&, const ConnectorEndPtr&);
			void generateStarPattern(const CS_ReferencePtr&, const ConnectorPtr&);
			bool canInstantiate(const PropertyPtr&);
			int getCardinality(const ConnectorEndPtr&);
			bool isArrayPattern(const ConnectorPtr&);
			bool isStarPattern(const ConnectorPtr&);
			AssociationPtr getDefaultAssociation();
			Object_Ptr instantiateInterface(const InterfacePtr&, const LocusPtr&);
			Class_Ptr getRealizingClass(const InterfacePtr&);
			Class_Ptr generateRealizingClass(const InterfacePtr&, std::string);
	}; // CS_DefaultConstructStrategy
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_DEFAULTCONSTRUCTSTRATEGY_H_ */
