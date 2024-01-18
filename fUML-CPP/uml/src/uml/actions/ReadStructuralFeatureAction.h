/*
 * ReadStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_READSTRUCTURALFEATUREACTION_H_
#define UML_ACTIONS_READSTRUCTURALFEATUREACTION_H_

#include <uml/actions/StructuralFeatureAction.h>

namespace uml::actions
{
	class ReadStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadStructuralFeatureAction() = default;

			void setResult(const OutputPinPtr&);
	};
// ReadStructuralFeatureAction
}

#endif /* UML_ACTIONS_READSTRUCTURALFEATUREACTION_H_ */
