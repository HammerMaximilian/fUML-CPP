/*
 * ExpansionRegion.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_

#include "StructuredActivityNode.h"
#include "ExpansionKind.h"
#include "ExpansionNodeList.h"

namespace fuml::syntax::actions
{
	class ExpansionRegion : public fuml::syntax::actions::StructuredActivityNode
	{
		public:
			fuml::syntax::actions::ExpansionKind mode = fuml::syntax::actions::ExpansionKind::iterative;
			std::shared_ptr<ExpansionNodeList> outputElement = std::make_shared<ExpansionNodeList>();
			std::shared_ptr<ExpansionNodeList> inputElement = std::make_shared<ExpansionNodeList>();

		private:
			std::weak_ptr<ExpansionRegion> thisExpansionRegionPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<ExpansionRegion>);

			void setMode(
					fuml::syntax::actions::ExpansionKind);
			void addInputElement(
					const std::shared_ptr<fuml::syntax::actions::ExpansionNode>&);
			void addOutputElement(
					const std::shared_ptr<fuml::syntax::actions::ExpansionNode>&);
	}; // ExpansionRegion
}

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONREGION_H_ */
