/*
 * Enumeration.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_

#include <fuml/syntax/simpleclassifiers/DataType.h>
#include <fuml/syntax/simpleclassifiers/EnumerationLiteralList.h>
#include <memory>

namespace fuml::syntax::simpleclassifiers
{
	class EnumerationLiteral;
}
using EnumerationLiteral = fuml::syntax::simpleclassifiers::EnumerationLiteral;
using EnumerationLiteralPtr = std::shared_ptr<EnumerationLiteral>;

namespace fuml::syntax::simpleclassifiers
{
	class Enumeration : public fuml::syntax::simpleclassifiers::DataType
	{
		public:
			EnumerationLiteralListPtr ownedLiteral = std::make_shared<EnumerationLiteralList>();

		private:
			std::weak_ptr<Enumeration> thisEnumerationPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Enumeration>);

			void addOwnedLiteral(
				const EnumerationLiteralPtr&);
	}; // Enumeration
}

using Enumeration = fuml::syntax::simpleclassifiers::Enumeration;
using EnumerationPtr = std::shared_ptr<Enumeration>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_ */
