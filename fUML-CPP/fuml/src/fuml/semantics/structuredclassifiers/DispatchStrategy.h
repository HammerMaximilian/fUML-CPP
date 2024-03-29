/*
 * DispatchStrategy.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_DISPATCHSTRATEGY_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_DISPATCHSTRATEGY_H_

#include <fuml/semantics/loci/SemanticStrategy.h>
#include <uml/fwd.h>

namespace fuml::semantics::structuredclassifiers
{
	class DispatchStrategy : public SemanticStrategy
	{
		public:
			virtual ~DispatchStrategy() = 0;

			virtual std::string getName() override;
			ExecutionPtr dispatch(const Object_Ptr&, const OperationPtr&);
			ExecutionPtr dispatch(const Object_Ptr&, const OperationPtr&, bool); //implemented in DispatchStrategyExtension.cpp
			virtual BehaviorPtr getMethod(const Object_Ptr&, const OperationPtr&);
			virtual BehaviorPtr getMethod(const Object_Ptr&, const OperationPtr&, bool); // implemented in DispatchStrategyExtension.cpp
	};
// DispatchStrategy
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_DISPATCHSTRATEGY_H_ */
