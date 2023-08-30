/*
 * BooleanOrFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANORFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANORFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanOrFunctionBehaviorExecution : public BooleanFunctionBehaviorExecution
	{
		public:
			virtual ~BooleanOrFunctionBehaviorExecution() = default;

			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) override;
			virtual ValuePtr new_() override;
	};
// BooleanOrFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANORFUNCTIONBEHAVIOREXECUTION_H_ */
