/*
 * CentralBufferNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_CENTRALBUFFERNODE_H_
#define FUML_SYNTAX_ACTIVITIES_CENTRALBUFFERNODE_H_

#include <ObjectNode.h>

namespace fuml::syntax::activities
{
	class CentralBufferNode : public ObjectNode
	{
	}; // CentralBufferNode
}

using CentralBufferNode = fuml::syntax::activities::CentralBufferNode;
using CentralBufferNodePtr = std::shared_ptr<CentralBufferNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_CENTRALBUFFERNODE_H_ */
