/*
 * LossOfMessages_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "LossOfMessages_SignalModel.h"

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
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
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

using namespace LossOfMessages_Signal;
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

LossOfMessages_SignalModel::LossOfMessages_SignalModel()
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

LossOfMessages_SignalModel::~LossOfMessages_SignalModel()
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

const std::shared_ptr<LossOfMessages_SignalModel>& LossOfMessages_SignalModel::Instance()
{
	static std::shared_ptr<LossOfMessages_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new LossOfMessages_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void LossOfMessages_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model LossOfMessages_Signal
	 */
	LossOfMessages_Signal.reset(new Package());
	this->addToElementRepository("LossOfMessages_Signal", LossOfMessages_Signal);
		LossOfMessages_Signal_I.reset(new Interface());
		this->addToElementRepository("I", LossOfMessages_Signal_I);
			LossOfMessages_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", LossOfMessages_Signal_I_S);
		LossOfMessages_Signal_A.reset(new Class_());
		this->addToElementRepository("A", LossOfMessages_Signal_A);
			LossOfMessages_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", LossOfMessages_Signal_A_q);
			LossOfMessages_Signal_A_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", LossOfMessages_Signal_A_IRealization);
			LossOfMessages_Signal_A_AClassifierBehavior.reset(new Activity());
			this->addToElementRepository("AClassifierBehavior", LossOfMessages_Signal_A_AClassifierBehavior);
				LossOfMessages_Signal_A_AClassifierBehavior_Initial.reset(new InitialNode());
				this->addToElementRepository("Initial", LossOfMessages_Signal_A_AClassifierBehavior_Initial);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralInteger1);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean2", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow3", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean4", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralInteger5);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow6", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralInteger7);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean8", LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural9", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural9);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value_LiteralInteger10);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralInteger11);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural12", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural12);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural13);
						LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result_LiteralInteger14);
				LossOfMessages_Signal_A_AClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", LossOfMessages_Signal_A_AClassifierBehavior_this);
					LossOfMessages_Signal_A_AClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Signal_A_AClassifierBehavior_this_result);
						LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralInteger15);
						LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural16", LossOfMessages_Signal_A_AClassifierBehavior_this_result_LiteralUnlimitedNatural16);
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v);
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result);
						LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralInteger17.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger17", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralInteger17);
						LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural18", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural18);
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object);
						LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralInteger19.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger19", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralInteger19);
						LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural20", LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural20);
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow21", LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21);
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22.reset(new Trigger());
					this->addToElementRepository("Trigger22", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result);
						LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural23", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural23);
						LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger24.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger24", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger24);
						LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger25.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger25", LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result_LiteralInteger25);
			LossOfMessages_Signal_A_p.reset(new Property());
			this->addToElementRepository("p", LossOfMessages_Signal_A_p);
				LossOfMessages_Signal_A_p_LiteralInteger26.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger26", LossOfMessages_Signal_A_p_LiteralInteger26);
			LossOfMessages_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", LossOfMessages_Signal_A_A_A);
				LossOfMessages_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", LossOfMessages_Signal_A_A_A_result);
			LossOfMessages_Signal_A_S.reset(new Reception());
			this->addToElementRepository("S", LossOfMessages_Signal_A_S);
		LossOfMessages_Signal_S.reset(new Signal());
		this->addToElementRepository("S", LossOfMessages_Signal_S);
			LossOfMessages_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", LossOfMessages_Signal_S_v);
		LossOfMessages_Signal_SignalEventS.reset(new SignalEvent());
		this->addToElementRepository("SignalEventS", LossOfMessages_Signal_SignalEventS);
		LossOfMessages_Signal_main.reset(new Activity());
		this->addToElementRepository("main", LossOfMessages_Signal_main);
			LossOfMessages_Signal_main_ObjectFlow27.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow27", LossOfMessages_Signal_main_ObjectFlow27);
				LossOfMessages_Signal_main_ObjectFlow27_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", LossOfMessages_Signal_main_ObjectFlow27_LiteralInteger28);
				LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean29", LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29);
			LossOfMessages_Signal_main_Fork_A.reset(new ForkNode());
			this->addToElementRepository("Fork A", LossOfMessages_Signal_main_Fork_A);
			LossOfMessages_Signal_main_ObjectFlow30.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow30", LossOfMessages_Signal_main_ObjectFlow30);
				LossOfMessages_Signal_main_ObjectFlow30_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", LossOfMessages_Signal_main_ObjectFlow30_LiteralInteger31);
				LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean32", LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32);
			LossOfMessages_Signal_main_ObjectFlow33.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow33", LossOfMessages_Signal_main_ObjectFlow33);
				LossOfMessages_Signal_main_ObjectFlow33_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", LossOfMessages_Signal_main_ObjectFlow33_LiteralInteger34);
				LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35);
			LossOfMessages_Signal_main_ObjectFlow36.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow36", LossOfMessages_Signal_main_ObjectFlow36);
				LossOfMessages_Signal_main_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger37", LossOfMessages_Signal_main_ObjectFlow36_LiteralInteger37);
				LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean38", LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38);
			LossOfMessages_Signal_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", LossOfMessages_Signal_main_testP);
				LossOfMessages_Signal_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", LossOfMessages_Signal_main_testP_p);
			LossOfMessages_Signal_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", LossOfMessages_Signal_main_Create_A);
				LossOfMessages_Signal_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Signal_main_Create_A_result);
					LossOfMessages_Signal_main_Create_A_result_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", LossOfMessages_Signal_main_Create_A_result_LiteralInteger39);
					LossOfMessages_Signal_main_Create_A_result_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", LossOfMessages_Signal_main_Create_A_result_LiteralUnlimitedNatural40);
			LossOfMessages_Signal_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", LossOfMessages_Signal_main_Call_testP);
				LossOfMessages_Signal_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", LossOfMessages_Signal_main_Call_testP_p);
					LossOfMessages_Signal_main_Call_testP_p_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural41", LossOfMessages_Signal_main_Call_testP_p_LiteralUnlimitedNatural41);
					LossOfMessages_Signal_main_Call_testP_p_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", LossOfMessages_Signal_main_Call_testP_p_LiteralInteger42);
					LossOfMessages_Signal_main_Call_testP_p_LiteralInteger43.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger43", LossOfMessages_Signal_main_Call_testP_p_LiteralInteger43);
			LossOfMessages_Signal_main_Read_a_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.p", LossOfMessages_Signal_main_Read_a_p);
				LossOfMessages_Signal_main_Read_a_p_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Signal_main_Read_a_p_result);
					LossOfMessages_Signal_main_Read_a_p_result_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", LossOfMessages_Signal_main_Read_a_p_result_LiteralUnlimitedNatural44);
					LossOfMessages_Signal_main_Read_a_p_result_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", LossOfMessages_Signal_main_Read_a_p_result_LiteralInteger45);
				LossOfMessages_Signal_main_Read_a_p_object.reset(new InputPin());
				this->addToElementRepository("object", LossOfMessages_Signal_main_Read_a_p_object);
					LossOfMessages_Signal_main_Read_a_p_object_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", LossOfMessages_Signal_main_Read_a_p_object_LiteralUnlimitedNatural46);
					LossOfMessages_Signal_main_Read_a_p_object_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", LossOfMessages_Signal_main_Read_a_p_object_LiteralInteger47);
			LossOfMessages_Signal_main_ControlFlow48.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow48", LossOfMessages_Signal_main_ControlFlow48);
			LossOfMessages_Signal_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value 4", LossOfMessages_Signal_main_Value_4);
				LossOfMessages_Signal_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Signal_main_Value_4_result);
					LossOfMessages_Signal_main_Value_4_result_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", LossOfMessages_Signal_main_Value_4_result_LiteralInteger49);
					LossOfMessages_Signal_main_Value_4_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", LossOfMessages_Signal_main_Value_4_result_LiteralUnlimitedNatural50);
				LossOfMessages_Signal_main_Value_4_LiteralInteger51.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger51", LossOfMessages_Signal_main_Value_4_LiteralInteger51);
			LossOfMessages_Signal_main_ObjectFlow52.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow52", LossOfMessages_Signal_main_ObjectFlow52);
				LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean53", LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53);
				LossOfMessages_Signal_main_ObjectFlow52_LiteralInteger54.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger54", LossOfMessages_Signal_main_ObjectFlow52_LiteralInteger54);
			LossOfMessages_Signal_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", LossOfMessages_Signal_main_A_);
				LossOfMessages_Signal_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", LossOfMessages_Signal_main_A__target);
					LossOfMessages_Signal_main_A__target_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural55", LossOfMessages_Signal_main_A__target_LiteralUnlimitedNatural55);
					LossOfMessages_Signal_main_A__target_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", LossOfMessages_Signal_main_A__target_LiteralInteger56);
				LossOfMessages_Signal_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Signal_main_A__result);
					LossOfMessages_Signal_main_A__result_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", LossOfMessages_Signal_main_A__result_LiteralInteger57);
					LossOfMessages_Signal_main_A__result_LiteralUnlimitedNatural58.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural58", LossOfMessages_Signal_main_A__result_LiteralUnlimitedNatural58);
					LossOfMessages_Signal_main_A__result_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", LossOfMessages_Signal_main_A__result_LiteralInteger59);
			LossOfMessages_Signal_main_Read_a_q.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.q", LossOfMessages_Signal_main_Read_a_q);
				LossOfMessages_Signal_main_Read_a_q_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Signal_main_Read_a_q_result);
					LossOfMessages_Signal_main_Read_a_q_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", LossOfMessages_Signal_main_Read_a_q_result_LiteralUnlimitedNatural60);
					LossOfMessages_Signal_main_Read_a_q_result_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", LossOfMessages_Signal_main_Read_a_q_result_LiteralInteger61);
				LossOfMessages_Signal_main_Read_a_q_object.reset(new InputPin());
				this->addToElementRepository("object", LossOfMessages_Signal_main_Read_a_q_object);
					LossOfMessages_Signal_main_Read_a_q_object_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", LossOfMessages_Signal_main_Read_a_q_object_LiteralInteger62);
					LossOfMessages_Signal_main_Read_a_q_object_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", LossOfMessages_Signal_main_Read_a_q_object_LiteralUnlimitedNatural63);
			LossOfMessages_Signal_main_ObjectFlow64.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow64", LossOfMessages_Signal_main_ObjectFlow64);
				LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean65", LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65);
				LossOfMessages_Signal_main_ObjectFlow64_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", LossOfMessages_Signal_main_ObjectFlow64_LiteralInteger66);
			LossOfMessages_Signal_main_ObjectFlow67.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow67", LossOfMessages_Signal_main_ObjectFlow67);
				LossOfMessages_Signal_main_ObjectFlow67_LiteralInteger68.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger68", LossOfMessages_Signal_main_ObjectFlow67_LiteralInteger68);
				LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean69", LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69);
			LossOfMessages_Signal_main_Send_S.reset(new SendSignalAction());
			this->addToElementRepository("Send S", LossOfMessages_Signal_main_Send_S);
				LossOfMessages_Signal_main_Send_S_v.reset(new InputPin());
				this->addToElementRepository("v", LossOfMessages_Signal_main_Send_S_v);
					LossOfMessages_Signal_main_Send_S_v_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", LossOfMessages_Signal_main_Send_S_v_LiteralInteger70);
					LossOfMessages_Signal_main_Send_S_v_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", LossOfMessages_Signal_main_Send_S_v_LiteralInteger71);
					LossOfMessages_Signal_main_Send_S_v_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", LossOfMessages_Signal_main_Send_S_v_LiteralUnlimitedNatural72);
				LossOfMessages_Signal_main_Send_S_target.reset(new InputPin());
				this->addToElementRepository("target", LossOfMessages_Signal_main_Send_S_target);
					LossOfMessages_Signal_main_Send_S_target_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", LossOfMessages_Signal_main_Send_S_target_LiteralUnlimitedNatural73);
					LossOfMessages_Signal_main_Send_S_target_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", LossOfMessages_Signal_main_Send_S_target_LiteralInteger74);
		LossOfMessages_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", LossOfMessages_Signal_IImpl);
			LossOfMessages_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", LossOfMessages_Signal_IImpl_S);
			LossOfMessages_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", LossOfMessages_Signal_IImpl_IRealization);

	// Initialize public members
	/*
	 * Model LossOfMessages_Signal
	 */
	LossOfMessages_Signal->setThisPackagePtr(LossOfMessages_Signal);
	LossOfMessages_Signal->setName("LossOfMessages_Signal");
	LossOfMessages_Signal->setVisibility(VisibilityKind::public_);
		// Interface I
		LossOfMessages_Signal_I->setThisInterfacePtr(LossOfMessages_Signal_I);
		LossOfMessages_Signal_I->setName("I");
		LossOfMessages_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			LossOfMessages_Signal_I_S->setThisBehavioralFeaturePtr(LossOfMessages_Signal_I_S);
			LossOfMessages_Signal_I_S->setName("S");
			LossOfMessages_Signal_I_S->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_I_S->setSignal(LossOfMessages_Signal_S);
		LossOfMessages_Signal_I->addOwnedReception(LossOfMessages_Signal_I_S);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_I);
		// Class A
		LossOfMessages_Signal_A->setThisClass_Ptr(LossOfMessages_Signal_A);
		LossOfMessages_Signal_A->setName("A");
		LossOfMessages_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Property p
			LossOfMessages_Signal_A_p->setThisElementPtr(LossOfMessages_Signal_A_p);
			LossOfMessages_Signal_A_p->setName("p");
			LossOfMessages_Signal_A_p->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_A_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_A_p->setAggregation(AggregationKind::composite);
				// LiteralInteger LiteralInteger26
				LossOfMessages_Signal_A_p_LiteralInteger26->setThisElementPtr(LossOfMessages_Signal_A_p_LiteralInteger26);
				LossOfMessages_Signal_A_p_LiteralInteger26->setName("LiteralInteger26");
				LossOfMessages_Signal_A_p_LiteralInteger26->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_A_p_LiteralInteger26->setValue(0);
			LossOfMessages_Signal_A_p->setDefaultValue(LossOfMessages_Signal_A_p_LiteralInteger26);
		LossOfMessages_Signal_A->addOwnedAttribute(LossOfMessages_Signal_A_p);
			// Port q
			LossOfMessages_Signal_A_q->setThisElementPtr(LossOfMessages_Signal_A_q);
			LossOfMessages_Signal_A_q->setName("q");
			LossOfMessages_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_A_q->setType(LossOfMessages_Signal_IImpl);
			LossOfMessages_Signal_A_q->setAggregation(AggregationKind::composite);
			LossOfMessages_Signal_A_q->isService = true;
			LossOfMessages_Signal_A_q->addProvided(LossOfMessages_Signal_I);
		LossOfMessages_Signal_A->addOwnedAttribute(LossOfMessages_Signal_A_q);
		LossOfMessages_Signal_A->setClassifierBehavior(LossOfMessages_Signal_A_AClassifierBehavior);
			// Activity AClassifierBehavior
			LossOfMessages_Signal_A_AClassifierBehavior->setThisActivityPtr(LossOfMessages_Signal_A_AClassifierBehavior);
			LossOfMessages_Signal_A_AClassifierBehavior->setName("AClassifierBehavior");
			LossOfMessages_Signal_A_AClassifierBehavior->setVisibility(VisibilityKind::public_);
				// InitialNode Initial
				LossOfMessages_Signal_A_AClassifierBehavior_Initial->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Initial);
				LossOfMessages_Signal_A_AClassifierBehavior_Initial->setName("Initial");
				LossOfMessages_Signal_A_AClassifierBehavior_Initial->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_A_AClassifierBehavior->addNode(LossOfMessages_Signal_A_AClassifierBehavior_Initial);
				// AddStructuralFeatureValueAction Set this.p
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setThisExecutableNodePtr(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setName("Set this.p");
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setStructuralFeature(LossOfMessages_Signal_A_p);
					// InputPin object
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object->setName("object");
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object->setType(LossOfMessages_Signal_A);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setObject(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object);
					// InputPin value
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value->setName("value");
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setValue(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value);
					// OutputPin result
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result->setName("result");
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result->setType(LossOfMessages_Signal_A);
				LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p->setResult(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_result);
			LossOfMessages_Signal_A_AClassifierBehavior->addNode(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p);
				// ReadSelfAction this
				LossOfMessages_Signal_A_AClassifierBehavior_this->setThisExecutableNodePtr(LossOfMessages_Signal_A_AClassifierBehavior_this);
				LossOfMessages_Signal_A_AClassifierBehavior_this->setName("this");
				LossOfMessages_Signal_A_AClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					LossOfMessages_Signal_A_AClassifierBehavior_this_result->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_this_result);
					LossOfMessages_Signal_A_AClassifierBehavior_this_result->setName("result");
					LossOfMessages_Signal_A_AClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_this_result->setType(LossOfMessages_Signal_A);
				LossOfMessages_Signal_A_AClassifierBehavior_this->setResult(LossOfMessages_Signal_A_AClassifierBehavior_this_result);
			LossOfMessages_Signal_A_AClassifierBehavior->addNode(LossOfMessages_Signal_A_AClassifierBehavior_this);
				// ReadStructuralFeatureAction Read s.v
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setThisExecutableNodePtr(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v);
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setName("Read s.v");
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setStructuralFeature(LossOfMessages_Signal_S_v);
					// InputPin object
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object);
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object->setName("object");
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setObject(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object);
					// OutputPin result
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result);
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result->setName("result");
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v->setResult(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result);
			LossOfMessages_Signal_A_AClassifierBehavior->addNode(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v);
				// AcceptEventAction Accept S
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S->setThisExecutableNodePtr(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S);
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S->setName("Accept S");
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin result
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result->setName("result");
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result->setType(LossOfMessages_Signal_S);
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S->addResult(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result);
					// Trigger Trigger22
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22->setName("Trigger22");
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22->setEvent(LossOfMessages_Signal_SignalEventS);
				LossOfMessages_Signal_A_AClassifierBehavior_Accept_S->addTrigger(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_Trigger22);
			LossOfMessages_Signal_A_AClassifierBehavior->addNode(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S);
				// ObjectFlow ObjectFlow0 from result to object
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setThisActivityEdgePtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setName("ObjectFlow0");
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setSource(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S_result);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setTarget(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean2
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2->setName("LiteralBoolean2");
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2->setValue(true);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0->setGuard(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0_LiteralBoolean2);
			LossOfMessages_Signal_A_AClassifierBehavior->addEdge(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow0);
				// ObjectFlow ObjectFlow3 from result to object
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setThisActivityEdgePtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setName("ObjectFlow3");
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setSource(LossOfMessages_Signal_A_AClassifierBehavior_this_result);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setTarget(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean4
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4->setValue(true);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3->setGuard(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3_LiteralBoolean4);
			LossOfMessages_Signal_A_AClassifierBehavior->addEdge(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow3);
				// ObjectFlow ObjectFlow6 from result to value
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setThisActivityEdgePtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setName("ObjectFlow6");
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setSource(LossOfMessages_Signal_A_AClassifierBehavior_Read_s_v_result);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setTarget(LossOfMessages_Signal_A_AClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean8
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8->setThisElementPtr(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8->setName("LiteralBoolean8");
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8->setVisibility(VisibilityKind::public_);
					LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8->setValue(true);
				LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6->setGuard(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6_LiteralBoolean8);
			LossOfMessages_Signal_A_AClassifierBehavior->addEdge(LossOfMessages_Signal_A_AClassifierBehavior_ObjectFlow6);
				// ControlFlow ControlFlow21 from Initial to Accept S
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21->setThisActivityEdgePtr(LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21);
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21->setName("ControlFlow21");
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21->setSource(LossOfMessages_Signal_A_AClassifierBehavior_Initial);
				LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21->setTarget(LossOfMessages_Signal_A_AClassifierBehavior_Accept_S);
			LossOfMessages_Signal_A_AClassifierBehavior->addEdge(LossOfMessages_Signal_A_AClassifierBehavior_ControlFlow21);
		LossOfMessages_Signal_A->addOwnedBehavior(LossOfMessages_Signal_A_AClassifierBehavior);
			LossOfMessages_Signal_A_IRealization->setName("IRealization");
			LossOfMessages_Signal_A_IRealization->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_A_IRealization->setContract(LossOfMessages_Signal_I);
			
		LossOfMessages_Signal_A->addInterfaceRealization(LossOfMessages_Signal_A_IRealization);
		
		LossOfMessages_Signal_A->setIsActive(true);
			// Operation A_A
			LossOfMessages_Signal_A_A_A->setThisOperationPtr(LossOfMessages_Signal_A_A_A);
			LossOfMessages_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			LossOfMessages_Signal_A_A_A->setName("A_A");
			LossOfMessages_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				LossOfMessages_Signal_A_A_A_result->setThisElementPtr(LossOfMessages_Signal_A_A_A_result);
				LossOfMessages_Signal_A_A_A_result->setName("result");
				LossOfMessages_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_A_A_A_result->setType(LossOfMessages_Signal_A);
				LossOfMessages_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			LossOfMessages_Signal_A_A_A->addOwnedParameter(LossOfMessages_Signal_A_A_A_result);
		LossOfMessages_Signal_A->addOwnedOperation(LossOfMessages_Signal_A_A_A);
			// Reception S
			LossOfMessages_Signal_A_S->setThisBehavioralFeaturePtr(LossOfMessages_Signal_A_S);
			LossOfMessages_Signal_A_S->setName("S");
			LossOfMessages_Signal_A_S->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_A_S->setSignal(LossOfMessages_Signal_S);
		LossOfMessages_Signal_A->addOwnedReception(LossOfMessages_Signal_A_S);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_A);
		// Signal S
		LossOfMessages_Signal_S->setThisSignalPtr(LossOfMessages_Signal_S);
		LossOfMessages_Signal_S->setName("S");
		LossOfMessages_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			LossOfMessages_Signal_S_v->setThisElementPtr(LossOfMessages_Signal_S_v);
			LossOfMessages_Signal_S_v->setName("v");
			LossOfMessages_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		LossOfMessages_Signal_S->addOwnedAttribute(LossOfMessages_Signal_S_v);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_S);
		// SignalEvent SignalEventS
		LossOfMessages_Signal_SignalEventS->setThisElementPtr(LossOfMessages_Signal_SignalEventS);
		LossOfMessages_Signal_SignalEventS->setName("SignalEventS");
		LossOfMessages_Signal_SignalEventS->setVisibility(VisibilityKind::public_);
		LossOfMessages_Signal_SignalEventS->setSignal(LossOfMessages_Signal_S);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_SignalEventS);
		// Activity main
		LossOfMessages_Signal_main->setThisActivityPtr(LossOfMessages_Signal_main);
		LossOfMessages_Signal_main->setName("main");
		LossOfMessages_Signal_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			LossOfMessages_Signal_main_testP->setThisClass_Ptr(LossOfMessages_Signal_main_testP);
			LossOfMessages_Signal_main_testP->setName("testP");
			LossOfMessages_Signal_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				LossOfMessages_Signal_main_testP_p->setThisElementPtr(LossOfMessages_Signal_main_testP_p);
				LossOfMessages_Signal_main_testP_p->setName("p");
				LossOfMessages_Signal_main_testP_p->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Signal_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_main_testP->addOwnedParameter(LossOfMessages_Signal_main_testP_p);
			LossOfMessages_Signal_main_testP->addLanguage("C++");
			LossOfMessages_Signal_main_testP->addLanguage("Include");
			LossOfMessages_Signal_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.p != 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Signal lost: \"<<std::endl;  	if(p != 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK <<std::endl; 	}");
			LossOfMessages_Signal_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		LossOfMessages_Signal_main->addOwnedBehavior(LossOfMessages_Signal_main_testP);
			// ValueSpecificationAction Value 4
			LossOfMessages_Signal_main_Value_4->setThisExecutableNodePtr(LossOfMessages_Signal_main_Value_4);
			LossOfMessages_Signal_main_Value_4->setName("Value 4");
			LossOfMessages_Signal_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger51
				LossOfMessages_Signal_main_Value_4_LiteralInteger51->setThisElementPtr(LossOfMessages_Signal_main_Value_4_LiteralInteger51);
				LossOfMessages_Signal_main_Value_4_LiteralInteger51->setName("LiteralInteger51");
				LossOfMessages_Signal_main_Value_4_LiteralInteger51->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Value_4_LiteralInteger51->setValue(4);
			LossOfMessages_Signal_main_Value_4->setValue(LossOfMessages_Signal_main_Value_4_LiteralInteger51);
				// OutputPin result
				LossOfMessages_Signal_main_Value_4_result->setThisElementPtr(LossOfMessages_Signal_main_Value_4_result);
				LossOfMessages_Signal_main_Value_4_result->setName("result");
				LossOfMessages_Signal_main_Value_4_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_main_Value_4->setResult(LossOfMessages_Signal_main_Value_4_result);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Value_4);
			// ForkNode Fork A
			LossOfMessages_Signal_main_Fork_A->setThisElementPtr(LossOfMessages_Signal_main_Fork_A);
			LossOfMessages_Signal_main_Fork_A->setName("Fork A");
			LossOfMessages_Signal_main_Fork_A->setVisibility(VisibilityKind::public_);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Fork_A);
			// CreateObjectAction Create A
			LossOfMessages_Signal_main_Create_A->setThisExecutableNodePtr(LossOfMessages_Signal_main_Create_A);
			LossOfMessages_Signal_main_Create_A->setName("Create A");
			LossOfMessages_Signal_main_Create_A->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_main_Create_A->setClassifier(LossOfMessages_Signal_A);
				// OutputPin result
				LossOfMessages_Signal_main_Create_A_result->setThisElementPtr(LossOfMessages_Signal_main_Create_A_result);
				LossOfMessages_Signal_main_Create_A_result->setName("result");
				LossOfMessages_Signal_main_Create_A_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Create_A_result->setType(LossOfMessages_Signal_A);
			LossOfMessages_Signal_main_Create_A->setResult(LossOfMessages_Signal_main_Create_A_result);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Create_A);
			// CallOperationAction A()
			LossOfMessages_Signal_main_A_->setThisExecutableNodePtr(LossOfMessages_Signal_main_A_);
			LossOfMessages_Signal_main_A_->setName("A()");
			LossOfMessages_Signal_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				LossOfMessages_Signal_main_A__result->setThisElementPtr(LossOfMessages_Signal_main_A__result);
				LossOfMessages_Signal_main_A__result->setName("result");
				LossOfMessages_Signal_main_A__result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_A__result->setType(LossOfMessages_Signal_A);
			LossOfMessages_Signal_main_A_->addResult(LossOfMessages_Signal_main_A__result);
			LossOfMessages_Signal_main_A_->setOperation(LossOfMessages_Signal_A_A_A);
				// InputPin target
				LossOfMessages_Signal_main_A__target->setThisElementPtr(LossOfMessages_Signal_main_A__target);
				LossOfMessages_Signal_main_A__target->setName("target");
				LossOfMessages_Signal_main_A__target->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_A__target->setType(LossOfMessages_Signal_A);
			LossOfMessages_Signal_main_A_->setTarget(LossOfMessages_Signal_main_A__target);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_A_);
			// ReadStructuralFeatureAction Read a.q
			LossOfMessages_Signal_main_Read_a_q->setThisExecutableNodePtr(LossOfMessages_Signal_main_Read_a_q);
			LossOfMessages_Signal_main_Read_a_q->setName("Read a.q");
			LossOfMessages_Signal_main_Read_a_q->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_main_Read_a_q->setStructuralFeature(LossOfMessages_Signal_A_q);
				// InputPin object
				LossOfMessages_Signal_main_Read_a_q_object->setThisElementPtr(LossOfMessages_Signal_main_Read_a_q_object);
				LossOfMessages_Signal_main_Read_a_q_object->setName("object");
				LossOfMessages_Signal_main_Read_a_q_object->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Read_a_q_object->setType(LossOfMessages_Signal_A);
			LossOfMessages_Signal_main_Read_a_q->setObject(LossOfMessages_Signal_main_Read_a_q_object);
				// OutputPin result
				LossOfMessages_Signal_main_Read_a_q_result->setThisElementPtr(LossOfMessages_Signal_main_Read_a_q_result);
				LossOfMessages_Signal_main_Read_a_q_result->setName("result");
				LossOfMessages_Signal_main_Read_a_q_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Read_a_q_result->setType(LossOfMessages_Signal_I);
			LossOfMessages_Signal_main_Read_a_q->setResult(LossOfMessages_Signal_main_Read_a_q_result);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Read_a_q);
			// CallBehaviorAction Call testP
			LossOfMessages_Signal_main_Call_testP->setThisExecutableNodePtr(LossOfMessages_Signal_main_Call_testP);
			LossOfMessages_Signal_main_Call_testP->setName("Call testP");
			LossOfMessages_Signal_main_Call_testP->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_main_Call_testP->setBehavior(LossOfMessages_Signal_main_testP);
				// InputPin p
				LossOfMessages_Signal_main_Call_testP_p->setThisElementPtr(LossOfMessages_Signal_main_Call_testP_p);
				LossOfMessages_Signal_main_Call_testP_p->setName("p");
				LossOfMessages_Signal_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_main_Call_testP->addArgument(LossOfMessages_Signal_main_Call_testP_p);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Call_testP);
			// ReadStructuralFeatureAction Read a.p
			LossOfMessages_Signal_main_Read_a_p->setThisExecutableNodePtr(LossOfMessages_Signal_main_Read_a_p);
			LossOfMessages_Signal_main_Read_a_p->setName("Read a.p");
			LossOfMessages_Signal_main_Read_a_p->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_main_Read_a_p->setStructuralFeature(LossOfMessages_Signal_A_p);
				// InputPin object
				LossOfMessages_Signal_main_Read_a_p_object->setThisElementPtr(LossOfMessages_Signal_main_Read_a_p_object);
				LossOfMessages_Signal_main_Read_a_p_object->setName("object");
				LossOfMessages_Signal_main_Read_a_p_object->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Read_a_p_object->setType(LossOfMessages_Signal_A);
			LossOfMessages_Signal_main_Read_a_p->setObject(LossOfMessages_Signal_main_Read_a_p_object);
				// OutputPin result
				LossOfMessages_Signal_main_Read_a_p_result->setThisElementPtr(LossOfMessages_Signal_main_Read_a_p_result);
				LossOfMessages_Signal_main_Read_a_p_result->setName("result");
				LossOfMessages_Signal_main_Read_a_p_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Read_a_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_main_Read_a_p->setResult(LossOfMessages_Signal_main_Read_a_p_result);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Read_a_p);
			// SendSignalAction Send S
			LossOfMessages_Signal_main_Send_S->setThisExecutableNodePtr(LossOfMessages_Signal_main_Send_S);
			LossOfMessages_Signal_main_Send_S->setName("Send S");
			LossOfMessages_Signal_main_Send_S->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_main_Send_S->setSignal(LossOfMessages_Signal_S);
				// InputPin target
				LossOfMessages_Signal_main_Send_S_target->setThisElementPtr(LossOfMessages_Signal_main_Send_S_target);
				LossOfMessages_Signal_main_Send_S_target->setName("target");
				LossOfMessages_Signal_main_Send_S_target->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Send_S_target->setType(LossOfMessages_Signal_IImpl);
			LossOfMessages_Signal_main_Send_S->setTarget(LossOfMessages_Signal_main_Send_S_target);
				// InputPin v
				LossOfMessages_Signal_main_Send_S_v->setThisElementPtr(LossOfMessages_Signal_main_Send_S_v);
				LossOfMessages_Signal_main_Send_S_v->setName("v");
				LossOfMessages_Signal_main_Send_S_v->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Signal_main_Send_S->addArgument(LossOfMessages_Signal_main_Send_S_v);
		LossOfMessages_Signal_main->addNode(LossOfMessages_Signal_main_Send_S);
			// ControlFlow ControlFlow48 from Send S to Read a.p
			LossOfMessages_Signal_main_ControlFlow48->setThisActivityEdgePtr(LossOfMessages_Signal_main_ControlFlow48);
			LossOfMessages_Signal_main_ControlFlow48->setName("ControlFlow48");
			LossOfMessages_Signal_main_ControlFlow48->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ControlFlow48->setSource(LossOfMessages_Signal_main_Send_S);
			LossOfMessages_Signal_main_ControlFlow48->setTarget(LossOfMessages_Signal_main_Read_a_p);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ControlFlow48);
			// ObjectFlow ObjectFlow27 from result to target
			LossOfMessages_Signal_main_ObjectFlow27->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow27);
			LossOfMessages_Signal_main_ObjectFlow27->setName("ObjectFlow27");
			LossOfMessages_Signal_main_ObjectFlow27->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow27->setSource(LossOfMessages_Signal_main_Create_A_result);
			LossOfMessages_Signal_main_ObjectFlow27->setTarget(LossOfMessages_Signal_main_A__target);
				// LiteralBoolean LiteralBoolean29
				LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29);
				LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29->setName("LiteralBoolean29");
				LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow27->setGuard(LossOfMessages_Signal_main_ObjectFlow27_LiteralBoolean29);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow27);
			// ObjectFlow ObjectFlow30 from Fork A to object
			LossOfMessages_Signal_main_ObjectFlow30->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow30);
			LossOfMessages_Signal_main_ObjectFlow30->setName("ObjectFlow30");
			LossOfMessages_Signal_main_ObjectFlow30->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow30->setSource(LossOfMessages_Signal_main_Fork_A);
			LossOfMessages_Signal_main_ObjectFlow30->setTarget(LossOfMessages_Signal_main_Read_a_q_object);
				// LiteralBoolean LiteralBoolean32
				LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32);
				LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32->setName("LiteralBoolean32");
				LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow30->setGuard(LossOfMessages_Signal_main_ObjectFlow30_LiteralBoolean32);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow30);
			// ObjectFlow ObjectFlow33 from result to target
			LossOfMessages_Signal_main_ObjectFlow33->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow33);
			LossOfMessages_Signal_main_ObjectFlow33->setName("ObjectFlow33");
			LossOfMessages_Signal_main_ObjectFlow33->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow33->setSource(LossOfMessages_Signal_main_Read_a_q_result);
			LossOfMessages_Signal_main_ObjectFlow33->setTarget(LossOfMessages_Signal_main_Send_S_target);
				// LiteralBoolean LiteralBoolean35
				LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35);
				LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35->setName("LiteralBoolean35");
				LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow33->setGuard(LossOfMessages_Signal_main_ObjectFlow33_LiteralBoolean35);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow33);
			// ObjectFlow ObjectFlow36 from result to v
			LossOfMessages_Signal_main_ObjectFlow36->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow36);
			LossOfMessages_Signal_main_ObjectFlow36->setName("ObjectFlow36");
			LossOfMessages_Signal_main_ObjectFlow36->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow36->setSource(LossOfMessages_Signal_main_Value_4_result);
			LossOfMessages_Signal_main_ObjectFlow36->setTarget(LossOfMessages_Signal_main_Send_S_v);
				// LiteralBoolean LiteralBoolean38
				LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38);
				LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
				LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow36->setGuard(LossOfMessages_Signal_main_ObjectFlow36_LiteralBoolean38);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow36);
			// ObjectFlow ObjectFlow52 from result to Fork A
			LossOfMessages_Signal_main_ObjectFlow52->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow52);
			LossOfMessages_Signal_main_ObjectFlow52->setName("ObjectFlow52");
			LossOfMessages_Signal_main_ObjectFlow52->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow52->setSource(LossOfMessages_Signal_main_A__result);
			LossOfMessages_Signal_main_ObjectFlow52->setTarget(LossOfMessages_Signal_main_Fork_A);
				// LiteralBoolean LiteralBoolean53
				LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53);
				LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53->setName("LiteralBoolean53");
				LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow52->setGuard(LossOfMessages_Signal_main_ObjectFlow52_LiteralBoolean53);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow52);
			// ObjectFlow ObjectFlow64 from Fork A to object
			LossOfMessages_Signal_main_ObjectFlow64->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow64);
			LossOfMessages_Signal_main_ObjectFlow64->setName("ObjectFlow64");
			LossOfMessages_Signal_main_ObjectFlow64->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow64->setSource(LossOfMessages_Signal_main_Fork_A);
			LossOfMessages_Signal_main_ObjectFlow64->setTarget(LossOfMessages_Signal_main_Read_a_p_object);
				// LiteralBoolean LiteralBoolean65
				LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65);
				LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65->setName("LiteralBoolean65");
				LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow64->setGuard(LossOfMessages_Signal_main_ObjectFlow64_LiteralBoolean65);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow64);
			// ObjectFlow ObjectFlow67 from result to p
			LossOfMessages_Signal_main_ObjectFlow67->setThisActivityEdgePtr(LossOfMessages_Signal_main_ObjectFlow67);
			LossOfMessages_Signal_main_ObjectFlow67->setName("ObjectFlow67");
			LossOfMessages_Signal_main_ObjectFlow67->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Signal_main_ObjectFlow67->setSource(LossOfMessages_Signal_main_Read_a_p_result);
			LossOfMessages_Signal_main_ObjectFlow67->setTarget(LossOfMessages_Signal_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean69
				LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69->setThisElementPtr(LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69);
				LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69->setName("LiteralBoolean69");
				LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69->setVisibility(VisibilityKind::public_);
				LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69->setValue(true);
			LossOfMessages_Signal_main_ObjectFlow67->setGuard(LossOfMessages_Signal_main_ObjectFlow67_LiteralBoolean69);
		LossOfMessages_Signal_main->addEdge(LossOfMessages_Signal_main_ObjectFlow67);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_main);
		// Class IImpl
		LossOfMessages_Signal_IImpl->setThisClass_Ptr(LossOfMessages_Signal_IImpl);
		LossOfMessages_Signal_IImpl->setName("IImpl");
		LossOfMessages_Signal_IImpl->setVisibility(VisibilityKind::public_);
		LossOfMessages_Signal_IImpl_IRealization->setName("IRealization");
			LossOfMessages_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_IImpl_IRealization->setContract(LossOfMessages_Signal_I);
			
		LossOfMessages_Signal_IImpl->addInterfaceRealization(LossOfMessages_Signal_IImpl_IRealization);
		
			// Reception S
			LossOfMessages_Signal_IImpl_S->setThisBehavioralFeaturePtr(LossOfMessages_Signal_IImpl_S);
			LossOfMessages_Signal_IImpl_S->setName("S");
			LossOfMessages_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			LossOfMessages_Signal_IImpl_S->setSignal(LossOfMessages_Signal_S);
		LossOfMessages_Signal_IImpl->addOwnedReception(LossOfMessages_Signal_IImpl_S);
	LossOfMessages_Signal->addPackagedElement(LossOfMessages_Signal_IImpl);
}
