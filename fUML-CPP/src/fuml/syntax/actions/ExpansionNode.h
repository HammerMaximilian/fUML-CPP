/*
 * ExpansionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_

#include "fuml/syntax/activities/ObjectNode.h"

namespace fuml::syntax::actions
{
	class ExpansionRegion;
}

namespace fuml::syntax::actions
{
	class ExpansionNode : fuml::syntax::activities::ObjectNode
	{
		public:
			std::shared_ptr<fuml::syntax::actions::ExpansionRegion> regionAsOutput = nullptr;
			std::shared_ptr<fuml::syntax::actions::ExpansionRegion> regionAsInput = nullptr;

		public:
			void _setRegionAsInput(
					const std::shared_ptr<fuml::syntax::actions::ExpansionRegion>&);
			void _setRegionAsOutput(
					const std::shared_ptr<fuml::syntax::actions::ExpansionRegion>&);
	}; // ExpansionNode
}

using ExpansionNode = fuml::syntax::actions::ExpansionNode;
using ExpansionNodePtr = std::shared_ptr<ExpansionNode>;

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_ */
