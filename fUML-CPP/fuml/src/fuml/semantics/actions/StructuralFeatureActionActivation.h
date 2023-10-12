/*
 * StructuralFeatureActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_STRUCTURALFEATUREACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_STRUCTURALFEATUREACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class StructuralFeatureActionActivation : public ActionActivation
	{
		public:
			virtual ~StructuralFeatureActionActivation() = 0;
	};
// StructuralFeatureActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_STRUCTURALFEATUREACTIONACTIVATION_H_ */
