/*
 * FunctionBehavior.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_

#include <OpaqueBehavior.h>

namespace fuml::syntax::commonbehavior
{
	class FunctionBehavior : public OpaqueBehavior
	{
	}; // FunctionBehavior
}

using FunctionBehavior = fuml::syntax::commonbehavior::FunctionBehavior;
using FunctionBehaviorPtr = std::shared_ptr<FunctionBehavior>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_FUNCTIONBEHAVIOR_H_ */
