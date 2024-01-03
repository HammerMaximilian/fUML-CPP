/*
 * RemoveStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_
#define UML_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_

#include <uml/actions/WriteStructuralFeatureAction.h>

namespace uml::actions
{
	class RemoveStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isRemoveDuplicates = false;
			InputPinPtr removeAt = nullptr;

		public:
			virtual ~RemoveStructuralFeatureValueAction() = default;

			void setIsRemoveDuplicates(bool);
			void setRemoveAt(const InputPinPtr&);
	};
// RemoveStructuralFeatureValueAction
}

#endif /* UML_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_ */
