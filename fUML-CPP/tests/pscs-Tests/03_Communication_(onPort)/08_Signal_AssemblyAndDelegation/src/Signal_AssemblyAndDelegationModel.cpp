/*
 * Signal_AssemblyAndDelegationModel.cpp
 * 
 * Auto-generated file
 */

#include "Signal_AssemblyAndDelegationModel.h"

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
#include <uml/actions/OutputPin.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/simpleclassifiers/Signal.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Signal_AssemblyAndDelegation;
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

Signal_AssemblyAndDelegationModel::Signal_AssemblyAndDelegationModel()
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

Signal_AssemblyAndDelegationModel::~Signal_AssemblyAndDelegationModel()
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

const std::shared_ptr<Signal_AssemblyAndDelegationModel>& Signal_AssemblyAndDelegationModel::Instance()
{
	static std::shared_ptr<Signal_AssemblyAndDelegationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Signal_AssemblyAndDelegationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Signal_AssemblyAndDelegationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Signal_AssemblyAndDelegation
	 */
	Signal_AssemblyAndDelegation.reset(new Package());
	this->addToElementRepository("Signal_AssemblyAndDelegation", Signal_AssemblyAndDelegation);
		Signal_AssemblyAndDelegation_main.reset(new Activity());
		this->addToElementRepository("main", Signal_AssemblyAndDelegation_main);
			Signal_AssemblyAndDelegation_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", Signal_AssemblyAndDelegation_main_Send_Start);
				Signal_AssemblyAndDelegation_main_Send_Start_testCase.reset(new InputPin());
				this->addToElementRepository("testCase", Signal_AssemblyAndDelegation_main_Send_Start_testCase);
					Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural0", Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralUnlimitedNatural0);
					Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger1);
					Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", Signal_AssemblyAndDelegation_main_Send_Start_testCase_LiteralInteger2);
				Signal_AssemblyAndDelegation_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", Signal_AssemblyAndDelegation_main_Send_Start_target);
					Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralInteger3);
					Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", Signal_AssemblyAndDelegation_main_Send_Start_target_LiteralUnlimitedNatural4);
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_.reset(new CallOperationAction());
			this->addToElementRepository("TestCaseAssembly()", Signal_AssemblyAndDelegation_main_TestCaseAssembly_);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__target.reset(new InputPin());
				this->addToElementRepository("target", Signal_AssemblyAndDelegation_main_TestCaseAssembly__target);
					Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural5", Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralUnlimitedNatural5);
					Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", Signal_AssemblyAndDelegation_main_TestCaseAssembly__target_LiteralInteger6);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_main_TestCaseAssembly__result);
					Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger7);
					Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralInteger8);
					Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", Signal_AssemblyAndDelegation_main_TestCaseAssembly__result_LiteralUnlimitedNatural9);
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly.reset(new CreateObjectAction());
			this->addToElementRepository("Create TestCaseAssembly", Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly);
				Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result);
					Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralInteger10);
					Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result_LiteralUnlimitedNatural11);
			Signal_AssemblyAndDelegation_main_ObjectFlow12.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow12", Signal_AssemblyAndDelegation_main_ObjectFlow12);
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralInteger13);
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean14", Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14);
			Signal_AssemblyAndDelegation_main_ObjectFlow15.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow15", Signal_AssemblyAndDelegation_main_ObjectFlow15);
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralInteger16);
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean17", Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17);
			Signal_AssemblyAndDelegation_main_ObjectFlow18.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow18", Signal_AssemblyAndDelegation_main_ObjectFlow18);
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralInteger19.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger19", Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralInteger19);
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean20", Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20);
			Signal_AssemblyAndDelegation_main_Fork_testCase.reset(new ForkNode());
			this->addToElementRepository("Fork testCase", Signal_AssemblyAndDelegation_main_Fork_testCase);
			Signal_AssemblyAndDelegation_main_ObjectFlow21.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow21", Signal_AssemblyAndDelegation_main_ObjectFlow21);
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22);
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralInteger23.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger23", Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralInteger23);
			Signal_AssemblyAndDelegation_main_ObjectFlow24.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow24", Signal_AssemblyAndDelegation_main_ObjectFlow24);
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralInteger25);
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean26", Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26);
			Signal_AssemblyAndDelegation_main_ObjectFlow27.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow27", Signal_AssemblyAndDelegation_main_ObjectFlow27);
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralInteger28);
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean29", Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29);
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read TestCaseAssembly.c", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object.reset(new InputPin());
				this->addToElementRepository("object", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object);
					Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralUnlimitedNatural30);
					Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object_LiteralInteger31);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result);
					Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralUnlimitedNatural32);
					Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result_LiteralInteger33);
			Signal_AssemblyAndDelegation_main_Read_c_tester.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.tester", Signal_AssemblyAndDelegation_main_Read_c_tester);
				Signal_AssemblyAndDelegation_main_Read_c_tester_object.reset(new InputPin());
				this->addToElementRepository("object", Signal_AssemblyAndDelegation_main_Read_c_tester_object);
					Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralUnlimitedNatural34);
					Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", Signal_AssemblyAndDelegation_main_Read_c_tester_object_LiteralInteger35);
				Signal_AssemblyAndDelegation_main_Read_c_tester_result.reset(new OutputPin());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_main_Read_c_tester_result);
					Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralUnlimitedNatural36.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural36", Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralUnlimitedNatural36);
					Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", Signal_AssemblyAndDelegation_main_Read_c_tester_result_LiteralInteger37);
		Signal_AssemblyAndDelegation_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", Signal_AssemblyAndDelegation_StartEvent);
		Signal_AssemblyAndDelegation_B.reset(new Class_());
		this->addToElementRepository("B", Signal_AssemblyAndDelegation_B);
			Signal_AssemblyAndDelegation_B_r.reset(new Connector());
			this->addToElementRepository("r", Signal_AssemblyAndDelegation_B_r);
				Signal_AssemblyAndDelegation_B_r_ConnectorEnd38.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd38", Signal_AssemblyAndDelegation_B_r_ConnectorEnd38);
				Signal_AssemblyAndDelegation_B_r_ConnectorEnd39.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd39", Signal_AssemblyAndDelegation_B_r_ConnectorEnd39);
			Signal_AssemblyAndDelegation_B_a.reset(new Property());
			this->addToElementRepository("a", Signal_AssemblyAndDelegation_B_a);
			Signal_AssemblyAndDelegation_B_p.reset(new Port());
			this->addToElementRepository("p", Signal_AssemblyAndDelegation_B_p);
		Signal_AssemblyAndDelegation_I.reset(new Class_());
		this->addToElementRepository("I", Signal_AssemblyAndDelegation_I);
		Signal_AssemblyAndDelegation_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", Signal_AssemblyAndDelegation_SEvent);
		Signal_AssemblyAndDelegation_S.reset(new Signal());
		this->addToElementRepository("S", Signal_AssemblyAndDelegation_S);
			Signal_AssemblyAndDelegation_S_value.reset(new Property());
			this->addToElementRepository("value", Signal_AssemblyAndDelegation_S_value);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation.reset(new Class_());
		this->addToElementRepository("TestCaseAssemblyAndDelegation", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b.reset(new Property());
			this->addToElementRepository("b", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c.reset(new Property());
			this->addToElementRepository("c", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation.reset(new Operation());
			this->addToElementRepository("TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r.reset(new Connector());
			this->addToElementRepository("r", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd40", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd41", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.a", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural42", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralUnlimitedNatural42);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralInteger43.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger43", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result_LiteralInteger43);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural44", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralUnlimitedNatural44);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralInteger45.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger45", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object_LiteralInteger45);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV.reset(new OpaqueBehavior());
				this->addToElementRepository("testV", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v.reset(new Parameter());
					this->addToElementRepository("v", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow46", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralInteger47);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean48", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testV", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v.reset(new InputPin());
					this->addToElementRepository("v", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger49);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralUnlimitedNatural50);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v_LiteralInteger51);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow52", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralInteger53);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean54", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralInteger55);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural56", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result_LiteralUnlimitedNatural56);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.v", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralUnlimitedNatural57);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result_LiteralInteger58);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralUnlimitedNatural59.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural59", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralUnlimitedNatural59);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralInteger60.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger60", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object_LiteralInteger60);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow61", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralInteger62);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean63", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow64", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralInteger65);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean66", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.b", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralInteger67);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural68", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object_LiteralUnlimitedNatural68);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralInteger69);
						Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural70", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result_LiteralUnlimitedNatural70);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71.reset(new Generalization());
			this->addToElementRepository("Generalization71", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test.reset(new Operation());
			this->addToElementRepository("test", Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test);
		Signal_AssemblyAndDelegation_A.reset(new Class_());
		this->addToElementRepository("A", Signal_AssemblyAndDelegation_A);
			Signal_AssemblyAndDelegation_A_p.reset(new Port());
			this->addToElementRepository("p", Signal_AssemblyAndDelegation_A_p);
			Signal_AssemblyAndDelegation_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", Signal_AssemblyAndDelegation_A_A_A);
				Signal_AssemblyAndDelegation_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_A_A_A_result);
			Signal_AssemblyAndDelegation_A_v.reset(new Property());
			this->addToElementRepository("v", Signal_AssemblyAndDelegation_A_v);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior.reset(new Activity());
			this->addToElementRepository("AClassifierBehavior", Signal_AssemblyAndDelegation_A_AClassifierBehavior);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow72", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_AssemblyAndDelegation_A_AClassifierBehavior_this);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralInteger73.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger73", Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralInteger73);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural74.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural74", Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural74);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow75", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralInteger76);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean77", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralInteger78.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger78", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralInteger78);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural79.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural79", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural79);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode80", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow81", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralInteger82);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean83", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow84", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value.reset(new OutputPin());
					this->addToElementRepository("value", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger85);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralInteger86);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural87.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural87", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural87);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88.reset(new Trigger());
					this->addToElementRepository("Trigger88", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow89", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean90", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralInteger91.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger91", Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralInteger91);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set v", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object.reset(new InputPin());
					this->addToElementRepository("object", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural92);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object_LiteralInteger93);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value.reset(new InputPin());
					this->addToElementRepository("value", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural94);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value_LiteralInteger95);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural96", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural96);
						Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralInteger97.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger97", Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result_LiteralInteger97);
		Signal_AssemblyAndDelegation_Continue.reset(new Signal());
		this->addToElementRepository("Continue", Signal_AssemblyAndDelegation_Continue);
		Signal_AssemblyAndDelegation_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", Signal_AssemblyAndDelegation_ContinueEvent);
		Signal_AssemblyAndDelegation_C.reset(new Class_());
		this->addToElementRepository("C", Signal_AssemblyAndDelegation_C);
			Signal_AssemblyAndDelegation_C_q.reset(new Port());
			this->addToElementRepository("q", Signal_AssemblyAndDelegation_C_q);
			Signal_AssemblyAndDelegation_C_tester.reset(new Property());
			this->addToElementRepository("tester", Signal_AssemblyAndDelegation_C_tester);
			Signal_AssemblyAndDelegation_C_r.reset(new Connector());
			this->addToElementRepository("r", Signal_AssemblyAndDelegation_C_r);
				Signal_AssemblyAndDelegation_C_r_ConnectorEnd98.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd98", Signal_AssemblyAndDelegation_C_r_ConnectorEnd98);
				Signal_AssemblyAndDelegation_C_r_ConnectorEnd99.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd99", Signal_AssemblyAndDelegation_C_r_ConnectorEnd99);
		Signal_AssemblyAndDelegation_TestCase.reset(new Class_());
		this->addToElementRepository("TestCase", Signal_AssemblyAndDelegation_TestCase);
			Signal_AssemblyAndDelegation_TestCase_test.reset(new Operation());
			this->addToElementRepository("test", Signal_AssemblyAndDelegation_TestCase_test);
		Signal_AssemblyAndDelegation_R.reset(new Association());
		this->addToElementRepository("R", Signal_AssemblyAndDelegation_R);
			Signal_AssemblyAndDelegation_R_x.reset(new Property());
			this->addToElementRepository("x", Signal_AssemblyAndDelegation_R_x);
			Signal_AssemblyAndDelegation_R_y.reset(new Property());
			this->addToElementRepository("y", Signal_AssemblyAndDelegation_R_y);
		Signal_AssemblyAndDelegation_Start.reset(new Signal());
		this->addToElementRepository("Start", Signal_AssemblyAndDelegation_Start);
			Signal_AssemblyAndDelegation_Start_testCase.reset(new Property());
			this->addToElementRepository("testCase", Signal_AssemblyAndDelegation_Start_testCase);
		Signal_AssemblyAndDelegation_Tester.reset(new Class_());
		this->addToElementRepository("Tester", Signal_AssemblyAndDelegation_Tester);
			Signal_AssemblyAndDelegation_Tester_Start.reset(new Reception());
			this->addToElementRepository("Start", Signal_AssemblyAndDelegation_Tester_Start);
			Signal_AssemblyAndDelegation_Tester_q.reset(new Port());
			this->addToElementRepository("q", Signal_AssemblyAndDelegation_Tester_q);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow100", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow101", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger102.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger102", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger102);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural103.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural103", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural103);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105.reset(new Trigger());
					this->addToElementRepository("Trigger105", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger106);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger107.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger107", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger107);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural108", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural108);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow109", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean110", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralInteger111.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger111", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralInteger111);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow112", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger113);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural114", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural114);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow115", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow116", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralInteger117);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean118", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode119", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120.reset(new Trigger());
					this->addToElementRepository("Trigger120", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase.reset(new OutputPin());
					this->addToElementRepository("testCase", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger121.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger121", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger121);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger122.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger122", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger122);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural123.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural123", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural123);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger124.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger124", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger124);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural125", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural125);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value.reset(new InputPin());
					this->addToElementRepository("value", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger126.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger126", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger126);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger127.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger127", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger127);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural128", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural128);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow129", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean130", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralInteger131);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralInteger132.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger132", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralInteger132);
						Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural133);
			Signal_AssemblyAndDelegation_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", Signal_AssemblyAndDelegation_Tester_Tester_Tester);
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", Signal_AssemblyAndDelegation_Tester_Tester_Tester_result);

	// Initialize public members
	/*
	 * Model Signal_AssemblyAndDelegation
	 */
	Signal_AssemblyAndDelegation->setThisPackagePtr(Signal_AssemblyAndDelegation);
	Signal_AssemblyAndDelegation->setName("Signal_AssemblyAndDelegation");
	Signal_AssemblyAndDelegation->setVisibility(VisibilityKind::public_);
		// Activity main
		Signal_AssemblyAndDelegation_main->setThisActivityPtr(Signal_AssemblyAndDelegation_main);
		Signal_AssemblyAndDelegation_main->setName("main");
		Signal_AssemblyAndDelegation_main->setVisibility(VisibilityKind::public_);
			// SendSignalAction Send Start
			Signal_AssemblyAndDelegation_main_Send_Start->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_main_Send_Start);
			Signal_AssemblyAndDelegation_main_Send_Start->setName("Send Start");
			Signal_AssemblyAndDelegation_main_Send_Start->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_main_Send_Start->setSignal(Signal_AssemblyAndDelegation_Start);
				// InputPin target
				Signal_AssemblyAndDelegation_main_Send_Start_target->setThisElementPtr(Signal_AssemblyAndDelegation_main_Send_Start_target);
				Signal_AssemblyAndDelegation_main_Send_Start_target->setName("target");
				Signal_AssemblyAndDelegation_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Send_Start_target->setType(Signal_AssemblyAndDelegation_Tester);
			Signal_AssemblyAndDelegation_main_Send_Start->setTarget(Signal_AssemblyAndDelegation_main_Send_Start_target);
				// InputPin testCase
				Signal_AssemblyAndDelegation_main_Send_Start_testCase->setThisElementPtr(Signal_AssemblyAndDelegation_main_Send_Start_testCase);
				Signal_AssemblyAndDelegation_main_Send_Start_testCase->setName("testCase");
				Signal_AssemblyAndDelegation_main_Send_Start_testCase->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Send_Start_testCase->setType(Signal_AssemblyAndDelegation_TestCase);
			Signal_AssemblyAndDelegation_main_Send_Start->addArgument(Signal_AssemblyAndDelegation_main_Send_Start_testCase);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_Send_Start);
			// CallOperationAction TestCaseAssembly()
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_main_TestCaseAssembly_);
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->setName("TestCaseAssembly()");
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__result->setThisElementPtr(Signal_AssemblyAndDelegation_main_TestCaseAssembly__result);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__result->setName("result");
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__result->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__result->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->addResult(Signal_AssemblyAndDelegation_main_TestCaseAssembly__result);
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->setOperation(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				// InputPin target
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__target->setThisElementPtr(Signal_AssemblyAndDelegation_main_TestCaseAssembly__target);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__target->setName("target");
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__target->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_TestCaseAssembly__target->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_main_TestCaseAssembly_->setTarget(Signal_AssemblyAndDelegation_main_TestCaseAssembly__target);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_TestCaseAssembly_);
			// CreateObjectAction Create TestCaseAssembly
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly);
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly->setName("Create TestCaseAssembly");
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly->setClassifier(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				// OutputPin result
				Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result->setThisElementPtr(Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result);
				Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result->setName("result");
				Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly->setResult(Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly);
			// ForkNode Fork testCase
			Signal_AssemblyAndDelegation_main_Fork_testCase->setThisElementPtr(Signal_AssemblyAndDelegation_main_Fork_testCase);
			Signal_AssemblyAndDelegation_main_Fork_testCase->setName("Fork testCase");
			Signal_AssemblyAndDelegation_main_Fork_testCase->setVisibility(VisibilityKind::public_);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_Fork_testCase);
			// ReadStructuralFeatureAction Read TestCaseAssembly.c
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c);
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setName("Read TestCaseAssembly.c");
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setStructuralFeature(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c);
				// InputPin object
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object->setThisElementPtr(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object->setName("object");
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setObject(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object);
				// OutputPin result
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result->setThisElementPtr(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result->setName("result");
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result->setType(Signal_AssemblyAndDelegation_C);
			Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c->setResult(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c);
			// ReadStructuralFeatureAction Read c.tester
			Signal_AssemblyAndDelegation_main_Read_c_tester->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_main_Read_c_tester);
			Signal_AssemblyAndDelegation_main_Read_c_tester->setName("Read c.tester");
			Signal_AssemblyAndDelegation_main_Read_c_tester->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_main_Read_c_tester->setStructuralFeature(Signal_AssemblyAndDelegation_C_tester);
				// InputPin object
				Signal_AssemblyAndDelegation_main_Read_c_tester_object->setThisElementPtr(Signal_AssemblyAndDelegation_main_Read_c_tester_object);
				Signal_AssemblyAndDelegation_main_Read_c_tester_object->setName("object");
				Signal_AssemblyAndDelegation_main_Read_c_tester_object->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Read_c_tester_object->setType(Signal_AssemblyAndDelegation_C);
			Signal_AssemblyAndDelegation_main_Read_c_tester->setObject(Signal_AssemblyAndDelegation_main_Read_c_tester_object);
				// OutputPin result
				Signal_AssemblyAndDelegation_main_Read_c_tester_result->setThisElementPtr(Signal_AssemblyAndDelegation_main_Read_c_tester_result);
				Signal_AssemblyAndDelegation_main_Read_c_tester_result->setName("result");
				Signal_AssemblyAndDelegation_main_Read_c_tester_result->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_Read_c_tester_result->setType(Signal_AssemblyAndDelegation_Tester);
			Signal_AssemblyAndDelegation_main_Read_c_tester->setResult(Signal_AssemblyAndDelegation_main_Read_c_tester_result);
		Signal_AssemblyAndDelegation_main->addNode(Signal_AssemblyAndDelegation_main_Read_c_tester);
			// ObjectFlow ObjectFlow12 from Fork testCase to testCase
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow12);
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setName("ObjectFlow12");
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setSource(Signal_AssemblyAndDelegation_main_Fork_testCase);
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setTarget(Signal_AssemblyAndDelegation_main_Send_Start_testCase);
				// LiteralBoolean LiteralBoolean14
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14);
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14->setName("LiteralBoolean14");
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow12->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow12_LiteralBoolean14);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow12);
			// ObjectFlow ObjectFlow15 from result to Fork testCase
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow15);
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setName("ObjectFlow15");
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setSource(Signal_AssemblyAndDelegation_main_TestCaseAssembly__result);
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setTarget(Signal_AssemblyAndDelegation_main_Fork_testCase);
				// LiteralBoolean LiteralBoolean17
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17);
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17->setName("LiteralBoolean17");
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow15->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow15_LiteralBoolean17);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow15);
			// ObjectFlow ObjectFlow18 from Fork testCase to object
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow18);
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setName("ObjectFlow18");
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setSource(Signal_AssemblyAndDelegation_main_Fork_testCase);
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setTarget(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_object);
				// LiteralBoolean LiteralBoolean20
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20);
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20->setName("LiteralBoolean20");
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow18->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow18_LiteralBoolean20);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow18);
			// ObjectFlow ObjectFlow21 from result to target
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow21);
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setName("ObjectFlow21");
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setSource(Signal_AssemblyAndDelegation_main_Create_TestCaseAssembly_result);
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setTarget(Signal_AssemblyAndDelegation_main_TestCaseAssembly__target);
				// LiteralBoolean LiteralBoolean22
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22);
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22->setName("LiteralBoolean22");
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow21->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow21_LiteralBoolean22);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow21);
			// ObjectFlow ObjectFlow24 from result to target
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow24);
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setName("ObjectFlow24");
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setSource(Signal_AssemblyAndDelegation_main_Read_c_tester_result);
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setTarget(Signal_AssemblyAndDelegation_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean26
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26);
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26->setName("LiteralBoolean26");
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow24->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow24_LiteralBoolean26);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow24);
			// ObjectFlow ObjectFlow27 from result to object
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_main_ObjectFlow27);
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setName("ObjectFlow27");
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setSource(Signal_AssemblyAndDelegation_main_Read_TestCaseAssembly_c_result);
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setTarget(Signal_AssemblyAndDelegation_main_Read_c_tester_object);
				// LiteralBoolean LiteralBoolean29
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29->setThisElementPtr(Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29);
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29->setName("LiteralBoolean29");
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29->setValue(true);
			Signal_AssemblyAndDelegation_main_ObjectFlow27->setGuard(Signal_AssemblyAndDelegation_main_ObjectFlow27_LiteralBoolean29);
		Signal_AssemblyAndDelegation_main->addEdge(Signal_AssemblyAndDelegation_main_ObjectFlow27);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_main);
		// SignalEvent StartEvent
		Signal_AssemblyAndDelegation_StartEvent->setThisElementPtr(Signal_AssemblyAndDelegation_StartEvent);
		Signal_AssemblyAndDelegation_StartEvent->setName("StartEvent");
		Signal_AssemblyAndDelegation_StartEvent->setVisibility(VisibilityKind::public_);
		Signal_AssemblyAndDelegation_StartEvent->setSignal(Signal_AssemblyAndDelegation_Start);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_StartEvent);
		// Class B
		Signal_AssemblyAndDelegation_B->setThisClass_Ptr(Signal_AssemblyAndDelegation_B);
		Signal_AssemblyAndDelegation_B->setName("B");
		Signal_AssemblyAndDelegation_B->setVisibility(VisibilityKind::public_);
		
			// Port p
			Signal_AssemblyAndDelegation_B_p->setThisElementPtr(Signal_AssemblyAndDelegation_B_p);
			Signal_AssemblyAndDelegation_B_p->setName("p");
			Signal_AssemblyAndDelegation_B_p->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_B_p->setType(Signal_AssemblyAndDelegation_I);
			Signal_AssemblyAndDelegation_B_p->setAggregation(AggregationKind::composite);
			Signal_AssemblyAndDelegation_B_p->isService = true;
		Signal_AssemblyAndDelegation_B->addOwnedAttribute(Signal_AssemblyAndDelegation_B_p);
			// Property a
			Signal_AssemblyAndDelegation_B_a->setThisElementPtr(Signal_AssemblyAndDelegation_B_a);
			Signal_AssemblyAndDelegation_B_a->setName("a");
			Signal_AssemblyAndDelegation_B_a->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_B_a->setType(Signal_AssemblyAndDelegation_A);
			Signal_AssemblyAndDelegation_B_a->setAggregation(AggregationKind::composite);
		Signal_AssemblyAndDelegation_B->addOwnedAttribute(Signal_AssemblyAndDelegation_B_a);
		
		Signal_AssemblyAndDelegation_B_r->setName("r");
			Signal_AssemblyAndDelegation_B_r->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_B_r_ConnectorEnd39->setRole(Signal_AssemblyAndDelegation_A_p);
				Signal_AssemblyAndDelegation_B_r_ConnectorEnd39->setPartWithPort(Signal_AssemblyAndDelegation_B_a);
				
			Signal_AssemblyAndDelegation_B_r->addEnd(Signal_AssemblyAndDelegation_B_r_ConnectorEnd39);
				
				Signal_AssemblyAndDelegation_B_r_ConnectorEnd38->setRole(Signal_AssemblyAndDelegation_B_p);
				
			Signal_AssemblyAndDelegation_B_r->addEnd(Signal_AssemblyAndDelegation_B_r_ConnectorEnd38);
			Signal_AssemblyAndDelegation_B_r->setType(Signal_AssemblyAndDelegation_R);
		Signal_AssemblyAndDelegation_B->addOwnedConnector(Signal_AssemblyAndDelegation_B_r);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_B);
		// Class I
		Signal_AssemblyAndDelegation_I->setThisClass_Ptr(Signal_AssemblyAndDelegation_I);
		Signal_AssemblyAndDelegation_I->setName("I");
		Signal_AssemblyAndDelegation_I->setVisibility(VisibilityKind::public_);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_I);
		// SignalEvent SEvent
		Signal_AssemblyAndDelegation_SEvent->setThisElementPtr(Signal_AssemblyAndDelegation_SEvent);
		Signal_AssemblyAndDelegation_SEvent->setName("SEvent");
		Signal_AssemblyAndDelegation_SEvent->setVisibility(VisibilityKind::public_);
		Signal_AssemblyAndDelegation_SEvent->setSignal(Signal_AssemblyAndDelegation_S);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_SEvent);
		// Signal S
		Signal_AssemblyAndDelegation_S->setThisSignalPtr(Signal_AssemblyAndDelegation_S);
		Signal_AssemblyAndDelegation_S->setName("S");
		Signal_AssemblyAndDelegation_S->setVisibility(VisibilityKind::public_);
		
			// Property value
			Signal_AssemblyAndDelegation_S_value->setThisElementPtr(Signal_AssemblyAndDelegation_S_value);
			Signal_AssemblyAndDelegation_S_value->setName("value");
			Signal_AssemblyAndDelegation_S_value->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Signal_AssemblyAndDelegation_S->addOwnedAttribute(Signal_AssemblyAndDelegation_S_value);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_S);
		// Class TestCaseAssemblyAndDelegation
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->setThisClass_Ptr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->setName("TestCaseAssemblyAndDelegation");
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->setVisibility(VisibilityKind::public_);
		
			// Generalization to TestCase
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71->setGeneral(Signal_AssemblyAndDelegation_TestCase);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addGeneralization(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_Generalization71);
			// Property b
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b->setName("b");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b->setType(Signal_AssemblyAndDelegation_B);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b->setAggregation(AggregationKind::composite);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedAttribute(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b);
			// Property c
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c->setName("c");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c->setType(Signal_AssemblyAndDelegation_C);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c->setAggregation(AggregationKind::composite);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedAttribute(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c);
		// Activity testActivity
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->setThisActivityPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->setName("testActivity");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testV
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->setThisClass_Ptr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->setName("testV");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->setVisibility(VisibilityKind::public_);
				
					// Parameter v
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v->setName("v");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v->setVisibility(VisibilityKind::public_);
					
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->addOwnedParameter(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV_v);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->addLanguage("C++");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->addLanguage("Include");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting b.a.v == 4\"<<std::endl;  	// Test parameter p 	int v = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument v = \" + std::to_string(v)); 	 	std::cout << \"b.a.v == \" << std::to_string(v) <<std::endl; 	std::cout<<\"Signal correctly sent and received: \";  	if(v == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addOwnedBehavior(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV);
				// ReadStructuralFeatureAction Read b.a
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setName("Read b.a");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setStructuralFeature(Signal_AssemblyAndDelegation_B_a);
					// InputPin object
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object->setName("object");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object->setType(Signal_AssemblyAndDelegation_B);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setObject(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object);
					// OutputPin result
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result->setName("result");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a->setResult(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addNode(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a);
				// CallBehaviorAction Call testV
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV->setName("Call testV");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV->setBehavior(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_testV);
					// InputPin v
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v->setName("v");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV->addArgument(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addNode(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV);
				// ReadSelfAction this
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this->setName("this");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result->setName("result");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this->setResult(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addNode(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this);
				// ReadStructuralFeatureAction Read a.v
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setName("Read a.v");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setStructuralFeature(Signal_AssemblyAndDelegation_A_v);
					// InputPin object
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object->setName("object");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setObject(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object);
					// OutputPin result
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result->setName("result");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v->setResult(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addNode(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v);
				// ReadStructuralFeatureAction Read this.b
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setName("Read this.b");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setStructuralFeature(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b);
					// InputPin object
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object->setName("object");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setObject(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object);
					// OutputPin result
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result->setName("result");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result->setType(Signal_AssemblyAndDelegation_B);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b->setResult(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addNode(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b);
				// ObjectFlow ObjectFlow46 from result to object
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setName("ObjectFlow46");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setSource(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_result);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setTarget(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_object);
					// LiteralBoolean LiteralBoolean48
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48->setName("LiteralBoolean48");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48->setValue(true);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46->setGuard(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46_LiteralBoolean48);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addEdge(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow46);
				// ObjectFlow ObjectFlow52 from result to v
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setName("ObjectFlow52");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setSource(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_result);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setTarget(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Call_testV_v);
					// LiteralBoolean LiteralBoolean54
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54->setName("LiteralBoolean54");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54->setValue(true);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52->setGuard(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52_LiteralBoolean54);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addEdge(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow52);
				// ObjectFlow ObjectFlow61 from result to object
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setName("ObjectFlow61");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setSource(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_b_a_result);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setTarget(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_a_v_object);
					// LiteralBoolean LiteralBoolean63
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63->setName("LiteralBoolean63");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63->setValue(true);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61->setGuard(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61_LiteralBoolean63);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addEdge(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow61);
				// ObjectFlow ObjectFlow64 from result to object
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setName("ObjectFlow64");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setSource(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_this_result);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setTarget(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_Read_this_b_object);
					// LiteralBoolean LiteralBoolean66
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66->setName("LiteralBoolean66");
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66->setValue(true);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64->setGuard(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64_LiteralBoolean66);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity->addEdge(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity_ObjectFlow64);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedBehavior(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r->setName("r");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41->setRole(Signal_AssemblyAndDelegation_B_p);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41->setPartWithPort(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_b);
				
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r->addEnd(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd41);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40->setRole(Signal_AssemblyAndDelegation_C_q);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40->setPartWithPort(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_c);
				
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r->addEnd(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r_ConnectorEnd40);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r->setType(Signal_AssemblyAndDelegation_R);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedConnector(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_r);
			// Operation TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation->setThisOperationPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation->setName("TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result->setThisElementPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result->setName("result");
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result->setType(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
				Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result->setDirection(ParameterDirectionKind::return_);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedParameter(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_result);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedOperation(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation_TestCaseAssemblyAndDelegation);
			// Operation test
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test->setThisOperationPtr(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test->setName("test");
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test->addMethod(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_testActivity);
			Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test->addRedefinedOperation(Signal_AssemblyAndDelegation_TestCase_test);
		Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation->addOwnedOperation(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation_test);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_TestCaseAssemblyAndDelegation);
		// Class A
		Signal_AssemblyAndDelegation_A->setThisClass_Ptr(Signal_AssemblyAndDelegation_A);
		Signal_AssemblyAndDelegation_A->setName("A");
		Signal_AssemblyAndDelegation_A->setVisibility(VisibilityKind::public_);
		
			// Property v
			Signal_AssemblyAndDelegation_A_v->setThisElementPtr(Signal_AssemblyAndDelegation_A_v);
			Signal_AssemblyAndDelegation_A_v->setName("v");
			Signal_AssemblyAndDelegation_A_v->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_A_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Signal_AssemblyAndDelegation_A_v->setAggregation(AggregationKind::shared);
		Signal_AssemblyAndDelegation_A->addOwnedAttribute(Signal_AssemblyAndDelegation_A_v);
			// Port p
			Signal_AssemblyAndDelegation_A_p->setThisElementPtr(Signal_AssemblyAndDelegation_A_p);
			Signal_AssemblyAndDelegation_A_p->setName("p");
			Signal_AssemblyAndDelegation_A_p->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_A_p->setType(Signal_AssemblyAndDelegation_I);
			Signal_AssemblyAndDelegation_A_p->setAggregation(AggregationKind::composite);
			Signal_AssemblyAndDelegation_A_p->isBehavior = true;
			Signal_AssemblyAndDelegation_A_p->isService = true;
		Signal_AssemblyAndDelegation_A->addOwnedAttribute(Signal_AssemblyAndDelegation_A_p);
		Signal_AssemblyAndDelegation_A->setClassifierBehavior(Signal_AssemblyAndDelegation_A_AClassifierBehavior);
			// Activity AClassifierBehavior
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->setThisActivityPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->setName("AClassifierBehavior");
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->isReentrant = false;
				// ReadSelfAction this
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_this->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_this->setName("this");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result->setName("result");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_this->setResult(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addNode(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this);
				// SendSignalAction Send Continue
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setName("Send Continue");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setSignal(Signal_AssemblyAndDelegation_Continue);
					// InputPin target
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target->setName("target");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue->setOnPort(Signal_AssemblyAndDelegation_A_p);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addNode(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue);
				// ActivityFinalNode ActivityFinalNode80
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80->setName("ActivityFinalNode80");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addNode(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80);
				// AcceptEventAction Accept S
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->setName("Accept S");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->setIsUnmarshall(true);
					// OutputPin value
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value->setName("value");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->addResult(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value);
					// Trigger Trigger88
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88->setName("Trigger88");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88->setEvent(Signal_AssemblyAndDelegation_SEvent);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S->addTrigger(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_Trigger88);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addNode(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S);
				// AddStructuralFeatureValueAction Set v
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setName("Set v");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setStructuralFeature(Signal_AssemblyAndDelegation_A_v);
					// InputPin object
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object->setName("object");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setObject(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object);
					// InputPin value
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value->setName("value");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setValue(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value);
					// OutputPin result
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result->setName("result");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v->setResult(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addNode(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v);
				// ControlFlow ControlFlow72 from Send Continue to ActivityFinalNode80
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72->setName("ControlFlow72");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72->setSource(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ActivityFinalNode80);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow72);
				// ObjectFlow ObjectFlow75 from result to object
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setName("ObjectFlow75");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setSource(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this_result);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_object);
					// LiteralBoolean LiteralBoolean77
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77->setName("LiteralBoolean77");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77->setValue(true);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75->setGuard(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75_LiteralBoolean77);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow75);
				// ObjectFlow ObjectFlow81 from value to value
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setName("ObjectFlow81");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setSource(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S_value);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_value);
					// LiteralBoolean LiteralBoolean83
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83->setName("LiteralBoolean83");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83->setValue(true);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81->setGuard(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81_LiteralBoolean83);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow81);
				// ControlFlow ControlFlow84 from Accept S to this
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84->setName("ControlFlow84");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84->setSource(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Accept_S);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_this);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ControlFlow84);
				// ObjectFlow ObjectFlow89 from result to target
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setName("ObjectFlow89");
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setSource(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Set_v_result);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setTarget(Signal_AssemblyAndDelegation_A_AClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean90
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90->setThisElementPtr(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90->setName("LiteralBoolean90");
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90->setValue(true);
				Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89->setGuard(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89_LiteralBoolean90);
			Signal_AssemblyAndDelegation_A_AClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_A_AClassifierBehavior_ObjectFlow89);
		Signal_AssemblyAndDelegation_A->addOwnedBehavior(Signal_AssemblyAndDelegation_A_AClassifierBehavior);
		
		Signal_AssemblyAndDelegation_A->setIsActive(true);
			// Operation A_A
			Signal_AssemblyAndDelegation_A_A_A->setThisOperationPtr(Signal_AssemblyAndDelegation_A_A_A);
			Signal_AssemblyAndDelegation_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_AssemblyAndDelegation_A_A_A->setName("A_A");
			Signal_AssemblyAndDelegation_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_AssemblyAndDelegation_A_A_A_result->setThisElementPtr(Signal_AssemblyAndDelegation_A_A_A_result);
				Signal_AssemblyAndDelegation_A_A_A_result->setName("result");
				Signal_AssemblyAndDelegation_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_A_A_A_result->setType(Signal_AssemblyAndDelegation_A);
				Signal_AssemblyAndDelegation_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			Signal_AssemblyAndDelegation_A_A_A->addOwnedParameter(Signal_AssemblyAndDelegation_A_A_A_result);
		Signal_AssemblyAndDelegation_A->addOwnedOperation(Signal_AssemblyAndDelegation_A_A_A);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_A);
		// Signal Continue
		Signal_AssemblyAndDelegation_Continue->setThisSignalPtr(Signal_AssemblyAndDelegation_Continue);
		Signal_AssemblyAndDelegation_Continue->setName("Continue");
		Signal_AssemblyAndDelegation_Continue->setVisibility(VisibilityKind::public_);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_Continue);
		// SignalEvent ContinueEvent
		Signal_AssemblyAndDelegation_ContinueEvent->setThisElementPtr(Signal_AssemblyAndDelegation_ContinueEvent);
		Signal_AssemblyAndDelegation_ContinueEvent->setName("ContinueEvent");
		Signal_AssemblyAndDelegation_ContinueEvent->setVisibility(VisibilityKind::public_);
		Signal_AssemblyAndDelegation_ContinueEvent->setSignal(Signal_AssemblyAndDelegation_Continue);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_ContinueEvent);
		// Class C
		Signal_AssemblyAndDelegation_C->setThisClass_Ptr(Signal_AssemblyAndDelegation_C);
		Signal_AssemblyAndDelegation_C->setName("C");
		Signal_AssemblyAndDelegation_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			Signal_AssemblyAndDelegation_C_q->setThisElementPtr(Signal_AssemblyAndDelegation_C_q);
			Signal_AssemblyAndDelegation_C_q->setName("q");
			Signal_AssemblyAndDelegation_C_q->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_C_q->setType(Signal_AssemblyAndDelegation_I);
			Signal_AssemblyAndDelegation_C_q->setAggregation(AggregationKind::composite);
			Signal_AssemblyAndDelegation_C_q->isService = true;
		Signal_AssemblyAndDelegation_C->addOwnedAttribute(Signal_AssemblyAndDelegation_C_q);
			// Property tester
			Signal_AssemblyAndDelegation_C_tester->setThisElementPtr(Signal_AssemblyAndDelegation_C_tester);
			Signal_AssemblyAndDelegation_C_tester->setName("tester");
			Signal_AssemblyAndDelegation_C_tester->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_C_tester->setType(Signal_AssemblyAndDelegation_Tester);
			Signal_AssemblyAndDelegation_C_tester->setAggregation(AggregationKind::composite);
		Signal_AssemblyAndDelegation_C->addOwnedAttribute(Signal_AssemblyAndDelegation_C_tester);
		
		Signal_AssemblyAndDelegation_C_r->setName("r");
			Signal_AssemblyAndDelegation_C_r->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_C_r_ConnectorEnd98->setRole(Signal_AssemblyAndDelegation_C_q);
				
			Signal_AssemblyAndDelegation_C_r->addEnd(Signal_AssemblyAndDelegation_C_r_ConnectorEnd98);
				
				Signal_AssemblyAndDelegation_C_r_ConnectorEnd99->setRole(Signal_AssemblyAndDelegation_Tester_q);
				Signal_AssemblyAndDelegation_C_r_ConnectorEnd99->setPartWithPort(Signal_AssemblyAndDelegation_C_tester);
				
			Signal_AssemblyAndDelegation_C_r->addEnd(Signal_AssemblyAndDelegation_C_r_ConnectorEnd99);
			Signal_AssemblyAndDelegation_C_r->setType(Signal_AssemblyAndDelegation_R);
		Signal_AssemblyAndDelegation_C->addOwnedConnector(Signal_AssemblyAndDelegation_C_r);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_C);
		// Class TestCase
		Signal_AssemblyAndDelegation_TestCase->setThisClass_Ptr(Signal_AssemblyAndDelegation_TestCase);
		Signal_AssemblyAndDelegation_TestCase->setName("TestCase");
		Signal_AssemblyAndDelegation_TestCase->setVisibility(VisibilityKind::public_);
		
		Signal_AssemblyAndDelegation_TestCase->setIsAbstract(true);
		
		
			// Operation test
			Signal_AssemblyAndDelegation_TestCase_test->setThisOperationPtr(Signal_AssemblyAndDelegation_TestCase_test);
			Signal_AssemblyAndDelegation_TestCase_test->setName("test");
			Signal_AssemblyAndDelegation_TestCase_test->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_TestCase_test->setIsAbstract(true);
		Signal_AssemblyAndDelegation_TestCase->addOwnedOperation(Signal_AssemblyAndDelegation_TestCase_test);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_TestCase);
		// Association R
		Signal_AssemblyAndDelegation_R->setThisAssociationPtr(Signal_AssemblyAndDelegation_R);
		Signal_AssemblyAndDelegation_R->setName("R");
		Signal_AssemblyAndDelegation_R->setVisibility(VisibilityKind::public_);
		Signal_AssemblyAndDelegation_R->addOwnedEnd(Signal_AssemblyAndDelegation_R_x);
		Signal_AssemblyAndDelegation_R->addOwnedEnd(Signal_AssemblyAndDelegation_R_y);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_R);
		// Signal Start
		Signal_AssemblyAndDelegation_Start->setThisSignalPtr(Signal_AssemblyAndDelegation_Start);
		Signal_AssemblyAndDelegation_Start->setName("Start");
		Signal_AssemblyAndDelegation_Start->setVisibility(VisibilityKind::public_);
		
			// Property testCase
			Signal_AssemblyAndDelegation_Start_testCase->setThisElementPtr(Signal_AssemblyAndDelegation_Start_testCase);
			Signal_AssemblyAndDelegation_Start_testCase->setName("testCase");
			Signal_AssemblyAndDelegation_Start_testCase->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_Start_testCase->setType(Signal_AssemblyAndDelegation_TestCase);
		Signal_AssemblyAndDelegation_Start->addOwnedAttribute(Signal_AssemblyAndDelegation_Start_testCase);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_Start);
		// Class Tester
		Signal_AssemblyAndDelegation_Tester->setThisClass_Ptr(Signal_AssemblyAndDelegation_Tester);
		Signal_AssemblyAndDelegation_Tester->setName("Tester");
		Signal_AssemblyAndDelegation_Tester->setVisibility(VisibilityKind::public_);
		
			// Port q
			Signal_AssemblyAndDelegation_Tester_q->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_q);
			Signal_AssemblyAndDelegation_Tester_q->setName("q");
			Signal_AssemblyAndDelegation_Tester_q->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_Tester_q->setType(Signal_AssemblyAndDelegation_I);
			Signal_AssemblyAndDelegation_Tester_q->setAggregation(AggregationKind::composite);
			Signal_AssemblyAndDelegation_Tester_q->isBehavior = true;
			Signal_AssemblyAndDelegation_Tester_q->isService = true;
		Signal_AssemblyAndDelegation_Tester->addOwnedAttribute(Signal_AssemblyAndDelegation_Tester_q);
		Signal_AssemblyAndDelegation_Tester->setClassifierBehavior(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior);
			// Activity TesterClassifierBehavior
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->setThisActivityPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->isReentrant = false;
				// ValueSpecificationAction Value(4)
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger104
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104->setName("LiteralInteger104");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104->setValue(4);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4->setValue(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_LiteralInteger104);
					// OutputPin result
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4->setResult(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4);
				// AcceptEventAction Accept Continue
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue->setName("Accept Continue");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result->setName("result");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result->setType(Signal_AssemblyAndDelegation_Continue);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue->addResult(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_result);
					// Trigger Trigger105
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105->setName("Trigger105");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105->setEvent(Signal_AssemblyAndDelegation_ContinueEvent);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue->addTrigger(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue_Trigger105);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue);
				// ActivityFinalNode ActivityFinalNode119
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119->setName("ActivityFinalNode119");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119);
				// AcceptEventAction Accept Start
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->setIsUnmarshall(true);
					// OutputPin testCase
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase->setName("testCase");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase->setType(Signal_AssemblyAndDelegation_TestCase);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->addResult(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					// Trigger Trigger120
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120->setName("Trigger120");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120->setEvent(Signal_AssemblyAndDelegation_StartEvent);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_Trigger120);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start);
				// SendSignalAction Send S
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setSignal(Signal_AssemblyAndDelegation_S);
					// InputPin target
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target->setType(Signal_AssemblyAndDelegation_Tester);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin value
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value->setName("value");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->addArgument(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S->setOnPort(Signal_AssemblyAndDelegation_Tester_q);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S);
				// ReadSelfAction this
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this->setName("this");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result->setName("result");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result->setType(Signal_AssemblyAndDelegation_Tester);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this->setResult(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this);
				// CallOperationAction Call test()
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_->setOperation(Signal_AssemblyAndDelegation_TestCase_test);
					// InputPin target
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target->setType(Signal_AssemblyAndDelegation_TestCase);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addNode(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_);
				// ControlFlow ControlFlow100 from Send S to Accept Continue
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100->setName("ControlFlow100");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow100);
				// ControlFlow ControlFlow115 from Call test() to ActivityFinalNode119
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115->setName("ControlFlow115");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ActivityFinalNode119);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow115);
				// ObjectFlow ObjectFlow116 from testCase to target
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setName("ObjectFlow116");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start_testCase);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean118
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118->setName("LiteralBoolean118");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118->setValue(true);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116->setGuard(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean118);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow116);
				// ControlFlow ControlFlow101 from Accept Continue to Call test()
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101->setName("ControlFlow101");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Continue);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Call_test_);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow101);
				// ObjectFlow ObjectFlow109 from result to value
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setName("ObjectFlow109");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Value_4_result);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_value);
					// LiteralBoolean LiteralBoolean110
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110->setName("LiteralBoolean110");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110->setValue(true);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109->setGuard(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109_LiteralBoolean110);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow109);
				// ObjectFlow ObjectFlow129 from result to target
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setName("ObjectFlow129");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this_result);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean130
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setName("LiteralBoolean130");
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setVisibility(VisibilityKind::public_);
					Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setValue(true);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129->setGuard(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ObjectFlow129);
				// ControlFlow ControlFlow112 from Accept Start to this
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112->setThisActivityEdgePtr(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112->setName("ControlFlow112");
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112->setSource(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_Accept_Start);
				Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112->setTarget(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_this);
			Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior->addEdge(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior_ControlFlow112);
		Signal_AssemblyAndDelegation_Tester->addOwnedBehavior(Signal_AssemblyAndDelegation_Tester_TesterClassifierBehavior);
		
		Signal_AssemblyAndDelegation_Tester->setIsActive(true);
			// Operation Tester_Tester
			Signal_AssemblyAndDelegation_Tester_Tester_Tester->setThisOperationPtr(Signal_AssemblyAndDelegation_Tester_Tester_Tester);
			Signal_AssemblyAndDelegation_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Signal_AssemblyAndDelegation_Tester_Tester_Tester->setName("Tester_Tester");
			Signal_AssemblyAndDelegation_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result->setThisElementPtr(Signal_AssemblyAndDelegation_Tester_Tester_Tester_result);
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result->setName("result");
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result->setType(Signal_AssemblyAndDelegation_Tester);
				Signal_AssemblyAndDelegation_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			Signal_AssemblyAndDelegation_Tester_Tester_Tester->addOwnedParameter(Signal_AssemblyAndDelegation_Tester_Tester_Tester_result);
		Signal_AssemblyAndDelegation_Tester->addOwnedOperation(Signal_AssemblyAndDelegation_Tester_Tester_Tester);
			// Reception Start
			Signal_AssemblyAndDelegation_Tester_Start->setThisBehavioralFeaturePtr(Signal_AssemblyAndDelegation_Tester_Start);
			Signal_AssemblyAndDelegation_Tester_Start->setName("Start");
			Signal_AssemblyAndDelegation_Tester_Start->setVisibility(VisibilityKind::public_);
			Signal_AssemblyAndDelegation_Tester_Start->setSignal(Signal_AssemblyAndDelegation_Start);
		Signal_AssemblyAndDelegation_Tester->addOwnedReception(Signal_AssemblyAndDelegation_Tester_Start);
	Signal_AssemblyAndDelegation->addPackagedElement(Signal_AssemblyAndDelegation_Tester);
}
