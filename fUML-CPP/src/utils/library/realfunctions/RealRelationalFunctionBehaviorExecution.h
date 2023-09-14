/*
 * RealRelationalFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_REALFUNCTIONS_REALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_REALFUNCTIONS_REALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::realfunctions
{
	class RealRelationalFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			virtual ~RealRelationalFunctionBehaviorExecution() = 0;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual bool doRealFunction(const std::shared_ptr<std::vector<float>>&) = 0;
	};
// RealRelationalFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_REALFUNCTIONS_REALRELATIONALFUNCTIONBEHAVIOREXECUTION_H_ */
