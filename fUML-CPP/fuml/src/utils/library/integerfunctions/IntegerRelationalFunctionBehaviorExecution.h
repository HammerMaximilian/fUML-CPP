/*
 * IntegerRelationalFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERRELATIONALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERRELATIONALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerRelationalFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~IntegerRelationalFunctionBehaviorExecution() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual bool doIntegerFunction(const std::shared_ptr<std::vector<int>>&) = 0;
	};
// IntegerRelationalFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERRELATIONALFUNCTIONBEHAVIOREXECUTION_H_ */
