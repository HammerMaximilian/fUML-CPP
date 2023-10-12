/*
 * UnlimitedNaturalRelationalFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalRelationalFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~UnlimitedNaturalRelationalFunctionBehaviorExecution() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual bool doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>&) = 0;
	};
// UnlimitedNaturalRelationalFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_ */
