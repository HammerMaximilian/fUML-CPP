/*
 * ActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_ACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_ACTIONACTIVATION_H_

#include <fuml/semantics/activities/ExecutableNodeActivation.h>

namespace fuml::semantics::actions
{
	class ActionActivation : public ExecutableNodeActivation
	{
		public:
			bool firing = false;
			PinActivationListPtr pinActivations = std::make_shared<PinActivationList>();

		private:
			ActionActivationPtr_w thisActionActivationPtr;

		public:
			virtual ~ActionActivation() = 0;
			void setThisActionActivationPtr(ActionActivationPtr_w);

			virtual void initialize(const ActivityNodePtr&, const ActivityNodeActivationGroupPtr&) override;
			virtual void run() override;
			virtual TokenListPtr takeOfferedTokens() override;
			virtual void fire(const TokenListPtr&) override;
			virtual void terminate() override;
			virtual TokenListPtr completeAction();
			virtual bool isReady() override;
			bool isControlReady();
			bool isFiring();
			virtual void doAction() = 0;
			virtual void sendOffers();
			virtual OutputPinListPtr getOfferingOutputPins();
			virtual void createNodeActivations() override;
			virtual void addOutgoingEdge(const ActivityEdgeInstancePtr&) override;
			void addPinActivation(const PinActivationPtr&);
			PinActivationPtr getPinActivation(const PinPtr&);
			void putToken(const OutputPinPtr&, const ValuePtr&);
			void putTokens(const OutputPinPtr&, const ValueListPtr&);
			ValueListPtr getTokens(const InputPinPtr&);
			ValueListPtr takeTokens(const InputPinPtr&);
			virtual bool isSourceFor(const ActivityEdgeInstancePtr&) override;
			bool valueParticipatesInLink(const ValuePtr&, const LinkPtr&);
			AssociationPtr getAssociation(const StructuralFeaturePtr&);
			ValueListPtr getValues(const ValuePtr&, const StructuralFeaturePtr&);
			LinkListPtr getMatchingLinks(const AssociationPtr&, const StructuralFeaturePtr&, const ValuePtr&);
			LinkListPtr getMatchingLinksForEndValue(const AssociationPtr&, const StructuralFeaturePtr&, const ValuePtr&,
				const ValuePtr&);
			PropertyPtr getOppositeEnd(const AssociationPtr&, const StructuralFeaturePtr&);
			BooleanValuePtr makeBooleanValue(bool);
			virtual void handle(const ValuePtr&, const ExceptionHandlerPtr&) override;
			void transferOutputs(const ActionPtr&);

	};
// ActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_ACTIONACTIVATION_H_ */
