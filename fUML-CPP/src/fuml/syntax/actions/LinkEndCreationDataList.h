/*
 * LinkEndCreationDataList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATALIST_H_
#define FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATALIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class LinkEndCreationData;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::LinkEndCreationData>> LinkEndCreationDataList;
}

#endif /* FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATALIST_H_ */
