/*
 * MyTestModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_HELLOWORLD_HELLOWORLDEXAMPLEMODEL_H_
#define EXAMPLES_HELLOWORLD_HELLOWORLDEXAMPLEMODEL_H_

#include <fuml/syntax/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace examples::HelloWorldExample
{
	class HelloWorldExampleModel : public fuml::environment::InMemoryModel
	{
		public:
			ActivityFinalNodePtr HelloWorldModel_main_ActivityFinalNode = nullptr;
			ActivityPtr HelloWorldModel_main = nullptr;
			CallBehaviorActionPtr HelloWorldModel_main_callWriteLine = nullptr;
			ControlFlowPtr HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode = nullptr;
			ControlFlowPtr HelloWorldModel_main_From_InitialNode_To_SpecifyString = nullptr;
			InitialNodePtr HelloWorldModel_main_InitialNode = nullptr;
			InputPinPtr HelloWorldModel_main_callWriteLine_value = nullptr;
			OutputPinPtr HelloWorldModel_main_callWriteLine_errorStatus = nullptr;
			LiteralStringPtr HelloWorldModel_main_SpecifyString_value = nullptr;
			ObjectFlowPtr HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input = nullptr;
			OutputPinPtr HelloWorldModel_main_SpecifyString_result = nullptr;
			ValueSpecificationActionPtr HelloWorldModel_main_SpecifyString = nullptr;

		public:
			virtual ~HelloWorldExampleModel() = default;
			static const std::shared_ptr<HelloWorldExampleModel>& Instance();

		private:
			HelloWorldExampleModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* EXAMPLES_HELLOWORLD_HELLOWORLDEXAMPLEMODEL_H_ */
