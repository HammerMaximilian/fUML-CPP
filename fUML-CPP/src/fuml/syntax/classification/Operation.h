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

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
namespace fuml::syntax::commonstructure
{
	class Type;
}
namespace fuml::syntax::structuredclassifiers
{
	class Class_;
}

namespace fuml::syntax::classification
{
	class Operation : virtual public fuml::syntax::classification::BehavioralFeature
	{
		public:
			bool isQuery = false;
			bool isOrdered = false;
			bool isUnique = true;
			int lower = 0;
			UMLPrimitiveTypes::unlimitedNatural upper = 0;
			std::shared_ptr<fuml::syntax::structuredclassifiers::Class_> class_ = nullptr;
			std::shared_ptr<fuml::syntax::classification::OperationList> redefinedOperation = std::make_shared<fuml::syntax::classification::OperationList>();
			std::shared_ptr<fuml::syntax::commonstructure::Type> type = nullptr;
			std::shared_ptr<fuml::syntax::classification::ParameterList> ownedParameter = std::make_shared<fuml::syntax::classification::ParameterList>();

		private:
			std::weak_ptr<fuml::syntax::classification::Operation> thisOperationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::classification::Operation>);

			void setIsQuery(bool);
			void addOwnedParameter(
					const std::shared_ptr<fuml::syntax::classification::Parameter>&);
			void addRedefinedOperation(
					const std::shared_ptr<fuml::syntax::classification::Operation>&);
			void addMethod(
					const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>&);
			void _setClass(const std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>&);
	}; // Operation
}

using Operation = fuml::syntax::classification::Operation;
using OperationPtr = std::shared_ptr<Operation>;

#endif /* FUML_SYNTAX_CLASSIFICATION_OPERATION_H_ */
