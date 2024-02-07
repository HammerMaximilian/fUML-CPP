/*
 * CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_

#include <pscs/semantics/structuredclassifiers/CS_StructuralFeatureOfInterfaceAccessStrategy.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy : public CS_StructuralFeatureOfInterfaceAccessStrategy
	{
		public:
			virtual ~CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy() = default;

			virtual FeatureValuePtr read(const CS_ObjectPtr&, const StructuralFeaturePtr&) override;
			virtual void write(const CS_ObjectPtr&, const StructuralFeaturePtr&, const ValueListPtr&, int) override;
	}; // CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_ */
