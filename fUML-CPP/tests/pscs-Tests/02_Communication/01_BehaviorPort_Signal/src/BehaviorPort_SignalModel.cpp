/*
 * BehaviorPort_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "BehaviorPort_SignalModel.h"

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
#include <uml/actions/ReadSelfAction.h>
#include <uml/actions/StartObjectBehaviorAction.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
#include <uml/classification/Generalization.h>
#include <uml/activities/InitialNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/simpleclassifiers/Reception.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
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

using namespace BehaviorPort_Signal;
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

BehaviorPort_SignalModel::BehaviorPort_SignalModel()
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

BehaviorPort_SignalModel::~BehaviorPort_SignalModel()
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

const std::shared_ptr<BehaviorPort_SignalModel>& BehaviorPort_SignalModel::Instance()
{
	static std::shared_ptr<BehaviorPort_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new BehaviorPort_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void BehaviorPort_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model BehaviorPort_Signal
	 */
	BehaviorPort_Signal.reset(new Package());
	this->addToElementRepository("BehaviorPort_Signal", BehaviorPort_Signal);
		BehaviorPort_Signal_SignalEventStart.reset(new SignalEvent());
		this->addToElementRepository("SignalEventStart", BehaviorPort_Signal_SignalEventStart);
		BehaviorPort_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", BehaviorPort_Signal_Tester);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", BehaviorPort_Signal_Tester_TesterClassifierBehavior);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralInteger1);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean2", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural3", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural3);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger4);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger5.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger5", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger5);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural6", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural6);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural7.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural7", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural7);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger8.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger8", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger8);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger9.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger9", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger9);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural10);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow11", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralInteger12);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean13", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow14", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean15", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralInteger16);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow17", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a.q", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural18", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralUnlimitedNatural18);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralInteger19.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger19", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result_LiteralInteger19);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural20", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralUnlimitedNatural20);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object_LiteralInteger21);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow22", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural23", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural23);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger24.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger24", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger24);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger25.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger25", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger25);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural26", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural26);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow27", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralInteger28);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean29", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow30", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean31", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralInteger32);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow33", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean34", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralInteger35);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow36", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralInteger37);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean38", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger39.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger39", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger39);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural40", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural40);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger41.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger41", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger41);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42.reset(new Trigger());
					this->addToElementRepository("Trigger42", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial.reset(new InitialNode());
				this->addToElementRepository("Initial", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", BehaviorPort_Signal_Tester_TesterClassifierBehavior_this);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural43", BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural43);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow45", BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value 4", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger47.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger47", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger47);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural48", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural48);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger49);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural50);
						BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger51);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52.reset(new Trigger());
					this->addToElementRepository("Trigger52", BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52);
			BehaviorPort_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", BehaviorPort_Signal_Tester_Tester_Tester);
				BehaviorPort_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Signal_Tester_Tester_Tester_result);
			BehaviorPort_Signal_Tester_a.reset(new Property());
			this->addToElementRepository("a", BehaviorPort_Signal_Tester_a);
			BehaviorPort_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", BehaviorPort_Signal_Tester_test);
			BehaviorPort_Signal_Tester_Generalization53.reset(new Generalization());
			this->addToElementRepository("Generalization53", BehaviorPort_Signal_Tester_Generalization53);
			BehaviorPort_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", BehaviorPort_Signal_Tester_testActivity);
				BehaviorPort_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", BehaviorPort_Signal_Tester_testActivity_Call_testP);
					BehaviorPort_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", BehaviorPort_Signal_Tester_testActivity_Call_testP_p);
						BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural54", BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural54);
						BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger55);
						BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", BehaviorPort_Signal_Tester_testActivity_Call_testP_p_LiteralInteger56);
				BehaviorPort_Signal_Tester_testActivity_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("this.a", BehaviorPort_Signal_Tester_testActivity_this_a);
					BehaviorPort_Signal_Tester_testActivity_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_Tester_testActivity_this_a_object);
						BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralUnlimitedNatural57);
						BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", BehaviorPort_Signal_Tester_testActivity_this_a_object_LiteralInteger58);
					BehaviorPort_Signal_Tester_testActivity_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_testActivity_this_a_result);
						BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralInteger59);
						BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", BehaviorPort_Signal_Tester_testActivity_this_a_result_LiteralUnlimitedNatural60);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow61", BehaviorPort_Signal_Tester_testActivity_ObjectFlow61);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean62", BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralInteger63);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow64", BehaviorPort_Signal_Tester_testActivity_ObjectFlow64);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean65", BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralInteger66);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow67", BehaviorPort_Signal_Tester_testActivity_ObjectFlow67);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean68", BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralInteger69);
				BehaviorPort_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", BehaviorPort_Signal_Tester_testActivity_this);
					BehaviorPort_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_testActivity_this_result);
						BehaviorPort_Signal_Tester_testActivity_this_result_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", BehaviorPort_Signal_Tester_testActivity_this_result_LiteralInteger70);
						BehaviorPort_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural71", BehaviorPort_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural71);
				BehaviorPort_Signal_Tester_testActivity_this_a_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("this.a.p", BehaviorPort_Signal_Tester_testActivity_this_a_p);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_Tester_testActivity_this_a_p_object);
						BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural72", BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralUnlimitedNatural72);
						BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralInteger73.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger73", BehaviorPort_Signal_Tester_testActivity_this_a_p_object_LiteralInteger73);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_Tester_testActivity_this_a_p_result);
						BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralInteger74);
						BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural75", BehaviorPort_Signal_Tester_testActivity_this_a_p_result_LiteralUnlimitedNatural75);
				BehaviorPort_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", BehaviorPort_Signal_Tester_testActivity_testP);
					BehaviorPort_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", BehaviorPort_Signal_Tester_testActivity_testP_p);
		BehaviorPort_Signal_S.reset(new Signal());
		this->addToElementRepository("S", BehaviorPort_Signal_S);
			BehaviorPort_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", BehaviorPort_Signal_S_v);
			BehaviorPort_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", BehaviorPort_Signal_S_t);
		BehaviorPort_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", BehaviorPort_Signal_AbstractTester);
			BehaviorPort_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", BehaviorPort_Signal_AbstractTester_Continue);
			BehaviorPort_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", BehaviorPort_Signal_AbstractTester_Start);
			BehaviorPort_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", BehaviorPort_Signal_AbstractTester_test);
		BehaviorPort_Signal_I.reset(new Interface());
		this->addToElementRepository("I", BehaviorPort_Signal_I);
			BehaviorPort_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", BehaviorPort_Signal_I_S);
		BehaviorPort_Signal_A.reset(new Class_());
		this->addToElementRepository("A", BehaviorPort_Signal_A);
			BehaviorPort_Signal_A_AClassifierBehavior.reset(new Activity());
			this->addToElementRepository("AClassifierBehavior", BehaviorPort_Signal_A_AClassifierBehavior);
				BehaviorPort_Signal_A_AClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", BehaviorPort_Signal_A_AClassifierBehavior_this);
					BehaviorPort_Signal_A_AClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_A_AClassifierBehavior_this_result);
						BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural76", BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural76);
						BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", BehaviorPort_Signal_A_AClassifierBehavior_this_result_LiteralInteger77);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow78", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean79", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralInteger80);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read S::v", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralUnlimitedNatural81);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralInteger82.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger82", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result_LiteralInteger82);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralUnlimitedNatural83);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object_LiteralInteger84);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow85", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralInteger86.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger86", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralInteger86);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean87", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87);
				BehaviorPort_Signal_A_AClassifierBehavior_Initial.reset(new InitialNode());
				this->addToElementRepository("Initial", BehaviorPort_Signal_A_AClassifierBehavior_Initial);
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result);
						BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural88.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural88", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural88);
						BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger89.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger89", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger89);
						BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger90.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger90", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger90);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91.reset(new Trigger());
					this->addToElementRepository("Trigger91", BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91);
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue);
					BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target);
						BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural92);
						BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target_LiteralInteger93);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read S::t", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralInteger94.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger94", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralInteger94);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural95", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object_LiteralUnlimitedNatural95);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural96", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralUnlimitedNatural96);
						BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralInteger97.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger97", BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result_LiteralInteger97);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow98", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean99", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger100", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralInteger100);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow101", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralInteger102.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger102", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralInteger102);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean103", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow104", BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow105", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralInteger106.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger106", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralInteger106);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean107", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger108.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger108", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger108);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural109", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural109);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural110.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural110", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural110);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger111.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger111", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger111);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural112", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural112);
						BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger113);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow114", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralInteger115.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger115", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralInteger115);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean116", BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow117", BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117);
				BehaviorPort_Signal_A_AClassifierBehavior_Fork_S.reset(new ForkNode());
				this->addToElementRepository("Fork S", BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
			BehaviorPort_Signal_A_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", BehaviorPort_Signal_A_IRealization);
			BehaviorPort_Signal_A_S.reset(new Reception());
			this->addToElementRepository("S", BehaviorPort_Signal_A_S);
			BehaviorPort_Signal_A_p.reset(new Property());
			this->addToElementRepository("p", BehaviorPort_Signal_A_p);
			BehaviorPort_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", BehaviorPort_Signal_A_q);
			BehaviorPort_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", BehaviorPort_Signal_A_A_A);
				BehaviorPort_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Signal_A_A_A_result);
		BehaviorPort_Signal_SignalEventContinue.reset(new SignalEvent());
		this->addToElementRepository("SignalEventContinue", BehaviorPort_Signal_SignalEventContinue);
		BehaviorPort_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", BehaviorPort_Signal_Start);
		BehaviorPort_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", BehaviorPort_Signal_Continue);
		BehaviorPort_Signal_SignalEventS.reset(new SignalEvent());
		this->addToElementRepository("SignalEventS", BehaviorPort_Signal_SignalEventS);
		BehaviorPort_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", BehaviorPort_Signal_IImpl);
			BehaviorPort_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", BehaviorPort_Signal_IImpl_IRealization);
			BehaviorPort_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", BehaviorPort_Signal_IImpl_S);
		BehaviorPort_Signal_main.reset(new Activity());
		this->addToElementRepository("main", BehaviorPort_Signal_main);
			BehaviorPort_Signal_main_ObjectFlow118.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow118", BehaviorPort_Signal_main_ObjectFlow118);
				BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean119", BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119);
				BehaviorPort_Signal_main_ObjectFlow118_LiteralInteger120.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger120", BehaviorPort_Signal_main_ObjectFlow118_LiteralInteger120);
			BehaviorPort_Signal_main_ObjectFlow121.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow121", BehaviorPort_Signal_main_ObjectFlow121);
				BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean122", BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122);
				BehaviorPort_Signal_main_ObjectFlow121_LiteralInteger123.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger123", BehaviorPort_Signal_main_ObjectFlow121_LiteralInteger123);
			BehaviorPort_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", BehaviorPort_Signal_main_Create_Tester);
				BehaviorPort_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Signal_main_Create_Tester_result);
					BehaviorPort_Signal_main_Create_Tester_result_LiteralUnlimitedNatural124.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural124", BehaviorPort_Signal_main_Create_Tester_result_LiteralUnlimitedNatural124);
					BehaviorPort_Signal_main_Create_Tester_result_LiteralInteger125.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger125", BehaviorPort_Signal_main_Create_Tester_result_LiteralInteger125);
			BehaviorPort_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", BehaviorPort_Signal_main_Start_Tester);
				BehaviorPort_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", BehaviorPort_Signal_main_Start_Tester_object);
					BehaviorPort_Signal_main_Start_Tester_object_LiteralInteger126.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger126", BehaviorPort_Signal_main_Start_Tester_object_LiteralInteger126);
					BehaviorPort_Signal_main_Start_Tester_object_LiteralUnlimitedNatural127.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural127", BehaviorPort_Signal_main_Start_Tester_object_LiteralUnlimitedNatural127);
			BehaviorPort_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", BehaviorPort_Signal_main_Fork_Tester);
			BehaviorPort_Signal_main_ObjectFlow128.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow128", BehaviorPort_Signal_main_ObjectFlow128);
				BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean129", BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129);
				BehaviorPort_Signal_main_ObjectFlow128_LiteralInteger130.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger130", BehaviorPort_Signal_main_ObjectFlow128_LiteralInteger130);
			BehaviorPort_Signal_main_ControlFlow131.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow131", BehaviorPort_Signal_main_ControlFlow131);
			BehaviorPort_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", BehaviorPort_Signal_main_Tester_);
				BehaviorPort_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", BehaviorPort_Signal_main_Tester__target);
					BehaviorPort_Signal_main_Tester__target_LiteralInteger132.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger132", BehaviorPort_Signal_main_Tester__target_LiteralInteger132);
					BehaviorPort_Signal_main_Tester__target_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural133", BehaviorPort_Signal_main_Tester__target_LiteralUnlimitedNatural133);
				BehaviorPort_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Signal_main_Tester__result);
					BehaviorPort_Signal_main_Tester__result_LiteralInteger134.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger134", BehaviorPort_Signal_main_Tester__result_LiteralInteger134);
					BehaviorPort_Signal_main_Tester__result_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural135", BehaviorPort_Signal_main_Tester__result_LiteralUnlimitedNatural135);
					BehaviorPort_Signal_main_Tester__result_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", BehaviorPort_Signal_main_Tester__result_LiteralInteger136);
			BehaviorPort_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", BehaviorPort_Signal_main_Send_Start);
				BehaviorPort_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", BehaviorPort_Signal_main_Send_Start_target);
					BehaviorPort_Signal_main_Send_Start_target_LiteralInteger137.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger137", BehaviorPort_Signal_main_Send_Start_target_LiteralInteger137);
					BehaviorPort_Signal_main_Send_Start_target_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural138", BehaviorPort_Signal_main_Send_Start_target_LiteralUnlimitedNatural138);
			BehaviorPort_Signal_main_ObjectFlow139.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow139", BehaviorPort_Signal_main_ObjectFlow139);
				BehaviorPort_Signal_main_ObjectFlow139_LiteralInteger140.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger140", BehaviorPort_Signal_main_ObjectFlow139_LiteralInteger140);
				BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean141", BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141);

	// Initialize public members
	/*
	 * Model BehaviorPort_Signal
	 */
	BehaviorPort_Signal->setThisPackagePtr(BehaviorPort_Signal);
	BehaviorPort_Signal->setName("BehaviorPort_Signal");
	BehaviorPort_Signal->setVisibility(VisibilityKind::public_);
		// SignalEvent SignalEventStart
		BehaviorPort_Signal_SignalEventStart->setThisElementPtr(BehaviorPort_Signal_SignalEventStart);
		BehaviorPort_Signal_SignalEventStart->setName("SignalEventStart");
		BehaviorPort_Signal_SignalEventStart->setVisibility(VisibilityKind::public_);
		BehaviorPort_Signal_SignalEventStart->setSignal(BehaviorPort_Signal_Start);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_SignalEventStart);
		// Class Tester
		BehaviorPort_Signal_Tester->setThisClass_Ptr(BehaviorPort_Signal_Tester);
		BehaviorPort_Signal_Tester->setName("Tester");
		BehaviorPort_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			BehaviorPort_Signal_Tester_Generalization53->setThisElementPtr(BehaviorPort_Signal_Tester_Generalization53);
			BehaviorPort_Signal_Tester_Generalization53->setGeneral(BehaviorPort_Signal_AbstractTester);
		BehaviorPort_Signal_Tester->addGeneralization(BehaviorPort_Signal_Tester_Generalization53);
			// Property a
			BehaviorPort_Signal_Tester_a->setThisElementPtr(BehaviorPort_Signal_Tester_a);
			BehaviorPort_Signal_Tester_a->setName("a");
			BehaviorPort_Signal_Tester_a->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_Tester_a->setType(BehaviorPort_Signal_A);
			BehaviorPort_Signal_Tester_a->setAggregation(AggregationKind::composite);
		BehaviorPort_Signal_Tester->addOwnedAttribute(BehaviorPort_Signal_Tester_a);
		BehaviorPort_Signal_Tester->setClassifierBehavior(BehaviorPort_Signal_Tester_TesterClassifierBehavior);
			// Activity TesterClassifierBehavior
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ReadStructuralFeatureAction Read this.a
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setName("Read this.a");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setStructuralFeature(BehaviorPort_Signal_Tester_a);
					// InputPin object
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setName("object");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setObject(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a->setResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				// SendSignalAction Send S
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->setSignal(BehaviorPort_Signal_S);
					// InputPin target
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target->setType(BehaviorPort_Signal_IImpl);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin v
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v->setName("v");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// InputPin t
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t->setName("t");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t->setType(BehaviorPort_Signal_AbstractTester);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S);
				// CallOperationAction Call test()
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(BehaviorPort_Signal_Tester_test);
					// InputPin target
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// ForkNode Fork this
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// AcceptEventAction Accept Start
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(BehaviorPort_Signal_Start);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger42
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42->setName("Trigger42");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42->setEvent(BehaviorPort_Signal_SignalEventStart);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger42);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// InitialNode Initial
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial->setName("Initial");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial);
				// ReadSelfAction this
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_this->setResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this);
				// ReadStructuralFeatureAction Read this.a.q
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setName("Read this.a.q");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setStructuralFeature(BehaviorPort_Signal_A_q);
					// InputPin object
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object->setName("object");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setObject(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result->setType(BehaviorPort_Signal_IImpl);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q->setResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q);
				// ValueSpecificationAction Value 4
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4->setName("Value 4");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger46
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46->setName("LiteralInteger46");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46->setValue(4);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4->setValue(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger46);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4->setResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4);
				// AcceptEventAction Accept Continue
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setName("Accept Continue");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setName("result");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setType(BehaviorPort_Signal_Continue);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue->addResult(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
					// Trigger Trigger52
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52->setName("Trigger52");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52->setEvent(BehaviorPort_Signal_SignalEventContinue);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue->addTrigger(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger52);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addNode(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				// ControlFlow ControlFlow22 from Initial to Accept Start
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22->setName("ControlFlow22");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Initial);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow22);
				// ObjectFlow ObjectFlow0 from result to object
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setName("ObjectFlow0");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_object);
					// LiteralBoolean LiteralBoolean2
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2->setName("LiteralBoolean2");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0_LiteralBoolean2);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow0);
				// ObjectFlow ObjectFlow27 from result to Fork this
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setName("ObjectFlow27");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this_result);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean29
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29->setName("LiteralBoolean29");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27_LiteralBoolean29);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow27);
				// ObjectFlow ObjectFlow30 from Fork this to target
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setName("ObjectFlow30");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean31
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31->setName("LiteralBoolean31");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30_LiteralBoolean31);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow30);
				// ObjectFlow ObjectFlow33 from Fork this to t
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setName("ObjectFlow33");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					// LiteralBoolean LiteralBoolean34
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setName("LiteralBoolean34");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33_LiteralBoolean34);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow33);
				// ObjectFlow ObjectFlow36 from result to v
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setName("ObjectFlow36");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Value_4_result);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// LiteralBoolean LiteralBoolean38
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36_LiteralBoolean38);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow36);
				// ObjectFlow ObjectFlow11 from result to target
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setName("ObjectFlow11");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_q_result);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean13
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13->setName("LiteralBoolean13");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11_LiteralBoolean13);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow11);
				// ObjectFlow ObjectFlow14 from Fork this to object
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setName("ObjectFlow14");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Fork_this);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// LiteralBoolean LiteralBoolean15
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15->setThisElementPtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15->setName("LiteralBoolean15");
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15->setValue(true);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14->setGuard(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14_LiteralBoolean15);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ObjectFlow14);
				// ControlFlow ControlFlow45 from Accept Start to this
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45->setName("ControlFlow45");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_this);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow45);
				// ControlFlow ControlFlow17 from Accept Continue to Call test()
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17->setName("ControlFlow17");
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17->setSource(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17->setTarget(BehaviorPort_Signal_Tester_TesterClassifierBehavior_Call_test_);
			BehaviorPort_Signal_Tester_TesterClassifierBehavior->addEdge(BehaviorPort_Signal_Tester_TesterClassifierBehavior_ControlFlow17);
		BehaviorPort_Signal_Tester->addOwnedBehavior(BehaviorPort_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			BehaviorPort_Signal_Tester_testActivity->setThisActivityPtr(BehaviorPort_Signal_Tester_testActivity);
			BehaviorPort_Signal_Tester_testActivity->setName("testActivity");
			BehaviorPort_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				BehaviorPort_Signal_Tester_testActivity_testP->setThisClass_Ptr(BehaviorPort_Signal_Tester_testActivity_testP);
				BehaviorPort_Signal_Tester_testActivity_testP->setName("testP");
				BehaviorPort_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					BehaviorPort_Signal_Tester_testActivity_testP_p->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_testP_p);
					BehaviorPort_Signal_Tester_testActivity_testP_p->setName("p");
					BehaviorPort_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					BehaviorPort_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_Tester_testActivity_testP->addOwnedParameter(BehaviorPort_Signal_Tester_testActivity_testP_p);
				BehaviorPort_Signal_Tester_testActivity_testP->addLanguage("C++");
				BehaviorPort_Signal_Tester_testActivity_testP->addLanguage("Include");
				BehaviorPort_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout << \"Asserting a.p == 4\" << std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p));  	std::cout << \"a.p == \" << std::to_string(p) <<std::endl; 	std::cout << \"Signal delegated to classifier behavior: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
				BehaviorPort_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h>");
			BehaviorPort_Signal_Tester_testActivity->addOwnedBehavior(BehaviorPort_Signal_Tester_testActivity_testP);
				// CallBehaviorAction Call testP
				BehaviorPort_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_testActivity_Call_testP);
				BehaviorPort_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				BehaviorPort_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_testActivity_Call_testP->setBehavior(BehaviorPort_Signal_Tester_testActivity_testP);
					// InputPin p
					BehaviorPort_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_Call_testP_p);
					BehaviorPort_Signal_Tester_testActivity_Call_testP_p->setName("p");
					BehaviorPort_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_Tester_testActivity_Call_testP->addArgument(BehaviorPort_Signal_Tester_testActivity_Call_testP_p);
			BehaviorPort_Signal_Tester_testActivity->addNode(BehaviorPort_Signal_Tester_testActivity_Call_testP);
				// ReadStructuralFeatureAction this.a
				BehaviorPort_Signal_Tester_testActivity_this_a->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_testActivity_this_a);
				BehaviorPort_Signal_Tester_testActivity_this_a->setName("this.a");
				BehaviorPort_Signal_Tester_testActivity_this_a->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_testActivity_this_a->setStructuralFeature(BehaviorPort_Signal_Tester_a);
					// InputPin object
					BehaviorPort_Signal_Tester_testActivity_this_a_object->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_this_a_object);
					BehaviorPort_Signal_Tester_testActivity_this_a_object->setName("object");
					BehaviorPort_Signal_Tester_testActivity_this_a_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_this_a_object->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_testActivity_this_a->setObject(BehaviorPort_Signal_Tester_testActivity_this_a_object);
					// OutputPin result
					BehaviorPort_Signal_Tester_testActivity_this_a_result->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_this_a_result);
					BehaviorPort_Signal_Tester_testActivity_this_a_result->setName("result");
					BehaviorPort_Signal_Tester_testActivity_this_a_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_this_a_result->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_Tester_testActivity_this_a->setResult(BehaviorPort_Signal_Tester_testActivity_this_a_result);
			BehaviorPort_Signal_Tester_testActivity->addNode(BehaviorPort_Signal_Tester_testActivity_this_a);
				// ReadSelfAction this
				BehaviorPort_Signal_Tester_testActivity_this->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_testActivity_this);
				BehaviorPort_Signal_Tester_testActivity_this->setName("this");
				BehaviorPort_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_Tester_testActivity_this_result->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_this_result);
					BehaviorPort_Signal_Tester_testActivity_this_result->setName("result");
					BehaviorPort_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_this_result->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_testActivity_this->setResult(BehaviorPort_Signal_Tester_testActivity_this_result);
			BehaviorPort_Signal_Tester_testActivity->addNode(BehaviorPort_Signal_Tester_testActivity_this);
				// ReadStructuralFeatureAction this.a.p
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setThisExecutableNodePtr(BehaviorPort_Signal_Tester_testActivity_this_a_p);
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setName("this.a.p");
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setStructuralFeature(BehaviorPort_Signal_A_p);
					// InputPin object
					BehaviorPort_Signal_Tester_testActivity_this_a_p_object->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_this_a_p_object);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_object->setName("object");
					BehaviorPort_Signal_Tester_testActivity_this_a_p_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_object->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setObject(BehaviorPort_Signal_Tester_testActivity_this_a_p_object);
					// OutputPin result
					BehaviorPort_Signal_Tester_testActivity_this_a_p_result->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_this_a_p_result);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_result->setName("result");
					BehaviorPort_Signal_Tester_testActivity_this_a_p_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_this_a_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_Tester_testActivity_this_a_p->setResult(BehaviorPort_Signal_Tester_testActivity_this_a_p_result);
			BehaviorPort_Signal_Tester_testActivity->addNode(BehaviorPort_Signal_Tester_testActivity_this_a_p);
				// ObjectFlow ObjectFlow61 from result to object
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow61);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setName("ObjectFlow61");
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setSource(BehaviorPort_Signal_Tester_testActivity_this_a_result);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setTarget(BehaviorPort_Signal_Tester_testActivity_this_a_p_object);
					// LiteralBoolean LiteralBoolean62
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62->setName("LiteralBoolean62");
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62->setValue(true);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow61->setGuard(BehaviorPort_Signal_Tester_testActivity_ObjectFlow61_LiteralBoolean62);
			BehaviorPort_Signal_Tester_testActivity->addEdge(BehaviorPort_Signal_Tester_testActivity_ObjectFlow61);
				// ObjectFlow ObjectFlow64 from result to object
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow64);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setName("ObjectFlow64");
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setSource(BehaviorPort_Signal_Tester_testActivity_this_result);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setTarget(BehaviorPort_Signal_Tester_testActivity_this_a_object);
					// LiteralBoolean LiteralBoolean65
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65->setName("LiteralBoolean65");
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65->setValue(true);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow64->setGuard(BehaviorPort_Signal_Tester_testActivity_ObjectFlow64_LiteralBoolean65);
			BehaviorPort_Signal_Tester_testActivity->addEdge(BehaviorPort_Signal_Tester_testActivity_ObjectFlow64);
				// ObjectFlow ObjectFlow67 from result to p
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setThisActivityEdgePtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow67);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setName("ObjectFlow67");
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setSource(BehaviorPort_Signal_Tester_testActivity_this_a_p_result);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setTarget(BehaviorPort_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean68
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68->setThisElementPtr(BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68->setName("LiteralBoolean68");
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68->setValue(true);
				BehaviorPort_Signal_Tester_testActivity_ObjectFlow67->setGuard(BehaviorPort_Signal_Tester_testActivity_ObjectFlow67_LiteralBoolean68);
			BehaviorPort_Signal_Tester_testActivity->addEdge(BehaviorPort_Signal_Tester_testActivity_ObjectFlow67);
		BehaviorPort_Signal_Tester->addOwnedBehavior(BehaviorPort_Signal_Tester_testActivity);
		
		BehaviorPort_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			BehaviorPort_Signal_Tester_Tester_Tester->setThisOperationPtr(BehaviorPort_Signal_Tester_Tester_Tester);
			BehaviorPort_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			BehaviorPort_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			BehaviorPort_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				BehaviorPort_Signal_Tester_Tester_Tester_result->setThisElementPtr(BehaviorPort_Signal_Tester_Tester_Tester_result);
				BehaviorPort_Signal_Tester_Tester_Tester_result->setName("result");
				BehaviorPort_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_Tester_Tester_Tester_result->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Signal_Tester_Tester_Tester->addOwnedParameter(BehaviorPort_Signal_Tester_Tester_Tester_result);
		BehaviorPort_Signal_Tester->addOwnedOperation(BehaviorPort_Signal_Tester_Tester_Tester);
			// Operation test
			BehaviorPort_Signal_Tester_test->setThisOperationPtr(BehaviorPort_Signal_Tester_test);
			BehaviorPort_Signal_Tester_test->setName("test");
			BehaviorPort_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_Tester_test->addMethod(BehaviorPort_Signal_Tester_testActivity);
			BehaviorPort_Signal_Tester_test->addRedefinedOperation(BehaviorPort_Signal_AbstractTester_test);
		BehaviorPort_Signal_Tester->addOwnedOperation(BehaviorPort_Signal_Tester_test);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_Tester);
		// Signal S
		BehaviorPort_Signal_S->setThisSignalPtr(BehaviorPort_Signal_S);
		BehaviorPort_Signal_S->setName("S");
		BehaviorPort_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			BehaviorPort_Signal_S_v->setThisElementPtr(BehaviorPort_Signal_S_v);
			BehaviorPort_Signal_S_v->setName("v");
			BehaviorPort_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		BehaviorPort_Signal_S->addOwnedAttribute(BehaviorPort_Signal_S_v);
			// Property t
			BehaviorPort_Signal_S_t->setThisElementPtr(BehaviorPort_Signal_S_t);
			BehaviorPort_Signal_S_t->setName("t");
			BehaviorPort_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_S_t->setType(BehaviorPort_Signal_AbstractTester);
		BehaviorPort_Signal_S->addOwnedAttribute(BehaviorPort_Signal_S_t);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_S);
		// Class AbstractTester
		BehaviorPort_Signal_AbstractTester->setThisClass_Ptr(BehaviorPort_Signal_AbstractTester);
		BehaviorPort_Signal_AbstractTester->setName("AbstractTester");
		BehaviorPort_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		BehaviorPort_Signal_AbstractTester->setIsAbstract(true);
		
		
		BehaviorPort_Signal_AbstractTester->setIsActive(true);
			// Operation test
			BehaviorPort_Signal_AbstractTester_test->setThisOperationPtr(BehaviorPort_Signal_AbstractTester_test);
			BehaviorPort_Signal_AbstractTester_test->setName("test");
			BehaviorPort_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_AbstractTester_test->setIsAbstract(true);
		BehaviorPort_Signal_AbstractTester->addOwnedOperation(BehaviorPort_Signal_AbstractTester_test);
			// Reception Continue
			BehaviorPort_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(BehaviorPort_Signal_AbstractTester_Continue);
			BehaviorPort_Signal_AbstractTester_Continue->setName("Continue");
			BehaviorPort_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_AbstractTester_Continue->setSignal(BehaviorPort_Signal_Continue);
		BehaviorPort_Signal_AbstractTester->addOwnedReception(BehaviorPort_Signal_AbstractTester_Continue);
			// Reception Start
			BehaviorPort_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(BehaviorPort_Signal_AbstractTester_Start);
			BehaviorPort_Signal_AbstractTester_Start->setName("Start");
			BehaviorPort_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_AbstractTester_Start->setSignal(BehaviorPort_Signal_Start);
		BehaviorPort_Signal_AbstractTester->addOwnedReception(BehaviorPort_Signal_AbstractTester_Start);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_AbstractTester);
		// Interface I
		BehaviorPort_Signal_I->setThisInterfacePtr(BehaviorPort_Signal_I);
		BehaviorPort_Signal_I->setName("I");
		BehaviorPort_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			BehaviorPort_Signal_I_S->setThisBehavioralFeaturePtr(BehaviorPort_Signal_I_S);
			BehaviorPort_Signal_I_S->setName("S");
			BehaviorPort_Signal_I_S->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_I_S->setSignal(BehaviorPort_Signal_S);
		BehaviorPort_Signal_I->addOwnedReception(BehaviorPort_Signal_I_S);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_I);
		// Class A
		BehaviorPort_Signal_A->setThisClass_Ptr(BehaviorPort_Signal_A);
		BehaviorPort_Signal_A->setName("A");
		BehaviorPort_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Property p
			BehaviorPort_Signal_A_p->setThisElementPtr(BehaviorPort_Signal_A_p);
			BehaviorPort_Signal_A_p->setName("p");
			BehaviorPort_Signal_A_p->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_A_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		BehaviorPort_Signal_A->addOwnedAttribute(BehaviorPort_Signal_A_p);
			// Port q
			BehaviorPort_Signal_A_q->setThisElementPtr(BehaviorPort_Signal_A_q);
			BehaviorPort_Signal_A_q->setName("q");
			BehaviorPort_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_A_q->setType(BehaviorPort_Signal_IImpl);
			BehaviorPort_Signal_A_q->setAggregation(AggregationKind::composite);
			BehaviorPort_Signal_A_q->isBehavior = true;
			BehaviorPort_Signal_A_q->isService = true;
			BehaviorPort_Signal_A_q->addProvided(BehaviorPort_Signal_I);
		BehaviorPort_Signal_A->addOwnedAttribute(BehaviorPort_Signal_A_q);
		BehaviorPort_Signal_A->setClassifierBehavior(BehaviorPort_Signal_A_AClassifierBehavior);
			// Activity AClassifierBehavior
			BehaviorPort_Signal_A_AClassifierBehavior->setThisActivityPtr(BehaviorPort_Signal_A_AClassifierBehavior);
			BehaviorPort_Signal_A_AClassifierBehavior->setName("AClassifierBehavior");
			BehaviorPort_Signal_A_AClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ReadSelfAction this
				BehaviorPort_Signal_A_AClassifierBehavior_this->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_this);
				BehaviorPort_Signal_A_AClassifierBehavior_this->setName("this");
				BehaviorPort_Signal_A_AClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_A_AClassifierBehavior_this_result->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_this_result);
					BehaviorPort_Signal_A_AClassifierBehavior_this_result->setName("result");
					BehaviorPort_Signal_A_AClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_this_result->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_A_AClassifierBehavior_this->setResult(BehaviorPort_Signal_A_AClassifierBehavior_this_result);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_this);
				// ReadStructuralFeatureAction Read S::v
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setName("Read S::v");
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setStructuralFeature(BehaviorPort_Signal_S_v);
					// InputPin object
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object->setName("object");
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setObject(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object);
					// OutputPin result
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result->setName("result");
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v->setResult(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v);
				// AddStructuralFeatureValueAction Set this.p
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setName("Set this.p");
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setStructuralFeature(BehaviorPort_Signal_A_p);
					// InputPin object
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object->setName("object");
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setObject(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object);
					// InputPin value
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value->setName("value");
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setValue(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value);
					// OutputPin result
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result->setName("result");
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p->setResult(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_result);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p);
				// ForkNode Fork S
				BehaviorPort_Signal_A_AClassifierBehavior_Fork_S->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
				BehaviorPort_Signal_A_AClassifierBehavior_Fork_S->setName("Fork S");
				BehaviorPort_Signal_A_AClassifierBehavior_Fork_S->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
				// InitialNode Initial
				BehaviorPort_Signal_A_AClassifierBehavior_Initial->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Initial);
				BehaviorPort_Signal_A_AClassifierBehavior_Initial->setName("Initial");
				BehaviorPort_Signal_A_AClassifierBehavior_Initial->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Initial);
				// AcceptEventAction Accept S
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S);
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S->setName("Accept S");
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin result
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setName("result");
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setType(BehaviorPort_Signal_S);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setIsOrdered(true);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result->setIsUnique(false);
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S->addResult(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result);
					// Trigger Trigger91
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91->setName("Trigger91");
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91->setEvent(BehaviorPort_Signal_SignalEventS);
				BehaviorPort_Signal_A_AClassifierBehavior_Accept_S->addTrigger(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_Trigger91);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S);
				// SendSignalAction Send Continue
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue);
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue->setName("Send Continue");
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue->setSignal(BehaviorPort_Signal_Continue);
					// InputPin target
					BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target);
					BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target->setName("target");
					BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target->setType(BehaviorPort_Signal_AbstractTester);
				BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read S::t
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setThisExecutableNodePtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setName("Read S::t");
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setStructuralFeature(BehaviorPort_Signal_S_t);
					// InputPin object
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object->setName("object");
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setObject(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object);
					// OutputPin result
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result->setName("result");
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result->setType(BehaviorPort_Signal_AbstractTester);
				BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t->setResult(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result);
			BehaviorPort_Signal_A_AClassifierBehavior->addNode(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t);
				// ObjectFlow ObjectFlow98 from result to object
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setName("ObjectFlow98");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setSource(BehaviorPort_Signal_A_AClassifierBehavior_this_result);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean99
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setName("LiteralBoolean99");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98_LiteralBoolean99);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow98);
				// ObjectFlow ObjectFlow78 from result to target
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setName("ObjectFlow78");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_result);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean79
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78_LiteralBoolean79);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow78);
				// ObjectFlow ObjectFlow101 from Fork S to object
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setName("ObjectFlow101");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t_object);
					// LiteralBoolean LiteralBoolean103
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103->setName("LiteralBoolean103");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101_LiteralBoolean103);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow101);
				// ControlFlow ControlFlow104 from Set this.p to Read S::t
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104->setName("ControlFlow104");
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_t);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow104);
				// ObjectFlow ObjectFlow105 from result to value
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setName("ObjectFlow105");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_result);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean107
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107->setName("LiteralBoolean107");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105_LiteralBoolean107);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow105);
				// ObjectFlow ObjectFlow114 from Fork S to object
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setName("ObjectFlow114");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Read_S_v_object);
					// LiteralBoolean LiteralBoolean116
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116->setName("LiteralBoolean116");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114_LiteralBoolean116);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow114);
				// ControlFlow ControlFlow117 from Initial to Accept S
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117->setName("ControlFlow117");
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Initial);
				BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ControlFlow117);
				// ObjectFlow ObjectFlow85 from result to Fork S
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setThisActivityEdgePtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setName("ObjectFlow85");
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setSource(BehaviorPort_Signal_A_AClassifierBehavior_Accept_S_result);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setTarget(BehaviorPort_Signal_A_AClassifierBehavior_Fork_S);
					// LiteralBoolean LiteralBoolean87
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87->setThisElementPtr(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87->setName("LiteralBoolean87");
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87->setVisibility(VisibilityKind::public_);
					BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87->setValue(true);
				BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85->setGuard(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85_LiteralBoolean87);
			BehaviorPort_Signal_A_AClassifierBehavior->addEdge(BehaviorPort_Signal_A_AClassifierBehavior_ObjectFlow85);
		BehaviorPort_Signal_A->addOwnedBehavior(BehaviorPort_Signal_A_AClassifierBehavior);
			BehaviorPort_Signal_A_IRealization->setName("IRealization");
			BehaviorPort_Signal_A_IRealization->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_A_IRealization->setContract(BehaviorPort_Signal_I);
			
		BehaviorPort_Signal_A->addInterfaceRealization(BehaviorPort_Signal_A_IRealization);
		
		BehaviorPort_Signal_A->setIsActive(true);
			// Operation A_A
			BehaviorPort_Signal_A_A_A->setThisOperationPtr(BehaviorPort_Signal_A_A_A);
			BehaviorPort_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			BehaviorPort_Signal_A_A_A->setName("A_A");
			BehaviorPort_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				BehaviorPort_Signal_A_A_A_result->setThisElementPtr(BehaviorPort_Signal_A_A_A_result);
				BehaviorPort_Signal_A_A_A_result->setName("result");
				BehaviorPort_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Signal_A_A_A_result->setType(BehaviorPort_Signal_A);
				BehaviorPort_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Signal_A_A_A->addOwnedParameter(BehaviorPort_Signal_A_A_A_result);
		BehaviorPort_Signal_A->addOwnedOperation(BehaviorPort_Signal_A_A_A);
			// Reception S
			BehaviorPort_Signal_A_S->setThisBehavioralFeaturePtr(BehaviorPort_Signal_A_S);
			BehaviorPort_Signal_A_S->setName("S");
			BehaviorPort_Signal_A_S->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_A_S->setSignal(BehaviorPort_Signal_S);
		BehaviorPort_Signal_A->addOwnedReception(BehaviorPort_Signal_A_S);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_A);
		// SignalEvent SignalEventContinue
		BehaviorPort_Signal_SignalEventContinue->setThisElementPtr(BehaviorPort_Signal_SignalEventContinue);
		BehaviorPort_Signal_SignalEventContinue->setName("SignalEventContinue");
		BehaviorPort_Signal_SignalEventContinue->setVisibility(VisibilityKind::public_);
		BehaviorPort_Signal_SignalEventContinue->setSignal(BehaviorPort_Signal_Continue);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_SignalEventContinue);
		// Signal Start
		BehaviorPort_Signal_Start->setThisSignalPtr(BehaviorPort_Signal_Start);
		BehaviorPort_Signal_Start->setName("Start");
		BehaviorPort_Signal_Start->setVisibility(VisibilityKind::public_);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_Start);
		// Signal Continue
		BehaviorPort_Signal_Continue->setThisSignalPtr(BehaviorPort_Signal_Continue);
		BehaviorPort_Signal_Continue->setName("Continue");
		BehaviorPort_Signal_Continue->setVisibility(VisibilityKind::public_);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_Continue);
		// SignalEvent SignalEventS
		BehaviorPort_Signal_SignalEventS->setThisElementPtr(BehaviorPort_Signal_SignalEventS);
		BehaviorPort_Signal_SignalEventS->setName("SignalEventS");
		BehaviorPort_Signal_SignalEventS->setVisibility(VisibilityKind::public_);
		BehaviorPort_Signal_SignalEventS->setSignal(BehaviorPort_Signal_S);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_SignalEventS);
		// Class IImpl
		BehaviorPort_Signal_IImpl->setThisClass_Ptr(BehaviorPort_Signal_IImpl);
		BehaviorPort_Signal_IImpl->setName("IImpl");
		BehaviorPort_Signal_IImpl->setVisibility(VisibilityKind::public_);
		BehaviorPort_Signal_IImpl_IRealization->setName("IRealization");
			BehaviorPort_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_IImpl_IRealization->setContract(BehaviorPort_Signal_I);
			
		BehaviorPort_Signal_IImpl->addInterfaceRealization(BehaviorPort_Signal_IImpl_IRealization);
		
			// Reception S
			BehaviorPort_Signal_IImpl_S->setThisBehavioralFeaturePtr(BehaviorPort_Signal_IImpl_S);
			BehaviorPort_Signal_IImpl_S->setName("S");
			BehaviorPort_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_IImpl_S->setSignal(BehaviorPort_Signal_S);
		BehaviorPort_Signal_IImpl->addOwnedReception(BehaviorPort_Signal_IImpl_S);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_IImpl);
		// Activity main
		BehaviorPort_Signal_main->setThisActivityPtr(BehaviorPort_Signal_main);
		BehaviorPort_Signal_main->setName("main");
		BehaviorPort_Signal_main->setVisibility(VisibilityKind::public_);
			// CreateObjectAction Create Tester
			BehaviorPort_Signal_main_Create_Tester->setThisExecutableNodePtr(BehaviorPort_Signal_main_Create_Tester);
			BehaviorPort_Signal_main_Create_Tester->setName("Create Tester");
			BehaviorPort_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_main_Create_Tester->setClassifier(BehaviorPort_Signal_Tester);
				// OutputPin result
				BehaviorPort_Signal_main_Create_Tester_result->setThisElementPtr(BehaviorPort_Signal_main_Create_Tester_result);
				BehaviorPort_Signal_main_Create_Tester_result->setName("result");
				BehaviorPort_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_Create_Tester_result->setType(BehaviorPort_Signal_Tester);
			BehaviorPort_Signal_main_Create_Tester->setResult(BehaviorPort_Signal_main_Create_Tester_result);
		BehaviorPort_Signal_main->addNode(BehaviorPort_Signal_main_Create_Tester);
			// StartObjectBehaviorAction Start Tester
			BehaviorPort_Signal_main_Start_Tester->setThisExecutableNodePtr(BehaviorPort_Signal_main_Start_Tester);
			BehaviorPort_Signal_main_Start_Tester->setName("Start Tester");
			BehaviorPort_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				BehaviorPort_Signal_main_Start_Tester_object->setThisElementPtr(BehaviorPort_Signal_main_Start_Tester_object);
				BehaviorPort_Signal_main_Start_Tester_object->setName("object");
				BehaviorPort_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_Start_Tester_object->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_main_Start_Tester_object->setIsOrdered(true);
				BehaviorPort_Signal_main_Start_Tester_object->setIsUnique(false);
			BehaviorPort_Signal_main_Start_Tester->setObject(BehaviorPort_Signal_main_Start_Tester_object);
		BehaviorPort_Signal_main->addNode(BehaviorPort_Signal_main_Start_Tester);
			// ForkNode Fork Tester
			BehaviorPort_Signal_main_Fork_Tester->setThisElementPtr(BehaviorPort_Signal_main_Fork_Tester);
			BehaviorPort_Signal_main_Fork_Tester->setName("Fork Tester");
			BehaviorPort_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		BehaviorPort_Signal_main->addNode(BehaviorPort_Signal_main_Fork_Tester);
			// CallOperationAction Tester()
			BehaviorPort_Signal_main_Tester_->setThisExecutableNodePtr(BehaviorPort_Signal_main_Tester_);
			BehaviorPort_Signal_main_Tester_->setName("Tester()");
			BehaviorPort_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				BehaviorPort_Signal_main_Tester__result->setThisElementPtr(BehaviorPort_Signal_main_Tester__result);
				BehaviorPort_Signal_main_Tester__result->setName("result");
				BehaviorPort_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_Tester__result->setType(BehaviorPort_Signal_Tester);
			BehaviorPort_Signal_main_Tester_->addResult(BehaviorPort_Signal_main_Tester__result);
			BehaviorPort_Signal_main_Tester_->setOperation(BehaviorPort_Signal_Tester_Tester_Tester);
				// InputPin target
				BehaviorPort_Signal_main_Tester__target->setThisElementPtr(BehaviorPort_Signal_main_Tester__target);
				BehaviorPort_Signal_main_Tester__target->setName("target");
				BehaviorPort_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_Tester__target->setType(BehaviorPort_Signal_Tester);
			BehaviorPort_Signal_main_Tester_->setTarget(BehaviorPort_Signal_main_Tester__target);
		BehaviorPort_Signal_main->addNode(BehaviorPort_Signal_main_Tester_);
			// SendSignalAction Send Start
			BehaviorPort_Signal_main_Send_Start->setThisExecutableNodePtr(BehaviorPort_Signal_main_Send_Start);
			BehaviorPort_Signal_main_Send_Start->setName("Send Start");
			BehaviorPort_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			BehaviorPort_Signal_main_Send_Start->setSignal(BehaviorPort_Signal_Start);
				// InputPin target
				BehaviorPort_Signal_main_Send_Start_target->setThisElementPtr(BehaviorPort_Signal_main_Send_Start_target);
				BehaviorPort_Signal_main_Send_Start_target->setName("target");
				BehaviorPort_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_Send_Start_target->setType(BehaviorPort_Signal_Tester);
				BehaviorPort_Signal_main_Send_Start_target->setIsOrdered(true);
				BehaviorPort_Signal_main_Send_Start_target->setIsUnique(false);
			BehaviorPort_Signal_main_Send_Start->setTarget(BehaviorPort_Signal_main_Send_Start_target);
		BehaviorPort_Signal_main->addNode(BehaviorPort_Signal_main_Send_Start);
			// ObjectFlow ObjectFlow118 from result to Fork Tester
			BehaviorPort_Signal_main_ObjectFlow118->setThisActivityEdgePtr(BehaviorPort_Signal_main_ObjectFlow118);
			BehaviorPort_Signal_main_ObjectFlow118->setName("ObjectFlow118");
			BehaviorPort_Signal_main_ObjectFlow118->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_main_ObjectFlow118->setSource(BehaviorPort_Signal_main_Tester__result);
			BehaviorPort_Signal_main_ObjectFlow118->setTarget(BehaviorPort_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean119
				BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119->setThisElementPtr(BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119);
				BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119->setName("LiteralBoolean119");
				BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119->setValue(true);
			BehaviorPort_Signal_main_ObjectFlow118->setGuard(BehaviorPort_Signal_main_ObjectFlow118_LiteralBoolean119);
		BehaviorPort_Signal_main->addEdge(BehaviorPort_Signal_main_ObjectFlow118);
			// ObjectFlow ObjectFlow121 from result to target
			BehaviorPort_Signal_main_ObjectFlow121->setThisActivityEdgePtr(BehaviorPort_Signal_main_ObjectFlow121);
			BehaviorPort_Signal_main_ObjectFlow121->setName("ObjectFlow121");
			BehaviorPort_Signal_main_ObjectFlow121->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_main_ObjectFlow121->setSource(BehaviorPort_Signal_main_Create_Tester_result);
			BehaviorPort_Signal_main_ObjectFlow121->setTarget(BehaviorPort_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean122
				BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122->setThisElementPtr(BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122);
				BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122->setName("LiteralBoolean122");
				BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122->setValue(true);
			BehaviorPort_Signal_main_ObjectFlow121->setGuard(BehaviorPort_Signal_main_ObjectFlow121_LiteralBoolean122);
		BehaviorPort_Signal_main->addEdge(BehaviorPort_Signal_main_ObjectFlow121);
			// ObjectFlow ObjectFlow128 from Fork Tester to object
			BehaviorPort_Signal_main_ObjectFlow128->setThisActivityEdgePtr(BehaviorPort_Signal_main_ObjectFlow128);
			BehaviorPort_Signal_main_ObjectFlow128->setName("ObjectFlow128");
			BehaviorPort_Signal_main_ObjectFlow128->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_main_ObjectFlow128->setSource(BehaviorPort_Signal_main_Fork_Tester);
			BehaviorPort_Signal_main_ObjectFlow128->setTarget(BehaviorPort_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean129
				BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129->setThisElementPtr(BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129);
				BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129->setName("LiteralBoolean129");
				BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129->setValue(true);
			BehaviorPort_Signal_main_ObjectFlow128->setGuard(BehaviorPort_Signal_main_ObjectFlow128_LiteralBoolean129);
		BehaviorPort_Signal_main->addEdge(BehaviorPort_Signal_main_ObjectFlow128);
			// ControlFlow ControlFlow131 from Start Tester to Send Start
			BehaviorPort_Signal_main_ControlFlow131->setThisActivityEdgePtr(BehaviorPort_Signal_main_ControlFlow131);
			BehaviorPort_Signal_main_ControlFlow131->setName("ControlFlow131");
			BehaviorPort_Signal_main_ControlFlow131->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_main_ControlFlow131->setSource(BehaviorPort_Signal_main_Start_Tester);
			BehaviorPort_Signal_main_ControlFlow131->setTarget(BehaviorPort_Signal_main_Send_Start);
		BehaviorPort_Signal_main->addEdge(BehaviorPort_Signal_main_ControlFlow131);
			// ObjectFlow ObjectFlow139 from Fork Tester to target
			BehaviorPort_Signal_main_ObjectFlow139->setThisActivityEdgePtr(BehaviorPort_Signal_main_ObjectFlow139);
			BehaviorPort_Signal_main_ObjectFlow139->setName("ObjectFlow139");
			BehaviorPort_Signal_main_ObjectFlow139->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Signal_main_ObjectFlow139->setSource(BehaviorPort_Signal_main_Fork_Tester);
			BehaviorPort_Signal_main_ObjectFlow139->setTarget(BehaviorPort_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean141
				BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141->setThisElementPtr(BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141);
				BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141->setName("LiteralBoolean141");
				BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141->setVisibility(VisibilityKind::public_);
				BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141->setValue(true);
			BehaviorPort_Signal_main_ObjectFlow139->setGuard(BehaviorPort_Signal_main_ObjectFlow139_LiteralBoolean141);
		BehaviorPort_Signal_main->addEdge(BehaviorPort_Signal_main_ObjectFlow139);
	BehaviorPort_Signal->addPackagedElement(BehaviorPort_Signal_main);
}
