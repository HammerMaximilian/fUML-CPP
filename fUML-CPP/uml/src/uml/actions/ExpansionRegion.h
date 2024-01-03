/*
 * ExpansionRegion.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_EXPANSIONREGION_H_
#define UML_ACTIONS_EXPANSIONREGION_H_

#include <uml/actions/ExpansionKind.h>
#include <uml/actions/StructuredActivityNode.h>

namespace uml::actions
{
	class ExpansionRegion : public StructuredActivityNode
	{
		public:
			ExpansionKind mode = ExpansionKind::iterative;
			ExpansionNodeListPtr outputElement = std::make_shared<ExpansionNodeList>();
			ExpansionNodeListPtr inputElement = std::make_shared<ExpansionNodeList>();

		private:
			ExpansionRegionPtr_w thisExpansionRegionPtr;

		public:
			virtual ~ExpansionRegion() = default;
			void setThisExpansionRegionPtr(ExpansionRegionPtr_w);

			void setMode(ExpansionKind);
			void addInputElement(const ExpansionNodePtr&);
			void addOutputElement(const ExpansionNodePtr&);
	};
// ExpansionRegion
}

#endif /* UML_ACTIONS_EXPANSIONREGION_H_ */
