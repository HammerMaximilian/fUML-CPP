/*
 * UnlimitedNaturalLessThanEqualFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalRelationalFunctionBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalLessThanEqualFunctionBehaviorExecution : public UnlimitedNaturalRelationalFunctionBehaviorExecution
	{
		public:
			UnlimitedNaturalLessThanEqualFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalLessThanEqualFunctionBehaviorExecution() = default;

			virtual bool doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalLessThanEqualFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALLESSTHANEQUALFUNCTIONBEHAVIOREXECUTION_H_ */
