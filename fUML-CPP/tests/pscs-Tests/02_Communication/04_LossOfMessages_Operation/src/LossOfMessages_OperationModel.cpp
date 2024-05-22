/*
 * LossOfMessages_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "LossOfMessages_OperationModel.h"

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
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace LossOfMessages_Operation;
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

LossOfMessages_OperationModel::LossOfMessages_OperationModel()
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

LossOfMessages_OperationModel::~LossOfMessages_OperationModel()
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

const std::shared_ptr<LossOfMessages_OperationModel>& LossOfMessages_OperationModel::Instance()
{
	static std::shared_ptr<LossOfMessages_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new LossOfMessages_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void LossOfMessages_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model LossOfMessages_Operation
	 */
	LossOfMessages_Operation.reset(new Package());
	this->addToElementRepository("LossOfMessages_Operation", LossOfMessages_Operation);
		LossOfMessages_Operation_main.reset(new Activity());
		this->addToElementRepository("main", LossOfMessages_Operation_main);
			LossOfMessages_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", LossOfMessages_Operation_main_testP);
				LossOfMessages_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", LossOfMessages_Operation_main_testP_p);
			LossOfMessages_Operation_main_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", LossOfMessages_Operation_main_ObjectFlow0);
				LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean1", LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1);
				LossOfMessages_Operation_main_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", LossOfMessages_Operation_main_ObjectFlow0_LiteralInteger2);
			LossOfMessages_Operation_main_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", LossOfMessages_Operation_main_ObjectFlow3);
				LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean4", LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4);
				LossOfMessages_Operation_main_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", LossOfMessages_Operation_main_ObjectFlow3_LiteralInteger5);
			LossOfMessages_Operation_main_ObjectFlow6.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow6", LossOfMessages_Operation_main_ObjectFlow6);
				LossOfMessages_Operation_main_ObjectFlow6_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", LossOfMessages_Operation_main_ObjectFlow6_LiteralInteger7);
				LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean8", LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8);
			LossOfMessages_Operation_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", LossOfMessages_Operation_main_Create_A);
				LossOfMessages_Operation_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Operation_main_Create_A_result);
					LossOfMessages_Operation_main_Create_A_result_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", LossOfMessages_Operation_main_Create_A_result_LiteralInteger9);
					LossOfMessages_Operation_main_Create_A_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", LossOfMessages_Operation_main_Create_A_result_LiteralUnlimitedNatural10);
			LossOfMessages_Operation_main_Call_setP.reset(new CallOperationAction());
			this->addToElementRepository("Call setP", LossOfMessages_Operation_main_Call_setP);
				LossOfMessages_Operation_main_Call_setP_v.reset(new InputPin());
				this->addToElementRepository("v", LossOfMessages_Operation_main_Call_setP_v);
					LossOfMessages_Operation_main_Call_setP_v_LiteralInteger11.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger11", LossOfMessages_Operation_main_Call_setP_v_LiteralInteger11);
					LossOfMessages_Operation_main_Call_setP_v_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", LossOfMessages_Operation_main_Call_setP_v_LiteralInteger12);
					LossOfMessages_Operation_main_Call_setP_v_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural13", LossOfMessages_Operation_main_Call_setP_v_LiteralUnlimitedNatural13);
				LossOfMessages_Operation_main_Call_setP_target.reset(new InputPin());
				this->addToElementRepository("target", LossOfMessages_Operation_main_Call_setP_target);
					LossOfMessages_Operation_main_Call_setP_target_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", LossOfMessages_Operation_main_Call_setP_target_LiteralUnlimitedNatural14);
					LossOfMessages_Operation_main_Call_setP_target_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", LossOfMessages_Operation_main_Call_setP_target_LiteralInteger15);
			LossOfMessages_Operation_main_ControlFlow16.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow16", LossOfMessages_Operation_main_ControlFlow16);
			LossOfMessages_Operation_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", LossOfMessages_Operation_main_A_);
				LossOfMessages_Operation_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", LossOfMessages_Operation_main_A__target);
					LossOfMessages_Operation_main_A__target_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", LossOfMessages_Operation_main_A__target_LiteralUnlimitedNatural17);
					LossOfMessages_Operation_main_A__target_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", LossOfMessages_Operation_main_A__target_LiteralInteger18);
				LossOfMessages_Operation_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Operation_main_A__result);
					LossOfMessages_Operation_main_A__result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", LossOfMessages_Operation_main_A__result_LiteralInteger19);
					LossOfMessages_Operation_main_A__result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", LossOfMessages_Operation_main_A__result_LiteralUnlimitedNatural20);
					LossOfMessages_Operation_main_A__result_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", LossOfMessages_Operation_main_A__result_LiteralInteger21);
			LossOfMessages_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value 4", LossOfMessages_Operation_main_Value_4);
				LossOfMessages_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Operation_main_Value_4_result);
					LossOfMessages_Operation_main_Value_4_result_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", LossOfMessages_Operation_main_Value_4_result_LiteralUnlimitedNatural22);
					LossOfMessages_Operation_main_Value_4_result_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", LossOfMessages_Operation_main_Value_4_result_LiteralInteger23);
				LossOfMessages_Operation_main_Value_4_LiteralInteger24.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger24", LossOfMessages_Operation_main_Value_4_LiteralInteger24);
			LossOfMessages_Operation_main_Read_a_q.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.q", LossOfMessages_Operation_main_Read_a_q);
				LossOfMessages_Operation_main_Read_a_q_object.reset(new InputPin());
				this->addToElementRepository("object", LossOfMessages_Operation_main_Read_a_q_object);
					LossOfMessages_Operation_main_Read_a_q_object_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", LossOfMessages_Operation_main_Read_a_q_object_LiteralUnlimitedNatural25);
					LossOfMessages_Operation_main_Read_a_q_object_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", LossOfMessages_Operation_main_Read_a_q_object_LiteralInteger26);
				LossOfMessages_Operation_main_Read_a_q_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Operation_main_Read_a_q_result);
					LossOfMessages_Operation_main_Read_a_q_result_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", LossOfMessages_Operation_main_Read_a_q_result_LiteralInteger27);
					LossOfMessages_Operation_main_Read_a_q_result_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural28", LossOfMessages_Operation_main_Read_a_q_result_LiteralUnlimitedNatural28);
			LossOfMessages_Operation_main_ObjectFlow29.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow29", LossOfMessages_Operation_main_ObjectFlow29);
				LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean30", LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30);
				LossOfMessages_Operation_main_ObjectFlow29_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", LossOfMessages_Operation_main_ObjectFlow29_LiteralInteger31);
			LossOfMessages_Operation_main_ObjectFlow32.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow32", LossOfMessages_Operation_main_ObjectFlow32);
				LossOfMessages_Operation_main_ObjectFlow32_LiteralInteger33.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger33", LossOfMessages_Operation_main_ObjectFlow32_LiteralInteger33);
				LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean34", LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34);
			LossOfMessages_Operation_main_ObjectFlow35.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow35", LossOfMessages_Operation_main_ObjectFlow35);
				LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean36", LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36);
				LossOfMessages_Operation_main_ObjectFlow35_LiteralInteger37.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger37", LossOfMessages_Operation_main_ObjectFlow35_LiteralInteger37);
			LossOfMessages_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", LossOfMessages_Operation_main_Call_testP);
				LossOfMessages_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", LossOfMessages_Operation_main_Call_testP_p);
					LossOfMessages_Operation_main_Call_testP_p_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", LossOfMessages_Operation_main_Call_testP_p_LiteralInteger38);
					LossOfMessages_Operation_main_Call_testP_p_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", LossOfMessages_Operation_main_Call_testP_p_LiteralInteger39);
					LossOfMessages_Operation_main_Call_testP_p_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", LossOfMessages_Operation_main_Call_testP_p_LiteralUnlimitedNatural40);
			LossOfMessages_Operation_main_Read_a_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.p", LossOfMessages_Operation_main_Read_a_p);
				LossOfMessages_Operation_main_Read_a_p_object.reset(new InputPin());
				this->addToElementRepository("object", LossOfMessages_Operation_main_Read_a_p_object);
					LossOfMessages_Operation_main_Read_a_p_object_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", LossOfMessages_Operation_main_Read_a_p_object_LiteralInteger41);
					LossOfMessages_Operation_main_Read_a_p_object_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural42", LossOfMessages_Operation_main_Read_a_p_object_LiteralUnlimitedNatural42);
				LossOfMessages_Operation_main_Read_a_p_result.reset(new OutputPin());
				this->addToElementRepository("result", LossOfMessages_Operation_main_Read_a_p_result);
					LossOfMessages_Operation_main_Read_a_p_result_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", LossOfMessages_Operation_main_Read_a_p_result_LiteralUnlimitedNatural43);
					LossOfMessages_Operation_main_Read_a_p_result_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", LossOfMessages_Operation_main_Read_a_p_result_LiteralInteger44);
			LossOfMessages_Operation_main_Fork_A.reset(new ForkNode());
			this->addToElementRepository("Fork A", LossOfMessages_Operation_main_Fork_A);
			LossOfMessages_Operation_main_ObjectFlow45.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow45", LossOfMessages_Operation_main_ObjectFlow45);
				LossOfMessages_Operation_main_ObjectFlow45_LiteralInteger46.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger46", LossOfMessages_Operation_main_ObjectFlow45_LiteralInteger46);
				LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean47", LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47);
		LossOfMessages_Operation_I.reset(new Interface());
		this->addToElementRepository("I", LossOfMessages_Operation_I);
			LossOfMessages_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", LossOfMessages_Operation_I_setP_Integer);
				LossOfMessages_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", LossOfMessages_Operation_I_setP_Integer_v);
		LossOfMessages_Operation_A.reset(new Class_());
		this->addToElementRepository("A", LossOfMessages_Operation_A);
			LossOfMessages_Operation_A_p.reset(new Property());
			this->addToElementRepository("p", LossOfMessages_Operation_A_p);
				LossOfMessages_Operation_A_p_LiteralInteger48.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger48", LossOfMessages_Operation_A_p_LiteralInteger48);
			LossOfMessages_Operation_A_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", LossOfMessages_Operation_A_setPActivity);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow49", LossOfMessages_Operation_A_setPActivity_ObjectFlow49);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean50", LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralInteger51);
				LossOfMessages_Operation_A_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", LossOfMessages_Operation_A_setPActivity_v);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow52", LossOfMessages_Operation_A_setPActivity_ObjectFlow52);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean53", LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralInteger54);
				LossOfMessages_Operation_A_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", LossOfMessages_Operation_A_setPActivity_vParameterNode);
					LossOfMessages_Operation_A_setPActivity_vParameterNode_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", LossOfMessages_Operation_A_setPActivity_vParameterNode_LiteralInteger55);
				LossOfMessages_Operation_A_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", LossOfMessages_Operation_A_setPActivity_this);
					LossOfMessages_Operation_A_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Operation_A_setPActivity_this_result);
						LossOfMessages_Operation_A_setPActivity_this_result_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", LossOfMessages_Operation_A_setPActivity_this_result_LiteralInteger56);
						LossOfMessages_Operation_A_setPActivity_this_result_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", LossOfMessages_Operation_A_setPActivity_this_result_LiteralUnlimitedNatural57);
				LossOfMessages_Operation_A_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", LossOfMessages_Operation_A_setPActivity_Set_this_p);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", LossOfMessages_Operation_A_setPActivity_Set_this_p_object);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralUnlimitedNatural58.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural58", LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralUnlimitedNatural58);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", LossOfMessages_Operation_A_setPActivity_Set_this_p_object_LiteralInteger59);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", LossOfMessages_Operation_A_setPActivity_Set_this_p_result);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralInteger60.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger60", LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralInteger60);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", LossOfMessages_Operation_A_setPActivity_Set_this_p_result_LiteralUnlimitedNatural61);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", LossOfMessages_Operation_A_setPActivity_Set_this_p_value);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural62", LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralUnlimitedNatural62);
						LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralInteger63.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger63", LossOfMessages_Operation_A_setPActivity_Set_this_p_value_LiteralInteger63);
			LossOfMessages_Operation_A_q.reset(new Port());
			this->addToElementRepository("q", LossOfMessages_Operation_A_q);
			LossOfMessages_Operation_A_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", LossOfMessages_Operation_A_setP_Integer);
				LossOfMessages_Operation_A_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", LossOfMessages_Operation_A_setP_Integer_v);
			LossOfMessages_Operation_A_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", LossOfMessages_Operation_A_IRealization);
			LossOfMessages_Operation_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", LossOfMessages_Operation_A_A_A);
				LossOfMessages_Operation_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", LossOfMessages_Operation_A_A_A_result);
		LossOfMessages_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", LossOfMessages_Operation_IImpl);
			LossOfMessages_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", LossOfMessages_Operation_IImpl_setP_Integer);
				LossOfMessages_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", LossOfMessages_Operation_IImpl_setP_Integer_v);
			LossOfMessages_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", LossOfMessages_Operation_IImpl_IRealization);

	// Initialize public members
	/*
	 * Model LossOfMessages_Operation
	 */
	LossOfMessages_Operation->setThisPackagePtr(LossOfMessages_Operation);
	LossOfMessages_Operation->setName("LossOfMessages_Operation");
	LossOfMessages_Operation->setVisibility(VisibilityKind::public_);
		// Activity main
		LossOfMessages_Operation_main->setThisActivityPtr(LossOfMessages_Operation_main);
		LossOfMessages_Operation_main->setName("main");
		LossOfMessages_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			LossOfMessages_Operation_main_testP->setThisClass_Ptr(LossOfMessages_Operation_main_testP);
			LossOfMessages_Operation_main_testP->setName("testP");
			LossOfMessages_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				LossOfMessages_Operation_main_testP_p->setThisElementPtr(LossOfMessages_Operation_main_testP_p);
				LossOfMessages_Operation_main_testP_p->setName("p");
				LossOfMessages_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_main_testP->addOwnedParameter(LossOfMessages_Operation_main_testP_p);
			LossOfMessages_Operation_main_testP->addLanguage("C++");
			LossOfMessages_Operation_main_testP->addLanguage("Include");
			LossOfMessages_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.p != 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p));  	std::cout << \"a.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Operation call lost: \"<<std::endl;  	if(p != 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			LossOfMessages_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		LossOfMessages_Operation_main->addOwnedBehavior(LossOfMessages_Operation_main_testP);
			// CallBehaviorAction Call testP
			LossOfMessages_Operation_main_Call_testP->setThisExecutableNodePtr(LossOfMessages_Operation_main_Call_testP);
			LossOfMessages_Operation_main_Call_testP->setName("Call testP");
			LossOfMessages_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Call_testP->setBehavior(LossOfMessages_Operation_main_testP);
				// InputPin p
				LossOfMessages_Operation_main_Call_testP_p->setThisElementPtr(LossOfMessages_Operation_main_Call_testP_p);
				LossOfMessages_Operation_main_Call_testP_p->setName("p");
				LossOfMessages_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_main_Call_testP->addArgument(LossOfMessages_Operation_main_Call_testP_p);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Call_testP);
			// CreateObjectAction Create A
			LossOfMessages_Operation_main_Create_A->setThisExecutableNodePtr(LossOfMessages_Operation_main_Create_A);
			LossOfMessages_Operation_main_Create_A->setName("Create A");
			LossOfMessages_Operation_main_Create_A->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Create_A->setClassifier(LossOfMessages_Operation_A);
				// OutputPin result
				LossOfMessages_Operation_main_Create_A_result->setThisElementPtr(LossOfMessages_Operation_main_Create_A_result);
				LossOfMessages_Operation_main_Create_A_result->setName("result");
				LossOfMessages_Operation_main_Create_A_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Create_A_result->setType(LossOfMessages_Operation_A);
			LossOfMessages_Operation_main_Create_A->setResult(LossOfMessages_Operation_main_Create_A_result);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Create_A);
			// CallOperationAction Call setP
			LossOfMessages_Operation_main_Call_setP->setThisExecutableNodePtr(LossOfMessages_Operation_main_Call_setP);
			LossOfMessages_Operation_main_Call_setP->setName("Call setP");
			LossOfMessages_Operation_main_Call_setP->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Call_setP->setOperation(LossOfMessages_Operation_IImpl_setP_Integer);
				// InputPin target
				LossOfMessages_Operation_main_Call_setP_target->setThisElementPtr(LossOfMessages_Operation_main_Call_setP_target);
				LossOfMessages_Operation_main_Call_setP_target->setName("target");
				LossOfMessages_Operation_main_Call_setP_target->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Call_setP->setTarget(LossOfMessages_Operation_main_Call_setP_target);
				// InputPin v
				LossOfMessages_Operation_main_Call_setP_v->setThisElementPtr(LossOfMessages_Operation_main_Call_setP_v);
				LossOfMessages_Operation_main_Call_setP_v->setName("v");
				LossOfMessages_Operation_main_Call_setP_v->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Call_setP_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_main_Call_setP->addArgument(LossOfMessages_Operation_main_Call_setP_v);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Call_setP);
			// ReadStructuralFeatureAction Read a.p
			LossOfMessages_Operation_main_Read_a_p->setThisExecutableNodePtr(LossOfMessages_Operation_main_Read_a_p);
			LossOfMessages_Operation_main_Read_a_p->setName("Read a.p");
			LossOfMessages_Operation_main_Read_a_p->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Read_a_p->setStructuralFeature(LossOfMessages_Operation_A_p);
				// InputPin object
				LossOfMessages_Operation_main_Read_a_p_object->setThisElementPtr(LossOfMessages_Operation_main_Read_a_p_object);
				LossOfMessages_Operation_main_Read_a_p_object->setName("object");
				LossOfMessages_Operation_main_Read_a_p_object->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Read_a_p_object->setType(LossOfMessages_Operation_A);
			LossOfMessages_Operation_main_Read_a_p->setObject(LossOfMessages_Operation_main_Read_a_p_object);
				// OutputPin result
				LossOfMessages_Operation_main_Read_a_p_result->setThisElementPtr(LossOfMessages_Operation_main_Read_a_p_result);
				LossOfMessages_Operation_main_Read_a_p_result->setName("result");
				LossOfMessages_Operation_main_Read_a_p_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Read_a_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_main_Read_a_p->setResult(LossOfMessages_Operation_main_Read_a_p_result);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Read_a_p);
			// ForkNode Fork A
			LossOfMessages_Operation_main_Fork_A->setThisElementPtr(LossOfMessages_Operation_main_Fork_A);
			LossOfMessages_Operation_main_Fork_A->setName("Fork A");
			LossOfMessages_Operation_main_Fork_A->setVisibility(VisibilityKind::public_);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Fork_A);
			// CallOperationAction A()
			LossOfMessages_Operation_main_A_->setThisExecutableNodePtr(LossOfMessages_Operation_main_A_);
			LossOfMessages_Operation_main_A_->setName("A()");
			LossOfMessages_Operation_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				LossOfMessages_Operation_main_A__result->setThisElementPtr(LossOfMessages_Operation_main_A__result);
				LossOfMessages_Operation_main_A__result->setName("result");
				LossOfMessages_Operation_main_A__result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_A__result->setType(LossOfMessages_Operation_A);
			LossOfMessages_Operation_main_A_->addResult(LossOfMessages_Operation_main_A__result);
			LossOfMessages_Operation_main_A_->setOperation(LossOfMessages_Operation_A_A_A);
				// InputPin target
				LossOfMessages_Operation_main_A__target->setThisElementPtr(LossOfMessages_Operation_main_A__target);
				LossOfMessages_Operation_main_A__target->setName("target");
				LossOfMessages_Operation_main_A__target->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_A__target->setType(LossOfMessages_Operation_A);
			LossOfMessages_Operation_main_A_->setTarget(LossOfMessages_Operation_main_A__target);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_A_);
			// ValueSpecificationAction Value 4
			LossOfMessages_Operation_main_Value_4->setThisExecutableNodePtr(LossOfMessages_Operation_main_Value_4);
			LossOfMessages_Operation_main_Value_4->setName("Value 4");
			LossOfMessages_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger24
				LossOfMessages_Operation_main_Value_4_LiteralInteger24->setThisElementPtr(LossOfMessages_Operation_main_Value_4_LiteralInteger24);
				LossOfMessages_Operation_main_Value_4_LiteralInteger24->setName("LiteralInteger24");
				LossOfMessages_Operation_main_Value_4_LiteralInteger24->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Value_4_LiteralInteger24->setValue(4);
			LossOfMessages_Operation_main_Value_4->setValue(LossOfMessages_Operation_main_Value_4_LiteralInteger24);
				// OutputPin result
				LossOfMessages_Operation_main_Value_4_result->setThisElementPtr(LossOfMessages_Operation_main_Value_4_result);
				LossOfMessages_Operation_main_Value_4_result->setName("result");
				LossOfMessages_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_main_Value_4->setResult(LossOfMessages_Operation_main_Value_4_result);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Value_4);
			// ReadStructuralFeatureAction Read a.q
			LossOfMessages_Operation_main_Read_a_q->setThisExecutableNodePtr(LossOfMessages_Operation_main_Read_a_q);
			LossOfMessages_Operation_main_Read_a_q->setName("Read a.q");
			LossOfMessages_Operation_main_Read_a_q->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_main_Read_a_q->setStructuralFeature(LossOfMessages_Operation_A_q);
				// InputPin object
				LossOfMessages_Operation_main_Read_a_q_object->setThisElementPtr(LossOfMessages_Operation_main_Read_a_q_object);
				LossOfMessages_Operation_main_Read_a_q_object->setName("object");
				LossOfMessages_Operation_main_Read_a_q_object->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Read_a_q_object->setType(LossOfMessages_Operation_A);
			LossOfMessages_Operation_main_Read_a_q->setObject(LossOfMessages_Operation_main_Read_a_q_object);
				// OutputPin result
				LossOfMessages_Operation_main_Read_a_q_result->setThisElementPtr(LossOfMessages_Operation_main_Read_a_q_result);
				LossOfMessages_Operation_main_Read_a_q_result->setName("result");
				LossOfMessages_Operation_main_Read_a_q_result->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_Read_a_q_result->setType(LossOfMessages_Operation_I);
			LossOfMessages_Operation_main_Read_a_q->setResult(LossOfMessages_Operation_main_Read_a_q_result);
		LossOfMessages_Operation_main->addNode(LossOfMessages_Operation_main_Read_a_q);
			// ObjectFlow ObjectFlow32 from result to p
			LossOfMessages_Operation_main_ObjectFlow32->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow32);
			LossOfMessages_Operation_main_ObjectFlow32->setName("ObjectFlow32");
			LossOfMessages_Operation_main_ObjectFlow32->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow32->setSource(LossOfMessages_Operation_main_Read_a_p_result);
			LossOfMessages_Operation_main_ObjectFlow32->setTarget(LossOfMessages_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean34
				LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34);
				LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34->setName("LiteralBoolean34");
				LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow32->setGuard(LossOfMessages_Operation_main_ObjectFlow32_LiteralBoolean34);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow32);
			// ObjectFlow ObjectFlow0 from result to target
			LossOfMessages_Operation_main_ObjectFlow0->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow0);
			LossOfMessages_Operation_main_ObjectFlow0->setName("ObjectFlow0");
			LossOfMessages_Operation_main_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow0->setSource(LossOfMessages_Operation_main_Read_a_q_result);
			LossOfMessages_Operation_main_ObjectFlow0->setTarget(LossOfMessages_Operation_main_Call_setP_target);
				// LiteralBoolean LiteralBoolean1
				LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1);
				LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
				LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow0->setGuard(LossOfMessages_Operation_main_ObjectFlow0_LiteralBoolean1);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow0);
			// ObjectFlow ObjectFlow35 from Fork A to object
			LossOfMessages_Operation_main_ObjectFlow35->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow35);
			LossOfMessages_Operation_main_ObjectFlow35->setName("ObjectFlow35");
			LossOfMessages_Operation_main_ObjectFlow35->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow35->setSource(LossOfMessages_Operation_main_Fork_A);
			LossOfMessages_Operation_main_ObjectFlow35->setTarget(LossOfMessages_Operation_main_Read_a_p_object);
				// LiteralBoolean LiteralBoolean36
				LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36);
				LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36->setName("LiteralBoolean36");
				LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow35->setGuard(LossOfMessages_Operation_main_ObjectFlow35_LiteralBoolean36);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow35);
			// ObjectFlow ObjectFlow3 from result to target
			LossOfMessages_Operation_main_ObjectFlow3->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow3);
			LossOfMessages_Operation_main_ObjectFlow3->setName("ObjectFlow3");
			LossOfMessages_Operation_main_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow3->setSource(LossOfMessages_Operation_main_Create_A_result);
			LossOfMessages_Operation_main_ObjectFlow3->setTarget(LossOfMessages_Operation_main_A__target);
				// LiteralBoolean LiteralBoolean4
				LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4);
				LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
				LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow3->setGuard(LossOfMessages_Operation_main_ObjectFlow3_LiteralBoolean4);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow3);
			// ObjectFlow ObjectFlow6 from result to v
			LossOfMessages_Operation_main_ObjectFlow6->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow6);
			LossOfMessages_Operation_main_ObjectFlow6->setName("ObjectFlow6");
			LossOfMessages_Operation_main_ObjectFlow6->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow6->setSource(LossOfMessages_Operation_main_Value_4_result);
			LossOfMessages_Operation_main_ObjectFlow6->setTarget(LossOfMessages_Operation_main_Call_setP_v);
				// LiteralBoolean LiteralBoolean8
				LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8);
				LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8->setName("LiteralBoolean8");
				LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow6->setGuard(LossOfMessages_Operation_main_ObjectFlow6_LiteralBoolean8);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow6);
			// ControlFlow ControlFlow16 from Call setP to Read a.p
			LossOfMessages_Operation_main_ControlFlow16->setThisActivityEdgePtr(LossOfMessages_Operation_main_ControlFlow16);
			LossOfMessages_Operation_main_ControlFlow16->setName("ControlFlow16");
			LossOfMessages_Operation_main_ControlFlow16->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ControlFlow16->setSource(LossOfMessages_Operation_main_Call_setP);
			LossOfMessages_Operation_main_ControlFlow16->setTarget(LossOfMessages_Operation_main_Read_a_p);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ControlFlow16);
			// ObjectFlow ObjectFlow45 from result to Fork A
			LossOfMessages_Operation_main_ObjectFlow45->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow45);
			LossOfMessages_Operation_main_ObjectFlow45->setName("ObjectFlow45");
			LossOfMessages_Operation_main_ObjectFlow45->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow45->setSource(LossOfMessages_Operation_main_A__result);
			LossOfMessages_Operation_main_ObjectFlow45->setTarget(LossOfMessages_Operation_main_Fork_A);
				// LiteralBoolean LiteralBoolean47
				LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47);
				LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47->setName("LiteralBoolean47");
				LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow45->setGuard(LossOfMessages_Operation_main_ObjectFlow45_LiteralBoolean47);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow45);
			// ObjectFlow ObjectFlow29 from Fork A to object
			LossOfMessages_Operation_main_ObjectFlow29->setThisActivityEdgePtr(LossOfMessages_Operation_main_ObjectFlow29);
			LossOfMessages_Operation_main_ObjectFlow29->setName("ObjectFlow29");
			LossOfMessages_Operation_main_ObjectFlow29->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_main_ObjectFlow29->setSource(LossOfMessages_Operation_main_Fork_A);
			LossOfMessages_Operation_main_ObjectFlow29->setTarget(LossOfMessages_Operation_main_Read_a_q_object);
				// LiteralBoolean LiteralBoolean30
				LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30->setThisElementPtr(LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30);
				LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30->setName("LiteralBoolean30");
				LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30->setValue(true);
			LossOfMessages_Operation_main_ObjectFlow29->setGuard(LossOfMessages_Operation_main_ObjectFlow29_LiteralBoolean30);
		LossOfMessages_Operation_main->addEdge(LossOfMessages_Operation_main_ObjectFlow29);
	LossOfMessages_Operation->addPackagedElement(LossOfMessages_Operation_main);
		// Interface I
		LossOfMessages_Operation_I->setThisInterfacePtr(LossOfMessages_Operation_I);
		LossOfMessages_Operation_I->setName("I");
		LossOfMessages_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			LossOfMessages_Operation_I_setP_Integer->setThisOperationPtr(LossOfMessages_Operation_I_setP_Integer);
			LossOfMessages_Operation_I_setP_Integer->setName("setP_Integer");
			LossOfMessages_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				LossOfMessages_Operation_I_setP_Integer_v->setThisElementPtr(LossOfMessages_Operation_I_setP_Integer_v);
				LossOfMessages_Operation_I_setP_Integer_v->setName("v");
				LossOfMessages_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::package);
				
				LossOfMessages_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_I_setP_Integer->addOwnedParameter(LossOfMessages_Operation_I_setP_Integer_v);
		LossOfMessages_Operation_I->addOwnedOperation(LossOfMessages_Operation_I_setP_Integer);
	LossOfMessages_Operation->addPackagedElement(LossOfMessages_Operation_I);
		// Class A
		LossOfMessages_Operation_A->setThisClass_Ptr(LossOfMessages_Operation_A);
		LossOfMessages_Operation_A->setName("A");
		LossOfMessages_Operation_A->setVisibility(VisibilityKind::public_);
		
			// Property p
			LossOfMessages_Operation_A_p->setThisElementPtr(LossOfMessages_Operation_A_p);
			LossOfMessages_Operation_A_p->setName("p");
			LossOfMessages_Operation_A_p->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_A_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_A_p->setAggregation(AggregationKind::composite);
				// LiteralInteger LiteralInteger48
				LossOfMessages_Operation_A_p_LiteralInteger48->setThisElementPtr(LossOfMessages_Operation_A_p_LiteralInteger48);
				LossOfMessages_Operation_A_p_LiteralInteger48->setName("LiteralInteger48");
				LossOfMessages_Operation_A_p_LiteralInteger48->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_A_p_LiteralInteger48->setValue(0);
			LossOfMessages_Operation_A_p->setDefaultValue(LossOfMessages_Operation_A_p_LiteralInteger48);
		LossOfMessages_Operation_A->addOwnedAttribute(LossOfMessages_Operation_A_p);
			// Port q
			LossOfMessages_Operation_A_q->setThisElementPtr(LossOfMessages_Operation_A_q);
			LossOfMessages_Operation_A_q->setName("q");
			LossOfMessages_Operation_A_q->setVisibility(VisibilityKind::public_);
			
			LossOfMessages_Operation_A_q->setType(LossOfMessages_Operation_IImpl);
			LossOfMessages_Operation_A_q->setAggregation(AggregationKind::composite);
			LossOfMessages_Operation_A_q->isService = true;
			LossOfMessages_Operation_A_q->addProvided(LossOfMessages_Operation_I);
		LossOfMessages_Operation_A->addOwnedAttribute(LossOfMessages_Operation_A_q);
		// Activity setPActivity
			LossOfMessages_Operation_A_setPActivity->setThisActivityPtr(LossOfMessages_Operation_A_setPActivity);
			LossOfMessages_Operation_A_setPActivity->setName("setPActivity");
			LossOfMessages_Operation_A_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				LossOfMessages_Operation_A_setPActivity_v->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_v);
				LossOfMessages_Operation_A_setPActivity_v->setName("v");
				LossOfMessages_Operation_A_setPActivity_v->setVisibility(VisibilityKind::package);
				
				LossOfMessages_Operation_A_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_A_setPActivity->addOwnedParameter(LossOfMessages_Operation_A_setPActivity_v);
				// ActivityParameterNode vParameterNode
				LossOfMessages_Operation_A_setPActivity_vParameterNode->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_vParameterNode);
				LossOfMessages_Operation_A_setPActivity_vParameterNode->setName("vParameterNode");
				LossOfMessages_Operation_A_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Operation_A_setPActivity_vParameterNode->setParameter(LossOfMessages_Operation_A_setPActivity_v);
			LossOfMessages_Operation_A_setPActivity->addNode(LossOfMessages_Operation_A_setPActivity_vParameterNode);
				// ReadSelfAction this
				LossOfMessages_Operation_A_setPActivity_this->setThisExecutableNodePtr(LossOfMessages_Operation_A_setPActivity_this);
				LossOfMessages_Operation_A_setPActivity_this->setName("this");
				LossOfMessages_Operation_A_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					LossOfMessages_Operation_A_setPActivity_this_result->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_this_result);
					LossOfMessages_Operation_A_setPActivity_this_result->setName("result");
					LossOfMessages_Operation_A_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_this_result->setType(LossOfMessages_Operation_A);
				LossOfMessages_Operation_A_setPActivity_this->setResult(LossOfMessages_Operation_A_setPActivity_this_result);
			LossOfMessages_Operation_A_setPActivity->addNode(LossOfMessages_Operation_A_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setThisExecutableNodePtr(LossOfMessages_Operation_A_setPActivity_Set_this_p);
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setName("Set this.p");
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setStructuralFeature(LossOfMessages_Operation_A_p);
					// InputPin object
					LossOfMessages_Operation_A_setPActivity_Set_this_p_object->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_Set_this_p_object);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_object->setName("object");
					LossOfMessages_Operation_A_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_object->setType(LossOfMessages_Operation_A);
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setObject(LossOfMessages_Operation_A_setPActivity_Set_this_p_object);
					// InputPin value
					LossOfMessages_Operation_A_setPActivity_Set_this_p_value->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_Set_this_p_value);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_value->setName("value");
					LossOfMessages_Operation_A_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setValue(LossOfMessages_Operation_A_setPActivity_Set_this_p_value);
					// OutputPin result
					LossOfMessages_Operation_A_setPActivity_Set_this_p_result->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_Set_this_p_result);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_result->setName("result");
					LossOfMessages_Operation_A_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_Set_this_p_result->setType(LossOfMessages_Operation_A);
				LossOfMessages_Operation_A_setPActivity_Set_this_p->setResult(LossOfMessages_Operation_A_setPActivity_Set_this_p_result);
			LossOfMessages_Operation_A_setPActivity->addNode(LossOfMessages_Operation_A_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow49 from vParameterNode to value
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setThisActivityEdgePtr(LossOfMessages_Operation_A_setPActivity_ObjectFlow49);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setName("ObjectFlow49");
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setSource(LossOfMessages_Operation_A_setPActivity_vParameterNode);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setTarget(LossOfMessages_Operation_A_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean50
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50->setName("LiteralBoolean50");
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50->setValue(true);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow49->setGuard(LossOfMessages_Operation_A_setPActivity_ObjectFlow49_LiteralBoolean50);
			LossOfMessages_Operation_A_setPActivity->addEdge(LossOfMessages_Operation_A_setPActivity_ObjectFlow49);
				// ObjectFlow ObjectFlow52 from result to object
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setThisActivityEdgePtr(LossOfMessages_Operation_A_setPActivity_ObjectFlow52);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setName("ObjectFlow52");
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setSource(LossOfMessages_Operation_A_setPActivity_this_result);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setTarget(LossOfMessages_Operation_A_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean53
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53->setThisElementPtr(LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53->setName("LiteralBoolean53");
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53->setVisibility(VisibilityKind::public_);
					LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53->setValue(true);
				LossOfMessages_Operation_A_setPActivity_ObjectFlow52->setGuard(LossOfMessages_Operation_A_setPActivity_ObjectFlow52_LiteralBoolean53);
			LossOfMessages_Operation_A_setPActivity->addEdge(LossOfMessages_Operation_A_setPActivity_ObjectFlow52);
		LossOfMessages_Operation_A->addOwnedBehavior(LossOfMessages_Operation_A_setPActivity);
			LossOfMessages_Operation_A_IRealization->setName("IRealization");
			LossOfMessages_Operation_A_IRealization->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_A_IRealization->setContract(LossOfMessages_Operation_I);
			
		LossOfMessages_Operation_A->addInterfaceRealization(LossOfMessages_Operation_A_IRealization);
		
			// Operation setP_Integer
			LossOfMessages_Operation_A_setP_Integer->setThisOperationPtr(LossOfMessages_Operation_A_setP_Integer);
			LossOfMessages_Operation_A_setP_Integer->setName("setP_Integer");
			LossOfMessages_Operation_A_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				LossOfMessages_Operation_A_setP_Integer_v->setThisElementPtr(LossOfMessages_Operation_A_setP_Integer_v);
				LossOfMessages_Operation_A_setP_Integer_v->setName("v");
				LossOfMessages_Operation_A_setP_Integer_v->setVisibility(VisibilityKind::package);
				
				LossOfMessages_Operation_A_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_A_setP_Integer->addOwnedParameter(LossOfMessages_Operation_A_setP_Integer_v);
			LossOfMessages_Operation_A_setP_Integer->addMethod(LossOfMessages_Operation_A_setPActivity);
			LossOfMessages_Operation_A_setP_Integer->addRedefinedOperation(LossOfMessages_Operation_I_setP_Integer);
		LossOfMessages_Operation_A->addOwnedOperation(LossOfMessages_Operation_A_setP_Integer);
			// Operation A_A
			LossOfMessages_Operation_A_A_A->setThisOperationPtr(LossOfMessages_Operation_A_A_A);
			LossOfMessages_Operation_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			LossOfMessages_Operation_A_A_A->setName("A_A");
			LossOfMessages_Operation_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				LossOfMessages_Operation_A_A_A_result->setThisElementPtr(LossOfMessages_Operation_A_A_A_result);
				LossOfMessages_Operation_A_A_A_result->setName("result");
				LossOfMessages_Operation_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				LossOfMessages_Operation_A_A_A_result->setType(LossOfMessages_Operation_A);
				LossOfMessages_Operation_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			LossOfMessages_Operation_A_A_A->addOwnedParameter(LossOfMessages_Operation_A_A_A_result);
		LossOfMessages_Operation_A->addOwnedOperation(LossOfMessages_Operation_A_A_A);
	LossOfMessages_Operation->addPackagedElement(LossOfMessages_Operation_A);
		// Class IImpl
		LossOfMessages_Operation_IImpl->setThisClass_Ptr(LossOfMessages_Operation_IImpl);
		LossOfMessages_Operation_IImpl->setName("IImpl");
		LossOfMessages_Operation_IImpl->setVisibility(VisibilityKind::public_);
		LossOfMessages_Operation_IImpl_IRealization->setName("IRealization");
			LossOfMessages_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			LossOfMessages_Operation_IImpl_IRealization->setContract(LossOfMessages_Operation_I);
			
		LossOfMessages_Operation_IImpl->addInterfaceRealization(LossOfMessages_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			LossOfMessages_Operation_IImpl_setP_Integer->setThisOperationPtr(LossOfMessages_Operation_IImpl_setP_Integer);
			LossOfMessages_Operation_IImpl_setP_Integer->setName("setP_Integer");
			LossOfMessages_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				LossOfMessages_Operation_IImpl_setP_Integer_v->setThisElementPtr(LossOfMessages_Operation_IImpl_setP_Integer_v);
				LossOfMessages_Operation_IImpl_setP_Integer_v->setName("v");
				LossOfMessages_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::package);
				
				LossOfMessages_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			LossOfMessages_Operation_IImpl_setP_Integer->addOwnedParameter(LossOfMessages_Operation_IImpl_setP_Integer_v);
			LossOfMessages_Operation_IImpl_setP_Integer->addRedefinedOperation(LossOfMessages_Operation_I_setP_Integer);
		LossOfMessages_Operation_IImpl->addOwnedOperation(LossOfMessages_Operation_IImpl_setP_Integer);
	LossOfMessages_Operation->addPackagedElement(LossOfMessages_Operation_IImpl);
}
