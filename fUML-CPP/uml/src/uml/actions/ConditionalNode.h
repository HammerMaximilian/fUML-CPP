/*
 * ConditionalNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CONDITIONALNODE_H_
#define UML_ACTIONS_CONDITIONALNODE_H_

#include <uml/actions/StructuredActivityNode.h>

namespace uml::actions
{
	class ConditionalNode : StructuredActivityNode
	{
		public:
			bool isDeterminate = false;
			bool isAssured = false;
			ClauseListPtr clause = std::make_shared<ClauseList>();
			OutputPinListPtr result = std::make_shared<OutputPinList>();

		public:
			virtual ~ConditionalNode() = default;

			void setIsDeterminate(bool);
			void setIsAssured(bool);
			void addClause(const ClausePtr&);
			void addResult(const OutputPinPtr&);
	};
// ConditionalNode
}

#endif /* UML_ACTIONS_CONDITIONALNODE_H_ */
