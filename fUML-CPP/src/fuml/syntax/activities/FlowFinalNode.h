/*
 * FlowFinalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_FLOWFINALNODE_H_
#define FUML_SYNTAX_ACTIVITIES_FLOWFINALNODE_H_

#include "FinalNode.h"

namespace fuml::syntax::activities
{
	class FlowFinalNode : public fuml::syntax::activities::FinalNode
	{
	}; // FlowFinalNode
}

using FlowFinalNode = fuml::syntax::activities::FlowFinalNode;
using FlowFinalNodePtr = std::shared_ptr<FlowFinalNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_FLOWFINALNODE_H_ */
