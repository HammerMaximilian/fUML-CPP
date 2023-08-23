/*
 * Clause.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLAUSE_H_
#define FUML_SYNTAX_ACTIONS_CLAUSE_H_

#include <fuml/syntax/actions/ClauseList.h>
#include <fuml/syntax/actions/OutputPinList.h>
#include <fuml/syntax/activities/ExecutableNodeList.h>
#include <fuml/syntax/commonstructure/Element.h>
#include <memory>

namespace fuml::syntax::actions
{
	class Clause : public fuml::syntax::commonstructure::Element
	{
		public:
			std::shared_ptr<fuml::syntax::activities::ExecutableNodeList> test = std::make_shared<fuml::syntax::activities::ExecutableNodeList>();
			std::shared_ptr<fuml::syntax::activities::ExecutableNodeList> body = std::make_shared<fuml::syntax::activities::ExecutableNodeList>();
			std::shared_ptr<ClauseList> predecessorClause = std::make_shared<fuml::syntax::actions::ClauseList>();
			std::shared_ptr<ClauseList> successorClause = std::make_shared<fuml::syntax::actions::ClauseList>();
			std::shared_ptr<OutputPin> decider = nullptr;
			std::shared_ptr<OutputPinList> bodyOutput = std::make_shared<fuml::syntax::actions::OutputPinList>();

		private:
			std::weak_ptr<Clause> thisClausePtr;

		public:
			virtual void setThisPtr(std::weak_ptr<Clause>);

			void addPredecessorClause(
					const std::shared_ptr<fuml::syntax::actions::Clause>&);
			void addTest(
					const std::shared_ptr<fuml::syntax::activities::ExecutableNode>&);
			void addBody(
					const std::shared_ptr<fuml::syntax::activities::ExecutableNode>&);
			void setDecider(const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
			void addBodyOutput(
					const std::shared_ptr<fuml::syntax::actions::OutputPin>&);
	}; // Clause
}

using Clause = fuml::syntax::actions::Clause;
using ClausePtr = std::shared_ptr<Clause>;

#endif /* FUML_SYNTAX_ACTIONS_CLAUSE_H_ */
