/*
 * Clause.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLAUSE_H_
#define FUML_SYNTAX_ACTIONS_CLAUSE_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/commonstructure/Element.h>

namespace fuml::syntax::actions
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
			std::weak_ptr<Clause> thisClausePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Clause>);

			void addPredecessorClause(
					const ClausePtr&);
			void addTest(
					const ExecutableNodePtr&);
			void addBody(
					const ExecutableNodePtr&);
			void setDecider(const OutputPinPtr&);
			void addBodyOutput(
					const OutputPinPtr&);
	}; // Clause
}

#endif /* FUML_SYNTAX_ACTIONS_CLAUSE_H_ */
