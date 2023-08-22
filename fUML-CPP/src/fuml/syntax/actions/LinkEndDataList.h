/*
 * LinkEndDataList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDATALIST_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDATALIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class LinkEndData;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::LinkEndData>> LinkEndDataList;
}

using LinkEndDataList = fuml::syntax::actions::LinkEndDataList;
using LinkEndDataListPtr = std::shared_ptr<LinkEndDataList>;

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDATALIST_H_ */
