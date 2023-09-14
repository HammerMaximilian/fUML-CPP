/*
 * UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalRelationalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution : public UnlimitedNaturalRelationalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution() = default;

			virtual bool doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalGreaterThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
