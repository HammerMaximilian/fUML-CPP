/*
 * WriteStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_

#include <fuml/syntax/actions/StructuralFeatureAction.h>
#include <memory>

namespace fuml::syntax::actions
{
	class InputPin;
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class WriteStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			std::shared_ptr<InputPin> value = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			virtual ~WriteStructuralFeatureAction() = 0;

			void setResult(const std::shared_ptr<OutputPin>&);
			void setValue(const std::shared_ptr<InputPin>&);
	}; // WriteStructuralFeatureAction
}

using WriteStructuralFeatureAction = fuml::syntax::actions::WriteStructuralFeatureAction;
using WriteStructuralFeatureActionPtr = std::shared_ptr<WriteStructuralFeatureAction>;

#endif /* FUML_SYNTAX_ACTIONS_WRITESTRUCTURALFEATUREACTION_H_ */
