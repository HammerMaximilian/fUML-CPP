/*
 * ActivityNodeActivationGroup.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::activities
{
	class ActivityNodeActivationGroup : public utils::FumlObject
	{
		public:
			ActivityEdgeInstanceListPtr edgeInstances = std::make_shared<ActivityEdgeInstanceList>();
			ActivityNodeActivationListPtr nodeActivations = std::make_shared<ActivityNodeActivationList>();
			ActivityExecutionPtr activityExecution = nullptr;
			StructuredActivityNodeActivationPtr containingNodeActivation = nullptr;
			ActivityNodeActivationListPtr suspendedActivations = std::make_shared<ActivityNodeActivationList>();

		public:
			virtual ~ActivityNodeActivationGroup() = default;

			void run(const ActivityNodeActivationListPtr&);
			bool checkIncomingEdges(
					const ActivityEdgeInstanceListPtr&,
					const ActivityNodeActivationListPtr&);
			void runNode(const ActivityNodeListPtr&);
			void activate(
					const ActivityNodeListPtr&,
					const ActivityEdgeListPtr&);
			void terminateAll();
			void createNodeActivations(const ActivityNodeListPtr&);
			ActivityNodeActivationPtr createNodeActivation(const ActivityNodePtr&);
			ActivityNodeActivationPtr getNodeActivation(const ActivityNodePtr&);
			void createEdgeInstances(const ActivityEdgeListPtr&);
			ActivityExecutionPtr getActivityExecution();
			ActivityParameterNodeActivationListPtr getOutputParameterNodeActivations();
			bool hasSourceFor(const ActivityEdgeInstancePtr&);
			bool isSuspended();
			void suspend(const ActivityNodeActivationPtr&);
			void resume(const ActivityNodeActivationPtr&);

	}; // ActivityNodeActivationGroup
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONGROUP_H_ */