/*
 * ConditionalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_
#define FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_

#include "StructuredActivityNode.h"
#include "ClauseList.h"
#include "OutputPinList.h"

namespace fuml::syntax::actions
{
	class ConditionalNode : StructuredActivityNode
	{
		public:
			bool isDeterminate = false;
			bool isAssured = false;
			std::shared_ptr<ClauseList> clause = std::make_shared<ClauseList>();
			std::shared_ptr<OutputPinList> result = std::make_shared<OutputPinList>();

		public:
			void setIsDeterminate(bool);
			void setIsAssured(bool);
			void addClause(
					const std::shared_ptr<Clause>&);
			void addResult(const std::shared_ptr<OutputPin>&);
	}; // ConditionalNode
}

#endif /* FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_ */
