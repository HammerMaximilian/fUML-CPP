/*
 * Signal_AssemblyModel.cpp
 * 
 * Auto-generated file
 */

#include "Signal_AssemblyModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/commonbehavior/Trigger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/classification/Generalization.h>
#include <uml/activities/ActivityFinalNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/Reception.h>
#include <uml/commonbehavior/SignalEvent.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/actions/OutputPin.h>
#include <uml/simpleclassifiers/Signal.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Signal_Assembly;
using namespace fuml::primitivetypes;
using namespace fuml::library;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

Signal_AssemblyModel::Signal_AssemblyModel()
{
	/* Start of user code : Additional model initializations
 	 * This section may be used to do any additional model initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

Signal_AssemblyModel::~Signal_AssemblyModel()
{
	/* Start of user code : Additional model cleanup
 	 * This section may be used to do any additional model cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

const std::shared_ptr<Signal_AssemblyModel>& Signal_AssemblyModel::Instance()
{
	static std::shared_ptr<Signal_AssemblyModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Signal_AssemblyModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Signal_AssemblyModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Signal_Assembly
	 */
	Signal_Assembly.reset(new Package());
	this->addToElementRepository("Signal_Assembly", Signal_Assembly);
		Signal_Assembly_TestCase.reset(new Class_());
		this->addToElementRepository("TestCase", Signal_Assembly_TestCase);
			Signal_Assembly_TestCase_test.reset(new Operation());
			this->addToElementRepository("test", Signal_Assembly_TestCase_test);
		Signal_Assembly_S.reset(new Signal());
		this->addToElementRepository("S", Signal_Assembly_S);
			Signal_Assembly_S_value.reset(new Property());
			this->addToElementRepository("value", Signal_Assembly_S_value);
		Signal_Assembly_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", Signal_Assembly_ContinueEvent);
		Signal_Assembly_R.reset(new Association());
		this->addToElementRepository("R", Signal_Assembly_R);
			Signal_Assembly_R_y.reset(new Property());
			this->addToElementRepository("y", Signal_Assembly_R_y);
			Signal_Assembly_R_x.reset(new Property());
			this->addToElementRepository("x", Signal_Assembly_R_x);
		Signal_Assembly_main.reset(new Activity());
		this->addToElementRepository("main", Signal_Assembly_main);
			Signal_Assembly_main_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", Signal_Assembly_main_ObjectFlow0);
				Signal_Assembly_main_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean1", Signal_Assembly_main_ObjectFlow0_LiteralBoolean1);
				Signal_Assembly_main_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", Signal_Assembly_main_ObjectFlow0_LiteralInteger2);
			Signal_Assembly_main_TestCaseAssembly_.reset(new CallOperationAction());
			this->addToElementRepository("TestCaseAssembly()", Signal_Assembly_main_TestCaseAssembly_);
				Signal_Assembly_main_TestCaseAssembly__target.reset(new InputPin());
				this->addToElementRepository("target", Signal_Assembly_main_TestCaseAssembly__target);
					Signal_Assembly_main_TestCaseAssembly__target_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", Signal_Assembly_main_TestCaseAssembly__target_LiteralInteger3);
					Signal_Assembly_main_TestCaseAssembly__target_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", Signal_Assembly_main_TestCaseAssembly__target_LiteralUnlimitedNatural4);
				Signal_Assembly_main_TestCaseAssembly__result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_Assembly_main_TestCaseAssembly__result);
					Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger5);
					Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", Signal_Assembly_main_TestCaseAssembly__result_LiteralInteger6);
					Signal_Assembly_main_TestCaseAssembly__result_LiteralUnlimitedNatural7.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural7", Signal_Assembly_main_TestCaseAssembly__result_LiteralUnlimitedNatural7);
			Signal_Assembly_main_Fork_testCase.reset(new ForkNode());
			this->addToElementRepository("Fork testCase", Signal_Assembly_main_Fork_testCase);
			Signal_Assembly_main_ObjectFlow8.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow8", Signal_Assembly_main_ObjectFlow8);
				Signal_Assembly_main_ObjectFlow8_LiteralBoolean9.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean9", Signal_Assembly_main_ObjectFlow8_LiteralBoolean9);
				Signal_Assembly_main_ObjectFlow8_LiteralInteger10.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger10", Signal_Assembly_main_ObjectFlow8_LiteralInteger10);
			Signal_Assembly_main_Create_TestCaseAssembly.reset(new CreateObjectAction());
			this->addToElementRepository("Create TestCaseAssembly", Signal_Assembly_main_Create_TestCaseAssembly);
				Signal_Assembly_main_Create_TestCaseAssembly_result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_Assembly_main_Create_TestCaseAssembly_result);
					Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11);
					Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", Signal_Assembly_main_Create_TestCaseAssembly_result_LiteralInteger12);
			Signal_Assembly_main_ObjectFlow13.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow13", Signal_Assembly_main_ObjectFlow13);
				Signal_Assembly_main_ObjectFlow13_LiteralInteger14.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger14", Signal_Assembly_main_ObjectFlow13_LiteralInteger14);
				Signal_Assembly_main_ObjectFlow13_LiteralBoolean15.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean15", Signal_Assembly_main_ObjectFlow13_LiteralBoolean15);
			Signal_Assembly_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", Signal_Assembly_main_Send_Start);
				Signal_Assembly_main_Send_Start_testCase.reset(new InputPin());
				this->addToElementRepository("testCase", Signal_Assembly_main_Send_Start_testCase);
					Signal_Assembly_main_Send_Start_testCase_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", Signal_Assembly_main_Send_Start_testCase_LiteralInteger16);
					Signal_Assembly_main_Send_Start_testCase_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", Signal_Assembly_main_Send_Start_testCase_LiteralInteger17);
					Signal_Assembly_main_Send_Start_testCase_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", Signal_Assembly_main_Send_Start_testCase_LiteralUnlimitedNatural18);
				Signal_Assembly_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", Signal_Assembly_main_Send_Start_target);
					Signal_Assembly_main_Send_Start_target_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", Signal_Assembly_main_Send_Start_target_LiteralInteger19);
					Signal_Assembly_main_Send_Start_target_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", Signal_Assembly_main_Send_Start_target_LiteralUnlimitedNatural20);
			Signal_Assembly_main_Read_TestCaseAssembly_tester.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read TestCaseAssembly.tester", Signal_Assembly_main_Read_TestCaseAssembly_tester);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_Assembly_main_Read_TestCaseAssembly_tester_result);
					Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralInteger21);
					Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", Signal_Assembly_main_Read_TestCaseAssembly_tester_result_LiteralUnlimitedNatural22);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_object.reset(new InputPin());
				this->addToElementRepository("object", Signal_Assembly_main_Read_TestCaseAssembly_tester_object);
					Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralInteger23);
					Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural24", Signal_Assembly_main_Read_TestCaseAssembly_tester_object_LiteralUnlimitedNatural24);
			Signal_Assembly_main_ObjectFlow25.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow25", Signal_Assembly_main_ObjectFlow25);
				Signal_Assembly_main_ObjectFlow25_LiteralBoolean26.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean26", Signal_Assembly_main_ObjectFlow25_LiteralBoolean26);
				Signal_Assembly_main_ObjectFlow25_LiteralInteger27.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger27", Signal_Assembly_main_ObjectFlow25_LiteralInteger27);
			Signal_Assembly_main_ObjectFlow28.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow28", Signal_Assembly_main_ObjectFlow28);
				Signal_Assembly_main_ObjectFlow28_LiteralInteger29.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger29", Signal_Assembly_main_ObjectFlow28_LiteralInteger29);
				Signal_Assembly_main_ObjectFlow28_LiteralBoolean30.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean30", Signal_Assembly_main_ObjectFlow28_LiteralBoolean30);
		Signal_Assembly_Continue.reset(new Signal());
		this->addToElementRepository("Continue", Signal_Assembly_Continue);
		Signal_Assembly_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", Signal_Assembly_SEvent);
		Signal_Assembly_I.reset(new Class_());
		this->addToElementRepository("I", Signal_Assembly_I);
		Signal_Assembly_Tester.reset(new Class_());
		this->addToElementRepository("Tester", Signal_Assembly_Tester);
			Signal_Assembly_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", Signal_Assembly_Tester_TesterClassifierBehavior);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31.reset(new Trigger());
					this->addToElementRepository("Trigger31", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural32", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural32);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger33.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger33", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger33);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger34);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow35", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean36", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralInteger37);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase.reset(new OutputPin());
					this->addToElementRepository("testCase", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger38.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger38", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger38);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural39", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural39);
						Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger40);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41.reset(new Trigger());
					this->addToElementRepository("Trigger41", Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow42", Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42);
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target);
						Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural43", Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural43);
						Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger44);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow45", Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target);
						Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural46", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural46);
						Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger47.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger47", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger47);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value.reset(new InputPin());
					this->addToElementRepository("value", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value);
						Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger48.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger48", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger48);
						Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural49", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural49);
						Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger50.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger50", Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger50);
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", Signal_Assembly_Tester_TesterClassifierBehavior_Value_4);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result);
						Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger51);
						Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural52", Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural52);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53);
				Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode54", Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow55", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean56", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralInteger57);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow58", Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58);
				Signal_Assembly_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_Assembly_Tester_TesterClassifierBehavior_this);
					Signal_Assembly_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_Tester_TesterClassifierBehavior_this_result);
						Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralInteger59);
						Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", Signal_Assembly_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural60);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow61", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralInteger62);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean63", Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow64", Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64);
			Signal_Assembly_Tester_q.reset(new Port());
			this->addToElementRepository("q", Signal_Assembly_Tester_q);
			Signal_Assembly_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", Signal_Assembly_Tester_Tester_Tester);
				Signal_Assembly_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_Assembly_Tester_Tester_Tester_result);
			Signal_Assembly_Tester_Start.reset(new Reception());
			this->addToElementRepository("Start", Signal_Assembly_Tester_Start);
		Signal_Assembly_Start.reset(new Signal());
		this->addToElementRepository("Start", Signal_Assembly_Start);
			Signal_Assembly_Start_testCase.reset(new Property());
			this->addToElementRepository("testCase", Signal_Assembly_Start_testCase);
		Signal_Assembly_TestCaseAssembly.reset(new Class_());
		this->addToElementRepository("TestCaseAssembly", Signal_Assembly_TestCaseAssembly);
			Signal_Assembly_TestCaseAssembly_tester.reset(new Property());
			this->addToElementRepository("tester", Signal_Assembly_TestCaseAssembly_tester);
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly.reset(new Operation());
			this->addToElementRepository("TestCaseAssembly_TestCaseAssembly", Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly);
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result);
			Signal_Assembly_TestCaseAssembly_test.reset(new Operation());
			this->addToElementRepository("test", Signal_Assembly_TestCaseAssembly_test);
			Signal_Assembly_TestCaseAssembly_r.reset(new Connector());
			this->addToElementRepository("r", Signal_Assembly_TestCaseAssembly_r);
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd65", Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65);
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd66", Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66);
			Signal_Assembly_TestCaseAssembly_Generalization67.reset(new Generalization());
			this->addToElementRepository("Generalization67", Signal_Assembly_TestCaseAssembly_Generalization67);
			Signal_Assembly_TestCaseAssembly_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", Signal_Assembly_TestCaseAssembly_testActivity);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow68", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean69", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralInteger70);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow71", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean72", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralInteger73);
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testV", Signal_Assembly_TestCaseAssembly_testActivity_Call_testV);
					Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v.reset(new InputPin());
					this->addToElementRepository("v", Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v);
						Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger74);
						Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger75.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger75", Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralInteger75);
						Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural76", Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v_LiteralUnlimitedNatural76);
				Signal_Assembly_TestCaseAssembly_testActivity_testV.reset(new OpaqueBehavior());
				this->addToElementRepository("testV", Signal_Assembly_TestCaseAssembly_testActivity_testV);
					Signal_Assembly_TestCaseAssembly_testActivity_testV_v.reset(new Parameter());
					this->addToElementRepository("v", Signal_Assembly_TestCaseAssembly_testActivity_testV_v);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow77", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean78", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralInteger79.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger79", Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralInteger79);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.v", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralInteger80.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger80", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralInteger80);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object_LiteralUnlimitedNatural81);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralInteger82.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger82", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralInteger82);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result_LiteralUnlimitedNatural83);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural84", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralUnlimitedNatural84);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result_LiteralInteger85);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural86", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralUnlimitedNatural86);
						Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object_LiteralInteger87);
				Signal_Assembly_TestCaseAssembly_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_Assembly_TestCaseAssembly_testActivity_this);
					Signal_Assembly_TestCaseAssembly_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_TestCaseAssembly_testActivity_this_result);
						Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralUnlimitedNatural88.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural88", Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralUnlimitedNatural88);
						Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralInteger89.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger89", Signal_Assembly_TestCaseAssembly_testActivity_this_result_LiteralInteger89);
			Signal_Assembly_TestCaseAssembly_a.reset(new Property());
			this->addToElementRepository("a", Signal_Assembly_TestCaseAssembly_a);
		Signal_Assembly_A.reset(new Class_());
		this->addToElementRepository("A", Signal_Assembly_A);
			Signal_Assembly_A_AClassifierBehavior.reset(new Activity());
			this->addToElementRepository("AClassifierBehavior", Signal_Assembly_A_AClassifierBehavior);
				Signal_Assembly_A_AClassifierBehavior_Set_v.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set v", Signal_Assembly_A_AClassifierBehavior_Set_v);
					Signal_Assembly_A_AClassifierBehavior_Set_v_value.reset(new InputPin());
					this->addToElementRepository("value", Signal_Assembly_A_AClassifierBehavior_Set_v_value);
						Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural90", Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural90);
						Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", Signal_Assembly_A_AClassifierBehavior_Set_v_value_LiteralInteger91);
					Signal_Assembly_A_AClassifierBehavior_Set_v_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_Assembly_A_AClassifierBehavior_Set_v_object);
						Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92);
						Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", Signal_Assembly_A_AClassifierBehavior_Set_v_object_LiteralInteger93);
					Signal_Assembly_A_AClassifierBehavior_Set_v_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_A_AClassifierBehavior_Set_v_result);
						Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural94);
						Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", Signal_Assembly_A_AClassifierBehavior_Set_v_result_LiteralInteger95);
				Signal_Assembly_A_AClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", Signal_Assembly_A_AClassifierBehavior_Send_Continue);
					Signal_Assembly_A_AClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", Signal_Assembly_A_AClassifierBehavior_Send_Continue_target);
						Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralInteger96);
						Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural97", Signal_Assembly_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural97);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow98", Signal_Assembly_A_AClassifierBehavior_ObjectFlow98);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean99", Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger100", Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100);
				Signal_Assembly_A_AClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_Assembly_A_AClassifierBehavior_this);
					Signal_Assembly_A_AClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_Assembly_A_AClassifierBehavior_this_result);
						Signal_Assembly_A_AClassifierBehavior_this_result_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", Signal_Assembly_A_AClassifierBehavior_this_result_LiteralInteger101);
						Signal_Assembly_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural102.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural102", Signal_Assembly_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural102);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow103", Signal_Assembly_A_AClassifierBehavior_ObjectFlow103);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean104", Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralInteger105);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow106", Signal_Assembly_A_AClassifierBehavior_ControlFlow106);
				Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode107", Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow108", Signal_Assembly_A_AClassifierBehavior_ObjectFlow108);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean109", Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralInteger110);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow111", Signal_Assembly_A_AClassifierBehavior_ControlFlow111);
				Signal_Assembly_A_AClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", Signal_Assembly_A_AClassifierBehavior_Accept_S);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112.reset(new Trigger());
					this->addToElementRepository("Trigger112", Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_value.reset(new OutputPin());
					this->addToElementRepository("value", Signal_Assembly_A_AClassifierBehavior_Accept_S_value);
						Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger113);
						Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger114.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger114", Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralInteger114);
						Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural115.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural115", Signal_Assembly_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural115);
			Signal_Assembly_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", Signal_Assembly_A_A_A);
				Signal_Assembly_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_Assembly_A_A_A_result);
			Signal_Assembly_A_v.reset(new Property());
			this->addToElementRepository("v", Signal_Assembly_A_v);
			Signal_Assembly_A_p.reset(new Port());
			this->addToElementRepository("p", Signal_Assembly_A_p);
		Signal_Assembly_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", Signal_Assembly_StartEvent);

	// Initialize public members
	/*
	 * Model Signal_Assembly
	 */
	Signal_Assembly->setThisPackagePtr(Signal_Assembly);
	Signal_Assembly->setName("Signal_Assembly");
	Signal_Assembly->setVisibility(VisibilityKind::public_);
		// Class TestCase
		Signal_Assembly_TestCase->setThisClass_Ptr(Signal_Assembly_TestCase);
		Signal_Assembly_TestCase->setName("TestCase");
		Signal_Assembly_TestCase->setVisibility(VisibilityKind::public_);
		
		Signal_Assembly_TestCase->setIsAbstract(true);
		
		
			// Operation test
			Signal_Assembly_TestCase_test->setThisOperationPtr(Signal_Assembly_TestCase_test);
			Signal_Assembly_TestCase_test->setName("test");
			Signal_Assembly_TestCase_test->setVisibility(VisibilityKind::public_);
			Signal_Assembly_TestCase_test->setIsAbstract(true);
		Signal_Assembly_TestCase->addOwnedOperation(Signal_Assembly_TestCase_test);
	Signal_Assembly->addPackagedElement(Signal_Assembly_TestCase);
		// Signal S
		Signal_Assembly_S->setThisSignalPtr(Signal_Assembly_S);
		Signal_Assembly_S->setName("S");
		Signal_Assembly_S->setVisibility(VisibilityKind::public_);
		
			// Property value
			Signal_Assembly_S_value->setThisElementPtr(Signal_Assembly_S_value);
			Signal_Assembly_S_value->setName("value");
			Signal_Assembly_S_value->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Signal_Assembly_S->addOwnedAttribute(Signal_Assembly_S_value);
	Signal_Assembly->addPackagedElement(Signal_Assembly_S);
		// SignalEvent ContinueEvent
		Signal_Assembly_ContinueEvent->setThisElementPtr(Signal_Assembly_ContinueEvent);
		Signal_Assembly_ContinueEvent->setName("ContinueEvent");
		Signal_Assembly_ContinueEvent->setVisibility(VisibilityKind::public_);
		Signal_Assembly_ContinueEvent->setSignal(Signal_Assembly_Continue);
	Signal_Assembly->addPackagedElement(Signal_Assembly_ContinueEvent);
		// Association R
		Signal_Assembly_R->setThisAssociationPtr(Signal_Assembly_R);
		Signal_Assembly_R->setName("R");
		Signal_Assembly_R->setVisibility(VisibilityKind::public_);
		Signal_Assembly_R->addOwnedEnd(Signal_Assembly_R_x);
		Signal_Assembly_R->addOwnedEnd(Signal_Assembly_R_y);
	Signal_Assembly->addPackagedElement(Signal_Assembly_R);
		// Activity main
		Signal_Assembly_main->setThisActivityPtr(Signal_Assembly_main);
		Signal_Assembly_main->setName("main");
		Signal_Assembly_main->setVisibility(VisibilityKind::public_);
			// CallOperationAction TestCaseAssembly()
			Signal_Assembly_main_TestCaseAssembly_->setThisExecutableNodePtr(Signal_Assembly_main_TestCaseAssembly_);
			Signal_Assembly_main_TestCaseAssembly_->setName("TestCaseAssembly()");
			Signal_Assembly_main_TestCaseAssembly_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Signal_Assembly_main_TestCaseAssembly__result->setThisElementPtr(Signal_Assembly_main_TestCaseAssembly__result);
				Signal_Assembly_main_TestCaseAssembly__result->setName("result");
				Signal_Assembly_main_TestCaseAssembly__result->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_TestCaseAssembly__result->setType(Signal_Assembly_TestCaseAssembly);
			Signal_Assembly_main_TestCaseAssembly_->addResult(Signal_Assembly_main_TestCaseAssembly__result);
			Signal_Assembly_main_TestCaseAssembly_->setOperation(Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly);
				// InputPin target
				Signal_Assembly_main_TestCaseAssembly__target->setThisElementPtr(Signal_Assembly_main_TestCaseAssembly__target);
				Signal_Assembly_main_TestCaseAssembly__target->setName("target");
				Signal_Assembly_main_TestCaseAssembly__target->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_TestCaseAssembly__target->setType(Signal_Assembly_TestCaseAssembly);
			Signal_Assembly_main_TestCaseAssembly_->setTarget(Signal_Assembly_main_TestCaseAssembly__target);
		Signal_Assembly_main->addNode(Signal_Assembly_main_TestCaseAssembly_);
			// ForkNode Fork testCase
			Signal_Assembly_main_Fork_testCase->setThisElementPtr(Signal_Assembly_main_Fork_testCase);
			Signal_Assembly_main_Fork_testCase->setName("Fork testCase");
			Signal_Assembly_main_Fork_testCase->setVisibility(VisibilityKind::public_);
		Signal_Assembly_main->addNode(Signal_Assembly_main_Fork_testCase);
			// CreateObjectAction Create TestCaseAssembly
			Signal_Assembly_main_Create_TestCaseAssembly->setThisExecutableNodePtr(Signal_Assembly_main_Create_TestCaseAssembly);
			Signal_Assembly_main_Create_TestCaseAssembly->setName("Create TestCaseAssembly");
			Signal_Assembly_main_Create_TestCaseAssembly->setVisibility(VisibilityKind::public_);
			Signal_Assembly_main_Create_TestCaseAssembly->setClassifier(Signal_Assembly_TestCaseAssembly);
				// OutputPin result
				Signal_Assembly_main_Create_TestCaseAssembly_result->setThisElementPtr(Signal_Assembly_main_Create_TestCaseAssembly_result);
				Signal_Assembly_main_Create_TestCaseAssembly_result->setName("result");
				Signal_Assembly_main_Create_TestCaseAssembly_result->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_Create_TestCaseAssembly_result->setType(Signal_Assembly_TestCaseAssembly);
			Signal_Assembly_main_Create_TestCaseAssembly->setResult(Signal_Assembly_main_Create_TestCaseAssembly_result);
		Signal_Assembly_main->addNode(Signal_Assembly_main_Create_TestCaseAssembly);
			// SendSignalAction Send Start
			Signal_Assembly_main_Send_Start->setThisExecutableNodePtr(Signal_Assembly_main_Send_Start);
			Signal_Assembly_main_Send_Start->setName("Send Start");
			Signal_Assembly_main_Send_Start->setVisibility(VisibilityKind::public_);
			Signal_Assembly_main_Send_Start->setSignal(Signal_Assembly_Start);
				// InputPin target
				Signal_Assembly_main_Send_Start_target->setThisElementPtr(Signal_Assembly_main_Send_Start_target);
				Signal_Assembly_main_Send_Start_target->setName("target");
				Signal_Assembly_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_Send_Start_target->setType(Signal_Assembly_Tester);
			Signal_Assembly_main_Send_Start->setTarget(Signal_Assembly_main_Send_Start_target);
				// InputPin testCase
				Signal_Assembly_main_Send_Start_testCase->setThisElementPtr(Signal_Assembly_main_Send_Start_testCase);
				Signal_Assembly_main_Send_Start_testCase->setName("testCase");
				Signal_Assembly_main_Send_Start_testCase->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_Send_Start_testCase->setType(Signal_Assembly_TestCase);
			Signal_Assembly_main_Send_Start->addArgument(Signal_Assembly_main_Send_Start_testCase);
		Signal_Assembly_main->addNode(Signal_Assembly_main_Send_Start);
			// ReadStructuralFeatureAction Read TestCaseAssembly.tester
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setThisExecutableNodePtr(Signal_Assembly_main_Read_TestCaseAssembly_tester);
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setName("Read TestCaseAssembly.tester");
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setVisibility(VisibilityKind::public_);
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setStructuralFeature(Signal_Assembly_TestCaseAssembly_tester);
				// InputPin object
				Signal_Assembly_main_Read_TestCaseAssembly_tester_object->setThisElementPtr(Signal_Assembly_main_Read_TestCaseAssembly_tester_object);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_object->setName("object");
				Signal_Assembly_main_Read_TestCaseAssembly_tester_object->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_object->setType(Signal_Assembly_TestCaseAssembly);
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setObject(Signal_Assembly_main_Read_TestCaseAssembly_tester_object);
				// OutputPin result
				Signal_Assembly_main_Read_TestCaseAssembly_tester_result->setThisElementPtr(Signal_Assembly_main_Read_TestCaseAssembly_tester_result);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_result->setName("result");
				Signal_Assembly_main_Read_TestCaseAssembly_tester_result->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_Read_TestCaseAssembly_tester_result->setType(Signal_Assembly_Tester);
			Signal_Assembly_main_Read_TestCaseAssembly_tester->setResult(Signal_Assembly_main_Read_TestCaseAssembly_tester_result);
		Signal_Assembly_main->addNode(Signal_Assembly_main_Read_TestCaseAssembly_tester);
			// ObjectFlow ObjectFlow0 from Fork testCase to testCase
			Signal_Assembly_main_ObjectFlow0->setThisActivityEdgePtr(Signal_Assembly_main_ObjectFlow0);
			Signal_Assembly_main_ObjectFlow0->setName("ObjectFlow0");
			Signal_Assembly_main_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_main_ObjectFlow0->setSource(Signal_Assembly_main_Fork_testCase);
			Signal_Assembly_main_ObjectFlow0->setTarget(Signal_Assembly_main_Send_Start_testCase);
				// LiteralBoolean LiteralBoolean1
				Signal_Assembly_main_ObjectFlow0_LiteralBoolean1->setThisElementPtr(Signal_Assembly_main_ObjectFlow0_LiteralBoolean1);
				Signal_Assembly_main_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
				Signal_Assembly_main_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_ObjectFlow0_LiteralBoolean1->setValue(true);
			Signal_Assembly_main_ObjectFlow0->setGuard(Signal_Assembly_main_ObjectFlow0_LiteralBoolean1);
		Signal_Assembly_main->addEdge(Signal_Assembly_main_ObjectFlow0);
			// ObjectFlow ObjectFlow8 from result to target
			Signal_Assembly_main_ObjectFlow8->setThisActivityEdgePtr(Signal_Assembly_main_ObjectFlow8);
			Signal_Assembly_main_ObjectFlow8->setName("ObjectFlow8");
			Signal_Assembly_main_ObjectFlow8->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_main_ObjectFlow8->setSource(Signal_Assembly_main_Create_TestCaseAssembly_result);
			Signal_Assembly_main_ObjectFlow8->setTarget(Signal_Assembly_main_TestCaseAssembly__target);
				// LiteralBoolean LiteralBoolean9
				Signal_Assembly_main_ObjectFlow8_LiteralBoolean9->setThisElementPtr(Signal_Assembly_main_ObjectFlow8_LiteralBoolean9);
				Signal_Assembly_main_ObjectFlow8_LiteralBoolean9->setName("LiteralBoolean9");
				Signal_Assembly_main_ObjectFlow8_LiteralBoolean9->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_ObjectFlow8_LiteralBoolean9->setValue(true);
			Signal_Assembly_main_ObjectFlow8->setGuard(Signal_Assembly_main_ObjectFlow8_LiteralBoolean9);
		Signal_Assembly_main->addEdge(Signal_Assembly_main_ObjectFlow8);
			// ObjectFlow ObjectFlow13 from result to Fork testCase
			Signal_Assembly_main_ObjectFlow13->setThisActivityEdgePtr(Signal_Assembly_main_ObjectFlow13);
			Signal_Assembly_main_ObjectFlow13->setName("ObjectFlow13");
			Signal_Assembly_main_ObjectFlow13->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_main_ObjectFlow13->setSource(Signal_Assembly_main_TestCaseAssembly__result);
			Signal_Assembly_main_ObjectFlow13->setTarget(Signal_Assembly_main_Fork_testCase);
				// LiteralBoolean LiteralBoolean15
				Signal_Assembly_main_ObjectFlow13_LiteralBoolean15->setThisElementPtr(Signal_Assembly_main_ObjectFlow13_LiteralBoolean15);
				Signal_Assembly_main_ObjectFlow13_LiteralBoolean15->setName("LiteralBoolean15");
				Signal_Assembly_main_ObjectFlow13_LiteralBoolean15->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_ObjectFlow13_LiteralBoolean15->setValue(true);
			Signal_Assembly_main_ObjectFlow13->setGuard(Signal_Assembly_main_ObjectFlow13_LiteralBoolean15);
		Signal_Assembly_main->addEdge(Signal_Assembly_main_ObjectFlow13);
			// ObjectFlow ObjectFlow25 from result to target
			Signal_Assembly_main_ObjectFlow25->setThisActivityEdgePtr(Signal_Assembly_main_ObjectFlow25);
			Signal_Assembly_main_ObjectFlow25->setName("ObjectFlow25");
			Signal_Assembly_main_ObjectFlow25->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_main_ObjectFlow25->setSource(Signal_Assembly_main_Read_TestCaseAssembly_tester_result);
			Signal_Assembly_main_ObjectFlow25->setTarget(Signal_Assembly_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean26
				Signal_Assembly_main_ObjectFlow25_LiteralBoolean26->setThisElementPtr(Signal_Assembly_main_ObjectFlow25_LiteralBoolean26);
				Signal_Assembly_main_ObjectFlow25_LiteralBoolean26->setName("LiteralBoolean26");
				Signal_Assembly_main_ObjectFlow25_LiteralBoolean26->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_ObjectFlow25_LiteralBoolean26->setValue(true);
			Signal_Assembly_main_ObjectFlow25->setGuard(Signal_Assembly_main_ObjectFlow25_LiteralBoolean26);
		Signal_Assembly_main->addEdge(Signal_Assembly_main_ObjectFlow25);
			// ObjectFlow ObjectFlow28 from Fork testCase to object
			Signal_Assembly_main_ObjectFlow28->setThisActivityEdgePtr(Signal_Assembly_main_ObjectFlow28);
			Signal_Assembly_main_ObjectFlow28->setName("ObjectFlow28");
			Signal_Assembly_main_ObjectFlow28->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_main_ObjectFlow28->setSource(Signal_Assembly_main_Fork_testCase);
			Signal_Assembly_main_ObjectFlow28->setTarget(Signal_Assembly_main_Read_TestCaseAssembly_tester_object);
				// LiteralBoolean LiteralBoolean30
				Signal_Assembly_main_ObjectFlow28_LiteralBoolean30->setThisElementPtr(Signal_Assembly_main_ObjectFlow28_LiteralBoolean30);
				Signal_Assembly_main_ObjectFlow28_LiteralBoolean30->setName("LiteralBoolean30");
				Signal_Assembly_main_ObjectFlow28_LiteralBoolean30->setVisibility(VisibilityKind::public_);
				Signal_Assembly_main_ObjectFlow28_LiteralBoolean30->setValue(true);
			Signal_Assembly_main_ObjectFlow28->setGuard(Signal_Assembly_main_ObjectFlow28_LiteralBoolean30);
		Signal_Assembly_main->addEdge(Signal_Assembly_main_ObjectFlow28);
	Signal_Assembly->addPackagedElement(Signal_Assembly_main);
		// Signal Continue
		Signal_Assembly_Continue->setThisSignalPtr(Signal_Assembly_Continue);
		Signal_Assembly_Continue->setName("Continue");
		Signal_Assembly_Continue->setVisibility(VisibilityKind::public_);
	Signal_Assembly->addPackagedElement(Signal_Assembly_Continue);
		// SignalEvent SEvent
		Signal_Assembly_SEvent->setThisElementPtr(Signal_Assembly_SEvent);
		Signal_Assembly_SEvent->setName("SEvent");
		Signal_Assembly_SEvent->setVisibility(VisibilityKind::public_);
		Signal_Assembly_SEvent->setSignal(Signal_Assembly_S);
	Signal_Assembly->addPackagedElement(Signal_Assembly_SEvent);
		// Class I
		Signal_Assembly_I->setThisClass_Ptr(Signal_Assembly_I);
		Signal_Assembly_I->setName("I");
		Signal_Assembly_I->setVisibility(VisibilityKind::public_);
	Signal_Assembly->addPackagedElement(Signal_Assembly_I);
		// Class Tester
		Signal_Assembly_Tester->setThisClass_Ptr(Signal_Assembly_Tester);
		Signal_Assembly_Tester->setName("Tester");
		Signal_Assembly_Tester->setVisibility(VisibilityKind::public_);
		
			// Port q
			Signal_Assembly_Tester_q->setThisElementPtr(Signal_Assembly_Tester_q);
			Signal_Assembly_Tester_q->setName("q");
			Signal_Assembly_Tester_q->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_Tester_q->setType(Signal_Assembly_I);
			Signal_Assembly_Tester_q->setAggregation(AggregationKind::composite);
			Signal_Assembly_Tester_q->isBehavior = true;
			Signal_Assembly_Tester_q->isService = true;
		Signal_Assembly_Tester->addOwnedAttribute(Signal_Assembly_Tester_q);
		Signal_Assembly_Tester->setClassifierBehavior(Signal_Assembly_Tester_TesterClassifierBehavior);
			// Activity TesterClassifierBehavior
			Signal_Assembly_Tester_TesterClassifierBehavior->setThisActivityPtr(Signal_Assembly_Tester_TesterClassifierBehavior);
			Signal_Assembly_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			Signal_Assembly_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_Tester_TesterClassifierBehavior->isReentrant = false;
				// AcceptEventAction Accept Continue
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue->setName("Accept Continue");
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result->setName("result");
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result->setType(Signal_Assembly_Continue);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue->addResult(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_result);
					// Trigger Trigger31
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31->setName("Trigger31");
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31->setEvent(Signal_Assembly_ContinueEvent);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue->addTrigger(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue_Trigger31);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue);
				// ValueSpecificationAction Value(4)
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4);
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger53
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53->setName("LiteralInteger53");
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53->setValue(4);
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4->setValue(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_LiteralInteger53);
					// OutputPin result
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_Tester_TesterClassifierBehavior_Value_4->setResult(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4);
				// ActivityFinalNode ActivityFinalNode54
				Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54);
				Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54->setName("ActivityFinalNode54");
				Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54->setVisibility(VisibilityKind::public_);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54);
				// AcceptEventAction Accept Start
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->setIsUnmarshall(true);
					// OutputPin testCase
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase->setName("testCase");
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase->setType(Signal_Assembly_TestCase);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->addResult(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					// Trigger Trigger41
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41->setName("Trigger41");
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41->setEvent(Signal_Assembly_StartEvent);
				Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_Trigger41);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadSelfAction this
				Signal_Assembly_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_this);
				Signal_Assembly_Tester_TesterClassifierBehavior_this->setName("this");
				Signal_Assembly_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_Assembly_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_this_result);
					Signal_Assembly_Tester_TesterClassifierBehavior_this_result->setName("result");
					Signal_Assembly_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_this_result->setType(Signal_Assembly_Tester);
				Signal_Assembly_Tester_TesterClassifierBehavior_this->setResult(Signal_Assembly_Tester_TesterClassifierBehavior_this_result);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_this);
				// CallOperationAction Call test()
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_);
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_->setOperation(Signal_Assembly_TestCase_test);
					// InputPin target
					Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target);
					Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target->setType(Signal_Assembly_TestCase);
				Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_);
				// SendSignalAction Send S
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setSignal(Signal_Assembly_S);
					// InputPin target
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target->setType(Signal_Assembly_Tester);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin value
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value->setName("value");
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->addArgument(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value);
				Signal_Assembly_Tester_TesterClassifierBehavior_Send_S->setOnPort(Signal_Assembly_Tester_q);
			Signal_Assembly_Tester_TesterClassifierBehavior->addNode(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S);
				// ObjectFlow ObjectFlow35 from testCase to target
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setName("ObjectFlow35");
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start_testCase);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean36
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36->setName("LiteralBoolean36");
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36->setValue(true);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35->setGuard(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35_LiteralBoolean36);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow35);
				// ObjectFlow ObjectFlow55 from result to value
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setName("ObjectFlow55");
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Value_4_result);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_value);
					// LiteralBoolean LiteralBoolean56
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56->setName("LiteralBoolean56");
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56->setValue(true);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55->setGuard(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55_LiteralBoolean56);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow55);
				// ControlFlow ControlFlow42 from Send S to Accept Continue
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42->setName("ControlFlow42");
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow42);
				// ControlFlow ControlFlow58 from Call test() to ActivityFinalNode54
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58->setName("ControlFlow58");
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_ActivityFinalNode54);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow58);
				// ObjectFlow ObjectFlow61 from result to target
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setName("ObjectFlow61");
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_this_result);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean63
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63->setThisElementPtr(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63->setName("LiteralBoolean63");
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63->setVisibility(VisibilityKind::public_);
					Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63->setValue(true);
				Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61->setGuard(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61_LiteralBoolean63);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ObjectFlow61);
				// ControlFlow ControlFlow64 from Accept Start to this
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64->setName("ControlFlow64");
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Start);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_this);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow64);
				// ControlFlow ControlFlow45 from Accept Continue to Call test()
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45->setThisActivityEdgePtr(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45->setName("ControlFlow45");
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45->setSource(Signal_Assembly_Tester_TesterClassifierBehavior_Accept_Continue);
				Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45->setTarget(Signal_Assembly_Tester_TesterClassifierBehavior_Call_test_);
			Signal_Assembly_Tester_TesterClassifierBehavior->addEdge(Signal_Assembly_Tester_TesterClassifierBehavior_ControlFlow45);
		Signal_Assembly_Tester->addOwnedBehavior(Signal_Assembly_Tester_TesterClassifierBehavior);
		
		Signal_Assembly_Tester->setIsActive(true);
			// Operation Tester_Tester
			Signal_Assembly_Tester_Tester_Tester->setThisOperationPtr(Signal_Assembly_Tester_Tester_Tester);
			Signal_Assembly_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_Assembly_Tester_Tester_Tester->setName("Tester_Tester");
			Signal_Assembly_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_Assembly_Tester_Tester_Tester_result->setThisElementPtr(Signal_Assembly_Tester_Tester_Tester_result);
				Signal_Assembly_Tester_Tester_Tester_result->setName("result");
				Signal_Assembly_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_Tester_Tester_Tester_result->setType(Signal_Assembly_Tester);
				Signal_Assembly_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			Signal_Assembly_Tester_Tester_Tester->addOwnedParameter(Signal_Assembly_Tester_Tester_Tester_result);
		Signal_Assembly_Tester->addOwnedOperation(Signal_Assembly_Tester_Tester_Tester);
			// Reception Start
			Signal_Assembly_Tester_Start->setThisBehavioralFeaturePtr(Signal_Assembly_Tester_Start);
			Signal_Assembly_Tester_Start->setName("Start");
			Signal_Assembly_Tester_Start->setVisibility(VisibilityKind::public_);
			Signal_Assembly_Tester_Start->setSignal(Signal_Assembly_Start);
		Signal_Assembly_Tester->addOwnedReception(Signal_Assembly_Tester_Start);
	Signal_Assembly->addPackagedElement(Signal_Assembly_Tester);
		// Signal Start
		Signal_Assembly_Start->setThisSignalPtr(Signal_Assembly_Start);
		Signal_Assembly_Start->setName("Start");
		Signal_Assembly_Start->setVisibility(VisibilityKind::public_);
		
			// Property testCase
			Signal_Assembly_Start_testCase->setThisElementPtr(Signal_Assembly_Start_testCase);
			Signal_Assembly_Start_testCase->setName("testCase");
			Signal_Assembly_Start_testCase->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_Start_testCase->setType(Signal_Assembly_TestCase);
		Signal_Assembly_Start->addOwnedAttribute(Signal_Assembly_Start_testCase);
	Signal_Assembly->addPackagedElement(Signal_Assembly_Start);
		// Class TestCaseAssembly
		Signal_Assembly_TestCaseAssembly->setThisClass_Ptr(Signal_Assembly_TestCaseAssembly);
		Signal_Assembly_TestCaseAssembly->setName("TestCaseAssembly");
		Signal_Assembly_TestCaseAssembly->setVisibility(VisibilityKind::public_);
		
			// Generalization to TestCase
			Signal_Assembly_TestCaseAssembly_Generalization67->setThisElementPtr(Signal_Assembly_TestCaseAssembly_Generalization67);
			Signal_Assembly_TestCaseAssembly_Generalization67->setGeneral(Signal_Assembly_TestCase);
		Signal_Assembly_TestCaseAssembly->addGeneralization(Signal_Assembly_TestCaseAssembly_Generalization67);
			// Property a
			Signal_Assembly_TestCaseAssembly_a->setThisElementPtr(Signal_Assembly_TestCaseAssembly_a);
			Signal_Assembly_TestCaseAssembly_a->setName("a");
			Signal_Assembly_TestCaseAssembly_a->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_TestCaseAssembly_a->setType(Signal_Assembly_A);
			Signal_Assembly_TestCaseAssembly_a->setAggregation(AggregationKind::composite);
		Signal_Assembly_TestCaseAssembly->addOwnedAttribute(Signal_Assembly_TestCaseAssembly_a);
			// Property tester
			Signal_Assembly_TestCaseAssembly_tester->setThisElementPtr(Signal_Assembly_TestCaseAssembly_tester);
			Signal_Assembly_TestCaseAssembly_tester->setName("tester");
			Signal_Assembly_TestCaseAssembly_tester->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_TestCaseAssembly_tester->setType(Signal_Assembly_Tester);
			Signal_Assembly_TestCaseAssembly_tester->setAggregation(AggregationKind::composite);
		Signal_Assembly_TestCaseAssembly->addOwnedAttribute(Signal_Assembly_TestCaseAssembly_tester);
		// Activity testActivity
			Signal_Assembly_TestCaseAssembly_testActivity->setThisActivityPtr(Signal_Assembly_TestCaseAssembly_testActivity);
			Signal_Assembly_TestCaseAssembly_testActivity->setName("testActivity");
			Signal_Assembly_TestCaseAssembly_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testV
				Signal_Assembly_TestCaseAssembly_testActivity_testV->setThisClass_Ptr(Signal_Assembly_TestCaseAssembly_testActivity_testV);
				Signal_Assembly_TestCaseAssembly_testActivity_testV->setName("testV");
				Signal_Assembly_TestCaseAssembly_testActivity_testV->setVisibility(VisibilityKind::public_);
				
					// Parameter v
					Signal_Assembly_TestCaseAssembly_testActivity_testV_v->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_testV_v);
					Signal_Assembly_TestCaseAssembly_testActivity_testV_v->setName("v");
					Signal_Assembly_TestCaseAssembly_testActivity_testV_v->setVisibility(VisibilityKind::public_);
					
					Signal_Assembly_TestCaseAssembly_testActivity_testV_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_TestCaseAssembly_testActivity_testV->addOwnedParameter(Signal_Assembly_TestCaseAssembly_testActivity_testV_v);
				Signal_Assembly_TestCaseAssembly_testActivity_testV->addLanguage("C++");
				Signal_Assembly_TestCaseAssembly_testActivity_testV->addLanguage("Include");
				Signal_Assembly_TestCaseAssembly_testActivity_testV->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.v == 4\"<<std::endl;  	// Test parameter p 	int v = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument v = \" + std::to_string(v)); 	 	std::cout << \"a.v == \" << std::to_string(v) <<std::endl; 	std::cout<<\"Signal correctly sent and received: \";  	if(v == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
				Signal_Assembly_TestCaseAssembly_testActivity_testV->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			Signal_Assembly_TestCaseAssembly_testActivity->addOwnedBehavior(Signal_Assembly_TestCaseAssembly_testActivity_testV);
				// CallBehaviorAction Call testV
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV->setThisExecutableNodePtr(Signal_Assembly_TestCaseAssembly_testActivity_Call_testV);
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV->setName("Call testV");
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV->setVisibility(VisibilityKind::public_);
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV->setBehavior(Signal_Assembly_TestCaseAssembly_testActivity_testV);
					// InputPin v
					Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v);
					Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v->setName("v");
					Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_TestCaseAssembly_testActivity_Call_testV->addArgument(Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v);
			Signal_Assembly_TestCaseAssembly_testActivity->addNode(Signal_Assembly_TestCaseAssembly_testActivity_Call_testV);
				// ReadStructuralFeatureAction Read a.v
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setThisExecutableNodePtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setName("Read a.v");
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setVisibility(VisibilityKind::public_);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setStructuralFeature(Signal_Assembly_A_v);
					// InputPin object
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object->setName("object");
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object->setType(Signal_Assembly_A);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setObject(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object);
					// OutputPin result
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result->setName("result");
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v->setResult(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result);
			Signal_Assembly_TestCaseAssembly_testActivity->addNode(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v);
				// ReadStructuralFeatureAction Read this.a
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setThisExecutableNodePtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setName("Read this.a");
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setVisibility(VisibilityKind::public_);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setStructuralFeature(Signal_Assembly_TestCaseAssembly_a);
					// InputPin object
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object->setName("object");
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object->setType(Signal_Assembly_TestCaseAssembly);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setObject(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object);
					// OutputPin result
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result->setName("result");
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result->setType(Signal_Assembly_A);
				Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a->setResult(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result);
			Signal_Assembly_TestCaseAssembly_testActivity->addNode(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a);
				// ReadSelfAction this
				Signal_Assembly_TestCaseAssembly_testActivity_this->setThisExecutableNodePtr(Signal_Assembly_TestCaseAssembly_testActivity_this);
				Signal_Assembly_TestCaseAssembly_testActivity_this->setName("this");
				Signal_Assembly_TestCaseAssembly_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_Assembly_TestCaseAssembly_testActivity_this_result->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_this_result);
					Signal_Assembly_TestCaseAssembly_testActivity_this_result->setName("result");
					Signal_Assembly_TestCaseAssembly_testActivity_this_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_this_result->setType(Signal_Assembly_TestCaseAssembly);
				Signal_Assembly_TestCaseAssembly_testActivity_this->setResult(Signal_Assembly_TestCaseAssembly_testActivity_this_result);
			Signal_Assembly_TestCaseAssembly_testActivity->addNode(Signal_Assembly_TestCaseAssembly_testActivity_this);
				// ObjectFlow ObjectFlow68 from result to object
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setThisActivityEdgePtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setName("ObjectFlow68");
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setSource(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_result);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setTarget(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_object);
					// LiteralBoolean LiteralBoolean69
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69->setName("LiteralBoolean69");
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69->setValue(true);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68->setGuard(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68_LiteralBoolean69);
			Signal_Assembly_TestCaseAssembly_testActivity->addEdge(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow68);
				// ObjectFlow ObjectFlow71 from result to v
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setThisActivityEdgePtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setName("ObjectFlow71");
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setSource(Signal_Assembly_TestCaseAssembly_testActivity_Read_a_v_result);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setTarget(Signal_Assembly_TestCaseAssembly_testActivity_Call_testV_v);
					// LiteralBoolean LiteralBoolean72
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72->setName("LiteralBoolean72");
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72->setValue(true);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71->setGuard(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71_LiteralBoolean72);
			Signal_Assembly_TestCaseAssembly_testActivity->addEdge(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow71);
				// ObjectFlow ObjectFlow77 from result to object
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setThisActivityEdgePtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setName("ObjectFlow77");
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setSource(Signal_Assembly_TestCaseAssembly_testActivity_this_result);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setTarget(Signal_Assembly_TestCaseAssembly_testActivity_Read_this_a_object);
					// LiteralBoolean LiteralBoolean78
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78->setThisElementPtr(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78->setName("LiteralBoolean78");
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78->setVisibility(VisibilityKind::public_);
					Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78->setValue(true);
				Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77->setGuard(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77_LiteralBoolean78);
			Signal_Assembly_TestCaseAssembly_testActivity->addEdge(Signal_Assembly_TestCaseAssembly_testActivity_ObjectFlow77);
		Signal_Assembly_TestCaseAssembly->addOwnedBehavior(Signal_Assembly_TestCaseAssembly_testActivity);
		Signal_Assembly_TestCaseAssembly_r->setName("r");
			Signal_Assembly_TestCaseAssembly_r->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66->setRole(Signal_Assembly_A_p);
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66->setPartWithPort(Signal_Assembly_TestCaseAssembly_a);
				
			Signal_Assembly_TestCaseAssembly_r->addEnd(Signal_Assembly_TestCaseAssembly_r_ConnectorEnd66);
				
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65->setRole(Signal_Assembly_Tester_q);
				Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65->setPartWithPort(Signal_Assembly_TestCaseAssembly_tester);
				
			Signal_Assembly_TestCaseAssembly_r->addEnd(Signal_Assembly_TestCaseAssembly_r_ConnectorEnd65);
			Signal_Assembly_TestCaseAssembly_r->setType(Signal_Assembly_R);
		Signal_Assembly_TestCaseAssembly->addOwnedConnector(Signal_Assembly_TestCaseAssembly_r);
			// Operation TestCaseAssembly_TestCaseAssembly
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly->setThisOperationPtr(Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly);
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly->setName("TestCaseAssembly_TestCaseAssembly");
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result->setThisElementPtr(Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result);
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result->setName("result");
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result->setType(Signal_Assembly_TestCaseAssembly);
				Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result->setDirection(ParameterDirectionKind::return_);
			Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly->addOwnedParameter(Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly_result);
		Signal_Assembly_TestCaseAssembly->addOwnedOperation(Signal_Assembly_TestCaseAssembly_TestCaseAssembly_TestCaseAssembly);
			// Operation test
			Signal_Assembly_TestCaseAssembly_test->setThisOperationPtr(Signal_Assembly_TestCaseAssembly_test);
			Signal_Assembly_TestCaseAssembly_test->setName("test");
			Signal_Assembly_TestCaseAssembly_test->setVisibility(VisibilityKind::public_);
			Signal_Assembly_TestCaseAssembly_test->addMethod(Signal_Assembly_TestCaseAssembly_testActivity);
			Signal_Assembly_TestCaseAssembly_test->addRedefinedOperation(Signal_Assembly_TestCase_test);
		Signal_Assembly_TestCaseAssembly->addOwnedOperation(Signal_Assembly_TestCaseAssembly_test);
	Signal_Assembly->addPackagedElement(Signal_Assembly_TestCaseAssembly);
		// Class A
		Signal_Assembly_A->setThisClass_Ptr(Signal_Assembly_A);
		Signal_Assembly_A->setName("A");
		Signal_Assembly_A->setVisibility(VisibilityKind::public_);
		
			// Property v
			Signal_Assembly_A_v->setThisElementPtr(Signal_Assembly_A_v);
			Signal_Assembly_A_v->setName("v");
			Signal_Assembly_A_v->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_A_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Signal_Assembly_A_v->setAggregation(AggregationKind::shared);
		Signal_Assembly_A->addOwnedAttribute(Signal_Assembly_A_v);
			// Port p
			Signal_Assembly_A_p->setThisElementPtr(Signal_Assembly_A_p);
			Signal_Assembly_A_p->setName("p");
			Signal_Assembly_A_p->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_A_p->setType(Signal_Assembly_I);
			Signal_Assembly_A_p->setAggregation(AggregationKind::composite);
			Signal_Assembly_A_p->isBehavior = true;
			Signal_Assembly_A_p->isService = true;
		Signal_Assembly_A->addOwnedAttribute(Signal_Assembly_A_p);
		Signal_Assembly_A->setClassifierBehavior(Signal_Assembly_A_AClassifierBehavior);
			// Activity AClassifierBehavior
			Signal_Assembly_A_AClassifierBehavior->setThisActivityPtr(Signal_Assembly_A_AClassifierBehavior);
			Signal_Assembly_A_AClassifierBehavior->setName("AClassifierBehavior");
			Signal_Assembly_A_AClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			Signal_Assembly_A_AClassifierBehavior->isReentrant = false;
				// AddStructuralFeatureValueAction Set v
				Signal_Assembly_A_AClassifierBehavior_Set_v->setThisExecutableNodePtr(Signal_Assembly_A_AClassifierBehavior_Set_v);
				Signal_Assembly_A_AClassifierBehavior_Set_v->setName("Set v");
				Signal_Assembly_A_AClassifierBehavior_Set_v->setVisibility(VisibilityKind::public_);
				Signal_Assembly_A_AClassifierBehavior_Set_v->setStructuralFeature(Signal_Assembly_A_v);
					// InputPin object
					Signal_Assembly_A_AClassifierBehavior_Set_v_object->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Set_v_object);
					Signal_Assembly_A_AClassifierBehavior_Set_v_object->setName("object");
					Signal_Assembly_A_AClassifierBehavior_Set_v_object->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Set_v_object->setType(Signal_Assembly_A);
				Signal_Assembly_A_AClassifierBehavior_Set_v->setObject(Signal_Assembly_A_AClassifierBehavior_Set_v_object);
					// InputPin value
					Signal_Assembly_A_AClassifierBehavior_Set_v_value->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Set_v_value);
					Signal_Assembly_A_AClassifierBehavior_Set_v_value->setName("value");
					Signal_Assembly_A_AClassifierBehavior_Set_v_value->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Set_v_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_A_AClassifierBehavior_Set_v->setValue(Signal_Assembly_A_AClassifierBehavior_Set_v_value);
					// OutputPin result
					Signal_Assembly_A_AClassifierBehavior_Set_v_result->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Set_v_result);
					Signal_Assembly_A_AClassifierBehavior_Set_v_result->setName("result");
					Signal_Assembly_A_AClassifierBehavior_Set_v_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Set_v_result->setType(Signal_Assembly_A);
				Signal_Assembly_A_AClassifierBehavior_Set_v->setResult(Signal_Assembly_A_AClassifierBehavior_Set_v_result);
			Signal_Assembly_A_AClassifierBehavior->addNode(Signal_Assembly_A_AClassifierBehavior_Set_v);
				// SendSignalAction Send Continue
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setThisExecutableNodePtr(Signal_Assembly_A_AClassifierBehavior_Send_Continue);
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setName("Send Continue");
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setSignal(Signal_Assembly_Continue);
					// InputPin target
					Signal_Assembly_A_AClassifierBehavior_Send_Continue_target->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Send_Continue_target);
					Signal_Assembly_A_AClassifierBehavior_Send_Continue_target->setName("target");
					Signal_Assembly_A_AClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Send_Continue_target->setType(Signal_Assembly_A);
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setTarget(Signal_Assembly_A_AClassifierBehavior_Send_Continue_target);
				Signal_Assembly_A_AClassifierBehavior_Send_Continue->setOnPort(Signal_Assembly_A_p);
			Signal_Assembly_A_AClassifierBehavior->addNode(Signal_Assembly_A_AClassifierBehavior_Send_Continue);
				// ReadSelfAction this
				Signal_Assembly_A_AClassifierBehavior_this->setThisExecutableNodePtr(Signal_Assembly_A_AClassifierBehavior_this);
				Signal_Assembly_A_AClassifierBehavior_this->setName("this");
				Signal_Assembly_A_AClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_Assembly_A_AClassifierBehavior_this_result->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_this_result);
					Signal_Assembly_A_AClassifierBehavior_this_result->setName("result");
					Signal_Assembly_A_AClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_this_result->setType(Signal_Assembly_A);
				Signal_Assembly_A_AClassifierBehavior_this->setResult(Signal_Assembly_A_AClassifierBehavior_this_result);
			Signal_Assembly_A_AClassifierBehavior->addNode(Signal_Assembly_A_AClassifierBehavior_this);
				// ActivityFinalNode ActivityFinalNode107
				Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107);
				Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107->setName("ActivityFinalNode107");
				Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107->setVisibility(VisibilityKind::public_);
			Signal_Assembly_A_AClassifierBehavior->addNode(Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107);
				// AcceptEventAction Accept S
				Signal_Assembly_A_AClassifierBehavior_Accept_S->setThisExecutableNodePtr(Signal_Assembly_A_AClassifierBehavior_Accept_S);
				Signal_Assembly_A_AClassifierBehavior_Accept_S->setName("Accept S");
				Signal_Assembly_A_AClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
				Signal_Assembly_A_AClassifierBehavior_Accept_S->setIsUnmarshall(true);
					// OutputPin value
					Signal_Assembly_A_AClassifierBehavior_Accept_S_value->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Accept_S_value);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_value->setName("value");
					Signal_Assembly_A_AClassifierBehavior_Accept_S_value->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_Assembly_A_AClassifierBehavior_Accept_S->addResult(Signal_Assembly_A_AClassifierBehavior_Accept_S_value);
					// Trigger Trigger112
					Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112->setName("Trigger112");
					Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112->setEvent(Signal_Assembly_SEvent);
				Signal_Assembly_A_AClassifierBehavior_Accept_S->addTrigger(Signal_Assembly_A_AClassifierBehavior_Accept_S_Trigger112);
			Signal_Assembly_A_AClassifierBehavior->addNode(Signal_Assembly_A_AClassifierBehavior_Accept_S);
				// ObjectFlow ObjectFlow98 from result to object
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setThisActivityEdgePtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow98);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setName("ObjectFlow98");
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setSource(Signal_Assembly_A_AClassifierBehavior_this_result);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setTarget(Signal_Assembly_A_AClassifierBehavior_Set_v_object);
					// LiteralBoolean LiteralBoolean99
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setName("LiteralBoolean99");
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setValue(true);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow98->setGuard(Signal_Assembly_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
			Signal_Assembly_A_AClassifierBehavior->addEdge(Signal_Assembly_A_AClassifierBehavior_ObjectFlow98);
				// ObjectFlow ObjectFlow103 from value to value
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setThisActivityEdgePtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow103);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setName("ObjectFlow103");
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setSource(Signal_Assembly_A_AClassifierBehavior_Accept_S_value);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setTarget(Signal_Assembly_A_AClassifierBehavior_Set_v_value);
					// LiteralBoolean LiteralBoolean104
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104->setName("LiteralBoolean104");
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104->setValue(true);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow103->setGuard(Signal_Assembly_A_AClassifierBehavior_ObjectFlow103_LiteralBoolean104);
			Signal_Assembly_A_AClassifierBehavior->addEdge(Signal_Assembly_A_AClassifierBehavior_ObjectFlow103);
				// ControlFlow ControlFlow106 from Send Continue to ActivityFinalNode107
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106->setThisActivityEdgePtr(Signal_Assembly_A_AClassifierBehavior_ControlFlow106);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106->setName("ControlFlow106");
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106->setSource(Signal_Assembly_A_AClassifierBehavior_Send_Continue);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow106->setTarget(Signal_Assembly_A_AClassifierBehavior_ActivityFinalNode107);
			Signal_Assembly_A_AClassifierBehavior->addEdge(Signal_Assembly_A_AClassifierBehavior_ControlFlow106);
				// ObjectFlow ObjectFlow108 from result to target
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setThisActivityEdgePtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow108);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setName("ObjectFlow108");
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setSource(Signal_Assembly_A_AClassifierBehavior_Set_v_result);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setTarget(Signal_Assembly_A_AClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean109
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109->setThisElementPtr(Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109->setName("LiteralBoolean109");
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109->setVisibility(VisibilityKind::public_);
					Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109->setValue(true);
				Signal_Assembly_A_AClassifierBehavior_ObjectFlow108->setGuard(Signal_Assembly_A_AClassifierBehavior_ObjectFlow108_LiteralBoolean109);
			Signal_Assembly_A_AClassifierBehavior->addEdge(Signal_Assembly_A_AClassifierBehavior_ObjectFlow108);
				// ControlFlow ControlFlow111 from Accept S to this
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111->setThisActivityEdgePtr(Signal_Assembly_A_AClassifierBehavior_ControlFlow111);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111->setName("ControlFlow111");
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111->setSource(Signal_Assembly_A_AClassifierBehavior_Accept_S);
				Signal_Assembly_A_AClassifierBehavior_ControlFlow111->setTarget(Signal_Assembly_A_AClassifierBehavior_this);
			Signal_Assembly_A_AClassifierBehavior->addEdge(Signal_Assembly_A_AClassifierBehavior_ControlFlow111);
		Signal_Assembly_A->addOwnedBehavior(Signal_Assembly_A_AClassifierBehavior);
		
		Signal_Assembly_A->setIsActive(true);
			// Operation A_A
			Signal_Assembly_A_A_A->setThisOperationPtr(Signal_Assembly_A_A_A);
			Signal_Assembly_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_Assembly_A_A_A->setName("A_A");
			Signal_Assembly_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_Assembly_A_A_A_result->setThisElementPtr(Signal_Assembly_A_A_A_result);
				Signal_Assembly_A_A_A_result->setName("result");
				Signal_Assembly_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				Signal_Assembly_A_A_A_result->setType(Signal_Assembly_A);
				Signal_Assembly_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			Signal_Assembly_A_A_A->addOwnedParameter(Signal_Assembly_A_A_A_result);
		Signal_Assembly_A->addOwnedOperation(Signal_Assembly_A_A_A);
	Signal_Assembly->addPackagedElement(Signal_Assembly_A);
		// SignalEvent StartEvent
		Signal_Assembly_StartEvent->setThisElementPtr(Signal_Assembly_StartEvent);
		Signal_Assembly_StartEvent->setName("StartEvent");
		Signal_Assembly_StartEvent->setVisibility(VisibilityKind::public_);
		Signal_Assembly_StartEvent->setSignal(Signal_Assembly_Start);
	Signal_Assembly->addPackagedElement(Signal_Assembly_StartEvent);
}
