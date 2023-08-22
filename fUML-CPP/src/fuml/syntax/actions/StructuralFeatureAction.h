/*
 * StructuralFeatureAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_
#define FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::classification
{
	class StructuralFeature;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class StructuralFeatureAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::classification::StructuralFeature> structuralFeature = nullptr;
			std::shared_ptr<InputPin> object = nullptr;
		public:
			virtual ~StructuralFeatureAction() = 0;

			void setStructuralFeature(
					const std::shared_ptr<fuml::syntax::classification::StructuralFeature>&);
			void setObject(const std::shared_ptr<InputPin>&);
	}; // StructuralFeatureAction
}

using StructuralFeatureAction = fuml::syntax::actions::StructuralFeatureAction;
using StructuralFeatureActionPtr = std::shared_ptr<StructuralFeatureAction>;

#endif /* FUML_SYNTAX_ACTIONS_STRUCTURALFEATUREACTION_H_ */
