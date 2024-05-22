/*
 * MultipleDelegation_MultipleConnector_P_P_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_MultipleConnector_P_P_OperationModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/activities/Activity.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/classification/Operation.h>
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

using namespace MultipleDelegation_MultipleConnector_P_P_Operation;
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

MultipleDelegation_MultipleConnector_P_P_OperationModel::MultipleDelegation_MultipleConnector_P_P_OperationModel()
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

MultipleDelegation_MultipleConnector_P_P_OperationModel::~MultipleDelegation_MultipleConnector_P_P_OperationModel()
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

const std::shared_ptr<MultipleDelegation_MultipleConnector_P_P_OperationModel>& MultipleDelegation_MultipleConnector_P_P_OperationModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_MultipleConnector_P_P_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_MultipleConnector_P_P_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_MultipleConnector_P_P_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_P_Operation
	 */
	MultipleDelegation_MultipleConnector_P_P_Operation.reset(new Package());
	this->addToElementRepository("MultipleDelegation_MultipleConnector_P_P_Operation", MultipleDelegation_MultipleConnector_P_P_Operation);
		MultipleDelegation_MultipleConnector_P_P_Operation_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p.reset(new Port());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2.reset(new Property());
			this->addToElementRepository("b2", MultipleDelegation_MultipleConnector_P_P_Operation_C_b2);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b2_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural0", MultipleDelegation_MultipleConnector_P_P_Operation_C_b2_LiteralUnlimitedNatural0);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b2_LiteralInteger1.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger1", MultipleDelegation_MultipleConnector_P_P_Operation_C_b2_LiteralInteger1);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4.reset(new Property());
			this->addToElementRepository("b4", MultipleDelegation_MultipleConnector_P_P_Operation_C_b4);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b4_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", MultipleDelegation_MultipleConnector_P_P_Operation_C_b4_LiteralInteger2);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b4_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural3", MultipleDelegation_MultipleConnector_P_P_Operation_C_b4_LiteralUnlimitedNatural3);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s2.reset(new Connector());
			this->addToElementRepository("s2", MultipleDelegation_MultipleConnector_P_P_Operation_C_s2);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd4.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd4", MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd4);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd5.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd5", MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd5);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3.reset(new Property());
			this->addToElementRepository("b3", MultipleDelegation_MultipleConnector_P_P_Operation_C_b3);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b3_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural6", MultipleDelegation_MultipleConnector_P_P_Operation_C_b3_LiteralUnlimitedNatural6);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b3_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", MultipleDelegation_MultipleConnector_P_P_Operation_C_b3_LiteralInteger7);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s3.reset(new Connector());
			this->addToElementRepository("s3", MultipleDelegation_MultipleConnector_P_P_Operation_C_s3);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd8.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd8", MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd8);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd9.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd9", MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd9);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s4.reset(new Connector());
			this->addToElementRepository("s4", MultipleDelegation_MultipleConnector_P_P_Operation_C_s4);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd10.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd10", MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd10);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd11.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd11", MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd11);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1.reset(new Property());
			this->addToElementRepository("b1", MultipleDelegation_MultipleConnector_P_P_Operation_C_b1);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b1_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural12", MultipleDelegation_MultipleConnector_P_P_Operation_C_b1_LiteralUnlimitedNatural12);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_b1_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", MultipleDelegation_MultipleConnector_P_P_Operation_C_b1_LiteralInteger13);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1.reset(new Connector());
			this->addToElementRepository("s1", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd14", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14);
					MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural15", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14_LiteralUnlimitedNatural15);
					MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14_LiteralInteger16);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd17", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17);
					MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17_LiteralInteger18);
					MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17_LiteralUnlimitedNatural19);
		MultipleDelegation_MultipleConnector_P_P_Operation_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_MultipleConnector_P_P_Operation_I);
			MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer);
				MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_P_Operation_S.reset(new Association());
		this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_P_Operation_S);
			MultipleDelegation_MultipleConnector_P_P_Operation_S_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_P_Operation_S_x);
			MultipleDelegation_MultipleConnector_P_P_Operation_S_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_P_Operation_S_y);
		MultipleDelegation_MultipleConnector_P_P_Operation_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Operation_B_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger21);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural22", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural22);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger23.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger23", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger23);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural24", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural24);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural25", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural25);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger26.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger26", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger26);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger27);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow28", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean29", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralInteger30);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow31", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralInteger32);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean33", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural34", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural34);
						MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result_LiteralInteger35.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger35", MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result_LiteralInteger35);
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_MultipleConnector_P_P_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer);
				MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v);
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization);
		MultipleDelegation_MultipleConnector_P_P_Operation_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_MultipleConnector_P_P_Operation_main);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow36", MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.p", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result_LiteralInteger37);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result_LiteralUnlimitedNatural38);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object_LiteralUnlimitedNatural39);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object_LiteralInteger40);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow41", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralInteger42.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger42", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralInteger42);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean43", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.b1", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object_LiteralInteger44);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural45", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object_LiteralUnlimitedNatural45);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C.reset(new ForkNode());
			this->addToElementRepository("Fork C", MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow46", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralInteger47.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger47", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralInteger47);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean48", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object_LiteralInteger49);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object_LiteralUnlimitedNatural50);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural51", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result_LiteralUnlimitedNatural51);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result_LiteralInteger52);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow53", MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow54", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralInteger55.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger55", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralInteger55);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean56", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow57", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralInteger59.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger59", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralInteger59);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow60", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean61", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralInteger62.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger62", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralInteger62);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow63", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralInteger64.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger64", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralInteger64);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean65", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call p.setP()", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural66.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural66", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural66);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target_LiteralInteger67);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v.reset(new InputPin());
				this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural68", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural68);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger69);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger70);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow71", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralInteger72.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger72", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralInteger72);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean73", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow74", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralInteger75.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger75", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralInteger75);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean76", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow77", MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralInteger79);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean80", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_.reset(new CallOperationAction());
			this->addToElementRepository("C()", MultipleDelegation_MultipleConnector_P_P_Operation_main_C_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target_LiteralInteger81.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger81", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target_LiteralInteger81);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target_LiteralUnlimitedNatural82.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural82", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target_LiteralUnlimitedNatural82);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralInteger83);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralInteger84);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural85", MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result_LiteralUnlimitedNatural85);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow86", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralInteger87.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger87", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralInteger87);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean88", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow89", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralInteger90.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger90", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralInteger90);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean91", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow92", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean93", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralInteger94.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger94", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralInteger94);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.b4", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result_LiteralInteger95);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural96", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result_LiteralUnlimitedNatural96);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object_LiteralInteger97);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural98", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object_LiteralUnlimitedNatural98);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralInteger99);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralInteger100.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger100", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralInteger100);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural101.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural101", MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural101);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.b3", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result_LiteralUnlimitedNatural102.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural102", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result_LiteralUnlimitedNatural102);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result_LiteralInteger103);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object_LiteralInteger104);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural105", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object_LiteralUnlimitedNatural105);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow106", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralInteger107.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger107", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralInteger107);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean108", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger109", MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural110.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural110", MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural110);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result_LiteralInteger111.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger111", MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result_LiteralInteger111);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow112", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean113", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralInteger114.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger114", MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralInteger114);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.b2", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result_LiteralUnlimitedNatural115.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural115", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result_LiteralUnlimitedNatural115);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result_LiteralInteger116);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object_LiteralInteger117);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object_LiteralUnlimitedNatural118.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural118", MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object_LiteralUnlimitedNatural118);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", MultipleDelegation_MultipleConnector_P_P_Operation_main_testP);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow119", MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C.reset(new CreateObjectAction());
			this->addToElementRepository("Create C", MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result_LiteralUnlimitedNatural120.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural120", MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result_LiteralUnlimitedNatural120);
					MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result_LiteralInteger121);

	// Initialize public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_P_Operation
	 */
	MultipleDelegation_MultipleConnector_P_P_Operation->setThisPackagePtr(MultipleDelegation_MultipleConnector_P_P_Operation);
	MultipleDelegation_MultipleConnector_P_P_Operation->setName("MultipleDelegation_MultipleConnector_P_P_Operation");
	MultipleDelegation_MultipleConnector_P_P_Operation->setVisibility(VisibilityKind::public_);
		// Class C
		MultipleDelegation_MultipleConnector_P_P_Operation_C->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Operation_C);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->setName("C");
		MultipleDelegation_MultipleConnector_P_P_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->setName("p");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->setType(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->isService = true;
			MultipleDelegation_MultipleConnector_P_P_Operation_C_p->addProvided(MultipleDelegation_MultipleConnector_P_P_Operation_I);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
			// Property b1
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_b1);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1->setName("b1");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b1->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_C_b1);
			// Property b2
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_b2);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2->setName("b2");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b2->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_C_b2);
			// Property b3
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_b3);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3->setName("b3");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b3->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_C_b3);
			// Property b4
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_b4);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4->setName("b4");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_b4->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_C_b4);
		
		MultipleDelegation_MultipleConnector_P_P_Operation_C_s2->setName("s2");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s2->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd4->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s2->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd4);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd5->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_b2);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s2->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s2_ConnectorEnd5);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Operation_C_s2);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s3->setName("s3");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s3->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd9->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s3->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd9);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd8->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_b3);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s3->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s3_ConnectorEnd8);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Operation_C_s3);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s4->setName("s4");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd10->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s4->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd10);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd11->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_b4);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s4->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s4_ConnectorEnd11);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Operation_C_s4);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1->setName("s1");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd17);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14->setRole(MultipleDelegation_MultipleConnector_P_P_Operation_C_b1);
				
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1->addEnd(MultipleDelegation_MultipleConnector_P_P_Operation_C_s1_ConnectorEnd14);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_s1->setType(MultipleDelegation_MultipleConnector_P_P_Operation_S);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Operation_C_s1);
			// Operation C_C
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C->setName("C_C");
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
				MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_C->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_C);
		// Interface I
		MultipleDelegation_MultipleConnector_P_P_Operation_I->setThisInterfacePtr(MultipleDelegation_MultipleConnector_P_P_Operation_I);
		MultipleDelegation_MultipleConnector_P_P_Operation_I->setName("I");
		MultipleDelegation_MultipleConnector_P_P_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_P_Operation_I->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_I);
		// Association S
		MultipleDelegation_MultipleConnector_P_P_Operation_S->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_S);
		MultipleDelegation_MultipleConnector_P_P_Operation_S->setName("S");
		MultipleDelegation_MultipleConnector_P_P_Operation_S->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Operation_S->addOwnedEnd(MultipleDelegation_MultipleConnector_P_P_Operation_S_x);
		MultipleDelegation_MultipleConnector_P_P_Operation_S->addOwnedEnd(MultipleDelegation_MultipleConnector_P_P_Operation_S_y);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_S);
		// Class B
		MultipleDelegation_MultipleConnector_P_P_Operation_B->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Operation_B);
		MultipleDelegation_MultipleConnector_P_P_Operation_B->setName("B");
		MultipleDelegation_MultipleConnector_P_P_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p->setName("p");
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				// LiteralInteger LiteralInteger20
				MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20->setName("LiteralInteger20");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20->setValue(0);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_p->setDefaultValue(MultipleDelegation_MultipleConnector_P_P_Operation_B_p_LiteralInteger20);
		MultipleDelegation_MultipleConnector_P_P_Operation_B->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Operation_B_p);
		// Activity setPActivity
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->setName("setPActivity");
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v->setName("v");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setName("value");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setValue(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p);
				// ActivityParameterNode vParameterNode
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode->setParameter(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_v);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this->setName("this");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this);
				// ObjectFlow ObjectFlow28 from result to object
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setName("ObjectFlow28");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_this_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean29
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29->setName("LiteralBoolean29");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28_LiteralBoolean29);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow28);
				// ObjectFlow ObjectFlow31 from vParameterNode to value
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setName("ObjectFlow31");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean33
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33->setName("LiteralBoolean33");
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31_LiteralBoolean33);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity_ObjectFlow31);
		MultipleDelegation_MultipleConnector_P_P_Operation_B->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization->setContract(MultipleDelegation_MultipleConnector_P_P_Operation_I);
			
		MultipleDelegation_MultipleConnector_P_P_Operation_B->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_P_Operation_B_IRealization);
		
			// Operation B_B
			MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B->setName("B_B");
			MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_B->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Operation_B_B_B);
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer_v);
			MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer->addMethod(MultipleDelegation_MultipleConnector_P_P_Operation_B_setPActivity);
		MultipleDelegation_MultipleConnector_P_P_Operation_B->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Operation_B_setP_Integer);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_B);
		// Class IImpl
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl);
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl->setName("IImpl");
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization->setContract(MultipleDelegation_MultipleConnector_P_P_Operation_I);
			
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer->setName("setP_Integer");
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v);
				MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v->setName("v");
				MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_MultipleConnector_P_P_Operation_IImpl->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl_setP_Integer);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl);
		// Activity main
		MultipleDelegation_MultipleConnector_P_P_Operation_main->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->setName("main");
		MultipleDelegation_MultipleConnector_P_P_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Operation_main_testP);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->setName("testP");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p->setName("p");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Operation_main_testP_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->addLanguage("C++");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->addLanguage("Include");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = false;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.b1.p == 4 || c.b2.p == 4 || c.b3.p == 4 || c.b4.p == 4\"<<std::endl; 	}  	// For some reason, during the first execution of the expansion region, its body is actually executed twice. 	// Because of that, the body is actually executaed 5 times in total. This if-statement covers that up until solved. 	if(index <= MAX_INDEX) 	{ 		// Test parameter p 		int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 		fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 		std::cout << \"c.b\" << index << \".p == \" << std::to_string(p) <<std::endl; 		success = success || (p == 4);  		if(index == MAX_INDEX) 		{ 			std::cout<<\"Operation call delegated: \";  			if(success) 			{ 				std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 			} 			else 			{ 				std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 			} 		} 	}  	index++;");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Operation_main_testP);
			// CallOperationAction Call p.setP()
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->setName("Call p.setP()");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->setOperation(MultipleDelegation_MultipleConnector_P_P_Operation_I_setP_Integer);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target->setName("target");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target->setType(MultipleDelegation_MultipleConnector_P_P_Operation_I);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target);
				// InputPin v
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v->setName("v");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_->addArgument(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_);
			// ReadStructuralFeatureAction Read c.p
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setName("Read c.p");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_C_p);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_IImpl);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p);
			// CallOperationAction C()
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_C_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->setName("C()");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->addResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->setOperation(MultipleDelegation_MultipleConnector_P_P_Operation_C_C_C);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target->setName("target");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_C_->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_C_);
			// ReadStructuralFeatureAction Read c.b1
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setName("Read c.b1");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_C_b1);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1);
			// ForkNode Fork C
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C->setName("Fork C");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			// ReadStructuralFeatureAction Read b.p
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setName("Read b.p");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_B_p);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p);
			// ReadStructuralFeatureAction Read c.b4
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setName("Read c.b4");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_C_b4);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4);
			// CallBehaviorAction Call testP
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP->setName("Call testP");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP->setBehavior(MultipleDelegation_MultipleConnector_P_P_Operation_main_testP);
				// InputPin p
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p->setName("p");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP->addArgument(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP);
			// ReadStructuralFeatureAction Read c.b3
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setName("Read c.b3");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_C_b3);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3);
			// ValueSpecificationAction Value(4)
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4->setName("Value(4)");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger109
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109->setName("LiteralInteger109");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109->setValue(4);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4->setValue(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_LiteralInteger109);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4);
			// ReadStructuralFeatureAction Read c.b2
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setName("Read c.b2");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Operation_C_b2);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setObject(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_B);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2);
			// CreateObjectAction Create C
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C->setName("Create C");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C->setClassifier(MultipleDelegation_MultipleConnector_P_P_Operation_C);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result->setType(MultipleDelegation_MultipleConnector_P_P_Operation_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C->setResult(MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addNode(MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C);
			// ObjectFlow ObjectFlow63 from result to p
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setName("ObjectFlow63");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean65
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65->setName("LiteralBoolean65");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63_LiteralBoolean65);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow63);
			// ObjectFlow ObjectFlow71 from result to target
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setName("ObjectFlow71");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Create_C_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__target);
				// LiteralBoolean LiteralBoolean73
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73->setName("LiteralBoolean73");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71_LiteralBoolean73);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow71);
			// ObjectFlow ObjectFlow74 from result to Fork C
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setName("ObjectFlow74");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_C__result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
				// LiteralBoolean LiteralBoolean76
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76->setName("LiteralBoolean76");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74_LiteralBoolean76);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow74);
			// ControlFlow ControlFlow36 from Read c.b1 to Read c.b2
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36->setName("ControlFlow36");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow36);
			// ControlFlow ControlFlow77 from Call p.setP() to Read c.b1
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77->setName("ControlFlow77");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP_);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow77);
			// ObjectFlow ObjectFlow78 from Fork C to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setName("ObjectFlow78");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_object);
				// LiteralBoolean LiteralBoolean80
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setName("LiteralBoolean80");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78_LiteralBoolean80);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow78);
			// ObjectFlow ObjectFlow41 from Fork C to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setName("ObjectFlow41");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_object);
				// LiteralBoolean LiteralBoolean43
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43->setName("LiteralBoolean43");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41_LiteralBoolean43);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow41);
			// ObjectFlow ObjectFlow86 from Fork C to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setName("ObjectFlow86");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_object);
				// LiteralBoolean LiteralBoolean88
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88->setName("LiteralBoolean88");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86_LiteralBoolean88);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow86);
			// ObjectFlow ObjectFlow46 from result to v
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setName("ObjectFlow46");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Value_4_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__v);
				// LiteralBoolean LiteralBoolean48
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48->setName("LiteralBoolean48");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46_LiteralBoolean48);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow46);
			// ControlFlow ControlFlow53 from Read c.b2 to Read c.b3
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53->setName("ControlFlow53");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow53);
			// ObjectFlow ObjectFlow89 from result to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setName("ObjectFlow89");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean91
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91->setName("LiteralBoolean91");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89_LiteralBoolean91);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow89);
			// ObjectFlow ObjectFlow92 from result to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setName("ObjectFlow92");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean93
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93->setName("LiteralBoolean93");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92_LiteralBoolean93);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow92);
			// ObjectFlow ObjectFlow54 from Fork C to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setName("ObjectFlow54");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b2_object);
				// LiteralBoolean LiteralBoolean56
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56->setName("LiteralBoolean56");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54_LiteralBoolean56);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow54);
			// ObjectFlow ObjectFlow106 from result to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setName("ObjectFlow106");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean108
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108->setName("LiteralBoolean108");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106_LiteralBoolean108);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow106);
			// ObjectFlow ObjectFlow57 from result to target
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setName("ObjectFlow57");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_p_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Call_p_setP__target);
				// LiteralBoolean LiteralBoolean58
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58->setName("LiteralBoolean58");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57_LiteralBoolean58);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow57);
			// ObjectFlow ObjectFlow112 from result to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setName("ObjectFlow112");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4_result);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean113
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113->setName("LiteralBoolean113");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112_LiteralBoolean113);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow112);
			// ControlFlow ControlFlow119 from Read c.b3 to Read c.b4
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119->setName("ControlFlow119");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b3);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b4);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ControlFlow119);
			// ObjectFlow ObjectFlow60 from Fork C to object
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setName("ObjectFlow60");
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setSource(MultipleDelegation_MultipleConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setTarget(MultipleDelegation_MultipleConnector_P_P_Operation_main_Read_c_b1_object);
				// LiteralBoolean LiteralBoolean61
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61->setName("LiteralBoolean61");
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60->setGuard(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60_LiteralBoolean61);
		MultipleDelegation_MultipleConnector_P_P_Operation_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Operation_main_ObjectFlow60);
	MultipleDelegation_MultipleConnector_P_P_Operation->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Operation_main);
}
