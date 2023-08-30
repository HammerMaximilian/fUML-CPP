/*
 * ClearStructuralFeatureActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_

#include <fuml/semantics/actions/StructuralFeatureActionActivation.h>

namespace fuml::semantics::actions
{
	class ClearStructuralFeatureActionActivation : public StructuralFeatureActionActivation
	{
		public:
			virtual ~ClearStructuralFeatureActionActivation() = default;

			virtual void doAction() override;

	};
// ClearStructuralFeatureActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_H_ */
