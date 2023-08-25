/*
 * FunctionBehavior.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_

#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>

namespace fuml::syntax::commonbehavior
{
	class FunctionBehavior : public OpaqueBehavior
	{
		public:
			virtual ~FunctionBehavior() = default;
			
	}; // FunctionBehavior
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_ */
