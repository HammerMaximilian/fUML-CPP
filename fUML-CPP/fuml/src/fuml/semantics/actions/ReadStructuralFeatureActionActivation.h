/*
 * ReadStructuralFeatureActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_READSTRUCTURALFEATUREACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_READSTRUCTURALFEATUREACTIONACTIVATION_H_

#include <fuml/semantics/actions/StructuralFeatureActionActivation.h>

namespace fuml::semantics::actions
{
	class ReadStructuralFeatureActionActivation : public StructuralFeatureActionActivation
	{
		public:
			virtual ~ReadStructuralFeatureActionActivation() = default;

			virtual void doAction() override;

	};
// ReadStructuralFeatureActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_READSTRUCTURALFEATUREACTIONACTIVATION_H_ */
