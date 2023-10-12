/*
 * UnlimitedNaturalMinFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMINFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMINFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalMinFunctionBehaviorExecution : public UnlimitedNaturalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalMinFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalMinFunctionBehaviorExecution() = default;

			virtual int doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalMinFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMINFUNCTIONBEHAVIOREXECUTION_H_ */
