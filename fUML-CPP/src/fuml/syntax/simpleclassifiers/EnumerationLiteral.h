/*
 * EnumerationLiteral.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_

#include <fUML/syntax/classification/InstanceSpecification.h>

namespace fuml::syntax::simpleclassifiers
{
	class EnumerationLiteral : public InstanceSpecification
	{
		public:
			EnumerationPtr enumeration = nullptr;
			EnumerationPtr classifier = nullptr;

		public:
			virtual ~EnumerationLiteral() = default;
		
			void _setEnumeration(
				const EnumerationPtr&);
	}; // EnumerationLiteral
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_ */
