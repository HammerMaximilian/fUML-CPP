/*
 * RedefinitionBasedDispatchStrategy.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_H_

#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>

namespace fuml::semantics::structuredclassifiers
{
	class RedefinitionBasedDispatchStrategy : public DispatchStrategy
	{
		public:
			virtual ~RedefinitionBasedDispatchStrategy() = default;
		
			virtual BehaviorPtr getMethod(
					const Object_Ptr&,
					const OperationPtr&) override;
			bool operationsMatch(
					const OperationPtr&,
					const OperationPtr&);
	}; // RedefinitionBasedDispatchStrategy
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REDEFINITIONBASEDDISPATCHSTRATEGY_H_ */
