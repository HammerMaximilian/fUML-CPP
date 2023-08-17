/*
 * ReceptionList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTIONLIST_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTIONLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::simpleclassifiers
{
	class Reception;
	typedef std::vector<std::shared_ptr<fuml::syntax::simpleclassifiers::Reception>> ReceptionList;
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTIONLIST_H_ */
