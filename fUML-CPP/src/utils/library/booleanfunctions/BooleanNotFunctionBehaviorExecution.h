/*
 * BooleanNotFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANNOTFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANNOTFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanNotFunctionBehaviorExecution : public BooleanFunctionBehaviorExecution
	{
		public:
			BooleanNotFunctionBehaviorExecution();
			virtual ~BooleanNotFunctionBehaviorExecution() = default;

			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) override;
			virtual ValuePtr new_() override;
	};
// BooleanNotFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANNOTFUNCTIONBEHAVIOREXECUTION_H_ */
