/*
 * Clause.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CLAUSE_H_
#define UML_ACTIONS_CLAUSE_H_

#include <uml/commonstructure/Element.h>
#include <uml/fwd.h>

namespace uml::actions
{
	class Clause : public Element
	{
		public:
			ExecutableNodeListPtr test = std::make_shared<ExecutableNodeList>();
			ExecutableNodeListPtr body = std::make_shared<ExecutableNodeList>();
			ClauseListPtr predecessorClause = std::make_shared<ClauseList>();
			ClauseListPtr successorClause = std::make_shared<ClauseList>();
			OutputPinPtr decider = nullptr;
			OutputPinListPtr bodyOutput = std::make_shared<OutputPinList>();

		private:
			ClausePtr_w thisClausePtr;

		public:
			virtual ~Clause() = default;
			void setThisClausePtr(ClausePtr_w);

			void addPredecessorClause(const ClausePtr&);
			void addTest(const ExecutableNodePtr&);
			void addBody(const ExecutableNodePtr&);
			void setDecider(const OutputPinPtr&);
			void addBodyOutput(const OutputPinPtr&);
	};
// Clause
}

#endif /* UML_ACTIONS_CLAUSE_H_ */
