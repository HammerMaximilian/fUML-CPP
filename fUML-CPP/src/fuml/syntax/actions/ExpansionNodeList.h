/*
 * ExpansionNodeList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONNODELIST_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONNODELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class ExpansionNode;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::ExpansionNode>> ExpansionNodeList;
}

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONNODELIST_H_ */
