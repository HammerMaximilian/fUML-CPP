/*
 * ExpansionNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_EXPANSIONNODE_H_
#define UML_ACTIONS_EXPANSIONNODE_H_

#include <uml/activities/ObjectNode.h>
#include <uml/fwd.h>

namespace uml::actions
{
	class ExpansionNode : public ObjectNode
	{
		public:
			ExpansionRegionPtr regionAsOutput = nullptr;
			ExpansionRegionPtr regionAsInput = nullptr;

		public:
			virtual ~ExpansionNode() = default;

			void _setRegionAsInput(const ExpansionRegionPtr&);
			void _setRegionAsOutput(const ExpansionRegionPtr&);
	};
// ExpansionNode
}

#endif /* UML_ACTIONS_EXPANSIONNODE_H_ */
