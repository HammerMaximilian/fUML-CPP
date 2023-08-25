/*
 * ExpansionActivationGroup.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_EXPANSIONACTIVATIONGROUP_H_
#define FUML_SEMANTICS_ACTIONS_EXPANSIONACTIVATIONGROUP_H_

#include <fuml/semantics/activities/ActivityNodeActivationGroup.h>

namespace fuml::semantics::actions
{
	class ExpansionActivationGroup : public ActivityNodeActivationGroup
	{
		public:
			OutputPinActivationListPtr regionInputs = std::make_shared<OutputPinActivationList>();
			OutputPinActivationListPtr groupInputs = std::make_shared<OutputPinActivationList>();
			ExpansionRegionActivationPtr regionActivation = nullptr;
			OutputPinActivationListPtr groupOutputs = std::make_shared<OutputPinActivationList>();

		public:
			virtual ~ExpansionActivationGroup() = default;

			virtual ActivityNodeActivationPtr getNodeActivation(const ActivityNodePtr&) override;
			virtual ActivityExecutionPtr getActivityExecution() override;
			virtual void suspend(const ActivityNodeActivationPtr&) override;
			virtual void resume(const ActivityNodeActivationPtr&) override;
	}; // ExpansionActivationGroup
}

#endif /* FUML_SEMANTICS_ACTIONS_EXPANSIONACTIVATIONGROUP_H_ */
