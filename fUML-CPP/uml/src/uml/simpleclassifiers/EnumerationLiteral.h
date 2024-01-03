/*
 * EnumerationLiteral.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_
#define UML_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_

#include <uml/classification/InstanceSpecification.h>

namespace uml::simpleclassifiers
{
	class EnumerationLiteral : public InstanceSpecification
	{
		public:
			EnumerationPtr_w enumeration;
			EnumerationPtr_w classifier;

		public:
			virtual ~EnumerationLiteral() = default;

			void _setEnumeration(const EnumerationPtr&);
	};
// EnumerationLiteral
}

#endif /* UML_SIMPLECLASSIFIERS_ENUMERATIONLITERAL_H_ */
