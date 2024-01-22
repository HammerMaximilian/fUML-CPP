/*
 * CS_StructuralFeatureOfInterfaceAccessStrategy.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_

#include <fuml/semantics/loci/SemanticStrategy.h>
#include <pscs/semantics/fwd.h>
#include <uml/fwd.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_StructuralFeatureOfInterfaceAccessStrategy : public SemanticStrategy
	{
		public:
			virtual ~CS_StructuralFeatureOfInterfaceAccessStrategy() = 0;

			virtual std::string getName() override;
			virtual FeatureValuePtr read(const CS_ObjectPtr&, const StructuralFeaturePtr&) = 0;
			virtual void write(const CS_ObjectPtr&, const StructuralFeaturePtr&, const ValuesListPtr&, int) = 0;
	}; // CS_StructuralFeatureOfInterfaceAccessStrategy
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_H_ */
