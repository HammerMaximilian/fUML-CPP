/*
 * ReadStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_

#include <fuml/syntax/actions/StructuralFeatureAction.h>

namespace fuml::syntax::actions
{
	class ReadStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ReadStructuralFeatureAction() = default;
		
			void setResult(const OutputPinPtr&);
	}; // ReadStructuralFeatureAction
}

#endif /* FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_ */
