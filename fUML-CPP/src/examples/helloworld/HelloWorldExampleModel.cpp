/*
 * HelloWorldExampleModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <examples/helloworld/HelloWorldExampleModel.h>

#include <fuml/syntax/actions/CallBehaviorAction.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/actions/ValueSpecificationAction.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityFinalNode.h>
#include <fuml/syntax/activities/ControlFlow.h>
#include <fuml/syntax/activities/InitialNode.h>
#include <fuml/syntax/activities/ObjectFlow.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/values/LiteralString.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>

using namespace examples::HelloWorldExample;

const std::shared_ptr<HelloWorldExampleModel>& HelloWorldExampleModel::Instance()
{
	static std::shared_ptr<HelloWorldExampleModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new HelloWorldExampleModel());
		instance->initializeInMemoryModel();
	}
	return instance;
}

BehaviorPtr HelloWorldExampleModel::getMainBehavior()
{
	return this->HelloWorldModel_main;
}

void HelloWorldExampleModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */
	//OpaqueBehavior println
	HelloWorldModel_println.reset(new OpaqueBehavior());
	HelloWorldModel_println->setThisClass_Ptr(HelloWorldModel_println);
	HelloWorldModel_println->setName("println");
		//Parameter input
		HelloWorldModel_println_input.reset(new Parameter());
		HelloWorldModel_println_input->setName("input");
		HelloWorldModel_println_input->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		HelloWorldModel_println_input->setLower(1);
		HelloWorldModel_println_input->setUpper(1);
		HelloWorldModel_println_input->setDirection(ParameterDirectionKind::in);
	HelloWorldModel_println->addOwnedParameter(HelloWorldModel_println_input);

	// Activity main
	HelloWorldModel_main.reset(new Activity());
	HelloWorldModel_main->setThisActivityPtr(HelloWorldModel_main);
	HelloWorldModel_main->setName("main");
		//InitialNode InitialNode
		HelloWorldModel_main_InitialNode.reset(new InitialNode());
		HelloWorldModel_main_InitialNode->setThisElementPtr(HelloWorldModel_main_InitialNode);
		HelloWorldModel_main_InitialNode->setName("InitialNode");
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_InitialNode);
		//ValueSpecificationAction SpecifyString
		HelloWorldModel_main_SpecifyString.reset(new ValueSpecificationAction());
		HelloWorldModel_main_SpecifyString->setThisExecutableNodePtr(HelloWorldModel_main_SpecifyString);
		HelloWorldModel_main_SpecifyString->setName("SpecifyString");
			//ValueSpecification value
			HelloWorldModel_main_SpecifyString_value.reset(new LiteralString());
			HelloWorldModel_main_SpecifyString_value->name = "value";
			HelloWorldModel_main_SpecifyString_value->value = "Hello World from activity! :)";
		HelloWorldModel_main_SpecifyString->setValue(HelloWorldModel_main_SpecifyString_value);
			//OutputPin result
			HelloWorldModel_main_SpecifyString_result.reset(new OutputPin());
			HelloWorldModel_main_SpecifyString_result->setThisElementPtr(HelloWorldModel_main_SpecifyString_result);
			HelloWorldModel_main_SpecifyString_result->setName("result");
			HelloWorldModel_main_SpecifyString_result->setLower(1);
			HelloWorldModel_main_SpecifyString_result->setUpper(1);
		HelloWorldModel_main_SpecifyString->setResult(HelloWorldModel_main_SpecifyString_result);
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_SpecifyString);
		//CallBehaviorAction callPrintln
		HelloWorldModel_main_callPrintln.reset(new CallBehaviorAction());
		HelloWorldModel_main_callPrintln->setThisExecutableNodePtr(HelloWorldModel_main_callPrintln);
		HelloWorldModel_main_callPrintln->setName("callPrintln");
		HelloWorldModel_main_callPrintln->setBehavior(HelloWorldModel_println);
		HelloWorldModel_main_callPrintln->isSynchronous = true; //imposed by the fUML specification
			//InputPin input
			HelloWorldModel_main_callPrintln_input.reset(new InputPin());
			HelloWorldModel_main_callPrintln_input->setThisElementPtr(HelloWorldModel_main_callPrintln_input);
			HelloWorldModel_main_callPrintln_input->setName("input");
			HelloWorldModel_main_callPrintln_input->setLower(1);
			HelloWorldModel_main_callPrintln_input->setUpper(1);
		HelloWorldModel_main_callPrintln->addArgument(HelloWorldModel_main_callPrintln_input);
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_callPrintln);
		//ActivityFinalNode ActivityFinalNode
		HelloWorldModel_main_ActivityFinalNode.reset(new ActivityFinalNode());
		HelloWorldModel_main_ActivityFinalNode->setThisElementPtr(HelloWorldModel_main_ActivityFinalNode);
		HelloWorldModel_main_ActivityFinalNode->setName("ActivityFinalNode");
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_ActivityFinalNode);
		//ControlFlow from InitialNode to SpecifyString
		HelloWorldModel_main_From_InitialNode_To_SpecifyString.reset(new ControlFlow());
		HelloWorldModel_main_From_InitialNode_To_SpecifyString->setName("From_InitialNode_To_SpecifyString");
		HelloWorldModel_main_From_InitialNode_To_SpecifyString->setSource(HelloWorldModel_main_InitialNode);
		HelloWorldModel_main_InitialNode->outgoing->push_back(HelloWorldModel_main_From_InitialNode_To_SpecifyString);
		HelloWorldModel_main_From_InitialNode_To_SpecifyString->setTarget(HelloWorldModel_main_SpecifyString);
		HelloWorldModel_main_SpecifyString->incoming->push_back(HelloWorldModel_main_From_InitialNode_To_SpecifyString);
	HelloWorldModel_main->edge->push_back(HelloWorldModel_main_From_InitialNode_To_SpecifyString);
		//ObjectFlow from SpecifyString_result to callPrintln_input
		HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input.reset(new ObjectFlow());
		HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input->setName("From_SpecifyString_result_To_callPrintln_input");
		HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input->setSource(HelloWorldModel_main_SpecifyString_result);
		HelloWorldModel_main_SpecifyString_result->outgoing->push_back(HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input);
		HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input->setTarget(HelloWorldModel_main_callPrintln_input);
		HelloWorldModel_main_callPrintln_input->incoming->push_back(HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input);
	HelloWorldModel_main->edge->push_back(HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input);
		//ControlFlow from callPrintln to ActivityFinalNode
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode.reset(new ControlFlow());
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setName("From_callPrintln_To_ActivityFinalNode");
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setSource(HelloWorldModel_main_callPrintln);
		HelloWorldModel_main_callPrintln->outgoing->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setTarget(HelloWorldModel_main_ActivityFinalNode);
		HelloWorldModel_main_ActivityFinalNode->incoming->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
	HelloWorldModel_main->edge->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
}
