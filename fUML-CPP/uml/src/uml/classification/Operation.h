/*
 * Operation.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_OPERATION_H_
#define UML_CLASSIFICATION_OPERATION_H_

#include <uml/classification/BehavioralFeature.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>

namespace uml::classification
{
	class Operation : virtual public BehavioralFeature
	{
		public:
			bool isQuery = false;
			bool isOrdered = false;
			bool isUnique = true;
			int lower = 0;
			UMLPrimitiveTypes::unlimitedNatural upper = 0;
			Class_Ptr_w class_;
			OperationListPtr redefinedOperation = std::make_shared<OperationList>();
			TypePtr type = nullptr;
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();
			InterfacePtr_w interface; // PSCS-specific

		private:
			OperationPtr_w thisOperationPtr;

		public:
			virtual ~Operation() = default;
			void setThisOperationPtr(OperationPtr_w);

			void setIsQuery(bool);
			virtual void addOwnedParameter(const ParameterPtr&) override;
			void addRedefinedOperation(const OperationPtr&);
			virtual void addMethod(const BehaviorPtr&) override;
			void _setClass(const Class_Ptr&);
			void _setInterface(const InterfacePtr&); // PSCS-specific
	};
// Operation
}

#endif /* UML_CLASSIFICATION_OPERATION_H_ */
