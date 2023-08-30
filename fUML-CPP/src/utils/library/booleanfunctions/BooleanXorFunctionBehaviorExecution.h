/*
 * BooleanXorFunctionBehaviorExecution.h
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANXORFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANXORFUNCTIONBEHAVIOREXECUTION_H_

#include <utils/library/booleanfunctions/BooleanFunctionBehaviorExecution.h>

namespace fuml::library::booleanfunctions
{
	class BooleanXorFunctionBehaviorExecution : public BooleanFunctionBehaviorExecution
	{
		public:
			virtual ~BooleanXorFunctionBehaviorExecution() = default;

			virtual bool doBooleanFunction(const std::shared_ptr<std::vector<bool>>&) override;
			virtual ValuePtr new_() override;
	};
// BooleanXorFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_BOOLEANFUNCTIONS_BOOLEANXORFUNCTIONBEHAVIOREXECUTION_H_ */
