/*
 * RemoveStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_
#define FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_

#include <memory>
#include "WriteStructuralFeatureAction.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class RemoveStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isRemoveDuplicates = false;
			std::shared_ptr<InputPin> removeAt = nullptr;

		public:
			void setIsRemoveDuplicates(bool);
			void setRemoveAt(const std::shared_ptr<InputPin>&);
	}; // RemoveStructuralFeatureValueAction
}

using RemoveStructuralFeatureValueAction = fuml::syntax::actions::RemoveStructuralFeatureValueAction;
using RemoveStructuralFeatureValueActionPtr = std::shared_ptr<RemoveStructuralFeatureValueAction>;

#endif /* FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_ */
