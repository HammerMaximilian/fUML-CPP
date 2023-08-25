/*
 * RemoveStructuralFeatureValueActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_

#include <fuml/semantics/actions/WriteStructuralFeatureActionActivation.h>

namespace fuml::semantics::actions
{
	class RemoveStructuralFeatureValueActionActivation : public WriteStructuralFeatureActionActivation
	{
		public:
			virtual ~RemoveStructuralFeatureValueActionActivation() = default;

			virtual void doAction() override;

	}; // RemoveStructuralFeatureValueActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_H_ */
