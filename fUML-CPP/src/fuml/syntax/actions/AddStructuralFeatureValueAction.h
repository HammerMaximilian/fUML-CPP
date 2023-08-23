/*
 * AddStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_
#define FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_

#include <fuml/syntax/actions/WriteStructuralFeatureAction.h>

namespace fuml::syntax::actions
{
	class AddStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isReplaceAll = false;
			InputPinPtr insertAt = nullptr;

		public:
			void setIsReplaceAll(bool);
			void setInsertAt(const InputPinPtr&);
	}; // AddStructuralFeatureValueAction
}

#endif /* FUML_SYNTAX_ACTIONS_ADDSTRUCTURALFEATUREVALUEACTION_H_ */
