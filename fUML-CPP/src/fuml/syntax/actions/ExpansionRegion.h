/*
 * ExpansionRegion.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_

#include <fuml/syntax/actions/ExpansionKind.h>
#include <fuml/syntax/actions/StructuredActivityNode.h>

namespace fuml::syntax::actions
{
	class ExpansionRegion : public StructuredActivityNode
	{
		public:
			ExpansionKind mode = ExpansionKind::iterative;
			ExpansionNodeListPtr outputElement = std::make_shared<ExpansionNodeList>();
			ExpansionNodeListPtr inputElement = std::make_shared<ExpansionNodeList>();

		private:
			std::weak_ptr<ExpansionRegion> thisExpansionRegionPtr;

		public:
			virtual ~ExpansionRegion() = default;
			void setThisExpansionRegionPtr(std::weak_ptr<ExpansionRegion>);

			void setMode(
					ExpansionKind);
			void addInputElement(
					const ExpansionNodePtr&);
			void addOutputElement(
					const ExpansionNodePtr&);
	}; // ExpansionRegion
}

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_ */
