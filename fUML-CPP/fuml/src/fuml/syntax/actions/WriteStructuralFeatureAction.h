/*
 * WriteStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_

#include <fuml/syntax/actions/StructuralFeatureAction.h>

namespace fuml::syntax::actions
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

#endif /* FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_ */
