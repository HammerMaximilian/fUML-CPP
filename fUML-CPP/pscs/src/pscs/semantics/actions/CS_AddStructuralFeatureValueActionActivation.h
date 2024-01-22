/*
 * CS_AddStructuralFeatureValueActionActivation.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_
#define PSCS_SEMANTICS_ACTIONS_CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_

#include <fuml/semantics/actions/AddStructuralFeatureValueActionActivation.h>

namespace pscs::semantics::actions
{
	class CS_AddStructuralFeatureValueActionActivation : public AddStructuralFeatureValueActionActivation
	{
		public:
			virtual ~CS_AddStructuralFeatureValueActionActivation() = default;

			virtual void doAction() override;
			void doActionDefault();
	}; // CS_AddStructuralFeatureValueActionActivation
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_ */
