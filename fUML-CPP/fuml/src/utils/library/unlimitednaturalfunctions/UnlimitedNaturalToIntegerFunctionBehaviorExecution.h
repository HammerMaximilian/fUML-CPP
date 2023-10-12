/*
 * UnlimitedNaturalToIntegerFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalToIntegerFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			UnlimitedNaturalToIntegerFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalToIntegerFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalToIntegerFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOINTEGERFUNCTIONBEHAVIOREXECUTION_H_ */
