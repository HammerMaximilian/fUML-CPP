/*
 * CS_DispatchOperationOfInterfaceStrategy.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_H_

#include <fuml/semantics/structuredclassifiers/RedefinitionBasedDispatchStrategy.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_DispatchOperationOfInterfaceStrategy : public RedefinitionBasedDispatchStrategy
	{
		public:
		virtual ~CS_DispatchOperationOfInterfaceStrategy() = default;

		virtual bool operationsMatch(const OperationPtr&, const OperationPtr&) override;
	}; // CS_DispatchOperationOfInterfaceStrategy
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_H_ */
