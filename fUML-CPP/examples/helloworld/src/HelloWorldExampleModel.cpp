/*
 * HelloWorldExampleModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include "HelloWorldExampleModel.h"

#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/OutputPin.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <uml/activities/Activity.h>
#include <uml/activities/ActivityFinalNode.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/InitialNode.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/classification/Parameter.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralString.h>
#include <utils/library/FoundationalModelLibraryModel.h>
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

void HelloWorldExampleModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */
	// Activity main
	HelloWorldModel_main.reset(new Activity());
	HelloWorldModel_main->setThisActivityPtr(HelloWorldModel_main);
	HelloWorldModel_main->setName("main");
	this->addToElementRepository("main", HelloWorldModel_main);
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
		HelloWorldModel_main_SpecifyString->setResult(HelloWorldModel_main_SpecifyString_result);
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_SpecifyString);
		//CallBehaviorAction callWriteLine
		HelloWorldModel_main_callWriteLine.reset(new CallBehaviorAction());
		HelloWorldModel_main_callWriteLine->setThisExecutableNodePtr(HelloWorldModel_main_callWriteLine);
		HelloWorldModel_main_callWriteLine->setName("callWriteLine");
		HelloWorldModel_main_callWriteLine->setBehavior(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
		HelloWorldModel_main_callWriteLine->isSynchronous = true; //imposed by the fUML specification
			//InputPin value
			HelloWorldModel_main_callWriteLine_value.reset(new InputPin());
			HelloWorldModel_main_callWriteLine_value->setThisElementPtr(HelloWorldModel_main_callWriteLine_value);
			HelloWorldModel_main_callWriteLine_value->setName("value");
			HelloWorldModel_main_callWriteLine_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
		HelloWorldModel_main_callWriteLine->addArgument(HelloWorldModel_main_callWriteLine_value);
			//OutputPin errorStatus
			HelloWorldModel_main_callWriteLine_errorStatus.reset(new OutputPin());
			HelloWorldModel_main_callWriteLine_errorStatus->setThisElementPtr(HelloWorldModel_main_callWriteLine_errorStatus);
			HelloWorldModel_main_callWriteLine_errorStatus->setName("errorStatus");
			HelloWorldModel_main_callWriteLine_errorStatus->setType(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
		HelloWorldModel_main_callWriteLine->addResult(HelloWorldModel_main_callWriteLine_errorStatus);
	HelloWorldModel_main->node->push_back(HelloWorldModel_main_callWriteLine);
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
		HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input->setTarget(HelloWorldModel_main_callWriteLine_value);
		HelloWorldModel_main_callWriteLine_value->incoming->push_back(HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input);
	HelloWorldModel_main->edge->push_back(HelloWorldModel_main_From_SpecifyString_result_To_callPrintln_input);
		//ControlFlow from callPrintln to ActivityFinalNode
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode.reset(new ControlFlow());
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setName("From_callPrintln_To_ActivityFinalNode");
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setSource(HelloWorldModel_main_callWriteLine);
		HelloWorldModel_main_callWriteLine->outgoing->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
		HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode->setTarget(HelloWorldModel_main_ActivityFinalNode);
		HelloWorldModel_main_ActivityFinalNode->incoming->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
	HelloWorldModel_main->edge->push_back(HelloWorldModel_main_From_callPrintln_To_ActivityFinalNode);
}
