/*
 * UnlimitedNaturalMaxFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMAXFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMAXFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalMaxFunctionBehaviorExecution : public UnlimitedNaturalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalMaxFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalMaxFunctionBehaviorExecution() = default;

			virtual int doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalMaxFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALMAXFUNCTIONBEHAVIOREXECUTION_H_ */
