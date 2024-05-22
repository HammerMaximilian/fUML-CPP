/*
 * MultipleDelegation_MultipleConnector_P_PWP_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_MultipleConnector_P_PWP_OperationModel.h"

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
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MultipleDelegation_MultipleConnector_P_PWP_Operation;
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

MultipleDelegation_MultipleConnector_P_PWP_OperationModel::MultipleDelegation_MultipleConnector_P_PWP_OperationModel()
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

MultipleDelegation_MultipleConnector_P_PWP_OperationModel::~MultipleDelegation_MultipleConnector_P_PWP_OperationModel()
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

const std::shared_ptr<MultipleDelegation_MultipleConnector_P_PWP_OperationModel>& MultipleDelegation_MultipleConnector_P_PWP_OperationModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_MultipleConnector_P_PWP_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_MultipleConnector_P_PWP_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_MultipleConnector_P_PWP_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_PWP_Operation
	 */
	MultipleDelegation_MultipleConnector_P_PWP_Operation.reset(new Package());
	this->addToElementRepository("MultipleDelegation_MultipleConnector_P_PWP_Operation", MultipleDelegation_MultipleConnector_P_PWP_Operation);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger1);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural2", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural2);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger3);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean5", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralInteger6);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow7", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean8", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralInteger9);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural10);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger11);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural12", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural12);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger13);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural14);
						MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger15);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd16.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd16", MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd16);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd17.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd17", MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd17);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_MultipleConnector_P_PWP_Operation_R);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_PWP_Operation_R_x);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_PWP_Operation_R_y);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_MultipleConnector_P_PWP_Operation_main);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural18);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result_LiteralInteger19);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C.reset(new CreateObjectAction());
			this->addToElementRepository("Create C", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural21);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result_LiteralInteger22);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow23", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralInteger24.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger24", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralInteger24);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean25", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural26", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural26);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger27);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger28);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow29", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow30", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean31", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralInteger32.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger32", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralInteger32);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.p", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural33", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural33);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object_LiteralInteger34.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger34", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object_LiteralInteger34);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result_LiteralInteger35);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural36.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural36", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural36);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a4", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result_LiteralInteger37);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result_LiteralUnlimitedNatural38);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object_LiteralInteger39);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object_LiteralUnlimitedNatural40);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow41", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralInteger42.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger42", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralInteger42);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean43", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow44", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean45", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralInteger46.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger46", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralInteger46);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a3", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result_LiteralInteger47);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural48", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result_LiteralUnlimitedNatural48);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object_LiteralInteger49);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object_LiteralUnlimitedNatural50);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow51", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralInteger52.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger52", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralInteger52);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean53", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow54", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralInteger55.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger55", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralInteger55);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean56", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow57", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralInteger59.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger59", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralInteger59);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C.reset(new ForkNode());
			this->addToElementRepository("Fork C", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a2", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result_LiteralInteger60);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural61", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result_LiteralUnlimitedNatural61);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural62", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object_LiteralUnlimitedNatural62);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object_LiteralInteger63);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow64", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean65", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralInteger66);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow67", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow68", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow69", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean70", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralInteger71.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger71", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralInteger71);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow72", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean73", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger74", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralInteger74);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_.reset(new CallOperationAction());
			this->addToElementRepository("C()", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralInteger75);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralInteger76);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural77", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural77);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural78", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural78);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target_LiteralInteger79.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger79", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target_LiteralInteger79);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow80", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean81", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralInteger82.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger82", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralInteger82);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow83", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralInteger84.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger84", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralInteger84);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean85", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow86", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean87", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralInteger88.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger88", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralInteger88);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow89", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow90", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean91", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralInteger92.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger92", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralInteger92);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural93);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result_LiteralInteger94);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object_LiteralInteger95);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural96", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural96);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a1", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural97", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object_LiteralUnlimitedNatural97);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object_LiteralInteger98);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result_LiteralInteger99);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural100", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result_LiteralUnlimitedNatural100);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow101", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralInteger102.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger102", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralInteger102);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean103", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call p.setP()", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v.reset(new InputPin());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger104);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural105", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural105);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger106.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger106", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger106);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralInteger107.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger107", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralInteger107);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural108", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural108);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural109", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural109);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result_LiteralInteger110);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object_LiteralInteger111.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger111", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object_LiteralInteger111);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural112", MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural112);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3.reset(new Property());
			this->addToElementRepository("a3", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1.reset(new Connector());
			this->addToElementRepository("u1", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd113.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd113", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd113);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd114.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd114", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd114);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2.reset(new Connector());
			this->addToElementRepository("u2", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd115.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd115", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd115);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd116.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd116", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd116);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3.reset(new Connector());
			this->addToElementRepository("u3", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd117.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd117", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd117);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd118.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd118", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd118);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4.reset(new Connector());
			this->addToElementRepository("u4", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd119.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd119", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd119);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd120.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd120", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd120);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2.reset(new Property());
			this->addToElementRepository("a2", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1.reset(new Property());
			this->addToElementRepository("a1", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p.reset(new Port());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4.reset(new Property());
			this->addToElementRepository("a4", MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U.reset(new Association());
		this->addToElementRepository("U", MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_U_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_PWP_Operation_U_y);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_U_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_PWP_Operation_U_x);

	// Initialize public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_PWP_Operation
	 */
	MultipleDelegation_MultipleConnector_P_PWP_Operation->setThisPackagePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->setName("MultipleDelegation_MultipleConnector_P_PWP_Operation");
	MultipleDelegation_MultipleConnector_P_PWP_Operation->setVisibility(VisibilityKind::public_);
		// Class B
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->setName("B");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p->setName("p");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				// LiteralInteger LiteralInteger0
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0->setName("LiteralInteger0");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0->setValue(0);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p->setDefaultValue(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p_LiteralInteger0);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p);
		// Activity setPActivity
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->setName("setPActivity");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v->setName("v");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_v);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this->setName("this");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setName("value");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setValue(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow4 from vParameterNode to value
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setName("ObjectFlow4");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean5
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setName("LiteralBoolean5");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
				// ObjectFlow ObjectFlow7 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setName("ObjectFlow7");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_this_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean8
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setName("LiteralBoolean8");
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization->setContract(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
			
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer_v);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer->addMethod(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setPActivity);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_B->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_setP_Integer);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
		// Class IImpl
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl->setName("IImpl");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization->setContract(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
			
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl_setP_Integer);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
		// Interface I
		MultipleDelegation_MultipleConnector_P_PWP_Operation_I->setThisInterfacePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_I->setName("I");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_I->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
		// Class A
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->setName("A");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->setName("q");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->isService = true;
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q->addProvided(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
			// Property b
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b->setName("b");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b);
		
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r->setName("r");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd16->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd16);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd17->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r_ConnectorEnd17);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_R);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_r);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
		// Association R
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_R);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R->setName("R");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_R_x);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_R_y);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_R);
		// Activity main
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->setName("main");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->setName("testP");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p->setName("p");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->addLanguage("C++");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->addLanguage("Include");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = false;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.a1.b.p == 4 || c.a2.b.p == 4 || c.a3.b.p == 4 || c.a4.b.c == 4\"<<std::endl; 	}  	// For some reason, during the first execution of the expansion region, its body is actually executed twice. 	// Because of that, the body is actually executaed 5 times in total. This if-statement covers that up until solved. 	if(index <= MAX_INDEX) 	{ 		// Test parameter p 		int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 		fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 		std::cout << \"c.a\" << index << \".b.p == \" << std::to_string(p) <<std::endl; 		success = success || (p == 4);  		if(index == MAX_INDEX) 		{ 			std::cout<<\"Operation call delegated: \";  			if(success) 			{ 				std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 			} 			else 			{ 				std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 			} 		} 	}  	index++;");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP);
			// ReadStructuralFeatureAction Read c.a2
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setName("Read c.a2");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2);
			// ValueSpecificationAction Value(4)
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4->setName("Value(4)");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger20
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20->setName("LiteralInteger20");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20->setValue(4);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4->setValue(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_LiteralInteger20);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4);
			// CreateObjectAction Create C
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C->setName("Create C");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C->setClassifier(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C);
			// CallBehaviorAction Call testP
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP->setName("Call testP");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP->setBehavior(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_testP);
				// InputPin p
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p->setName("p");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP->addArgument(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP);
			// ReadStructuralFeatureAction Read c.p
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setName("Read c.p");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p);
			// ReadStructuralFeatureAction Read c.a4
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setName("Read c.a4");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4);
			// CallOperationAction C()
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->setName("C()");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->addResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->setOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target->setName("target");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C_);
			// ReadStructuralFeatureAction Read b.p
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setName("Read b.p");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_B_p);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p);
			// ReadStructuralFeatureAction Read c.a1
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setName("Read c.a1");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1);
			// ReadStructuralFeatureAction Read c.a3
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setName("Read c.a3");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3);
			// CallOperationAction Call p.setP()
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->setName("Call p.setP()");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->setOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_I_setP_Integer);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target->setName("target");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target);
				// InputPin v
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v->setName("v");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_->addArgument(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_);
			// ReadStructuralFeatureAction Read a.b
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setName("Read a.b");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_b);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setObject(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_B);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b->setResult(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b);
			// ForkNode Fork C
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C->setName("Fork C");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			// ObjectFlow ObjectFlow64 from result to target
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setName("ObjectFlow64");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__target);
				// LiteralBoolean LiteralBoolean65
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65->setName("LiteralBoolean65");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64_LiteralBoolean65);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow64);
			// ControlFlow ControlFlow67 from Read c.a2 to Read c.a3
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67->setName("ControlFlow67");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow67);
			// ControlFlow ControlFlow68 from Read c.a3 to Read c.a4
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68->setName("ControlFlow68");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow68);
			// ObjectFlow ObjectFlow69 from result to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setName("ObjectFlow69");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean70
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70->setName("LiteralBoolean70");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69_LiteralBoolean70);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow69);
			// ObjectFlow ObjectFlow23 from Fork C to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setName("ObjectFlow23");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_object);
				// LiteralBoolean LiteralBoolean25
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25->setName("LiteralBoolean25");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23_LiteralBoolean25);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow23);
			// ControlFlow ControlFlow29 from Read c.a1 to Read c.a2
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29->setName("ControlFlow29");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow29);
			// ObjectFlow ObjectFlow30 from Fork C to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setName("ObjectFlow30");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_p_object);
				// LiteralBoolean LiteralBoolean31
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31->setName("LiteralBoolean31");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30_LiteralBoolean31);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow30);
			// ObjectFlow ObjectFlow72 from result to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setName("ObjectFlow72");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean73
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72_LiteralBoolean73);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow72);
			// ObjectFlow ObjectFlow80 from result to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setName("ObjectFlow80");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean81
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81->setName("LiteralBoolean81");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80_LiteralBoolean81);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow80);
			// ObjectFlow ObjectFlow41 from Fork C to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setName("ObjectFlow41");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_object);
				// LiteralBoolean LiteralBoolean43
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43->setName("LiteralBoolean43");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41_LiteralBoolean43);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow41);
			// ObjectFlow ObjectFlow83 from result to target
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setName("ObjectFlow83");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Create_C_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__target);
				// LiteralBoolean LiteralBoolean85
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85->setName("LiteralBoolean85");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83_LiteralBoolean85);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow83);
			// ObjectFlow ObjectFlow86 from result to Fork C
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setName("ObjectFlow86");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_C__result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
				// LiteralBoolean LiteralBoolean87
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87->setName("LiteralBoolean87");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86_LiteralBoolean87);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow86);
			// ObjectFlow ObjectFlow44 from Fork C to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setName("ObjectFlow44");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_object);
				// LiteralBoolean LiteralBoolean45
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45->setName("LiteralBoolean45");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44_LiteralBoolean45);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow44);
			// ControlFlow ControlFlow89 from Call p.setP() to Read c.a1
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89->setName("ControlFlow89");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a1);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ControlFlow89);
			// ObjectFlow ObjectFlow90 from result to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setName("ObjectFlow90");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a4_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean91
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91->setName("LiteralBoolean91");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90_LiteralBoolean91);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow90);
			// ObjectFlow ObjectFlow51 from Fork C to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setName("ObjectFlow51");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a3_object);
				// LiteralBoolean LiteralBoolean53
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53->setName("LiteralBoolean53");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51_LiteralBoolean53);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow51);
			// ObjectFlow ObjectFlow54 from result to p
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setName("ObjectFlow54");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_b_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean56
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56->setName("LiteralBoolean56");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54_LiteralBoolean56);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow54);
			// ObjectFlow ObjectFlow101 from result to object
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setName("ObjectFlow101");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_c_a2_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean103
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103->setName("LiteralBoolean103");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101_LiteralBoolean103);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow101);
			// ObjectFlow ObjectFlow57 from result to v
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setName("ObjectFlow57");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setSource(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Value_4_result);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_Call_p_setP__v);
				// LiteralBoolean LiteralBoolean58
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setName("LiteralBoolean58");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Operation_main_ObjectFlow57);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_main);
		// Class C
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->setName("C");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->setName("p");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->isService = true;
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p->addProvided(MultipleDelegation_MultipleConnector_P_PWP_Operation_I);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
			// Property a1
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1->setName("a1");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1);
			// Property a2
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2->setName("a2");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2);
			// Property a3
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3->setName("a3");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3);
			// Property a4
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4->setName("a4");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_A);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4);
		
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1->setName("u1");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd113->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd113);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd114->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd114->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a1);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1_ConnectorEnd114);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u1);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2->setName("u2");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd116->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd116);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd115->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd115->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a2);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2_ConnectorEnd115);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u2);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3->setName("u3");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd117->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd117);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd118->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd118->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a3);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3_ConnectorEnd118);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u3);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4->setName("u4");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd120->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd120);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd119->setRole(MultipleDelegation_MultipleConnector_P_PWP_Operation_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd119->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_a4);
				
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4_ConnectorEnd119);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_u4);
			// Operation C_C
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C->setName("C_C");
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
				MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C_result);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_C->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Operation_C_C_C);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_C);
		// Association U
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U->setName("U");
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_U_x);
		MultipleDelegation_MultipleConnector_P_PWP_Operation_U->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Operation_U_y);
	MultipleDelegation_MultipleConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Operation_U);
}
