/*
 * ValueSpecificationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_VALUESPECIFICATIONACTION_H_
#define UML_ACTIONS_VALUESPECIFICATIONACTION_H_

#include <uml/actions/Action.h>

namespace uml::actions
{
	class ValueSpecificationAction : public Action
	{
		public:
			ValueSpecificationPtr value = nullptr;
			OutputPinPtr result = nullptr;

		public:
			virtual ~ValueSpecificationAction() = default;

			void setValue(const ValueSpecificationPtr&);
			void setResult(const OutputPinPtr&);
	};
// ValueSpecificationAction
}

#endif /* UML_ACTIONS_VALUESPECIFICATIONACTION_H_ */
