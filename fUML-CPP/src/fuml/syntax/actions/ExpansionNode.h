/*
 * ExpansionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/activities/ObjectNode.h>

namespace fuml::syntax::actions
{
	class ExpansionNode : public ObjectNode
	{
		public:
			ExpansionRegionPtr regionAsOutput = nullptr;
			ExpansionRegionPtr regionAsInput = nullptr;

		public:
			virtual ~ExpansionNode() = default;
		
			void _setRegionAsInput(
					const ExpansionRegionPtr&);
			void _setRegionAsOutput(
					const ExpansionRegionPtr&);
	}; // ExpansionNode
}

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONNODE_H_ */
