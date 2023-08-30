/*
 * LoopNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_LOOPNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_LOOPNODEACTIVATION_H_

#include <fuml/semantics/actions/StructuredActivityNodeActivation.h>

namespace fuml::semantics::actions
{
	class LoopNodeActivation : public StructuredActivityNodeActivation
	{
		public:
			ValuesListPtr bodyOutputLists = std::make_shared<ValuesList>();
			bool isTerminateAll = false;

		private:
			std::weak_ptr<LoopNodeActivation> thisLoopNodeActivationPtr;

		public:
			virtual ~LoopNodeActivation() = default;
			void setThisLoopNodeActivationPtr(std::weak_ptr<LoopNodeActivation>);

			virtual void doStructuredActivity() override;
			void doLoop(bool);
			bool runTest();
			void runBody();
			void saveBodyOutputs();
			void runLoopVariables();
			virtual void createNodeActivations() override;
			ActivityNodeListPtr makeLoopVariableList();
			virtual void terminateAll() override;
			virtual void resume() override;
			void continueLoop();


	}; // LoopNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_LOOPNODEACTIVATION_H_ */
