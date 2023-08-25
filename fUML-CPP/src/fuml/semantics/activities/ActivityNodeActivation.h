/*
 * ActivityNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_

#include <fuml/syntax/fwd.h>
#include <fuml/semantics/loci/SemanticVisitor.h>

namespace fuml::semantics::activities
{
	class ActivityNodeActivation : public SemanticVisitor
	{
		public:
			ActivityNodeActivationGroupPtr group = nullptr;
			ActivityNodePtr node = nullptr;
			ActivityEdgeInstanceListPtr incomingEdges = std::make_shared<ActivityEdgeInstanceList>();
			ActivityEdgeInstanceListPtr outgoingEdges = std::make_shared<ActivityEdgeInstanceList>();
			bool running = false;
			TokenListPtr heldTokens = std::make_shared<TokenList>();

		public:
			virtual ~ActivityNodeActivation() = 0;

			void initialize(const ActivityNodePtr&, const ActivityNodeActivationGroupPtr&);
			virtual void run();
			void receiveOffer();
			virtual TokenListPtr takeOfferedTokens();
			virtual void fire(const TokenListPtr&) = 0;
			virtual void sendOffers(const TokenListPtr&);
			virtual void terminate();
			virtual bool isReady();
			bool isRunning();
			void addOutgoingEdge(const ActivityEdgeInstancePtr&);
			void addIncomingEdge(const ActivityEdgeInstancePtr&);
			void createNodeActivations();
			void createEdgeInstances();
			bool isSourceFor(const ActivityEdgeInstancePtr&);
			ActivityExecutionPtr getActivityExecution();
			Object_Ptr getExecutionContext();
			LocusPtr getExecutionLocus();
			ActivityNodeActivationPtr getNodeActivation(const ActivityNode&);
			virtual void addToken(const TokenPtr&);
			virtual int removeToken(const TokenPtr&);
			void addTokens(const TokenListPtr&);
			TokenListPtr takeTokens();
			virtual void clearTokens();
			TokenListPtr getTokens();
			void suspend();
			void resume();
	}; // ActivityNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATION_H_ */
