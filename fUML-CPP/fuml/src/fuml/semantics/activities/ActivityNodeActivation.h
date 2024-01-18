/*
 * ActivityNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_

#include <fuml/semantics/loci/SemanticVisitor.h>
#include <uml/fwd.h>

namespace fuml::semantics::activities
{
	class ActivityNodeActivation : public SemanticVisitor
	{
		public:
			ActivityNodeActivationGroupPtr_w group;
			ActivityNodePtr node = nullptr;
			ActivityEdgeInstanceListPtr incomingEdges = std::make_shared<ActivityEdgeInstanceList>();
			ActivityEdgeInstanceListPtr outgoingEdges = std::make_shared<ActivityEdgeInstanceList>();
			bool running = false;
			TokenListPtr heldTokens = std::make_shared<TokenList>();

		private:
			ActivityNodeActivationPtr_w thisActivityNodeActivationPtr;

		public:
			virtual ~ActivityNodeActivation() = 0;
			void setThisActivityNodeActivationPtr(ActivityNodeActivationPtr_w);

			virtual void initialize(const ActivityNodePtr&, const ActivityNodeActivationGroupPtr&);
			virtual void run();
			virtual void receiveOffer();
			virtual TokenListPtr takeOfferedTokens();
			virtual void fire(const TokenListPtr&) = 0;
			virtual void sendOffers(const TokenListPtr&);
			virtual void terminate();
			virtual bool isReady();
			bool isRunning();
			virtual void addOutgoingEdge(const ActivityEdgeInstancePtr&);
			void addIncomingEdge(const ActivityEdgeInstancePtr&);
			virtual void createNodeActivations();
			virtual void createEdgeInstances();
			virtual bool isSourceFor(const ActivityEdgeInstancePtr&);
			ActivityExecutionPtr getActivityExecution();
			Object_Ptr getExecutionContext();
			LocusPtr getExecutionLocus();
			virtual ActivityNodeActivationPtr getNodeActivation(const ActivityNodePtr&);
			virtual void addToken(const TokenPtr&);
			virtual int removeToken(const TokenPtr&);
			void addTokens(const TokenListPtr&);
			TokenListPtr takeTokens();
			virtual void clearTokens();
			TokenListPtr getTokens();
			void suspend();
			virtual void resume();
	};
// ActivityNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_ */
