/*
 * EnumerationLiteral.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_

#include <memory>
#include "fUML/syntax/classification/InstanceSpecification.h"

namespace fuml::syntax::simpleclassifiers
{
	class Enumeration;
}

namespace fuml::syntax::simpleclassifiers
{
	class EnumerationLiteral : public fuml::syntax::classification::InstanceSpecification
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::Enumeration> enumeration = nullptr;
			std::shared_ptr<fuml::syntax::simpleclassifiers::Enumeration> classifier = nullptr;

		public:
			void _setEnumeration(
				const std::shared_ptr<fuml::syntax::simpleclassifiers::Enumeration>&);
	}; // EnumerationLiteral
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_ */
