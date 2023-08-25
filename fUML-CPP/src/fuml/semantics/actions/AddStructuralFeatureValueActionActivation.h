/*
 * AddStructuralFeatureValueActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_

#include <fuml/semantics/actions/WriteStructuralFeatureActionActivation.h>

namespace fuml::semantics::actions
{
	class AddStructuralFeatureValueActionActivation : public WriteStructuralFeatureActionActivation
	{
		public:
			virtual ~AddStructuralFeatureValueActionActivation() = default;

			virtual void doAction() override;

	}; // AddStructuralFeatureValueActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_H_ */
