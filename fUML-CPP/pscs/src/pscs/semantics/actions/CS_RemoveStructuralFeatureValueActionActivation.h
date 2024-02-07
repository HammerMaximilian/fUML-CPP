/*
 * CS_RemoveStructuralFeatureValueActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_

#include <fuml/semantics/actions/RemoveStructuralFeatureValueActionActivation.h>
#include <pscs/semantics/fwd.h>

namespace pscs::semantics::actions
{
	class CS_RemoveStructuralFeatureValueActionActivation : public RemoveStructuralFeatureValueActionActivation
	{
		public:
			virtual ~CS_RemoveStructuralFeatureValueActionActivation() = default;

			virtual void doAction() override;
			CS_LinkListPtr getLinksToDestroy(const StructuredValuePtr&, const StructuralFeaturePtr&, const ValuePtr&);
			ValueListPtr getPotentialLinkEnds(const CS_ReferencePtr&, const StructuralFeaturePtr&);
	}; // CS_RemoveStructuralFeatureValueActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_ */
