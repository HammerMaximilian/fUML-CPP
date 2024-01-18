/*
 * ClearStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_
#define UML_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_

#include <uml/actions/StructuralFeatureAction.h>

namespace uml::actions
{
	class ClearStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ClearStructuralFeatureAction() = default;

			void setResult(const OutputPinPtr&);
	};
// ClearStructuralFeatureAction
}

#endif /* UML_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_ */
