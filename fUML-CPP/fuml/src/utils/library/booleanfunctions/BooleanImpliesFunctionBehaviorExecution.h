/*
 * BooleanImpliesFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANIMPLIESFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANIMPLIESFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanImpliesFunctionBehaviorExecution : public BooleanFunctionBehaviorExecution
	{
		public:
			BooleanImpliesFunctionBehaviorExecution();
			virtual ~BooleanImpliesFunctionBehaviorExecution() = default;

			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) override;
			virtual ValuePtr new_() override;
	};
// BooleanImpliesFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANIMPLIESFUNCTIONBEHAVIOREXECUTION_H_ */
