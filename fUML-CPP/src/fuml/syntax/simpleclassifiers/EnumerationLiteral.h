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
using Enumeration = fuml::syntax::simpleclassifiers::Enumeration;
using EnumerationPtr = std::shared_ptr<Enumeration>;

namespace fuml::syntax::simpleclassifiers
{
	class EnumerationLiteral : public fuml::syntax::classification::InstanceSpecification
	{
		public:
			EnumerationPtr enumeration = nullptr;
			EnumerationPtr classifier = nullptr;

		public:
			void _setEnumeration(
				const EnumerationPtr&);
	}; // EnumerationLiteral
}

using EnumerationLiteral = fuml::syntax::simpleclassifiers::EnumerationLiteral;
using EnumerationLiteralPtr = std::shared_ptr<EnumerationLiteral>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_ */
