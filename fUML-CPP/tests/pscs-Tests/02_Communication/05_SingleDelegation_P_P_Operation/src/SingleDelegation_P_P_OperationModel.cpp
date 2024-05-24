/*
 * SingleDelegation_P_P_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "SingleDelegation_P_P_OperationModel.h"

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
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/values/LiteralString.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace SingleDelegation_P_P_Operation;
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

SingleDelegation_P_P_OperationModel::SingleDelegation_P_P_OperationModel()
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

SingleDelegation_P_P_OperationModel::~SingleDelegation_P_P_OperationModel()
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

const std::shared_ptr<SingleDelegation_P_P_OperationModel>& SingleDelegation_P_P_OperationModel::Instance()
{
	static std::shared_ptr<SingleDelegation_P_P_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new SingleDelegation_P_P_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void SingleDelegation_P_P_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model SingleDelegation_P_P_Operation
	 */
	SingleDelegation_P_P_Operation.reset(new Package());
	this->addToElementRepository("SingleDelegation_P_P_Operation", SingleDelegation_P_P_Operation);
		SingleDelegation_P_P_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", SingleDelegation_P_P_Operation_IImpl);
			SingleDelegation_P_P_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_P_Operation_IImpl_IRealization);
			SingleDelegation_P_P_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_P_Operation_IImpl_setP_Integer);
				SingleDelegation_P_P_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_P_Operation_IImpl_setP_Integer_v);
		SingleDelegation_P_P_Operation_R.reset(new Association());
		this->addToElementRepository("R", SingleDelegation_P_P_Operation_R);
			SingleDelegation_P_P_Operation_R_y.reset(new Property());
			this->addToElementRepository("y", SingleDelegation_P_P_Operation_R_y);
			SingleDelegation_P_P_Operation_R_x.reset(new Property());
			this->addToElementRepository("x", SingleDelegation_P_P_Operation_R_x);
		SingleDelegation_P_P_Operation_B.reset(new Class_());
		this->addToElementRepository("B", SingleDelegation_P_P_Operation_B);
			SingleDelegation_P_P_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_P_Operation_B_setP_Integer);
				SingleDelegation_P_P_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_P_Operation_B_setP_Integer_v);
			SingleDelegation_P_P_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", SingleDelegation_P_P_Operation_B_setPActivity);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralInteger2);
				SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode);
					SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger3);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralInteger5);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean6", SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6);
				SingleDelegation_P_P_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SingleDelegation_P_P_Operation_B_setPActivity_this);
					SingleDelegation_P_P_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Operation_B_setPActivity_this_result);
						SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralInteger7);
						SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural8", SingleDelegation_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural8);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural9", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural9);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger10);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural11", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural11);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger12);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger13);
						SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural14);
				SingleDelegation_P_P_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_P_Operation_B_setPActivity_v);
			SingleDelegation_P_P_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", SingleDelegation_P_P_Operation_B_p);
			SingleDelegation_P_P_Operation_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", SingleDelegation_P_P_Operation_B_B_B);
				SingleDelegation_P_P_Operation_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_B_B_B_result);
			SingleDelegation_P_P_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_P_Operation_B_IRealization);
		SingleDelegation_P_P_Operation_A.reset(new Class_());
		this->addToElementRepository("A", SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_A_b.reset(new Property());
			this->addToElementRepository("b", SingleDelegation_P_P_Operation_A_b);
			SingleDelegation_P_P_Operation_A_r.reset(new Connector());
			this->addToElementRepository("r", SingleDelegation_P_P_Operation_A_r);
				SingleDelegation_P_P_Operation_A_r_ConnectorEnd15.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd15", SingleDelegation_P_P_Operation_A_r_ConnectorEnd15);
				SingleDelegation_P_P_Operation_A_r_ConnectorEnd16.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd16", SingleDelegation_P_P_Operation_A_r_ConnectorEnd16);
			SingleDelegation_P_P_Operation_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", SingleDelegation_P_P_Operation_A_A_A);
				SingleDelegation_P_P_Operation_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_A_A_A_result);
			SingleDelegation_P_P_Operation_A_q.reset(new Port());
			this->addToElementRepository("q", SingleDelegation_P_P_Operation_A_q);
		SingleDelegation_P_P_Operation_I.reset(new Interface());
		this->addToElementRepository("I", SingleDelegation_P_P_Operation_I);
			SingleDelegation_P_P_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_P_Operation_I_setP_Integer);
				SingleDelegation_P_P_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_P_Operation_I_setP_Integer_v);
		SingleDelegation_P_P_Operation_main.reset(new Activity());
		this->addToElementRepository("main", SingleDelegation_P_P_Operation_main);
			SingleDelegation_P_P_Operation_main_Read_a_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b.p", SingleDelegation_P_P_Operation_main_Read_a_b_p);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_P_Operation_main_Read_a_b_p_object);
					SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralInteger17);
					SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", SingleDelegation_P_P_Operation_main_Read_a_b_p_object_LiteralUnlimitedNatural18);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_Read_a_b_p_result);
					SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralUnlimitedNatural19);
					SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", SingleDelegation_P_P_Operation_main_Read_a_b_p_result_LiteralInteger20);
			SingleDelegation_P_P_Operation_main_ControlFlow21.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow21", SingleDelegation_P_P_Operation_main_ControlFlow21);
			SingleDelegation_P_P_Operation_main_ObjectFlow22.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow22", SingleDelegation_P_P_Operation_main_ObjectFlow22);
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean23", SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23);
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralInteger24.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger24", SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralInteger24);
			SingleDelegation_P_P_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", SingleDelegation_P_P_Operation_main_Call_testP);
				SingleDelegation_P_P_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", SingleDelegation_P_P_Operation_main_Call_testP_p);
					SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger25);
					SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralInteger26);
					SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", SingleDelegation_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural27);
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine(InitialMessage)", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger28);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural29);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger30);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value.reset(new InputPin());
				this->addToElementRepository("value", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural31", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural31);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger32);
					SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value_LiteralInteger33);
			SingleDelegation_P_P_Operation_main_ObjectFlow34.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow34", SingleDelegation_P_P_Operation_main_ObjectFlow34);
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralInteger36);
			SingleDelegation_P_P_Operation_main_ControlFlow37.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow37", SingleDelegation_P_P_Operation_main_ControlFlow37);
			SingleDelegation_P_P_Operation_main_Read_a_q.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.q", SingleDelegation_P_P_Operation_main_Read_a_q);
				SingleDelegation_P_P_Operation_main_Read_a_q_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_Read_a_q_result);
					SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralInteger38);
					SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", SingleDelegation_P_P_Operation_main_Read_a_q_result_LiteralUnlimitedNatural39);
				SingleDelegation_P_P_Operation_main_Read_a_q_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_P_Operation_main_Read_a_q_object);
					SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralUnlimitedNatural40);
					SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", SingleDelegation_P_P_Operation_main_Read_a_q_object_LiteralInteger41);
			SingleDelegation_P_P_Operation_main_InitialMessage.reset(new ValueSpecificationAction());
			this->addToElementRepository("InitialMessage", SingleDelegation_P_P_Operation_main_InitialMessage);
				SingleDelegation_P_P_Operation_main_InitialMessage_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_InitialMessage_result);
					SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralInteger42);
					SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", SingleDelegation_P_P_Operation_main_InitialMessage_result_LiteralUnlimitedNatural43);
				SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44.reset(new LiteralString());
				this->addToElementRepository("LiteralString44", SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44);
			SingleDelegation_P_P_Operation_main_Fork_A.reset(new ForkNode());
			this->addToElementRepository("Fork A", SingleDelegation_P_P_Operation_main_Fork_A);
			SingleDelegation_P_P_Operation_main_ObjectFlow45.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow45", SingleDelegation_P_P_Operation_main_ObjectFlow45);
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralInteger46.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger46", SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralInteger46);
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean47", SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47);
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine(EndMessage)", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value.reset(new InputPin());
				this->addToElementRepository("value", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger48);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralInteger49);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural50);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger51);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger52);
					SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural53", SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural53);
			SingleDelegation_P_P_Operation_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", SingleDelegation_P_P_Operation_main_A_);
				SingleDelegation_P_P_Operation_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_A__result);
					SingleDelegation_P_P_Operation_main_A__result_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", SingleDelegation_P_P_Operation_main_A__result_LiteralUnlimitedNatural54);
					SingleDelegation_P_P_Operation_main_A__result_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", SingleDelegation_P_P_Operation_main_A__result_LiteralInteger55);
					SingleDelegation_P_P_Operation_main_A__result_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", SingleDelegation_P_P_Operation_main_A__result_LiteralInteger56);
				SingleDelegation_P_P_Operation_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_P_Operation_main_A__target);
					SingleDelegation_P_P_Operation_main_A__target_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", SingleDelegation_P_P_Operation_main_A__target_LiteralInteger57);
					SingleDelegation_P_P_Operation_main_A__target_LiteralUnlimitedNatural58.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural58", SingleDelegation_P_P_Operation_main_A__target_LiteralUnlimitedNatural58);
			SingleDelegation_P_P_Operation_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", SingleDelegation_P_P_Operation_main_Read_a_b);
				SingleDelegation_P_P_Operation_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_Read_a_b_result);
					SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralUnlimitedNatural59.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural59", SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralUnlimitedNatural59);
					SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", SingleDelegation_P_P_Operation_main_Read_a_b_result_LiteralInteger60);
				SingleDelegation_P_P_Operation_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_P_Operation_main_Read_a_b_object);
					SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural61", SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralUnlimitedNatural61);
					SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", SingleDelegation_P_P_Operation_main_Read_a_b_object_LiteralInteger62);
			SingleDelegation_P_P_Operation_main_ObjectFlow63.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow63", SingleDelegation_P_P_Operation_main_ObjectFlow63);
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean64", SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64);
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralInteger65.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger65", SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralInteger65);
			SingleDelegation_P_P_Operation_main_ObjectFlow66.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow66", SingleDelegation_P_P_Operation_main_ObjectFlow66);
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67);
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralInteger68.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger68", SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralInteger68);
			SingleDelegation_P_P_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", SingleDelegation_P_P_Operation_main_Value_4);
				SingleDelegation_P_P_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_Value_4_result);
					SingleDelegation_P_P_Operation_main_Value_4_result_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", SingleDelegation_P_P_Operation_main_Value_4_result_LiteralInteger69);
					SingleDelegation_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", SingleDelegation_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural70);
				SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger71", SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71);
			SingleDelegation_P_P_Operation_main_ObjectFlow72.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow72", SingleDelegation_P_P_Operation_main_ObjectFlow72);
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralInteger73.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger73", SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralInteger73);
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean74", SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74);
			SingleDelegation_P_P_Operation_main_ObjectFlow75.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow75", SingleDelegation_P_P_Operation_main_ObjectFlow75);
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralInteger76);
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean77", SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77);
			SingleDelegation_P_P_Operation_main_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", SingleDelegation_P_P_Operation_main_ObjectFlow78);
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralInteger79);
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean80", SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
			SingleDelegation_P_P_Operation_main_ControlFlow81.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow81", SingleDelegation_P_P_Operation_main_ControlFlow81);
			SingleDelegation_P_P_Operation_main_ObjectFlow82.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow82", SingleDelegation_P_P_Operation_main_ObjectFlow82);
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralInteger83.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger83", SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralInteger83);
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean84", SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84);
			SingleDelegation_P_P_Operation_main_Call_a_q_setP.reset(new CallOperationAction());
			this->addToElementRepository("Call a.q.setP", SingleDelegation_P_P_Operation_main_Call_a_q_setP);
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_v.reset(new InputPin());
				this->addToElementRepository("v", SingleDelegation_P_P_Operation_main_Call_a_q_setP_v);
					SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger85);
					SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural86", SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralUnlimitedNatural86);
					SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", SingleDelegation_P_P_Operation_main_Call_a_q_setP_v_LiteralInteger87);
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_P_Operation_main_Call_a_q_setP_target);
					SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralInteger88);
					SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralUnlimitedNatural89.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural89", SingleDelegation_P_P_Operation_main_Call_a_q_setP_target_LiteralUnlimitedNatural89);
			SingleDelegation_P_P_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", SingleDelegation_P_P_Operation_main_testP);
				SingleDelegation_P_P_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", SingleDelegation_P_P_Operation_main_testP_p);
			SingleDelegation_P_P_Operation_main_EndMessage.reset(new ValueSpecificationAction());
			this->addToElementRepository("EndMessage", SingleDelegation_P_P_Operation_main_EndMessage);
				SingleDelegation_P_P_Operation_main_EndMessage_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_EndMessage_result);
					SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural90", SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralUnlimitedNatural90);
					SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralInteger91.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger91", SingleDelegation_P_P_Operation_main_EndMessage_result_LiteralInteger91);
				SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92.reset(new LiteralString());
				this->addToElementRepository("LiteralString92", SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92);
			SingleDelegation_P_P_Operation_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", SingleDelegation_P_P_Operation_main_Create_A);
				SingleDelegation_P_P_Operation_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Operation_main_Create_A_result);
					SingleDelegation_P_P_Operation_main_Create_A_result_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", SingleDelegation_P_P_Operation_main_Create_A_result_LiteralUnlimitedNatural93);
					SingleDelegation_P_P_Operation_main_Create_A_result_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", SingleDelegation_P_P_Operation_main_Create_A_result_LiteralInteger94);
			SingleDelegation_P_P_Operation_main_ObjectFlow95.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow95", SingleDelegation_P_P_Operation_main_ObjectFlow95);
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean96", SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96);
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralInteger97.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger97", SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralInteger97);

	// Initialize public members
	/*
	 * Model SingleDelegation_P_P_Operation
	 */
	SingleDelegation_P_P_Operation->setThisPackagePtr(SingleDelegation_P_P_Operation);
	SingleDelegation_P_P_Operation->setName("SingleDelegation_P_P_Operation");
	SingleDelegation_P_P_Operation->setVisibility(VisibilityKind::public_);
		// Class IImpl
		SingleDelegation_P_P_Operation_IImpl->setThisClass_Ptr(SingleDelegation_P_P_Operation_IImpl);
		SingleDelegation_P_P_Operation_IImpl->setName("IImpl");
		SingleDelegation_P_P_Operation_IImpl->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Operation_IImpl_IRealization->setName("IRealization");
			SingleDelegation_P_P_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_IImpl_IRealization->setContract(SingleDelegation_P_P_Operation_I);
			
		SingleDelegation_P_P_Operation_IImpl->addInterfaceRealization(SingleDelegation_P_P_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			SingleDelegation_P_P_Operation_IImpl_setP_Integer->setThisOperationPtr(SingleDelegation_P_P_Operation_IImpl_setP_Integer);
			SingleDelegation_P_P_Operation_IImpl_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_P_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_P_Operation_IImpl_setP_Integer_v->setThisElementPtr(SingleDelegation_P_P_Operation_IImpl_setP_Integer_v);
				SingleDelegation_P_P_Operation_IImpl_setP_Integer_v->setName("v");
				SingleDelegation_P_P_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_IImpl_setP_Integer->addOwnedParameter(SingleDelegation_P_P_Operation_IImpl_setP_Integer_v);
		SingleDelegation_P_P_Operation_IImpl->addOwnedOperation(SingleDelegation_P_P_Operation_IImpl_setP_Integer);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_IImpl);
		// Association R
		SingleDelegation_P_P_Operation_R->setThisAssociationPtr(SingleDelegation_P_P_Operation_R);
		SingleDelegation_P_P_Operation_R->setName("R");
		SingleDelegation_P_P_Operation_R->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Operation_R->addOwnedEnd(SingleDelegation_P_P_Operation_R_x);
		SingleDelegation_P_P_Operation_R->addOwnedEnd(SingleDelegation_P_P_Operation_R_y);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_R);
		// Class B
		SingleDelegation_P_P_Operation_B->setThisClass_Ptr(SingleDelegation_P_P_Operation_B);
		SingleDelegation_P_P_Operation_B->setName("B");
		SingleDelegation_P_P_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			SingleDelegation_P_P_Operation_B_p->setThisElementPtr(SingleDelegation_P_P_Operation_B_p);
			SingleDelegation_P_P_Operation_B_p->setName("p");
			SingleDelegation_P_P_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		SingleDelegation_P_P_Operation_B->addOwnedAttribute(SingleDelegation_P_P_Operation_B_p);
		// Activity setPActivity
			SingleDelegation_P_P_Operation_B_setPActivity->setThisActivityPtr(SingleDelegation_P_P_Operation_B_setPActivity);
			SingleDelegation_P_P_Operation_B_setPActivity->setName("setPActivity");
			SingleDelegation_P_P_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				SingleDelegation_P_P_Operation_B_setPActivity_v->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_v);
				SingleDelegation_P_P_Operation_B_setPActivity_v->setName("v");
				SingleDelegation_P_P_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_B_setPActivity->addOwnedParameter(SingleDelegation_P_P_Operation_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode);
				SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode->setParameter(SingleDelegation_P_P_Operation_B_setPActivity_v);
			SingleDelegation_P_P_Operation_B_setPActivity->addNode(SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				SingleDelegation_P_P_Operation_B_setPActivity_this->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_B_setPActivity_this);
				SingleDelegation_P_P_Operation_B_setPActivity_this->setName("this");
				SingleDelegation_P_P_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Operation_B_setPActivity_this_result->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_this_result);
					SingleDelegation_P_P_Operation_B_setPActivity_this_result->setName("result");
					SingleDelegation_P_P_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_this_result->setType(SingleDelegation_P_P_Operation_B);
				SingleDelegation_P_P_Operation_B_setPActivity_this->setResult(SingleDelegation_P_P_Operation_B_setPActivity_this_result);
			SingleDelegation_P_P_Operation_B_setPActivity->addNode(SingleDelegation_P_P_Operation_B_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setStructuralFeature(SingleDelegation_P_P_Operation_B_p);
					// InputPin object
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object->setName("object");
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object->setType(SingleDelegation_P_P_Operation_B);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setObject(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value->setName("value");
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setValue(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result->setName("result");
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result->setType(SingleDelegation_P_P_Operation_B);
				SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p->setResult(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_result);
			SingleDelegation_P_P_Operation_B_setPActivity->addNode(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow0 from result to object
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setName("ObjectFlow0");
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setSource(SingleDelegation_P_P_Operation_B_setPActivity_this_result);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setTarget(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean1
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1->setValue(true);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0->setGuard(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0_LiteralBoolean1);
			SingleDelegation_P_P_Operation_B_setPActivity->addEdge(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow0);
				// ObjectFlow ObjectFlow4 from vParameterNode to value
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setName("ObjectFlow4");
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setSource(SingleDelegation_P_P_Operation_B_setPActivity_vParameterNode);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setTarget(SingleDelegation_P_P_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean6
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6->setThisElementPtr(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6->setName("LiteralBoolean6");
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6->setValue(true);
				SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4->setGuard(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean6);
			SingleDelegation_P_P_Operation_B_setPActivity->addEdge(SingleDelegation_P_P_Operation_B_setPActivity_ObjectFlow4);
		SingleDelegation_P_P_Operation_B->addOwnedBehavior(SingleDelegation_P_P_Operation_B_setPActivity);
			SingleDelegation_P_P_Operation_B_IRealization->setName("IRealization");
			SingleDelegation_P_P_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_B_IRealization->setContract(SingleDelegation_P_P_Operation_I);
			
		SingleDelegation_P_P_Operation_B->addInterfaceRealization(SingleDelegation_P_P_Operation_B_IRealization);
		
			// Operation B_B
			SingleDelegation_P_P_Operation_B_B_B->setThisOperationPtr(SingleDelegation_P_P_Operation_B_B_B);
			SingleDelegation_P_P_Operation_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_P_Operation_B_B_B->setName("B_B");
			SingleDelegation_P_P_Operation_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_P_Operation_B_B_B_result->setThisElementPtr(SingleDelegation_P_P_Operation_B_B_B_result);
				SingleDelegation_P_P_Operation_B_B_B_result->setName("result");
				SingleDelegation_P_P_Operation_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_B_B_result->setType(SingleDelegation_P_P_Operation_B);
				SingleDelegation_P_P_Operation_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_P_Operation_B_B_B->addOwnedParameter(SingleDelegation_P_P_Operation_B_B_B_result);
		SingleDelegation_P_P_Operation_B->addOwnedOperation(SingleDelegation_P_P_Operation_B_B_B);
			// Operation setP_Integer
			SingleDelegation_P_P_Operation_B_setP_Integer->setThisOperationPtr(SingleDelegation_P_P_Operation_B_setP_Integer);
			SingleDelegation_P_P_Operation_B_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_P_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_P_Operation_B_setP_Integer_v->setThisElementPtr(SingleDelegation_P_P_Operation_B_setP_Integer_v);
				SingleDelegation_P_P_Operation_B_setP_Integer_v->setName("v");
				SingleDelegation_P_P_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_B_setP_Integer->addOwnedParameter(SingleDelegation_P_P_Operation_B_setP_Integer_v);
			SingleDelegation_P_P_Operation_B_setP_Integer->addMethod(SingleDelegation_P_P_Operation_B_setPActivity);
		SingleDelegation_P_P_Operation_B->addOwnedOperation(SingleDelegation_P_P_Operation_B_setP_Integer);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_B);
		// Class A
		SingleDelegation_P_P_Operation_A->setThisClass_Ptr(SingleDelegation_P_P_Operation_A);
		SingleDelegation_P_P_Operation_A->setName("A");
		SingleDelegation_P_P_Operation_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			SingleDelegation_P_P_Operation_A_q->setThisElementPtr(SingleDelegation_P_P_Operation_A_q);
			SingleDelegation_P_P_Operation_A_q->setName("q");
			SingleDelegation_P_P_Operation_A_q->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_A_q->setType(SingleDelegation_P_P_Operation_IImpl);
			SingleDelegation_P_P_Operation_A_q->setAggregation(AggregationKind::composite);
			SingleDelegation_P_P_Operation_A_q->isService = true;
			SingleDelegation_P_P_Operation_A_q->addProvided(SingleDelegation_P_P_Operation_I);
		SingleDelegation_P_P_Operation_A->addOwnedAttribute(SingleDelegation_P_P_Operation_A_q);
			// Property b
			SingleDelegation_P_P_Operation_A_b->setThisElementPtr(SingleDelegation_P_P_Operation_A_b);
			SingleDelegation_P_P_Operation_A_b->setName("b");
			SingleDelegation_P_P_Operation_A_b->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_A_b->setType(SingleDelegation_P_P_Operation_B);
			SingleDelegation_P_P_Operation_A_b->setAggregation(AggregationKind::composite);
		SingleDelegation_P_P_Operation_A->addOwnedAttribute(SingleDelegation_P_P_Operation_A_b);
		
		SingleDelegation_P_P_Operation_A_r->setName("r");
			SingleDelegation_P_P_Operation_A_r->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_A_r_ConnectorEnd16->setRole(SingleDelegation_P_P_Operation_A_q);
				
			SingleDelegation_P_P_Operation_A_r->addEnd(SingleDelegation_P_P_Operation_A_r_ConnectorEnd16);
				
				SingleDelegation_P_P_Operation_A_r_ConnectorEnd15->setRole(SingleDelegation_P_P_Operation_A_b);
				
			SingleDelegation_P_P_Operation_A_r->addEnd(SingleDelegation_P_P_Operation_A_r_ConnectorEnd15);
			SingleDelegation_P_P_Operation_A_r->setType(SingleDelegation_P_P_Operation_R);
		SingleDelegation_P_P_Operation_A->addOwnedConnector(SingleDelegation_P_P_Operation_A_r);
			// Operation A_A
			SingleDelegation_P_P_Operation_A_A_A->setThisOperationPtr(SingleDelegation_P_P_Operation_A_A_A);
			SingleDelegation_P_P_Operation_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_P_Operation_A_A_A->setName("A_A");
			SingleDelegation_P_P_Operation_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_P_Operation_A_A_A_result->setThisElementPtr(SingleDelegation_P_P_Operation_A_A_A_result);
				SingleDelegation_P_P_Operation_A_A_A_result->setName("result");
				SingleDelegation_P_P_Operation_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_A_A_A_result->setType(SingleDelegation_P_P_Operation_A);
				SingleDelegation_P_P_Operation_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_P_Operation_A_A_A->addOwnedParameter(SingleDelegation_P_P_Operation_A_A_A_result);
		SingleDelegation_P_P_Operation_A->addOwnedOperation(SingleDelegation_P_P_Operation_A_A_A);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_A);
		// Interface I
		SingleDelegation_P_P_Operation_I->setThisInterfacePtr(SingleDelegation_P_P_Operation_I);
		SingleDelegation_P_P_Operation_I->setName("I");
		SingleDelegation_P_P_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			SingleDelegation_P_P_Operation_I_setP_Integer->setThisOperationPtr(SingleDelegation_P_P_Operation_I_setP_Integer);
			SingleDelegation_P_P_Operation_I_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_P_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_P_Operation_I_setP_Integer_v->setThisElementPtr(SingleDelegation_P_P_Operation_I_setP_Integer_v);
				SingleDelegation_P_P_Operation_I_setP_Integer_v->setName("v");
				SingleDelegation_P_P_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_I_setP_Integer->addOwnedParameter(SingleDelegation_P_P_Operation_I_setP_Integer_v);
		SingleDelegation_P_P_Operation_I->addOwnedOperation(SingleDelegation_P_P_Operation_I_setP_Integer);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_I);
		// Activity main
		SingleDelegation_P_P_Operation_main->setThisActivityPtr(SingleDelegation_P_P_Operation_main);
		SingleDelegation_P_P_Operation_main->setName("main");
		SingleDelegation_P_P_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			SingleDelegation_P_P_Operation_main_testP->setThisClass_Ptr(SingleDelegation_P_P_Operation_main_testP);
			SingleDelegation_P_P_Operation_main_testP->setName("testP");
			SingleDelegation_P_P_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				SingleDelegation_P_P_Operation_main_testP_p->setThisElementPtr(SingleDelegation_P_P_Operation_main_testP_p);
				SingleDelegation_P_P_Operation_main_testP_p->setName("p");
				SingleDelegation_P_P_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_main_testP->addOwnedParameter(SingleDelegation_P_P_Operation_main_testP_p);
			SingleDelegation_P_P_Operation_main_testP->addLanguage("C++");
			SingleDelegation_P_P_Operation_main_testP->addLanguage("Include");
			SingleDelegation_P_P_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Operation call delegated: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			SingleDelegation_P_P_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		SingleDelegation_P_P_Operation_main->addOwnedBehavior(SingleDelegation_P_P_Operation_main_testP);
			// CallBehaviorAction WriteLine(EndMessage)
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage);
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->setName("WriteLine(EndMessage)");
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus->setThisElementPtr(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus->setName("errorStatus");
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus->setLower(0);
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->addResult(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_errorStatus);
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value->setThisElementPtr(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value->setName("value");
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_P_Operation_main_WriteLine_EndMessage->addArgument(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage);
			// ReadStructuralFeatureAction Read a.b.p
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Read_a_b_p);
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setName("Read a.b.p");
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setStructuralFeature(SingleDelegation_P_P_Operation_B_p);
				// InputPin object
				SingleDelegation_P_P_Operation_main_Read_a_b_p_object->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_b_p_object);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_object->setName("object");
				SingleDelegation_P_P_Operation_main_Read_a_b_p_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_object->setType(SingleDelegation_P_P_Operation_B);
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setObject(SingleDelegation_P_P_Operation_main_Read_a_b_p_object);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_Read_a_b_p_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_b_p_result);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_result->setName("result");
				SingleDelegation_P_P_Operation_main_Read_a_b_p_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_main_Read_a_b_p->setResult(SingleDelegation_P_P_Operation_main_Read_a_b_p_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Read_a_b_p);
			// CallOperationAction A()
			SingleDelegation_P_P_Operation_main_A_->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_A_);
			SingleDelegation_P_P_Operation_main_A_->setName("A()");
			SingleDelegation_P_P_Operation_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				SingleDelegation_P_P_Operation_main_A__result->setThisElementPtr(SingleDelegation_P_P_Operation_main_A__result);
				SingleDelegation_P_P_Operation_main_A__result->setName("result");
				SingleDelegation_P_P_Operation_main_A__result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_A__result->setType(SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_main_A_->addResult(SingleDelegation_P_P_Operation_main_A__result);
			SingleDelegation_P_P_Operation_main_A_->setOperation(SingleDelegation_P_P_Operation_A_A_A);
				// InputPin target
				SingleDelegation_P_P_Operation_main_A__target->setThisElementPtr(SingleDelegation_P_P_Operation_main_A__target);
				SingleDelegation_P_P_Operation_main_A__target->setName("target");
				SingleDelegation_P_P_Operation_main_A__target->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_A__target->setType(SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_main_A_->setTarget(SingleDelegation_P_P_Operation_main_A__target);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_A_);
			// ReadStructuralFeatureAction Read a.b
			SingleDelegation_P_P_Operation_main_Read_a_b->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Read_a_b);
			SingleDelegation_P_P_Operation_main_Read_a_b->setName("Read a.b");
			SingleDelegation_P_P_Operation_main_Read_a_b->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Read_a_b->setStructuralFeature(SingleDelegation_P_P_Operation_A_b);
				// InputPin object
				SingleDelegation_P_P_Operation_main_Read_a_b_object->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_b_object);
				SingleDelegation_P_P_Operation_main_Read_a_b_object->setName("object");
				SingleDelegation_P_P_Operation_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_b_object->setType(SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_main_Read_a_b->setObject(SingleDelegation_P_P_Operation_main_Read_a_b_object);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_Read_a_b_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_b_result);
				SingleDelegation_P_P_Operation_main_Read_a_b_result->setName("result");
				SingleDelegation_P_P_Operation_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_b_result->setType(SingleDelegation_P_P_Operation_B);
			SingleDelegation_P_P_Operation_main_Read_a_b->setResult(SingleDelegation_P_P_Operation_main_Read_a_b_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Read_a_b);
			// CallBehaviorAction Call testP
			SingleDelegation_P_P_Operation_main_Call_testP->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Call_testP);
			SingleDelegation_P_P_Operation_main_Call_testP->setName("Call testP");
			SingleDelegation_P_P_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Call_testP->setBehavior(SingleDelegation_P_P_Operation_main_testP);
				// InputPin p
				SingleDelegation_P_P_Operation_main_Call_testP_p->setThisElementPtr(SingleDelegation_P_P_Operation_main_Call_testP_p);
				SingleDelegation_P_P_Operation_main_Call_testP_p->setName("p");
				SingleDelegation_P_P_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_main_Call_testP->addArgument(SingleDelegation_P_P_Operation_main_Call_testP_p);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Call_testP);
			// CallBehaviorAction WriteLine(InitialMessage)
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage);
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->setName("WriteLine(InitialMessage)");
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus->setThisElementPtr(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus->setName("errorStatus");
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus->setLower(0);
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->addResult(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_errorStatus);
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value->setThisElementPtr(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value->setName("value");
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage->addArgument(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage);
			// ValueSpecificationAction Value(4)
			SingleDelegation_P_P_Operation_main_Value_4->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Value_4);
			SingleDelegation_P_P_Operation_main_Value_4->setName("Value(4)");
			SingleDelegation_P_P_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger71
				SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71->setThisElementPtr(SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71);
				SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71->setName("LiteralInteger71");
				SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71->setValue(4);
			SingleDelegation_P_P_Operation_main_Value_4->setValue(SingleDelegation_P_P_Operation_main_Value_4_LiteralInteger71);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_Value_4_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_Value_4_result);
				SingleDelegation_P_P_Operation_main_Value_4_result->setName("result");
				SingleDelegation_P_P_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_main_Value_4->setResult(SingleDelegation_P_P_Operation_main_Value_4_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Value_4);
			// CallOperationAction Call a.q.setP
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Call_a_q_setP);
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->setName("Call a.q.setP");
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->setOperation(SingleDelegation_P_P_Operation_I_setP_Integer);
				// InputPin target
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_target->setThisElementPtr(SingleDelegation_P_P_Operation_main_Call_a_q_setP_target);
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_target->setName("target");
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_target->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->setTarget(SingleDelegation_P_P_Operation_main_Call_a_q_setP_target);
				// InputPin v
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_v->setThisElementPtr(SingleDelegation_P_P_Operation_main_Call_a_q_setP_v);
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_v->setName("v");
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_v->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Call_a_q_setP_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_P_Operation_main_Call_a_q_setP->addArgument(SingleDelegation_P_P_Operation_main_Call_a_q_setP_v);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Call_a_q_setP);
			// ValueSpecificationAction EndMessage
			SingleDelegation_P_P_Operation_main_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_EndMessage);
			SingleDelegation_P_P_Operation_main_EndMessage->setName("EndMessage");
			SingleDelegation_P_P_Operation_main_EndMessage->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString92
				SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92->setThisElementPtr(SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92);
				SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92->setName("LiteralString92");
				SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92->setValue("-- End of test case --");
			SingleDelegation_P_P_Operation_main_EndMessage->setValue(SingleDelegation_P_P_Operation_main_EndMessage_LiteralString92);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_EndMessage_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_EndMessage_result);
				SingleDelegation_P_P_Operation_main_EndMessage_result->setName("result");
				SingleDelegation_P_P_Operation_main_EndMessage_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_EndMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_P_Operation_main_EndMessage->setResult(SingleDelegation_P_P_Operation_main_EndMessage_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_EndMessage);
			// CreateObjectAction Create A
			SingleDelegation_P_P_Operation_main_Create_A->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Create_A);
			SingleDelegation_P_P_Operation_main_Create_A->setName("Create A");
			SingleDelegation_P_P_Operation_main_Create_A->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Create_A->setClassifier(SingleDelegation_P_P_Operation_A);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_Create_A_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_Create_A_result);
				SingleDelegation_P_P_Operation_main_Create_A_result->setName("result");
				SingleDelegation_P_P_Operation_main_Create_A_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Create_A_result->setType(SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_main_Create_A->setResult(SingleDelegation_P_P_Operation_main_Create_A_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Create_A);
			// ReadStructuralFeatureAction Read a.q
			SingleDelegation_P_P_Operation_main_Read_a_q->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_Read_a_q);
			SingleDelegation_P_P_Operation_main_Read_a_q->setName("Read a.q");
			SingleDelegation_P_P_Operation_main_Read_a_q->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Operation_main_Read_a_q->setStructuralFeature(SingleDelegation_P_P_Operation_A_q);
				// InputPin object
				SingleDelegation_P_P_Operation_main_Read_a_q_object->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_q_object);
				SingleDelegation_P_P_Operation_main_Read_a_q_object->setName("object");
				SingleDelegation_P_P_Operation_main_Read_a_q_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_q_object->setType(SingleDelegation_P_P_Operation_A);
			SingleDelegation_P_P_Operation_main_Read_a_q->setObject(SingleDelegation_P_P_Operation_main_Read_a_q_object);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_Read_a_q_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_Read_a_q_result);
				SingleDelegation_P_P_Operation_main_Read_a_q_result->setName("result");
				SingleDelegation_P_P_Operation_main_Read_a_q_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_Read_a_q_result->setType(SingleDelegation_P_P_Operation_IImpl);
			SingleDelegation_P_P_Operation_main_Read_a_q->setResult(SingleDelegation_P_P_Operation_main_Read_a_q_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Read_a_q);
			// ValueSpecificationAction InitialMessage
			SingleDelegation_P_P_Operation_main_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Operation_main_InitialMessage);
			SingleDelegation_P_P_Operation_main_InitialMessage->setName("InitialMessage");
			SingleDelegation_P_P_Operation_main_InitialMessage->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString44
				SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44->setThisElementPtr(SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44);
				SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44->setName("LiteralString44");
				SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44->setValue("-- Running test case: Single delegation connector - Operation delegated from port to part --");
			SingleDelegation_P_P_Operation_main_InitialMessage->setValue(SingleDelegation_P_P_Operation_main_InitialMessage_LiteralString44);
				// OutputPin result
				SingleDelegation_P_P_Operation_main_InitialMessage_result->setThisElementPtr(SingleDelegation_P_P_Operation_main_InitialMessage_result);
				SingleDelegation_P_P_Operation_main_InitialMessage_result->setName("result");
				SingleDelegation_P_P_Operation_main_InitialMessage_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_InitialMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_P_Operation_main_InitialMessage->setResult(SingleDelegation_P_P_Operation_main_InitialMessage_result);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_InitialMessage);
			// ForkNode Fork A
			SingleDelegation_P_P_Operation_main_Fork_A->setThisElementPtr(SingleDelegation_P_P_Operation_main_Fork_A);
			SingleDelegation_P_P_Operation_main_Fork_A->setName("Fork A");
			SingleDelegation_P_P_Operation_main_Fork_A->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Operation_main->addNode(SingleDelegation_P_P_Operation_main_Fork_A);
			// ObjectFlow ObjectFlow45 from result to object
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow45);
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setName("ObjectFlow45");
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setSource(SingleDelegation_P_P_Operation_main_Read_a_b_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setTarget(SingleDelegation_P_P_Operation_main_Read_a_b_p_object);
				// LiteralBoolean LiteralBoolean47
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47);
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47->setName("LiteralBoolean47");
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow45->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow45_LiteralBoolean47);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow45);
			// ObjectFlow ObjectFlow63 from result to Fork A
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow63);
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setName("ObjectFlow63");
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setSource(SingleDelegation_P_P_Operation_main_A__result);
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setTarget(SingleDelegation_P_P_Operation_main_Fork_A);
				// LiteralBoolean LiteralBoolean64
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64);
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64->setName("LiteralBoolean64");
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow63->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow63_LiteralBoolean64);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow63);
			// ControlFlow ControlFlow21 from Call testP to WriteLine(EndMessage)
			SingleDelegation_P_P_Operation_main_ControlFlow21->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ControlFlow21);
			SingleDelegation_P_P_Operation_main_ControlFlow21->setName("ControlFlow21");
			SingleDelegation_P_P_Operation_main_ControlFlow21->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ControlFlow21->setSource(SingleDelegation_P_P_Operation_main_Call_testP);
			SingleDelegation_P_P_Operation_main_ControlFlow21->setTarget(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ControlFlow21);
			// ObjectFlow ObjectFlow22 from result to p
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow22);
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setName("ObjectFlow22");
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setSource(SingleDelegation_P_P_Operation_main_Read_a_b_p_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setTarget(SingleDelegation_P_P_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean23
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23);
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23->setName("LiteralBoolean23");
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow22->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow22_LiteralBoolean23);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow22);
			// ObjectFlow ObjectFlow66 from Fork A to object
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow66);
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setName("ObjectFlow66");
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setSource(SingleDelegation_P_P_Operation_main_Fork_A);
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setTarget(SingleDelegation_P_P_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean67
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67);
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67->setName("LiteralBoolean67");
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow66->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow66_LiteralBoolean67);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow66);
			// ObjectFlow ObjectFlow72 from Fork A to object
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow72);
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setName("ObjectFlow72");
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setSource(SingleDelegation_P_P_Operation_main_Fork_A);
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setTarget(SingleDelegation_P_P_Operation_main_Read_a_q_object);
				// LiteralBoolean LiteralBoolean74
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74);
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74->setName("LiteralBoolean74");
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow72->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow72_LiteralBoolean74);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow72);
			// ObjectFlow ObjectFlow75 from result to v
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow75);
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setName("ObjectFlow75");
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setSource(SingleDelegation_P_P_Operation_main_Value_4_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setTarget(SingleDelegation_P_P_Operation_main_Call_a_q_setP_v);
				// LiteralBoolean LiteralBoolean77
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77);
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77->setName("LiteralBoolean77");
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow75->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow75_LiteralBoolean77);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow75);
			// ObjectFlow ObjectFlow78 from result to target
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow78);
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setName("ObjectFlow78");
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setSource(SingleDelegation_P_P_Operation_main_Create_A_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setTarget(SingleDelegation_P_P_Operation_main_A__target);
				// LiteralBoolean LiteralBoolean80
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setName("LiteralBoolean80");
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow78->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow78);
			// ControlFlow ControlFlow81 from Call a.q.setP to Read a.b
			SingleDelegation_P_P_Operation_main_ControlFlow81->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ControlFlow81);
			SingleDelegation_P_P_Operation_main_ControlFlow81->setName("ControlFlow81");
			SingleDelegation_P_P_Operation_main_ControlFlow81->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ControlFlow81->setSource(SingleDelegation_P_P_Operation_main_Call_a_q_setP);
			SingleDelegation_P_P_Operation_main_ControlFlow81->setTarget(SingleDelegation_P_P_Operation_main_Read_a_b);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ControlFlow81);
			// ObjectFlow ObjectFlow82 from result to value
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow82);
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setName("ObjectFlow82");
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setSource(SingleDelegation_P_P_Operation_main_EndMessage_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setTarget(SingleDelegation_P_P_Operation_main_WriteLine_EndMessage_value);
				// LiteralBoolean LiteralBoolean84
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84);
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84->setName("LiteralBoolean84");
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow82->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow82_LiteralBoolean84);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow82);
			// ObjectFlow ObjectFlow34 from result to value
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow34);
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setName("ObjectFlow34");
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setSource(SingleDelegation_P_P_Operation_main_InitialMessage_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setTarget(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage_value);
				// LiteralBoolean LiteralBoolean35
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setName("LiteralBoolean35");
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow34->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow34);
			// ControlFlow ControlFlow37 from WriteLine(InitialMessage) to Create A
			SingleDelegation_P_P_Operation_main_ControlFlow37->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ControlFlow37);
			SingleDelegation_P_P_Operation_main_ControlFlow37->setName("ControlFlow37");
			SingleDelegation_P_P_Operation_main_ControlFlow37->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ControlFlow37->setSource(SingleDelegation_P_P_Operation_main_WriteLine_InitialMessage);
			SingleDelegation_P_P_Operation_main_ControlFlow37->setTarget(SingleDelegation_P_P_Operation_main_Create_A);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ControlFlow37);
			// ObjectFlow ObjectFlow95 from result to target
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setThisActivityEdgePtr(SingleDelegation_P_P_Operation_main_ObjectFlow95);
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setName("ObjectFlow95");
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setSource(SingleDelegation_P_P_Operation_main_Read_a_q_result);
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setTarget(SingleDelegation_P_P_Operation_main_Call_a_q_setP_target);
				// LiteralBoolean LiteralBoolean96
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96->setThisElementPtr(SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96);
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96->setName("LiteralBoolean96");
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96->setValue(true);
			SingleDelegation_P_P_Operation_main_ObjectFlow95->setGuard(SingleDelegation_P_P_Operation_main_ObjectFlow95_LiteralBoolean96);
		SingleDelegation_P_P_Operation_main->addEdge(SingleDelegation_P_P_Operation_main_ObjectFlow95);
	SingleDelegation_P_P_Operation->addPackagedElement(SingleDelegation_P_P_Operation_main);
}
