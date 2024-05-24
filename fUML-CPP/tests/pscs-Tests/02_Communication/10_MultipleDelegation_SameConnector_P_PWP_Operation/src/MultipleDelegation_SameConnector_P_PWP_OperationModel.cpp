/*
 * MultipleDelegation_SameConnector_P_PWP_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_SameConnector_P_PWP_OperationModel.h"

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

using namespace MultipleDelegation_SameConnector_P_PWP_Operation;
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

MultipleDelegation_SameConnector_P_PWP_OperationModel::MultipleDelegation_SameConnector_P_PWP_OperationModel()
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

MultipleDelegation_SameConnector_P_PWP_OperationModel::~MultipleDelegation_SameConnector_P_PWP_OperationModel()
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

const std::shared_ptr<MultipleDelegation_SameConnector_P_PWP_OperationModel>& MultipleDelegation_SameConnector_P_PWP_OperationModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_SameConnector_P_PWP_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_SameConnector_P_PWP_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_SameConnector_P_PWP_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_SameConnector_P_PWP_Operation
	 */
	MultipleDelegation_SameConnector_P_PWP_Operation.reset(new Package());
	this->addToElementRepository("MultipleDelegation_SameConnector_P_PWP_Operation", MultipleDelegation_SameConnector_P_PWP_Operation);
		MultipleDelegation_SameConnector_P_PWP_Operation_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_SameConnector_P_PWP_Operation_B);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Operation_B_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger1);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural2", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural2);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger3);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean5", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralInteger6);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow7", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean8", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralInteger9);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural10);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger11);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural12", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural12);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger13);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural14);
						MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger15);
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization);
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer);
				MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_SameConnector_P_PWP_Operation_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_SameConnector_P_PWP_Operation_I);
			MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer);
				MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v);
		MultipleDelegation_SameConnector_P_PWP_Operation_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_SameConnector_P_PWP_Operation_A);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_SameConnector_P_PWP_Operation_A_b);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_SameConnector_P_PWP_Operation_A_q);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_SameConnector_P_PWP_Operation_A_r);
				MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd16.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd16", MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd16);
				MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd17.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd17", MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd17);
		MultipleDelegation_SameConnector_P_PWP_Operation_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_SameConnector_P_PWP_Operation_main);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow18", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean19", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralInteger20);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_.reset(new CallOperationAction());
			this->addToElementRepository("C()", MultipleDelegation_SameConnector_P_PWP_Operation_main_C_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural21);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralInteger22);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result_LiteralInteger23);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target_LiteralInteger24);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural25);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object_LiteralInteger26);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural27);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural28", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural28);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result_LiteralInteger29);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural30);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result_LiteralInteger31);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural32);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object_LiteralInteger33);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow34", MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow35", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean36", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralInteger37.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger37", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralInteger37);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C.reset(new CreateObjectAction());
			this->addToElementRepository("Create C", MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural38);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result_LiteralInteger39);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", MultipleDelegation_SameConnector_P_PWP_Operation_main_testP);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C.reset(new ForkNode());
			this->addToElementRepository("Fork C", MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow40", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralInteger41.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger41", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralInteger41);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean42", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow43", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralInteger45.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger45", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralInteger45);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow46", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralInteger47.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger47", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralInteger47);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean48", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow49", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralInteger50.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger50", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralInteger50);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean51", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call p.setP()", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v.reset(new InputPin());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger52);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralInteger53);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural54);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralInteger55);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural56", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural56);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow57", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralInteger59.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger59", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralInteger59);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.p", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural60);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result_LiteralInteger61);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object_LiteralInteger62);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural63);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural64", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural64);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger65);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p_LiteralInteger66);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow67", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean68", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralInteger69.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger69", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralInteger69);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow70", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean71", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralInteger72.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger72", MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralInteger72);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result_LiteralInteger73);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural74.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural74", MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural74);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger75", MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a[]", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object_LiteralInteger76);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural77", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object_LiteralUnlimitedNatural77);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result_LiteralInteger78.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger78", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result_LiteralInteger78);
					MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result_LiteralUnlimitedNatural79.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural79", MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result_LiteralUnlimitedNatural79);
		MultipleDelegation_SameConnector_P_PWP_Operation_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_SameConnector_P_PWP_Operation_R);
			MultipleDelegation_SameConnector_P_PWP_Operation_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_PWP_Operation_R_x);
			MultipleDelegation_SameConnector_P_PWP_Operation_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_PWP_Operation_R_y);
		MultipleDelegation_SameConnector_P_PWP_Operation_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a.reset(new Property());
			this->addToElementRepository("a", MultipleDelegation_SameConnector_P_PWP_Operation_C_a);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_a_LiteralUnlimitedNatural80.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural80", MultipleDelegation_SameConnector_P_PWP_Operation_C_a_LiteralUnlimitedNatural80);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_a_LiteralInteger81.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger81", MultipleDelegation_SameConnector_P_PWP_Operation_C_a_LiteralInteger81);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p.reset(new Port());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Operation_C_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_u.reset(new Connector());
			this->addToElementRepository("u", MultipleDelegation_SameConnector_P_PWP_Operation_C_u);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd82", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82);
					MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82_LiteralInteger83);
					MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82_LiteralUnlimitedNatural84);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd85", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85);
					MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural86", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85_LiteralUnlimitedNatural86);
					MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85_LiteralInteger87);
		MultipleDelegation_SameConnector_P_PWP_Operation_U.reset(new Association());
		this->addToElementRepository("U", MultipleDelegation_SameConnector_P_PWP_Operation_U);
			MultipleDelegation_SameConnector_P_PWP_Operation_U_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_PWP_Operation_U_y);
			MultipleDelegation_SameConnector_P_PWP_Operation_U_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_PWP_Operation_U_x);

	// Initialize public members
	/*
	 * Model MultipleDelegation_SameConnector_P_PWP_Operation
	 */
	MultipleDelegation_SameConnector_P_PWP_Operation->setThisPackagePtr(MultipleDelegation_SameConnector_P_PWP_Operation);
	MultipleDelegation_SameConnector_P_PWP_Operation->setName("MultipleDelegation_SameConnector_P_PWP_Operation");
	MultipleDelegation_SameConnector_P_PWP_Operation->setVisibility(VisibilityKind::public_);
		// Class B
		MultipleDelegation_SameConnector_P_PWP_Operation_B->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Operation_B);
		MultipleDelegation_SameConnector_P_PWP_Operation_B->setName("B");
		MultipleDelegation_SameConnector_P_PWP_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p->setName("p");
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				// LiteralInteger LiteralInteger0
				MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0->setName("LiteralInteger0");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0->setValue(0);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_p->setDefaultValue(MultipleDelegation_SameConnector_P_PWP_Operation_B_p_LiteralInteger0);
		MultipleDelegation_SameConnector_P_PWP_Operation_B->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Operation_B_p);
		// Activity setPActivity
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->setName("setPActivity");
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v->setName("v");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode->setParameter(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_v);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this->setName("this");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Operation_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setObject(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setName("value");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setValue(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow4 from vParameterNode to value
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setName("ObjectFlow4");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean5
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setName("LiteralBoolean5");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4_LiteralBoolean5);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow4);
				// ObjectFlow ObjectFlow7 from result to object
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setName("ObjectFlow7");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_this_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean8
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setName("LiteralBoolean8");
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7_LiteralBoolean8);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity_ObjectFlow7);
		MultipleDelegation_SameConnector_P_PWP_Operation_B->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization->setContract(MultipleDelegation_SameConnector_P_PWP_Operation_I);
			
		MultipleDelegation_SameConnector_P_PWP_Operation_B->addInterfaceRealization(MultipleDelegation_SameConnector_P_PWP_Operation_B_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v);
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer_v);
			MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer->addMethod(MultipleDelegation_SameConnector_P_PWP_Operation_B_setPActivity);
		MultipleDelegation_SameConnector_P_PWP_Operation_B->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Operation_B_setP_Integer);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_B);
		// Class IImpl
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl->setName("IImpl");
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization->setContract(MultipleDelegation_SameConnector_P_PWP_Operation_I);
			
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl->addInterfaceRealization(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v);
				MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_SameConnector_P_PWP_Operation_IImpl->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl_setP_Integer);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
		// Interface I
		MultipleDelegation_SameConnector_P_PWP_Operation_I->setThisInterfacePtr(MultipleDelegation_SameConnector_P_PWP_Operation_I);
		MultipleDelegation_SameConnector_P_PWP_Operation_I->setName("I");
		MultipleDelegation_SameConnector_P_PWP_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v);
				MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer_v);
		MultipleDelegation_SameConnector_P_PWP_Operation_I->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_I);
		// Class A
		MultipleDelegation_SameConnector_P_PWP_Operation_A->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Operation_A);
		MultipleDelegation_SameConnector_P_PWP_Operation_A->setName("A");
		MultipleDelegation_SameConnector_P_PWP_Operation_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_A_q);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->setName("q");
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->setType(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->isService = true;
			MultipleDelegation_SameConnector_P_PWP_Operation_A_q->addProvided(MultipleDelegation_SameConnector_P_PWP_Operation_I);
		MultipleDelegation_SameConnector_P_PWP_Operation_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Operation_A_q);
			// Property b
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_A_b);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b->setName("b");
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_PWP_Operation_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Operation_A_b);
		
		MultipleDelegation_SameConnector_P_PWP_Operation_A_r->setName("r");
			MultipleDelegation_SameConnector_P_PWP_Operation_A_r->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd16->setRole(MultipleDelegation_SameConnector_P_PWP_Operation_A_q);
				
			MultipleDelegation_SameConnector_P_PWP_Operation_A_r->addEnd(MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd16);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd17->setRole(MultipleDelegation_SameConnector_P_PWP_Operation_A_b);
				
			MultipleDelegation_SameConnector_P_PWP_Operation_A_r->addEnd(MultipleDelegation_SameConnector_P_PWP_Operation_A_r_ConnectorEnd17);
			MultipleDelegation_SameConnector_P_PWP_Operation_A_r->setType(MultipleDelegation_SameConnector_P_PWP_Operation_R);
		MultipleDelegation_SameConnector_P_PWP_Operation_A->addOwnedConnector(MultipleDelegation_SameConnector_P_PWP_Operation_A_r);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_A);
		// Activity main
		MultipleDelegation_SameConnector_P_PWP_Operation_main->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->setName("main");
		MultipleDelegation_SameConnector_P_PWP_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Operation_main_testP);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->setName("testP");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p->setName("p");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_main_testP_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->addLanguage("C++");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->addLanguage("Include");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = false;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.a[1].b.p == 4 || c.a[2].b.p == 4 || c.a[3].b.p == 4 || c.a[4].b.c == 4\"<<std::endl; 	}  	// For some reason, during the first execution of the expansion region, its body is actually executed twice. 	// Because of that, the body is actually executaed 5 times in total. This if-statement covers that up until solved. 	if(index <= MAX_INDEX) 	{ 		// Test parameter p 		int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 		fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 		std::cout << \"c.a[\" << index << \"].b.p == \" << std::to_string(p) <<std::endl; 		success = success || (p == 4);  		if(index == MAX_INDEX) 		{ 			std::cout<<\"Operation call delegated: \";  			if(success) 			{ 				std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 			} 			else 			{ 				std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 			} 		} 	}  	index++;");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Operation_main_testP);
			// ForkNode Fork C
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C->setName("Fork C");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
			// CallOperationAction C()
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_C_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->setName("C()");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->addResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->setOperation(MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C);
				// InputPin target
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target->setName("target");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_C_->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_C_);
			// CallOperationAction Call p.setP()
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->setName("Call p.setP()");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->setOperation(MultipleDelegation_SameConnector_P_PWP_Operation_I_setP_Integer);
				// InputPin target
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target->setName("target");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target->setType(MultipleDelegation_SameConnector_P_PWP_Operation_I);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target);
				// InputPin v
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v->setName("v");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_->addArgument(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_);
			// ReadStructuralFeatureAction Read a.b
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setName("Read a.b");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Operation_A_b);
				// InputPin object
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object->setName("object");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object->setType(MultipleDelegation_SameConnector_P_PWP_Operation_A);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setObject(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b);
			// ReadStructuralFeatureAction Read c.p
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setName("Read c.p");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Operation_C_p);
				// InputPin object
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object->setName("object");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setObject(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p);
			// ReadStructuralFeatureAction Read b.p
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setName("Read b.p");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Operation_B_p);
				// InputPin object
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object->setName("object");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Operation_B);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setObject(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p);
			// CallBehaviorAction Call testP
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP->setName("Call testP");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP->setBehavior(MultipleDelegation_SameConnector_P_PWP_Operation_main_testP);
				// InputPin p
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p->setName("p");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP->addArgument(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP);
			// CreateObjectAction Create C
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C->setName("Create C");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C->setClassifier(MultipleDelegation_SameConnector_P_PWP_Operation_C);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C);
			// ValueSpecificationAction Value(4)
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4->setName("Value(4)");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger75
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75->setName("LiteralInteger75");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75->setValue(4);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4->setValue(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_LiteralInteger75);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4);
			// ReadStructuralFeatureAction Read c.a[]
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setName("Read c.a[]");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Operation_C_a);
				// InputPin object
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object->setName("object");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setObject(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_A);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setUpper(4);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result->setLower(4);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_->setResult(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addNode(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_);
			// ObjectFlow ObjectFlow18 from Fork C to object
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setName("ObjectFlow18");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__object);
				// LiteralBoolean LiteralBoolean19
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19->setName("LiteralBoolean19");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18_LiteralBoolean19);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow18);
			// ObjectFlow ObjectFlow40 from result to object
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setName("ObjectFlow40");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean42
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42->setName("LiteralBoolean42");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40_LiteralBoolean42);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow40);
			// ObjectFlow ObjectFlow43 from result to object
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setName("ObjectFlow43");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a__result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean44
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44->setName("LiteralBoolean44");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43_LiteralBoolean44);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow43);
			// ObjectFlow ObjectFlow46 from result to target
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setName("ObjectFlow46");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Create_C_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__target);
				// LiteralBoolean LiteralBoolean48
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48->setName("LiteralBoolean48");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46_LiteralBoolean48);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow46);
			// ObjectFlow ObjectFlow49 from Fork C to object
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setName("ObjectFlow49");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_object);
				// LiteralBoolean LiteralBoolean51
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51->setName("LiteralBoolean51");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49_LiteralBoolean51);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow49);
			// ObjectFlow ObjectFlow57 from result to target
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setName("ObjectFlow57");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_p_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__target);
				// LiteralBoolean LiteralBoolean58
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setName("LiteralBoolean58");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57_LiteralBoolean58);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow57);
			// ControlFlow ControlFlow34 from Call p.setP() to Read c.a[]
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34->setName("ControlFlow34");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP_);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_c_a_);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ControlFlow34);
			// ObjectFlow ObjectFlow67 from result to Fork C
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setName("ObjectFlow67");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_C__result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Fork_C);
				// LiteralBoolean LiteralBoolean68
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68->setName("LiteralBoolean68");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67_LiteralBoolean68);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow67);
			// ObjectFlow ObjectFlow35 from result to v
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setName("ObjectFlow35");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Value_4_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_p_setP__v);
				// LiteralBoolean LiteralBoolean36
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36->setName("LiteralBoolean36");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35_LiteralBoolean36);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow35);
			// ObjectFlow ObjectFlow70 from result to p
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setName("ObjectFlow70");
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setSource(MultipleDelegation_SameConnector_P_PWP_Operation_main_Read_b_p_result);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setTarget(MultipleDelegation_SameConnector_P_PWP_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean71
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71->setName("LiteralBoolean71");
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70->setGuard(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70_LiteralBoolean71);
		MultipleDelegation_SameConnector_P_PWP_Operation_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Operation_main_ObjectFlow70);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_main);
		// Association R
		MultipleDelegation_SameConnector_P_PWP_Operation_R->setThisAssociationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_R);
		MultipleDelegation_SameConnector_P_PWP_Operation_R->setName("R");
		MultipleDelegation_SameConnector_P_PWP_Operation_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Operation_R->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Operation_R_x);
		MultipleDelegation_SameConnector_P_PWP_Operation_R->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Operation_R_y);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_R);
		// Class C
		MultipleDelegation_SameConnector_P_PWP_Operation_C->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Operation_C);
		MultipleDelegation_SameConnector_P_PWP_Operation_C->setName("C");
		MultipleDelegation_SameConnector_P_PWP_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_C_p);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->setName("p");
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->setType(MultipleDelegation_SameConnector_P_PWP_Operation_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->isService = true;
			MultipleDelegation_SameConnector_P_PWP_Operation_C_p->addProvided(MultipleDelegation_SameConnector_P_PWP_Operation_I);
		MultipleDelegation_SameConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Operation_C_p);
			// Property a
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_C_a);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setName("a");
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setUpper(4);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setLower(4);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setType(MultipleDelegation_SameConnector_P_PWP_Operation_A);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_a->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_PWP_Operation_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Operation_C_a);
		
		MultipleDelegation_SameConnector_P_PWP_Operation_C_u->setName("u");
			MultipleDelegation_SameConnector_P_PWP_Operation_C_u->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82->setUpper(-1);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82->setRole(MultipleDelegation_SameConnector_P_PWP_Operation_C_p);
				
			MultipleDelegation_SameConnector_P_PWP_Operation_C_u->addEnd(MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd82);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85->setUpper(-1);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85->setLower(4);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85->setRole(MultipleDelegation_SameConnector_P_PWP_Operation_A_q);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85->setPartWithPort(MultipleDelegation_SameConnector_P_PWP_Operation_C_a);
				
			MultipleDelegation_SameConnector_P_PWP_Operation_C_u->addEnd(MultipleDelegation_SameConnector_P_PWP_Operation_C_u_ConnectorEnd85);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_u->setType(MultipleDelegation_SameConnector_P_PWP_Operation_U);
		MultipleDelegation_SameConnector_P_PWP_Operation_C->addOwnedConnector(MultipleDelegation_SameConnector_P_PWP_Operation_C_u);
			// Operation C_C
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C->setName("C_C");
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result->setType(MultipleDelegation_SameConnector_P_PWP_Operation_C);
				MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C_result);
		MultipleDelegation_SameConnector_P_PWP_Operation_C->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Operation_C_C_C);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_C);
		// Association U
		MultipleDelegation_SameConnector_P_PWP_Operation_U->setThisAssociationPtr(MultipleDelegation_SameConnector_P_PWP_Operation_U);
		MultipleDelegation_SameConnector_P_PWP_Operation_U->setName("U");
		MultipleDelegation_SameConnector_P_PWP_Operation_U->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Operation_U->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Operation_U_x);
		MultipleDelegation_SameConnector_P_PWP_Operation_U->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Operation_U_y);
	MultipleDelegation_SameConnector_P_PWP_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Operation_U);
}
