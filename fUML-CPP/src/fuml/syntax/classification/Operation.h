/*
 * Operation.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_OPERATION_H_
#define FUML_SYNTAX_CLASSIFICATION_OPERATION_H_

#include <fuml/syntax/classification/BehavioralFeature.h>
#include <fuml/syntax/classification/OperationList.h>
#include <fuml/syntax/classification/ParameterList.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Parameter;
}
using Parameter = fuml::syntax::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;

namespace fuml::syntax::commonstructure
{
	class Type;
}
using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;

namespace fuml::syntax::structuredclassifiers
{
	class Class_;
}
using Class_ = fuml::syntax::structuredclassifiers::Class_;
using Class_Ptr = std::shared_ptr<Class_>;

namespace fuml::syntax::classification
{
	class Operation : virtual public BehavioralFeature
	{
		using OperationPtr = std::shared_ptr<Operation>;

		public:
			bool isQuery = false;
			bool isOrdered = false;
			bool isUnique = true;
			int lower = 0;
			UMLPrimitiveTypes::unlimitedNatural upper = 0;
			Class_Ptr class_ = nullptr;
			OperationListPtr redefinedOperation = std::make_shared<OperationList>();
			TypePtr type = nullptr;
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();

		private:
			std::weak_ptr<Operation> thisOperationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Operation>);

			void setIsQuery(bool);
			void addOwnedParameter(
					const ParameterPtr&);
			void addRedefinedOperation(
					const OperationPtr&);
			void addMethod(
					const BehaviorPtr&);
			void _setClass(const Class_Ptr&);
	}; // Operation
}

using Operation = fuml::syntax::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;

#endif /* FUML_SYNTAX_CLASSIFICATION_OPERATION_H_ */
