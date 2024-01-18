/*
 * OpaqueExpression.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_VALUES_OPAQUEEXPRESSION_H_
#define UML_VALUES_OPAQUEEXPRESSION_H_

#include <uml/values/ValueSpecification.h>
#include <UMLPrimitiveTypes/stringList.h>

namespace uml::values
{
    class OpaqueExpression : public ValueSpecification // PSCS-specific
    {
    	public:
			std::shared_ptr<UMLPrimitiveTypes::stringList> body = std::make_shared<UMLPrimitiveTypes::stringList>();
			std::shared_ptr<UMLPrimitiveTypes::stringList> language = std::make_shared<UMLPrimitiveTypes::stringList>();
    		BehaviorPtr behavior = nullptr;

		public:
			virtual ~OpaqueExpression() = default;

			void addBody(std::string);
			void addLanguage(std::string);
			void setBehavior(const BehaviorPtr&);
    }; // OpaqueExpression
}

#endif /* UML_VALUES_OPAQUEEXPRESSION_H_ */
