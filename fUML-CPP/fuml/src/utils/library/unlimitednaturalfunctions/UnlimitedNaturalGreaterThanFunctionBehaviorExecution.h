/*
 * UnlimitedNaturalGreaterThanFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalRelationalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalGreaterThanFunctionBehaviorExecution : public UnlimitedNaturalRelationalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalGreaterThanFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalGreaterThanFunctionBehaviorExecution() = default;

			virtual bool doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalGreaterThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALGREATERTHANFUNCTIONBEHAVIOREXECUTION_H_ */
