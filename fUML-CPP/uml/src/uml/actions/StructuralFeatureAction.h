/*
 * StructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_STRUCTURALFEATUREACTION_H_
#define UML_ACTIONS_STRUCTURALFEATUREACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class StructuralFeatureAction : public Action
	{
		public:
			StructuralFeaturePtr structuralFeature = nullptr;
			InputPinPtr object = nullptr;
		public:
			virtual ~StructuralFeatureAction() = 0;

			void setStructuralFeature(const StructuralFeaturePtr&);
			void setObject(const InputPinPtr&);
	};
// StructuralFeatureAction
}

#endif /* UML_ACTIONS_STRUCTURALFEATUREACTION_H_ */
