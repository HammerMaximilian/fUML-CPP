/*
 * LinkEndDestructionDataList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATALIST_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATALIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class LinkEndDestructionData;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::LinkEndDestructionData>> LinkEndDestructionDataList;
}

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATALIST_H_ */
