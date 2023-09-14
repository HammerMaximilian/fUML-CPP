/*
 * UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalToUnlimitedNaturalFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_ */
