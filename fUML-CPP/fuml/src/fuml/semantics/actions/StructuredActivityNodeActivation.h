/*
 * StructuredActivityNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class StructuredActivityNodeActivation : public ActionActivation
	{
		public:
			ActivityNodeActivationGroupPtr activationGroup = nullptr;

		private:
			std::weak_ptr<StructuredActivityNodeActivation> thisStructuredActivityNodeActivationPtr;

		public:
			virtual ~StructuredActivityNodeActivation() = default;
			void setThisStructuredActivityNodeActivationPtr(std::weak_ptr<StructuredActivityNodeActivation>);

			virtual void doAction() override;
			virtual void doStructuredActivity();
			virtual void terminate() override;
			virtual ActivityNodeActivationPtr getNodeActivation(const ActivityNodePtr&) override;
			ActivityNodeListPtr makeActivityNodeList(const ExecutableNodeListPtr&);
			ValueListPtr getPinValues(const OutputPinPtr&);
			void putPinValues(const OutputPinPtr&, const ValueListPtr&);
			virtual void createNodeActivations() override;
			virtual void createEdgeInstances() override;
			virtual bool isSourceFor(const ActivityEdgeInstancePtr&) override;
			virtual void terminateAll();
			bool isSuspended();
			virtual TokenListPtr completeAction() override;
			virtual void resume() override;

	};
// StructuredActivityNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_STRUCTUREDACTIVITYNODEACTIVATION_H_ */
