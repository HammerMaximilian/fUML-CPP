/*
 * ClearStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_

#include <memory>
#include "StructuralFeatureAction.h"

namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ClearStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ClearStructuralFeatureAction
}

using ClearStructuralFeatureAction = fuml::syntax::actions::ClearStructuralFeatureAction;
using ClearStructuralFeatureActionPtr = std::shared_ptr<ClearStructuralFeatureAction>;

#endif /* FUML_SYNTAX_ACTIONS_CLEARSTRUCTURALFEATUREACTION_H_ */
