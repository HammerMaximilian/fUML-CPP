/*
 * SignalCommonModel.cpp
 * 
 * Auto-generated file
 */

#include "SignalCommonModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/commonbehavior/Trigger.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ActivityFinalNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Association.h>
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

using namespace SignalCommon;
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

SignalCommonModel::SignalCommonModel()
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

SignalCommonModel::~SignalCommonModel()
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

const std::shared_ptr<SignalCommonModel>& SignalCommonModel::Instance()
{
	static std::shared_ptr<SignalCommonModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new SignalCommonModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void SignalCommonModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model SignalCommon
	 */
	SignalCommon.reset(new Package());
	this->addToElementRepository("SignalCommon", SignalCommon);
		SignalCommon_A.reset(new Class_());
		this->addToElementRepository("A", SignalCommon_A);
			SignalCommon_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", SignalCommon_A_A_A);
				SignalCommon_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", SignalCommon_A_A_A_result);
			SignalCommon_A_v.reset(new Property());
			this->addToElementRepository("v", SignalCommon_A_v);
			SignalCommon_A_p.reset(new Port());
			this->addToElementRepository("p", SignalCommon_A_p);
			SignalCommon_A_AClassifierBehavior.reset(new Activity());
			this->addToElementRepository("AClassifierBehavior", SignalCommon_A_AClassifierBehavior);
				SignalCommon_A_AClassifierBehavior_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", SignalCommon_A_AClassifierBehavior_ObjectFlow0);
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralInteger2);
				SignalCommon_A_AClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", SignalCommon_A_AClassifierBehavior_Accept_S);
					SignalCommon_A_AClassifierBehavior_Accept_S_value.reset(new OutputPin());
					this->addToElementRepository("value", SignalCommon_A_AClassifierBehavior_Accept_S_value);
						SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural3", SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralUnlimitedNatural3);
						SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger4);
						SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger5.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger5", SignalCommon_A_AClassifierBehavior_Accept_S_value_LiteralInteger5);
					SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6.reset(new Trigger());
					this->addToElementRepository("Trigger6", SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6);
				SignalCommon_A_AClassifierBehavior_ActivityFinalNode7.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode7", SignalCommon_A_AClassifierBehavior_ActivityFinalNode7);
				SignalCommon_A_AClassifierBehavior_ControlFlow8.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow8", SignalCommon_A_AClassifierBehavior_ControlFlow8);
				SignalCommon_A_AClassifierBehavior_Set_v.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set v", SignalCommon_A_AClassifierBehavior_Set_v);
					SignalCommon_A_AClassifierBehavior_Set_v_value.reset(new InputPin());
					this->addToElementRepository("value", SignalCommon_A_AClassifierBehavior_Set_v_value);
						SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural9", SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralUnlimitedNatural9);
						SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", SignalCommon_A_AClassifierBehavior_Set_v_value_LiteralInteger10);
					SignalCommon_A_AClassifierBehavior_Set_v_object.reset(new InputPin());
					this->addToElementRepository("object", SignalCommon_A_AClassifierBehavior_Set_v_object);
						SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralInteger11);
						SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural12", SignalCommon_A_AClassifierBehavior_Set_v_object_LiteralUnlimitedNatural12);
					SignalCommon_A_AClassifierBehavior_Set_v_result.reset(new OutputPin());
					this->addToElementRepository("result", SignalCommon_A_AClassifierBehavior_Set_v_result);
						SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralUnlimitedNatural13);
						SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", SignalCommon_A_AClassifierBehavior_Set_v_result_LiteralInteger14);
				SignalCommon_A_AClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", SignalCommon_A_AClassifierBehavior_Send_Continue);
					SignalCommon_A_AClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", SignalCommon_A_AClassifierBehavior_Send_Continue_target);
						SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralInteger15);
						SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural16", SignalCommon_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural16);
				SignalCommon_A_AClassifierBehavior_ObjectFlow17.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow17", SignalCommon_A_AClassifierBehavior_ObjectFlow17);
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean18", SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18);
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralInteger19);
				SignalCommon_A_AClassifierBehavior_ObjectFlow20.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow20", SignalCommon_A_AClassifierBehavior_ObjectFlow20);
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralInteger21);
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean22", SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22);
				SignalCommon_A_AClassifierBehavior_ControlFlow23.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow23", SignalCommon_A_AClassifierBehavior_ControlFlow23);
				SignalCommon_A_AClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SignalCommon_A_AClassifierBehavior_this);
					SignalCommon_A_AClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SignalCommon_A_AClassifierBehavior_this_result);
						SignalCommon_A_AClassifierBehavior_this_result_LiteralInteger24.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger24", SignalCommon_A_AClassifierBehavior_this_result_LiteralInteger24);
						SignalCommon_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural25", SignalCommon_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural25);
		SignalCommon_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", SignalCommon_StartEvent);
		SignalCommon_Tester.reset(new Class_());
		this->addToElementRepository("Tester", SignalCommon_Tester);
			SignalCommon_Tester_Start.reset(new Reception());
			this->addToElementRepository("Start", SignalCommon_Tester_Start);
			SignalCommon_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", SignalCommon_Tester_TesterClassifierBehavior);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow26", SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26);
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", SignalCommon_Tester_TesterClassifierBehavior_Call_test_);
					SignalCommon_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", SignalCommon_Tester_TesterClassifierBehavior_Call_test__target);
						SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger27.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger27", SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger27);
						SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural28", SignalCommon_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural28);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow29", SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29);
				SignalCommon_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SignalCommon_Tester_TesterClassifierBehavior_this);
					SignalCommon_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SignalCommon_Tester_TesterClassifierBehavior_this_result);
						SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralInteger30.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger30", SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralInteger30);
						SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural31", SignalCommon_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural31);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow32", SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow33", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean34", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", SignalCommon_Tester_TesterClassifierBehavior_Send_S);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", SignalCommon_Tester_TesterClassifierBehavior_Send_S_target);
						SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger36);
						SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural37.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural37", SignalCommon_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural37);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_value.reset(new InputPin());
					this->addToElementRepository("value", SignalCommon_Tester_TesterClassifierBehavior_Send_S_value);
						SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural38", SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralUnlimitedNatural38);
						SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger39.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger39", SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger39);
						SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", SignalCommon_Tester_TesterClassifierBehavior_Send_S_value_LiteralInteger40);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow41", SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41);
				SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode42", SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow43", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean44", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralInteger45);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow46", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean47", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger48);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue", SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49.reset(new Trigger());
					this->addToElementRepository("Trigger49", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase.reset(new OutputPin());
					this->addToElementRepository("testCase", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase);
						SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger50.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger50", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger50);
						SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural51", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralUnlimitedNatural51);
						SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger52.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger52", SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase_LiteralInteger52);
				SignalCommon_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", SignalCommon_Tester_TesterClassifierBehavior_Value_4);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", SignalCommon_Tester_TesterClassifierBehavior_Value_4_result);
						SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural53", SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural53);
						SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger54.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger54", SignalCommon_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger54);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55);
			SignalCommon_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", SignalCommon_Tester_Tester_Tester);
				SignalCommon_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", SignalCommon_Tester_Tester_Tester_result);
			SignalCommon_Tester_q.reset(new Port());
			this->addToElementRepository("q", SignalCommon_Tester_q);
		SignalCommon_R.reset(new Association());
		this->addToElementRepository("R", SignalCommon_R);
			SignalCommon_R_y.reset(new Property());
			this->addToElementRepository("y", SignalCommon_R_y);
			SignalCommon_R_x.reset(new Property());
			this->addToElementRepository("x", SignalCommon_R_x);
		SignalCommon_S.reset(new Signal());
		this->addToElementRepository("S", SignalCommon_S);
			SignalCommon_S_value.reset(new Property());
			this->addToElementRepository("value", SignalCommon_S_value);
		SignalCommon_Start.reset(new Signal());
		this->addToElementRepository("Start", SignalCommon_Start);
			SignalCommon_Start_testCase.reset(new Property());
			this->addToElementRepository("testCase", SignalCommon_Start_testCase);
		SignalCommon_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", SignalCommon_ContinueEvent);
		SignalCommon_I.reset(new Class_());
		this->addToElementRepository("I", SignalCommon_I);
		SignalCommon_Continue.reset(new Signal());
		this->addToElementRepository("Continue", SignalCommon_Continue);
		SignalCommon_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", SignalCommon_SEvent);
		SignalCommon_TestCase.reset(new Class_());
		this->addToElementRepository("TestCase", SignalCommon_TestCase);
			SignalCommon_TestCase_test.reset(new Operation());
			this->addToElementRepository("test", SignalCommon_TestCase_test);

	// Initialize public members
	/*
	 * Model SignalCommon
	 */
	SignalCommon->setThisPackagePtr(SignalCommon);
	SignalCommon->setName("SignalCommon");
	SignalCommon->setVisibility(VisibilityKind::public_);
		// Class A
		SignalCommon_A->setThisClass_Ptr(SignalCommon_A);
		SignalCommon_A->setName("A");
		SignalCommon_A->setVisibility(VisibilityKind::public_);
		
			// Property v
			SignalCommon_A_v->setThisElementPtr(SignalCommon_A_v);
			SignalCommon_A_v->setName("v");
			SignalCommon_A_v->setVisibility(VisibilityKind::public_);
			
			SignalCommon_A_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SignalCommon_A_v->setAggregation(AggregationKind::shared);
		SignalCommon_A->addOwnedAttribute(SignalCommon_A_v);
			// Port p
			SignalCommon_A_p->setThisElementPtr(SignalCommon_A_p);
			SignalCommon_A_p->setName("p");
			SignalCommon_A_p->setVisibility(VisibilityKind::public_);
			
			SignalCommon_A_p->setType(SignalCommon_I);
			SignalCommon_A_p->setAggregation(AggregationKind::composite);
			SignalCommon_A_p->isBehavior = true;
			SignalCommon_A_p->isService = true;
		SignalCommon_A->addOwnedAttribute(SignalCommon_A_p);
		SignalCommon_A->setClassifierBehavior(SignalCommon_A_AClassifierBehavior);
			// Activity AClassifierBehavior
			SignalCommon_A_AClassifierBehavior->setThisActivityPtr(SignalCommon_A_AClassifierBehavior);
			SignalCommon_A_AClassifierBehavior->setName("AClassifierBehavior");
			SignalCommon_A_AClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			SignalCommon_A_AClassifierBehavior->isReentrant = false;
				// AcceptEventAction Accept S
				SignalCommon_A_AClassifierBehavior_Accept_S->setThisExecutableNodePtr(SignalCommon_A_AClassifierBehavior_Accept_S);
				SignalCommon_A_AClassifierBehavior_Accept_S->setName("Accept S");
				SignalCommon_A_AClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
				SignalCommon_A_AClassifierBehavior_Accept_S->setIsUnmarshall(true);
					// OutputPin value
					SignalCommon_A_AClassifierBehavior_Accept_S_value->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Accept_S_value);
					SignalCommon_A_AClassifierBehavior_Accept_S_value->setName("value");
					SignalCommon_A_AClassifierBehavior_Accept_S_value->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Accept_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SignalCommon_A_AClassifierBehavior_Accept_S->addResult(SignalCommon_A_AClassifierBehavior_Accept_S_value);
					// Trigger Trigger6
					SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6);
					SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6->setName("Trigger6");
					SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6->setEvent(SignalCommon_SEvent);
				SignalCommon_A_AClassifierBehavior_Accept_S->addTrigger(SignalCommon_A_AClassifierBehavior_Accept_S_Trigger6);
			SignalCommon_A_AClassifierBehavior->addNode(SignalCommon_A_AClassifierBehavior_Accept_S);
				// ActivityFinalNode ActivityFinalNode7
				SignalCommon_A_AClassifierBehavior_ActivityFinalNode7->setThisElementPtr(SignalCommon_A_AClassifierBehavior_ActivityFinalNode7);
				SignalCommon_A_AClassifierBehavior_ActivityFinalNode7->setName("ActivityFinalNode7");
				SignalCommon_A_AClassifierBehavior_ActivityFinalNode7->setVisibility(VisibilityKind::public_);
			SignalCommon_A_AClassifierBehavior->addNode(SignalCommon_A_AClassifierBehavior_ActivityFinalNode7);
				// AddStructuralFeatureValueAction Set v
				SignalCommon_A_AClassifierBehavior_Set_v->setThisExecutableNodePtr(SignalCommon_A_AClassifierBehavior_Set_v);
				SignalCommon_A_AClassifierBehavior_Set_v->setName("Set v");
				SignalCommon_A_AClassifierBehavior_Set_v->setVisibility(VisibilityKind::public_);
				SignalCommon_A_AClassifierBehavior_Set_v->setStructuralFeature(SignalCommon_A_v);
					// InputPin object
					SignalCommon_A_AClassifierBehavior_Set_v_object->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Set_v_object);
					SignalCommon_A_AClassifierBehavior_Set_v_object->setName("object");
					SignalCommon_A_AClassifierBehavior_Set_v_object->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Set_v_object->setType(SignalCommon_A);
				SignalCommon_A_AClassifierBehavior_Set_v->setObject(SignalCommon_A_AClassifierBehavior_Set_v_object);
					// InputPin value
					SignalCommon_A_AClassifierBehavior_Set_v_value->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Set_v_value);
					SignalCommon_A_AClassifierBehavior_Set_v_value->setName("value");
					SignalCommon_A_AClassifierBehavior_Set_v_value->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Set_v_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SignalCommon_A_AClassifierBehavior_Set_v->setValue(SignalCommon_A_AClassifierBehavior_Set_v_value);
					// OutputPin result
					SignalCommon_A_AClassifierBehavior_Set_v_result->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Set_v_result);
					SignalCommon_A_AClassifierBehavior_Set_v_result->setName("result");
					SignalCommon_A_AClassifierBehavior_Set_v_result->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Set_v_result->setType(SignalCommon_A);
				SignalCommon_A_AClassifierBehavior_Set_v->setResult(SignalCommon_A_AClassifierBehavior_Set_v_result);
			SignalCommon_A_AClassifierBehavior->addNode(SignalCommon_A_AClassifierBehavior_Set_v);
				// SendSignalAction Send Continue
				SignalCommon_A_AClassifierBehavior_Send_Continue->setThisExecutableNodePtr(SignalCommon_A_AClassifierBehavior_Send_Continue);
				SignalCommon_A_AClassifierBehavior_Send_Continue->setName("Send Continue");
				SignalCommon_A_AClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				SignalCommon_A_AClassifierBehavior_Send_Continue->setSignal(SignalCommon_Continue);
					// InputPin target
					SignalCommon_A_AClassifierBehavior_Send_Continue_target->setThisElementPtr(SignalCommon_A_AClassifierBehavior_Send_Continue_target);
					SignalCommon_A_AClassifierBehavior_Send_Continue_target->setName("target");
					SignalCommon_A_AClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_Send_Continue_target->setType(SignalCommon_A);
				SignalCommon_A_AClassifierBehavior_Send_Continue->setTarget(SignalCommon_A_AClassifierBehavior_Send_Continue_target);
				SignalCommon_A_AClassifierBehavior_Send_Continue->setOnPort(SignalCommon_A_p);
			SignalCommon_A_AClassifierBehavior->addNode(SignalCommon_A_AClassifierBehavior_Send_Continue);
				// ReadSelfAction this
				SignalCommon_A_AClassifierBehavior_this->setThisExecutableNodePtr(SignalCommon_A_AClassifierBehavior_this);
				SignalCommon_A_AClassifierBehavior_this->setName("this");
				SignalCommon_A_AClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SignalCommon_A_AClassifierBehavior_this_result->setThisElementPtr(SignalCommon_A_AClassifierBehavior_this_result);
					SignalCommon_A_AClassifierBehavior_this_result->setName("result");
					SignalCommon_A_AClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_this_result->setType(SignalCommon_A);
				SignalCommon_A_AClassifierBehavior_this->setResult(SignalCommon_A_AClassifierBehavior_this_result);
			SignalCommon_A_AClassifierBehavior->addNode(SignalCommon_A_AClassifierBehavior_this);
				// ObjectFlow ObjectFlow0 from result to object
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setThisActivityEdgePtr(SignalCommon_A_AClassifierBehavior_ObjectFlow0);
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setName("ObjectFlow0");
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setSource(SignalCommon_A_AClassifierBehavior_this_result);
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setTarget(SignalCommon_A_AClassifierBehavior_Set_v_object);
					// LiteralBoolean LiteralBoolean1
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1->setThisElementPtr(SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1->setValue(true);
				SignalCommon_A_AClassifierBehavior_ObjectFlow0->setGuard(SignalCommon_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean1);
			SignalCommon_A_AClassifierBehavior->addEdge(SignalCommon_A_AClassifierBehavior_ObjectFlow0);
				// ControlFlow ControlFlow8 from Send Continue to ActivityFinalNode7
				SignalCommon_A_AClassifierBehavior_ControlFlow8->setThisActivityEdgePtr(SignalCommon_A_AClassifierBehavior_ControlFlow8);
				SignalCommon_A_AClassifierBehavior_ControlFlow8->setName("ControlFlow8");
				SignalCommon_A_AClassifierBehavior_ControlFlow8->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_AClassifierBehavior_ControlFlow8->setSource(SignalCommon_A_AClassifierBehavior_Send_Continue);
				SignalCommon_A_AClassifierBehavior_ControlFlow8->setTarget(SignalCommon_A_AClassifierBehavior_ActivityFinalNode7);
			SignalCommon_A_AClassifierBehavior->addEdge(SignalCommon_A_AClassifierBehavior_ControlFlow8);
				// ObjectFlow ObjectFlow17 from result to target
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setThisActivityEdgePtr(SignalCommon_A_AClassifierBehavior_ObjectFlow17);
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setName("ObjectFlow17");
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setSource(SignalCommon_A_AClassifierBehavior_Set_v_result);
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setTarget(SignalCommon_A_AClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean18
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18->setThisElementPtr(SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18);
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18->setName("LiteralBoolean18");
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18->setValue(true);
				SignalCommon_A_AClassifierBehavior_ObjectFlow17->setGuard(SignalCommon_A_AClassifierBehavior_ObjectFlow17_LiteralBoolean18);
			SignalCommon_A_AClassifierBehavior->addEdge(SignalCommon_A_AClassifierBehavior_ObjectFlow17);
				// ObjectFlow ObjectFlow20 from value to value
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setThisActivityEdgePtr(SignalCommon_A_AClassifierBehavior_ObjectFlow20);
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setName("ObjectFlow20");
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setSource(SignalCommon_A_AClassifierBehavior_Accept_S_value);
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setTarget(SignalCommon_A_AClassifierBehavior_Set_v_value);
					// LiteralBoolean LiteralBoolean22
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22->setThisElementPtr(SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22);
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22->setName("LiteralBoolean22");
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22->setVisibility(VisibilityKind::public_);
					SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22->setValue(true);
				SignalCommon_A_AClassifierBehavior_ObjectFlow20->setGuard(SignalCommon_A_AClassifierBehavior_ObjectFlow20_LiteralBoolean22);
			SignalCommon_A_AClassifierBehavior->addEdge(SignalCommon_A_AClassifierBehavior_ObjectFlow20);
				// ControlFlow ControlFlow23 from Accept S to this
				SignalCommon_A_AClassifierBehavior_ControlFlow23->setThisActivityEdgePtr(SignalCommon_A_AClassifierBehavior_ControlFlow23);
				SignalCommon_A_AClassifierBehavior_ControlFlow23->setName("ControlFlow23");
				SignalCommon_A_AClassifierBehavior_ControlFlow23->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_AClassifierBehavior_ControlFlow23->setSource(SignalCommon_A_AClassifierBehavior_Accept_S);
				SignalCommon_A_AClassifierBehavior_ControlFlow23->setTarget(SignalCommon_A_AClassifierBehavior_this);
			SignalCommon_A_AClassifierBehavior->addEdge(SignalCommon_A_AClassifierBehavior_ControlFlow23);
		SignalCommon_A->addOwnedBehavior(SignalCommon_A_AClassifierBehavior);
		
		SignalCommon_A->setIsActive(true);
			// Operation A_A
			SignalCommon_A_A_A->setThisOperationPtr(SignalCommon_A_A_A);
			SignalCommon_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SignalCommon_A_A_A->setName("A_A");
			SignalCommon_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				SignalCommon_A_A_A_result->setThisElementPtr(SignalCommon_A_A_A_result);
				SignalCommon_A_A_A_result->setName("result");
				SignalCommon_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				SignalCommon_A_A_A_result->setType(SignalCommon_A);
				SignalCommon_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			SignalCommon_A_A_A->addOwnedParameter(SignalCommon_A_A_A_result);
		SignalCommon_A->addOwnedOperation(SignalCommon_A_A_A);
	SignalCommon->addPackagedElement(SignalCommon_A);
		// SignalEvent StartEvent
		SignalCommon_StartEvent->setThisElementPtr(SignalCommon_StartEvent);
		SignalCommon_StartEvent->setName("StartEvent");
		SignalCommon_StartEvent->setVisibility(VisibilityKind::public_);
		SignalCommon_StartEvent->setSignal(SignalCommon_Start);
	SignalCommon->addPackagedElement(SignalCommon_StartEvent);
		// Class Tester
		SignalCommon_Tester->setThisClass_Ptr(SignalCommon_Tester);
		SignalCommon_Tester->setName("Tester");
		SignalCommon_Tester->setVisibility(VisibilityKind::public_);
		
			// Port q
			SignalCommon_Tester_q->setThisElementPtr(SignalCommon_Tester_q);
			SignalCommon_Tester_q->setName("q");
			SignalCommon_Tester_q->setVisibility(VisibilityKind::public_);
			
			SignalCommon_Tester_q->setType(SignalCommon_I);
			SignalCommon_Tester_q->setAggregation(AggregationKind::composite);
			SignalCommon_Tester_q->isBehavior = true;
			SignalCommon_Tester_q->isService = true;
		SignalCommon_Tester->addOwnedAttribute(SignalCommon_Tester_q);
		SignalCommon_Tester->setClassifierBehavior(SignalCommon_Tester_TesterClassifierBehavior);
			// Activity TesterClassifierBehavior
			SignalCommon_Tester_TesterClassifierBehavior->setThisActivityPtr(SignalCommon_Tester_TesterClassifierBehavior);
			SignalCommon_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			SignalCommon_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			SignalCommon_Tester_TesterClassifierBehavior->isReentrant = false;
				// CallOperationAction Call test()
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_Call_test_);
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_->setOperation(SignalCommon_TestCase_test);
					// InputPin target
					SignalCommon_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Call_test__target);
					SignalCommon_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					SignalCommon_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Call_test__target->setType(SignalCommon_TestCase);
				SignalCommon_Tester_TesterClassifierBehavior_Call_test_->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Call_test__target);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_Call_test_);
				// SendSignalAction Send S
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_Send_S);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setSignal(SignalCommon_S);
					// InputPin target
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Send_S_target);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_target->setType(SignalCommon_Tester);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin value
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_value->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Send_S_value);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_value->setName("value");
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_value->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Send_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->addArgument(SignalCommon_Tester_TesterClassifierBehavior_Send_S_value);
				SignalCommon_Tester_TesterClassifierBehavior_Send_S->setOnPort(SignalCommon_Tester_q);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_Send_S);
				// ActivityFinalNode ActivityFinalNode42
				SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42);
				SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42->setName("ActivityFinalNode42");
				SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42->setVisibility(VisibilityKind::public_);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42);
				// ReadSelfAction this
				SignalCommon_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_this);
				SignalCommon_Tester_TesterClassifierBehavior_this->setName("this");
				SignalCommon_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SignalCommon_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_this_result);
					SignalCommon_Tester_TesterClassifierBehavior_this_result->setName("result");
					SignalCommon_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_this_result->setType(SignalCommon_Tester);
				SignalCommon_Tester_TesterClassifierBehavior_this->setResult(SignalCommon_Tester_TesterClassifierBehavior_this_result);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_this);
				// AcceptEventAction Accept Continue
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue->setName("Accept Continue");
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue->setVisibility(VisibilityKind::public_);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue);
				// AcceptEventAction Accept Start
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->setIsUnmarshall(true);
					// OutputPin testCase
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase->setName("testCase");
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase->setType(SignalCommon_TestCase);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->addResult(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase);
					// Trigger Trigger49
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setName("Trigger49");
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setEvent(SignalCommon_StartEvent);
				SignalCommon_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start);
				// ValueSpecificationAction Value(4)
				SignalCommon_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(SignalCommon_Tester_TesterClassifierBehavior_Value_4);
				SignalCommon_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				SignalCommon_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger55
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55->setName("LiteralInteger55");
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55->setValue(4);
				SignalCommon_Tester_TesterClassifierBehavior_Value_4->setValue(SignalCommon_Tester_TesterClassifierBehavior_Value_4_LiteralInteger55);
					// OutputPin result
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_Value_4_result);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SignalCommon_Tester_TesterClassifierBehavior_Value_4->setResult(SignalCommon_Tester_TesterClassifierBehavior_Value_4_result);
			SignalCommon_Tester_TesterClassifierBehavior->addNode(SignalCommon_Tester_TesterClassifierBehavior_Value_4);
				// ControlFlow ControlFlow26 from Call test() to ActivityFinalNode42
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26->setName("ControlFlow26");
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26->setSource(SignalCommon_Tester_TesterClassifierBehavior_Call_test_);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26->setTarget(SignalCommon_Tester_TesterClassifierBehavior_ActivityFinalNode42);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow26);
				// ObjectFlow ObjectFlow33 from result to value
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setName("ObjectFlow33");
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setSource(SignalCommon_Tester_TesterClassifierBehavior_Value_4_result);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Send_S_value);
					// LiteralBoolean LiteralBoolean34
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setName("LiteralBoolean34");
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setValue(true);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33->setGuard(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow33);
				// ControlFlow ControlFlow29 from Accept Start to this
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29->setName("ControlFlow29");
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29->setSource(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29->setTarget(SignalCommon_Tester_TesterClassifierBehavior_this);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow29);
				// ControlFlow ControlFlow41 from Send S to Accept Continue
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41->setName("ControlFlow41");
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41->setSource(SignalCommon_Tester_TesterClassifierBehavior_Send_S);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow41);
				// ObjectFlow ObjectFlow43 from result to target
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setName("ObjectFlow43");
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setSource(SignalCommon_Tester_TesterClassifierBehavior_this_result);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean44
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44->setName("LiteralBoolean44");
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44->setValue(true);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43->setGuard(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43_LiteralBoolean44);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow43);
				// ControlFlow ControlFlow32 from Accept Continue to Call test()
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32->setName("ControlFlow32");
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32->setSource(SignalCommon_Tester_TesterClassifierBehavior_Accept_Continue);
				SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Call_test_);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ControlFlow32);
				// ObjectFlow ObjectFlow46 from testCase to target
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setThisActivityEdgePtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setName("ObjectFlow46");
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setSource(SignalCommon_Tester_TesterClassifierBehavior_Accept_Start_testCase);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setTarget(SignalCommon_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean47
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47->setThisElementPtr(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47->setName("LiteralBoolean47");
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47->setVisibility(VisibilityKind::public_);
					SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47->setValue(true);
				SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46->setGuard(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean47);
			SignalCommon_Tester_TesterClassifierBehavior->addEdge(SignalCommon_Tester_TesterClassifierBehavior_ObjectFlow46);
		SignalCommon_Tester->addOwnedBehavior(SignalCommon_Tester_TesterClassifierBehavior);
		
		SignalCommon_Tester->setIsActive(true);
			// Operation Tester_Tester
			SignalCommon_Tester_Tester_Tester->setThisOperationPtr(SignalCommon_Tester_Tester_Tester);
			SignalCommon_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SignalCommon_Tester_Tester_Tester->setName("Tester_Tester");
			SignalCommon_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				SignalCommon_Tester_Tester_Tester_result->setThisElementPtr(SignalCommon_Tester_Tester_Tester_result);
				SignalCommon_Tester_Tester_Tester_result->setName("result");
				SignalCommon_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				SignalCommon_Tester_Tester_Tester_result->setType(SignalCommon_Tester);
				SignalCommon_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			SignalCommon_Tester_Tester_Tester->addOwnedParameter(SignalCommon_Tester_Tester_Tester_result);
		SignalCommon_Tester->addOwnedOperation(SignalCommon_Tester_Tester_Tester);
			// Reception Start
			SignalCommon_Tester_Start->setThisBehavioralFeaturePtr(SignalCommon_Tester_Start);
			SignalCommon_Tester_Start->setName("Start");
			SignalCommon_Tester_Start->setVisibility(VisibilityKind::public_);
			SignalCommon_Tester_Start->setSignal(SignalCommon_Start);
		SignalCommon_Tester->addOwnedReception(SignalCommon_Tester_Start);
	SignalCommon->addPackagedElement(SignalCommon_Tester);
		// Association R
		SignalCommon_R->setThisAssociationPtr(SignalCommon_R);
		SignalCommon_R->setName("R");
		SignalCommon_R->setVisibility(VisibilityKind::public_);
		SignalCommon_R->addOwnedEnd(SignalCommon_R_x);
		SignalCommon_R->addOwnedEnd(SignalCommon_R_y);
	SignalCommon->addPackagedElement(SignalCommon_R);
		// Signal S
		SignalCommon_S->setThisSignalPtr(SignalCommon_S);
		SignalCommon_S->setName("S");
		SignalCommon_S->setVisibility(VisibilityKind::public_);
		
			// Property value
			SignalCommon_S_value->setThisElementPtr(SignalCommon_S_value);
			SignalCommon_S_value->setName("value");
			SignalCommon_S_value->setVisibility(VisibilityKind::public_);
			
			SignalCommon_S_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		SignalCommon_S->addOwnedAttribute(SignalCommon_S_value);
	SignalCommon->addPackagedElement(SignalCommon_S);
		// Signal Start
		SignalCommon_Start->setThisSignalPtr(SignalCommon_Start);
		SignalCommon_Start->setName("Start");
		SignalCommon_Start->setVisibility(VisibilityKind::public_);
		
			// Property testCase
			SignalCommon_Start_testCase->setThisElementPtr(SignalCommon_Start_testCase);
			SignalCommon_Start_testCase->setName("testCase");
			SignalCommon_Start_testCase->setVisibility(VisibilityKind::public_);
			
			SignalCommon_Start_testCase->setType(SignalCommon_TestCase);
		SignalCommon_Start->addOwnedAttribute(SignalCommon_Start_testCase);
	SignalCommon->addPackagedElement(SignalCommon_Start);
		// SignalEvent ContinueEvent
		SignalCommon_ContinueEvent->setThisElementPtr(SignalCommon_ContinueEvent);
		SignalCommon_ContinueEvent->setName("ContinueEvent");
		SignalCommon_ContinueEvent->setVisibility(VisibilityKind::public_);
		SignalCommon_ContinueEvent->setSignal(SignalCommon_Continue);
	SignalCommon->addPackagedElement(SignalCommon_ContinueEvent);
		// Class I
		SignalCommon_I->setThisClass_Ptr(SignalCommon_I);
		SignalCommon_I->setName("I");
		SignalCommon_I->setVisibility(VisibilityKind::public_);
	SignalCommon->addPackagedElement(SignalCommon_I);
		// Signal Continue
		SignalCommon_Continue->setThisSignalPtr(SignalCommon_Continue);
		SignalCommon_Continue->setName("Continue");
		SignalCommon_Continue->setVisibility(VisibilityKind::public_);
	SignalCommon->addPackagedElement(SignalCommon_Continue);
		// SignalEvent SEvent
		SignalCommon_SEvent->setThisElementPtr(SignalCommon_SEvent);
		SignalCommon_SEvent->setName("SEvent");
		SignalCommon_SEvent->setVisibility(VisibilityKind::public_);
		SignalCommon_SEvent->setSignal(SignalCommon_S);
	SignalCommon->addPackagedElement(SignalCommon_SEvent);
		// Class TestCase
		SignalCommon_TestCase->setThisClass_Ptr(SignalCommon_TestCase);
		SignalCommon_TestCase->setName("TestCase");
		SignalCommon_TestCase->setVisibility(VisibilityKind::public_);
		
		SignalCommon_TestCase->setIsAbstract(true);
		
		
			// Operation test
			SignalCommon_TestCase_test->setThisOperationPtr(SignalCommon_TestCase_test);
			SignalCommon_TestCase_test->setName("test");
			SignalCommon_TestCase_test->setVisibility(VisibilityKind::public_);
			SignalCommon_TestCase_test->setIsAbstract(true);
		SignalCommon_TestCase->addOwnedOperation(SignalCommon_TestCase_test);
	SignalCommon->addPackagedElement(SignalCommon_TestCase);
}
