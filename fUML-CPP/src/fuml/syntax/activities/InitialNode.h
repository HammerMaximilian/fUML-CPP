/*
 * InitialNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_INITIALNODE_H_
#define FUML_SYNTAX_ACTIVITIES_INITIALNODE_H_

#include <ControlNode.h>

namespace fuml::syntax::activities
{
	class InitialNode : public fuml::syntax::activities::ControlNode
	{
	}; // InitialNode
}

using InitialNode = fuml::syntax::activities::InitialNode;
using InitialNodePtr = std::shared_ptr<InitialNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_INITIALNODE_H_ */
