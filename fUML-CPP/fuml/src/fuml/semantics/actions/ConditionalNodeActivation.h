/*
 * ConditionalNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CONDITIONALNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CONDITIONALNODEACTIVATION_H_

#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>

namespace fuml::semantics::actions
{
	class ConditionalNodeActivation : public StructuredActivityNodeActivation
	{
		public:
			ClauseActivationListPtr clauseActivations = std::make_shared<ClauseActivationList>();
			ClauseListPtr selectedClauses = std::make_shared<ClauseList>();
			ClausePtr selectedClause = nullptr;

		private:
			std::weak_ptr<ConditionalNodeActivation> thisConditionalNodeActivationPtr;

		public:
			virtual ~ConditionalNodeActivation() = default;
			void setThisConditionalNodeActivationPtr(std::weak_ptr<ConditionalNodeActivation>);

			virtual void doStructuredActivity() override;
			void completeBody();
			virtual TokenListPtr completeAction() override;
			ClauseActivationPtr getClauseActivation(const ClausePtr&);
			void runTest(const ClausePtr&);
			void selectBody(const ClausePtr&);
			virtual void resume() override;

	};
// ConditionalNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CONDITIONALNODEACTIVATION_H_ */
