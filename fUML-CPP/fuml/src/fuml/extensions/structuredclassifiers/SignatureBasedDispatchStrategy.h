/*
 * SignatureBasedDispatchStrategy.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_SIGNATUREBASEDDISPATCHSTRATEGY_H_
#define FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_SIGNATUREBASEDDISPATCHSTRATEGY_H_

#include <fuml/semantics/structuredclassifiers/DispatchStrategy.h>

namespace fuml::extensions::structuredclassifiers
{
	class SignatureBasedDispatchStrategy : public DispatchStrategy
	{
		public:
			virtual ~SignatureBasedDispatchStrategy() = default;

			virtual BehaviorPtr getMethod(const Object_Ptr&, const OperationPtr&) override;
			virtual BehaviorPtr getMethod(const Object_Ptr&, const OperationPtr&, bool) override;
			BehaviorPtr getMethod(const Class_Ptr&, const OperationPtr&);
			virtual bool operationsMatch(const OperationPtr&, const OperationPtr&);
			bool isSpecializationOf(const ClassifierPtr&, const ClassifierPtr&);
	};
// SignatureBasedDispatchStrategy
}

#endif /* FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_SIGNATUREBASEDDISPATCHSTRATEGY_H_ */
