/*
 * UnlimitedNaturalLessThanFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalRelationalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalLessThanFunctionBehaviorExecution : public UnlimitedNaturalRelationalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalLessThanFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalLessThanFunctionBehaviorExecution() = default;

			virtual bool doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalLessThanFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANFUNCTIONBEHAVIOREXECUTION_H_ */
