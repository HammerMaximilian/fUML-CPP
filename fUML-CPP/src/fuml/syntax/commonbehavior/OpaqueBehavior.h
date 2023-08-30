/*
 * OpaqueBehavior.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_

#include <fuml/syntax/commonbehavior/Behavior.h>
#include <string>
#include <UMLPrimitiveTypes/stringList.h>

namespace fuml::syntax::commonbehavior
{
	class OpaqueBehavior : public Behavior
	{
		public:
			std::shared_ptr<UMLPrimitiveTypes::stringList> body = std::make_shared<UMLPrimitiveTypes::stringList>();
			std::shared_ptr<UMLPrimitiveTypes::stringList> language = std::make_shared<UMLPrimitiveTypes::stringList>();

		public:
			virtual ~OpaqueBehavior() = default;

			void addBody(std::string);
			void addLanguage(std::string);
	};
// OpaqueBehavior
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_ */
