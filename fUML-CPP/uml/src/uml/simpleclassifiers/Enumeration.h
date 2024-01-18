/*
 * Enumeration.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_ENUMERATION_H_
#define UML_SIMPLECLASSIFIERS_ENUMERATION_H_

#include <uml/simpleclassifiers/DataType.h>

namespace uml::simpleclassifiers
{
	class Enumeration : public DataType
	{
		public:
			EnumerationLiteralListPtr ownedLiteral = std::make_shared<EnumerationLiteralList>();

		private:
			EnumerationPtr_w thisEnumerationPtr;

		public:
			virtual ~Enumeration() = default;
			void setThisEnumerationPtr(EnumerationPtr_w);

			void addOwnedLiteral(const EnumerationLiteralPtr&);
	};
// Enumeration
}

#endif /* UML_SIMPLECLASSIFIERS_ENUMERATION_H_ */
