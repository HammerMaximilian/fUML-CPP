/*
 * ValueSpecificationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_

#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ValueSpecificationAction : public Action
	{
		public:
			ValueSpecificationPtr value = nullptr;
			OutputPinPtr result = nullptr;

		public:
			void setValue(const ValueSpecificationPtr&);
			void setResult(const OutputPinPtr&);
	}; // ValueSpecificationAction
}

#endif /* FUML_SYNTAX_ACTIONS_VALUESPECIFICATIONACTION_H_ */
