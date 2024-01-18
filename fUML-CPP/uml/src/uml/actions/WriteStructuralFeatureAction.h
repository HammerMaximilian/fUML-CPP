/*
 * WriteStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_
#define UML_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_

#include <uml/actions/StructuralFeatureAction.h>

namespace uml::actions
{
	class WriteStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			InputPinPtr value = nullptr;
			OutputPinPtr result = nullptr;

		public:
			virtual ~WriteStructuralFeatureAction() = 0;

			void setResult(const OutputPinPtr&);
			void setValue(const InputPinPtr&);
	};
// WriteStructuralFeatureAction
}

#endif /* UML_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_ */
