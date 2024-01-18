/*
 * OpaqueBehavior.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_
#define UML_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_

#include <uml/commonbehavior/Behavior.h>
#include <string>
#include <UMLPrimitiveTypes/stringList.h>

namespace uml::commonbehavior
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

#endif /* UML_COMMONBEHAVIOR_OPAQUEBEHAVIOR_H_ */
