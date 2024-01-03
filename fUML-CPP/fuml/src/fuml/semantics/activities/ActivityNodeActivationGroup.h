/*
 * ActivityNodeActivationGroup.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::activities
{
	class ActivityNodeActivationGroup : public uml::UmlObject
	{
		public:
			ActivityEdgeInstanceListPtr edgeInstances = std::make_shared<ActivityEdgeInstanceList>();
			ActivityNodeActivationListPtr nodeActivations = std::make_shared<ActivityNodeActivationList>();
			ActivityExecutionPtr_w activityExecution;
			StructuredActivityNodeActivationPtr_w containingNodeActivation;
			ActivityNodeActivationListPtr suspendedActivations = std::make_shared<ActivityNodeActivationList>();

		private:
			ActivityNodeActivationGroupPtr_w thisActivityNodeActivationGroupPtr;

		public:
			virtual ~ActivityNodeActivationGroup() = default;
			void setThisActivityNodeActivationGroupPtr(ActivityNodeActivationGroupPtr_w);

			void run(const ActivityNodeActivationListPtr&);
			bool checkIncomingEdges(const ActivityEdgeInstanceListPtr&, const ActivityNodeActivationListPtr&);
			void runNodes(const ActivityNodeListPtr&);
			void activate(const ActivityNodeListPtr&, const ActivityEdgeListPtr&);
			void terminateAll();
			void createNodeActivations(const ActivityNodeListPtr&);
			ActivityNodeActivationPtr createNodeActivation(const ActivityNodePtr&);
			virtual ActivityNodeActivationPtr getNodeActivation(const ActivityNodePtr&);
			void createEdgeInstances(const ActivityEdgeListPtr&);
			virtual ActivityExecutionPtr getActivityExecution();
			ActivityParameterNodeActivationListPtr getOutputParameterNodeActivations();
			bool hasSourceFor(const ActivityEdgeInstancePtr&);
			bool isSuspended();
			virtual void suspend(const ActivityNodeActivationPtr&);
			virtual void resume(const ActivityNodeActivationPtr&);

	};
// ActivityNodeActivationGroup
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_ */
