/*
 * CS_ClearStructuralFeatureActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_

#include <fuml/semantics/actions/ClearStructuralFeatureActionActivation.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::actions
{
	class CS_ClearStructuralFeatureActionActivation : public ClearStructuralFeatureActionActivation
	{
		public:
			virtual ~CS_ClearStructuralFeatureActionActivation() = default;

			virtual void doAction() override;
			CS_LinkListPtr getLinksToDestroy(const StructuredValuePtr&, const StructuralFeaturePtr&);
			ValueListPtr getPotentialLinkEnds(const CS_ReferencePtr&, const StructuralFeaturePtr&);
	}; // CS_ClearStructuralFeatureActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_ */
