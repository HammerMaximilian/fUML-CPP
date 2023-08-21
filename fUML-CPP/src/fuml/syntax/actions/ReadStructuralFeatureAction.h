/*
 * ReadStructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_

#include <memory>
#include "StructuralFeatureAction.h"

namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ReadStructuralFeatureAction : public StructuralFeatureAction
	{
		public:
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ReadStructuralFeatureAction
}

#endif /* FUML_SYNTAX_ACTIONS_READSTRUCTURALFEATUREACTION_H_ */
