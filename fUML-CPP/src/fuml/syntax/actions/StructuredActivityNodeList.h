/*
 * StructuredActivityNodeList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODELIST_H_
#define FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class StructuredActivityNode;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::StructuredActivityNode>> StructuredActivityNodeList;
}

using StructuredActivityNodeList = fuml::syntax::actions::StructuredActivityNodeList;
using StructuredActivityNodeListPtr = std::shared_ptr<StructuredActivityNodeList>;

#endif /* FUML_SYNTAX_ACTIONS_STRUCTUREDACTIVITYNODELIST_H_ */
