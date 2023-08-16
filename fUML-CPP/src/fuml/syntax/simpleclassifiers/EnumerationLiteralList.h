/*
 * EnumerationLiteralList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERALLIST_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERALLIST_H_

#include <memory>
#include <vector>
#include "EnumerationLiteral.h"

namespace fuml::syntax::simpleclassifiers
{
	typedef std::vector<std::shared_ptr<fuml::syntax::simpleclassifiers::EnumerationLiteral>> EnumerationLiteralList;
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_ENUMERATIONLITERALLIST_H_ */
