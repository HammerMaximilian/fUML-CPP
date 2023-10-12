/*
 * WriteStructuralFeatureActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_WRITESTRUCTURALFEATUREACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_WRITESTRUCTURALFEATUREACTIONACTIVATION_H_

#include <fuml/semantics/actions/StructuralFeatureActionActivation.h>

namespace fuml::semantics::actions
{
	class WriteStructuralFeatureActionActivation : public StructuralFeatureActionActivation
	{
		public:
			virtual ~WriteStructuralFeatureActionActivation() = 0;

			int position(const ValuePtr&, const ValueListPtr&, int);

	};
// WriteStructuralFeatureActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_WRITESTRUCTURALFEATUREACTIONACTIVATION_H_ */
