/*
 * ExecutableNodeList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXECUTABLENODELIST_H_
#define FUML_SYNTAX_ACTIVITIES_EXECUTABLENODELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::activities
{
	class ExecutableNode;
	typedef std::vector<std::shared_ptr<fuml::syntax::activities::ExecutableNode>> ExecutableNodeList;
}

using ExecutableNodeList = fuml::syntax::activities::ExecutableNodeList;
using ExecutableNodeListPtr = std::shared_ptr<ExecutableNodeList>;

#endif /* FUML_SYNTAX_ACTIVITIES_EXECUTABLENODELIST_H_ */
