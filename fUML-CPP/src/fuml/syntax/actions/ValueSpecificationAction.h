/*
 * ValueSpecificationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_

#include <memory>
#include "Action.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}
namespace fuml::syntax::actions
{
	class OutputPin;
}

namespace fuml::syntax::actions
{
	class ValueSpecificationAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::values::ValueSpecification> value = nullptr;
			std::shared_ptr<OutputPin> result = nullptr;

		public:
			void setValue(const std::shared_ptr<fuml::syntax::values::ValueSpecification>&);
			void setResult(const std::shared_ptr<OutputPin>&);
	}; // ValueSpecificationAction
}

using ValueSpecificationAction = fuml::syntax::actions::ValueSpecificationAction;
using ValueSpecificationActionPtr = std::shared_ptr<ValueSpecificationAction>;

#endif /* FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_ */
