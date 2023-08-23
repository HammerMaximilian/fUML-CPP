/*
 * ConditionalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_
#define FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_

#include <fuml/syntax/actions/StructuredActivityNode.h>

namespace fuml::syntax::actions
{
	class ConditionalNode : StructuredActivityNode
	{
		public:
			bool isDeterminate = false;
			bool isAssured = false;
			ClauseListPtr clause = std::make_shared<ClauseList>();
			OutputPinListPtr result = std::make_shared<OutputPinList>();

		public:
			void setIsDeterminate(bool);
			void setIsAssured(bool);
			void addClause(
					const ClausePtr&);
			void addResult(const OutputPinPtr&);
	}; // ConditionalNode
}

#endif /* FUML_SYNTAX_ACTIONS_CONDITIONALNODE_H_ */
