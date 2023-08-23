/*
 * RemoveStructuralFeatureValueAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_
#define FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_

#include <fuml/syntax/actions/WriteStructuralFeatureAction.h>

namespace fuml::syntax::actions
{
	class RemoveStructuralFeatureValueAction : public WriteStructuralFeatureAction
	{
		public:
			bool isRemoveDuplicates = false;
			InputPinPtr removeAt = nullptr;

		public:
			void setIsRemoveDuplicates(bool);
			void setRemoveAt(const InputPinPtr&);
	}; // RemoveStructuralFeatureValueAction
}

#endif /* FUML_SYNTAX_ACTIONS_REMOVESTRUCTURALFEATUREVALUEACTION_H_ */
