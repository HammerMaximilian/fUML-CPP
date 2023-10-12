/*
 * Enumeration.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_

#include <fuml/syntax/simpleclassifiers/DataType.h>

namespace fuml::syntax::simpleclassifiers
{
	class Enumeration : public DataType
	{
		public:
			EnumerationLiteralListPtr ownedLiteral = std::make_shared<EnumerationLiteralList>();

		private:
			std::weak_ptr<Enumeration> thisEnumerationPtr;

		public:
			virtual ~Enumeration() = default;
			void setThisEnumerationPtr(std::weak_ptr<Enumeration>);

			void addOwnedLiteral(const EnumerationLiteralPtr&);
	};
// Enumeration
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_ */
