/*
 * Enumeration.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_

#include <memory>
#include <vector>
#include "DataType.h"

namespace fuml::syntax::simpleclassifiers
{
	class EnumerationLiteral;
	typedef std::vector<std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteral>> EnumerationLiteralList;
}

namespace fuml::syntax::simpleclassifiers
{
	class Enumeration : public fuml::syntax::simpleclassifiers::DataType
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteralList> ownedLiteral = std::make_shared<fuml::syntax::simpleclassifiers::EnumerationLiteralList>();

		protected:
			std::weak_ptr<fuml::syntax::simpleclassifiers::Enumeration> thisEnumerationPtr;

		public:
			void addOwnedLiteral(
				const std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteral>&);
	}; // Enumeration
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATION_H_ */
