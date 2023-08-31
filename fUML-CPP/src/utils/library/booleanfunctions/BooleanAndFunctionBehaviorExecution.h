/*
 * BooleanAndFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANANDFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANANDFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanAndFunctionBehaviorExecution : public BooleanFunctionBehaviorExecution
	{
		public:
			BooleanAndFunctionBehaviorExecution();
			virtual ~BooleanAndFunctionBehaviorExecution() = default;

			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) override;
			virtual ValuePtr new_() override;
	};
// BooleanAndFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANANDFUNCTIONBEHAVIOREXECUTION_H_ */
