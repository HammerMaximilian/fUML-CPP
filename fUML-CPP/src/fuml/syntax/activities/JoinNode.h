/*
 * JoinNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_JOINNODE_H_
#define FUML_SYNTAX_ACTIVITIES_JOINNODE_H_

#include "ControlNode.h"

namespace fuml::syntax::activities
{
	class JoinNode : public fuml::syntax::activities::ControlNode
	{
	}; // JoinNode
}

using JoinNode = fuml::syntax::activities::JoinNode;
using JoinNodePtr = std::shared_ptr<JoinNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_JOINNODE_H_ */
