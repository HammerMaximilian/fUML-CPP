/*
 * StructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class StructuralFeatureAction : public Action
	{
		public:
			StructuralFeaturePtr structuralFeature = nullptr;
			InputPinPtr object = nullptr;
		public:
			virtual ~StructuralFeatureAction() = 0;

			void setStructuralFeature(const StructuralFeaturePtr&);
			void setObject(const InputPinPtr&);
	};
// StructuralFeatureAction
}

#endif /* FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_ */
