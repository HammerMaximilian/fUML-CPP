/*
 * MergeNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_MERGENODE_H_
#define FUML_SYNTAX_ACTIVITIES_MERGENODE_H_

#include <ControlNode.h>

namespace fuml::syntax::activities
{
	class MergeNode : public ControlNode
	{
	}; // MergeNode
}

using MergeNode = fuml::syntax::activities::MergeNode;
using MergeNodePtr = std::shared_ptr<MergeNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_MERGENODE_H_ */
