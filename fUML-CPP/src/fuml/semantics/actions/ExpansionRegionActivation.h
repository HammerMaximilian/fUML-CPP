/*
 * ExpansionRegionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_EXPANSIONREGIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_EXPANSIONREGIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ExpansionRegionActivation : public ActionActivation
	{
		public:
			ExpansionActivationGroupListPtr activationGroups = std::make_shared<ExpansionActivationGroupList>();
			TokenSetListPtr inputTokens = std::make_shared<TokenSetList>();
			TokenSetListPtr inputExpansionTokens = std::make_shared<TokenSetList>();
			int next = 0;

		private:
			std::weak_ptr<ExpansionRegionActivation> thisExpansionRegionActivationPtr;

		public:
			virtual ~ExpansionRegionActivation() = default;
			void setThisExpansionRegionActivation(std::weak_ptr<ExpansionRegionActivation>);

			virtual TokenListPtr takeOfferedTokens() override;
			virtual void doAction() override;
			void doStructuredActivity();
			void runIterative();
			void runParallel();
			void doOutput();
			virtual void terminate() override;
			virtual void sendOffers() override;
			void runGroup(const ExpansionActivationGroupPtr&);
			void terminateGroup(const ExpansionActivationGroupPtr&);
			ExpansionNodeActivationPtr getExpansionNodeActivation(const ExpansionNodePtr&);
			int numberOfValues();
			bool isSuspended();
			void resume(const ExpansionActivationGroupPtr&);

	};
// ExpansionRegionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_EXPANSIONREGIONACTIVATION_H_ */
