/*
 * OpaqueBehavior.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_

#include <memory>
#include "Behavior.h"
#include "UMLPrimitiveTypes/stringList.h"

namespace fuml::syntax::commonbehavior
{
	class OpaqueBehavior : public Behavior
	{
		public:
			std::shared_ptr<UMLPrimitiveTypes::stringList> body = std::make_shared<UMLPrimitiveTypes::stringList>();
			std::shared_ptr<UMLPrimitiveTypes::stringList> language = std::make_shared<UMLPrimitiveTypes::stringList>();

		public:
			void addBody(std::string);
			void addLanguage(std::string);
	}; // OpaqueBehavior
}

using OpaqueBehavior = fuml::syntax::commonbehavior::OpaqueBehavior;
using OpaqueBehaviorPtr = std::shared_ptr<OpaqueBehavior>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_ */
