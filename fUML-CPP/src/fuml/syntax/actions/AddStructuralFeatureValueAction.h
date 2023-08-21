/*
 * AddStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_
#define FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_

#include <memory>
#include "WriteStructuralFeatureAction.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class AddStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isReplaceAll = false;
			std::shared_ptr<InputPin> insertAt = nullptr;

		public:
			void setIsReplaceAll(bool);
			void setInsertAt(const std::shared_ptr<InputPin>&);
	}; // AddStructuralFeatureValueAction
}

#endif /* FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_ */