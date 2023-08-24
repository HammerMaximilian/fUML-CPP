/*
 * ClearStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_

#include <fuml/syntax/actions/StructuralFeatureAction.h>

namespace fuml::syntax::actions
{
	class ClearStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			OutputPinPtr result = nullptr;

		public:
			virtual ~ClearStructuralFeatureAction() = default;
		
			void setResult(const OutputPinPtr&);
	}; // ClearStructuralFeatureAction
}

#endif /* FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_ */
