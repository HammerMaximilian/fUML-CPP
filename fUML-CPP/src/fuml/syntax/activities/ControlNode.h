/*
 * ControlNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_CONTROLNODE_H_
#define FUML_SYNTAX_ACTIVITIES_CONTROLNODE_H_

#include "ActivityNode.h"

namespace fuml::syntax::activities
{
	class ControlNode : public fuml::syntax::activities::ActivityNode
	{
		public:
			virtual ~ControlNode() = 0;
	}; // ControlNode
}

using ControlNode = fuml::syntax::activities::ControlNode;
using ControlNodePtr = std::shared_ptr<ControlNode>;

#endif /* FUML_SYNTAX_ACTIVITIES_CONTROLNODE_H_ */
