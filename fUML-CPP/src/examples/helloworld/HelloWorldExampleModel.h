/*
 * MyTestModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef MYTESTMODELMODEL_H_
#define MYTESTMODELMODEL_H_

#include <fuml/syntax/fwd.h>
#include <examples/InMemoryModel.h>

namespace examples::HelloWorldExample
{
	class HelloWorldExampleModel : public examples::InMemoryModel
	{
		public:
			ActivityFinalNodePtr HelloWorldModel_main_ActivityFinalNode = nullptr;
			ActivityPtr HelloWorldModel_main = nullptr;
			CallBehaviorActionPtr HelloWorldModel_main_callPrintln = nullptr;
			ControlFlowPtr HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode = nullptr;
			ControlFlowPtr HelloWorldModel_main_From_InitialNode_To_SpecifyString = nullptr;
			InitialNodePtr HelloWorldModel_main_InitialNode = nullptr;
			InputPinPtr HelloWorldModel_main_callPrintln_input = nullptr;
			LiteralStringPtr HelloWorldModel_main_SpecifyString_value = nullptr;
			ObjectFlowPtr HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input = nullptr;
			OpaqueBehaviorPtr HelloWorldModel_println = nullptr;
			OutputPinPtr HelloWorldModel_main_SpecifyString_result = nullptr;
			ParameterPtr HelloWorldModel_println_input = nullptr;
			ValueSpecificationActionPtr HelloWorldModel_main_SpecifyString = nullptr;

		public:
			virtual ~HelloWorldExampleModel() = default;
			static const std::shared_ptr<HelloWorldExampleModel>& Instance();

			virtual BehaviorPtr getMainBehavior() override;

		private:
			HelloWorldExampleModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* MYTESTMODELMODEL_H_ */
