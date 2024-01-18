/*
 * AddStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_
#define UML_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_

#include <uml/actions/WriteStructuralFeatureAction.h>

namespace uml::actions
{
	class AddStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isReplaceAll = false;
			InputPinPtr insertAt = nullptr;

		public:
			virtual ~AddStructuralFeatureValueAction() = default;

			void setIsReplaceAll(bool);
			void setInsertAt(const InputPinPtr&);
	};
// AddStructuralFeatureValueAction
}

#endif /* UML_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_ */
