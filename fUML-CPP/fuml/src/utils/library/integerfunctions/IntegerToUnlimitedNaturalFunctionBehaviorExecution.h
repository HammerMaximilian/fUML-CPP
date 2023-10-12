/*
 * IntegerToUnlimitedNaturalFunctionBehaviorExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::integerfunctions
{
	class IntegerToUnlimitedNaturalFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			IntegerToUnlimitedNaturalFunctionBehaviorExecution();
			virtual ~IntegerToUnlimitedNaturalFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// IntegerToUnlimitedNaturalFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_INTEGERFUNCTIONS_INTEGERTOUNLIMITEDNATURALFUNCTIONBEHAVIOREXECUTION_H_ */
