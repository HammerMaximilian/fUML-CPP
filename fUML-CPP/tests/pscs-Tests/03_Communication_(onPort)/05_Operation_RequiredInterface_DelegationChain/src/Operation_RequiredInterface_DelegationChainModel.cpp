/*
 * Operation_RequiredInterface_DelegationChainModel.cpp
 * 
 * Auto-generated file
 */

#include "Operation_RequiredInterface_DelegationChainModel.h"

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
#include <uml/structuredclassifiers/Association.h>
#include <uml/structuredclassifiers/Connector.h>
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

using namespace Operation_RequiredInterface_DelegationChain;
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

Operation_RequiredInterface_DelegationChainModel::Operation_RequiredInterface_DelegationChainModel()
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

Operation_RequiredInterface_DelegationChainModel::~Operation_RequiredInterface_DelegationChainModel()
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

const std::shared_ptr<Operation_RequiredInterface_DelegationChainModel>& Operation_RequiredInterface_DelegationChainModel::Instance()
{
	static std::shared_ptr<Operation_RequiredInterface_DelegationChainModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Operation_RequiredInterface_DelegationChainModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Operation_RequiredInterface_DelegationChainModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Operation_RequiredInterface_DelegationChain
	 */
	Operation_RequiredInterface_DelegationChain.reset(new Package());
	this->addToElementRepository("Operation_RequiredInterface_DelegationChain", Operation_RequiredInterface_DelegationChain);
		Operation_RequiredInterface_DelegationChain_C.reset(new Class_());
		this->addToElementRepository("C", Operation_RequiredInterface_DelegationChain_C);
			Operation_RequiredInterface_DelegationChain_C_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_DelegationChain_C_setP_Integer);
				Operation_RequiredInterface_DelegationChain_C_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_C_setP_Integer_v);
			Operation_RequiredInterface_DelegationChain_C_q.reset(new Port());
			this->addToElementRepository("q", Operation_RequiredInterface_DelegationChain_C_q);
			Operation_RequiredInterface_DelegationChain_C_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_DelegationChain_C_IRealization);
			Operation_RequiredInterface_DelegationChain_C_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_DelegationChain_C_setPActivity);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralInteger2);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode_LiteralInteger3);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralInteger5);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean6", Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_DelegationChain_C_setPActivity_this);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralInteger7);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural8", Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result_LiteralUnlimitedNatural8);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_C_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger9", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12);
						Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13);
		Operation_RequiredInterface_DelegationChain_S.reset(new Association());
		this->addToElementRepository("S", Operation_RequiredInterface_DelegationChain_S);
			Operation_RequiredInterface_DelegationChain_S_y.reset(new Property());
			this->addToElementRepository("y", Operation_RequiredInterface_DelegationChain_S_y);
			Operation_RequiredInterface_DelegationChain_S_x.reset(new Property());
			this->addToElementRepository("x", Operation_RequiredInterface_DelegationChain_S_x);
		Operation_RequiredInterface_DelegationChain_main.reset(new Activity());
		this->addToElementRepository("main", Operation_RequiredInterface_DelegationChain_main);
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow14", Operation_RequiredInterface_DelegationChain_main_ControlFlow14);
			Operation_RequiredInterface_DelegationChain_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", Operation_RequiredInterface_DelegationChain_main_Value_4);
				Operation_RequiredInterface_DelegationChain_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Value_4_result);
					Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural15", Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralUnlimitedNatural15);
					Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", Operation_RequiredInterface_DelegationChain_main_Value_4_result_LiteralInteger16);
				Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger17", Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17);
			Operation_RequiredInterface_DelegationChain_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", Operation_RequiredInterface_DelegationChain_main_Read_a_b);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_main_Read_a_b_object);
					Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralInteger18);
					Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", Operation_RequiredInterface_DelegationChain_main_Read_a_b_object_LiteralUnlimitedNatural19);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Read_a_b_result);
					Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralInteger20);
					Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", Operation_RequiredInterface_DelegationChain_main_Read_a_b_result_LiteralUnlimitedNatural21);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow22", Operation_RequiredInterface_DelegationChain_main_ObjectFlow22);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralInteger23.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger23", Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralInteger23);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean24", Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24);
			Operation_RequiredInterface_DelegationChain_main_Create_D.reset(new CreateObjectAction());
			this->addToElementRepository("Create D", Operation_RequiredInterface_DelegationChain_main_Create_D);
				Operation_RequiredInterface_DelegationChain_main_Create_D_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Create_D_result);
					Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralInteger25);
					Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural26", Operation_RequiredInterface_DelegationChain_main_Create_D_result_LiteralUnlimitedNatural26);
			Operation_RequiredInterface_DelegationChain_main_Fork_d.reset(new ForkNode());
			this->addToElementRepository("Fork d", Operation_RequiredInterface_DelegationChain_main_Fork_d);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow27", Operation_RequiredInterface_DelegationChain_main_ObjectFlow27);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean28", Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralInteger29.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger29", Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralInteger29);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow30", Operation_RequiredInterface_DelegationChain_main_ObjectFlow30);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralInteger31);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean32", Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32);
			Operation_RequiredInterface_DelegationChain_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", Operation_RequiredInterface_DelegationChain_main_Read_b_p);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Read_b_p_result);
					Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralInteger33);
					Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", Operation_RequiredInterface_DelegationChain_main_Read_b_p_result_LiteralUnlimitedNatural34);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_main_Read_b_p_object);
					Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural35", Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralUnlimitedNatural35);
					Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", Operation_RequiredInterface_DelegationChain_main_Read_b_p_object_LiteralInteger36);
			Operation_RequiredInterface_DelegationChain_main_Read_d_a.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.a", Operation_RequiredInterface_DelegationChain_main_Read_d_a);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Read_d_a_result);
					Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralInteger37);
					Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", Operation_RequiredInterface_DelegationChain_main_Read_d_a_result_LiteralUnlimitedNatural38);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_main_Read_d_a_object);
					Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralInteger39);
					Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", Operation_RequiredInterface_DelegationChain_main_Read_d_a_object_LiteralUnlimitedNatural40);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow41", Operation_RequiredInterface_DelegationChain_main_ObjectFlow41);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean42", Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralInteger43);
			Operation_RequiredInterface_DelegationChain_main_Read_e_c.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read e.c", Operation_RequiredInterface_DelegationChain_main_Read_e_c);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Read_e_c_result);
					Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralUnlimitedNatural44);
					Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", Operation_RequiredInterface_DelegationChain_main_Read_e_c_result_LiteralInteger45);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_main_Read_e_c_object);
					Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralUnlimitedNatural46);
					Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Operation_RequiredInterface_DelegationChain_main_Read_e_c_object_LiteralInteger47);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow48", Operation_RequiredInterface_DelegationChain_main_ObjectFlow48);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralInteger49.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger49", Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralInteger49);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean50", Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow51", Operation_RequiredInterface_DelegationChain_main_ObjectFlow51);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralInteger52.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger52", Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralInteger52);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean53", Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow54", Operation_RequiredInterface_DelegationChain_main_ObjectFlow54);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean55", Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralInteger56.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger56", Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralInteger56);
			Operation_RequiredInterface_DelegationChain_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", Operation_RequiredInterface_DelegationChain_main_testP);
				Operation_RequiredInterface_DelegationChain_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", Operation_RequiredInterface_DelegationChain_main_testP_p);
			Operation_RequiredInterface_DelegationChain_main_Call_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call setP()", Operation_RequiredInterface_DelegationChain_main_Call_setP_);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__v.reset(new InputPin());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_main_Call_setP__v);
					Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural57", Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralUnlimitedNatural57);
					Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger58);
					Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", Operation_RequiredInterface_DelegationChain_main_Call_setP__v_LiteralInteger59);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_RequiredInterface_DelegationChain_main_Call_setP__target);
					Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralInteger60);
					Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural61", Operation_RequiredInterface_DelegationChain_main_Call_setP__target_LiteralUnlimitedNatural61);
			Operation_RequiredInterface_DelegationChain_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", Operation_RequiredInterface_DelegationChain_main_Call_testP);
				Operation_RequiredInterface_DelegationChain_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", Operation_RequiredInterface_DelegationChain_main_Call_testP_p);
					Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural62", Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralUnlimitedNatural62);
					Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger63);
					Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", Operation_RequiredInterface_DelegationChain_main_Call_testP_p_LiteralInteger64);
			Operation_RequiredInterface_DelegationChain_main_Read_d_e.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.e", Operation_RequiredInterface_DelegationChain_main_Read_d_e);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_Read_d_e_result);
					Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural65", Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralUnlimitedNatural65);
					Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", Operation_RequiredInterface_DelegationChain_main_Read_d_e_result_LiteralInteger66);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_main_Read_d_e_object);
					Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural67", Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralUnlimitedNatural67);
					Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", Operation_RequiredInterface_DelegationChain_main_Read_d_e_object_LiteralInteger68);
			Operation_RequiredInterface_DelegationChain_main_D_.reset(new CallOperationAction());
			this->addToElementRepository("D()", Operation_RequiredInterface_DelegationChain_main_D_);
				Operation_RequiredInterface_DelegationChain_main_D__result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_main_D__result);
					Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger69);
					Operation_RequiredInterface_DelegationChain_main_D__result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", Operation_RequiredInterface_DelegationChain_main_D__result_LiteralUnlimitedNatural70);
					Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", Operation_RequiredInterface_DelegationChain_main_D__result_LiteralInteger71);
				Operation_RequiredInterface_DelegationChain_main_D__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_RequiredInterface_DelegationChain_main_D__target);
					Operation_RequiredInterface_DelegationChain_main_D__target_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", Operation_RequiredInterface_DelegationChain_main_D__target_LiteralInteger72);
					Operation_RequiredInterface_DelegationChain_main_D__target_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", Operation_RequiredInterface_DelegationChain_main_D__target_LiteralUnlimitedNatural73);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow74", Operation_RequiredInterface_DelegationChain_main_ObjectFlow74);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean75", Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralInteger76);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow77", Operation_RequiredInterface_DelegationChain_main_ObjectFlow77);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean78", Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralInteger79);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow80", Operation_RequiredInterface_DelegationChain_main_ObjectFlow80);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralInteger81.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger81", Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralInteger81);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean82", Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82);
		Operation_RequiredInterface_DelegationChain_I.reset(new Interface());
		this->addToElementRepository("I", Operation_RequiredInterface_DelegationChain_I);
			Operation_RequiredInterface_DelegationChain_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_DelegationChain_I_setP_Integer);
				Operation_RequiredInterface_DelegationChain_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_I_setP_Integer_v);
		Operation_RequiredInterface_DelegationChain_D.reset(new Class_());
		this->addToElementRepository("D", Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_D_D_D.reset(new Operation());
			this->addToElementRepository("D_D", Operation_RequiredInterface_DelegationChain_D_D_D);
				Operation_RequiredInterface_DelegationChain_D_D_D_result.reset(new Parameter());
				this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_D_D_D_result);
			Operation_RequiredInterface_DelegationChain_D_a.reset(new Property());
			this->addToElementRepository("a", Operation_RequiredInterface_DelegationChain_D_a);
			Operation_RequiredInterface_DelegationChain_D_e.reset(new Property());
			this->addToElementRepository("e", Operation_RequiredInterface_DelegationChain_D_e);
			Operation_RequiredInterface_DelegationChain_D_s.reset(new Connector());
			this->addToElementRepository("s", Operation_RequiredInterface_DelegationChain_D_s);
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd83", Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83);
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd84", Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84);
		Operation_RequiredInterface_DelegationChain_R.reset(new Association());
		this->addToElementRepository("R", Operation_RequiredInterface_DelegationChain_R);
			Operation_RequiredInterface_DelegationChain_R_x.reset(new Property());
			this->addToElementRepository("x", Operation_RequiredInterface_DelegationChain_R_x);
			Operation_RequiredInterface_DelegationChain_R_y.reset(new Property());
			this->addToElementRepository("y", Operation_RequiredInterface_DelegationChain_R_y);
		Operation_RequiredInterface_DelegationChain_A.reset(new Class_());
		this->addToElementRepository("A", Operation_RequiredInterface_DelegationChain_A);
			Operation_RequiredInterface_DelegationChain_A_b.reset(new Property());
			this->addToElementRepository("b", Operation_RequiredInterface_DelegationChain_A_b);
			Operation_RequiredInterface_DelegationChain_A_q.reset(new Port());
			this->addToElementRepository("q", Operation_RequiredInterface_DelegationChain_A_q);
			Operation_RequiredInterface_DelegationChain_A_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_DelegationChain_A_setP_Integer);
				Operation_RequiredInterface_DelegationChain_A_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_A_setP_Integer_v);
			Operation_RequiredInterface_DelegationChain_A_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_DelegationChain_A_setPActivity);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode_LiteralInteger85);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_DelegationChain_A_setPActivity_this);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural86", Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralUnlimitedNatural86);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result_LiteralInteger87);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow88", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean89", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralInteger90);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow91", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralInteger92);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean93", Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_A_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger97", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97);
						Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural98", Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98);
			Operation_RequiredInterface_DelegationChain_A_r.reset(new Connector());
			this->addToElementRepository("r", Operation_RequiredInterface_DelegationChain_A_r);
				Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd99.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd99", Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd99);
				Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd100.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd100", Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd100);
		Operation_RequiredInterface_DelegationChain_E.reset(new Class_());
		this->addToElementRepository("E", Operation_RequiredInterface_DelegationChain_E);
			Operation_RequiredInterface_DelegationChain_E_c.reset(new Property());
			this->addToElementRepository("c", Operation_RequiredInterface_DelegationChain_E_c);
			Operation_RequiredInterface_DelegationChain_E_s.reset(new Connector());
			this->addToElementRepository("s", Operation_RequiredInterface_DelegationChain_E_s);
				Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd101.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd101", Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd101);
				Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd102", Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102);
			Operation_RequiredInterface_DelegationChain_E_q.reset(new Port());
			this->addToElementRepository("q", Operation_RequiredInterface_DelegationChain_E_q);
		Operation_RequiredInterface_DelegationChain_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", Operation_RequiredInterface_DelegationChain_IImpl);
			Operation_RequiredInterface_DelegationChain_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_DelegationChain_IImpl_IRealization);
			Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer);
				Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v);
		Operation_RequiredInterface_DelegationChain_B.reset(new Class_());
		this->addToElementRepository("B", Operation_RequiredInterface_DelegationChain_B);
			Operation_RequiredInterface_DelegationChain_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_DelegationChain_B_setPActivity);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow103", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralInteger104);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean105", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow106", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean107", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralInteger108.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger108", Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralInteger108);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_B_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode_LiteralInteger109.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger109", Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode_LiteralInteger109);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralInteger110);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural111", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural111);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralInteger112.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger112", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralInteger112);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural113", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural113);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralInteger114.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger114", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralInteger114);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural115.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural115", Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural115);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_DelegationChain_B_setPActivity_this);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural116", Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralUnlimitedNatural116);
						Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralInteger117.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger117", Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result_LiteralInteger117);
			Operation_RequiredInterface_DelegationChain_B_p.reset(new Property());
			this->addToElementRepository("p", Operation_RequiredInterface_DelegationChain_B_p);
			Operation_RequiredInterface_DelegationChain_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_DelegationChain_B_IRealization);
			Operation_RequiredInterface_DelegationChain_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_DelegationChain_B_setP_Integer);
				Operation_RequiredInterface_DelegationChain_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_DelegationChain_B_setP_Integer_v);

	// Initialize public members
	/*
	 * Model Operation_RequiredInterface_DelegationChain
	 */
	Operation_RequiredInterface_DelegationChain->setThisPackagePtr(Operation_RequiredInterface_DelegationChain);
	Operation_RequiredInterface_DelegationChain->setName("Operation_RequiredInterface_DelegationChain");
	Operation_RequiredInterface_DelegationChain->setVisibility(VisibilityKind::public_);
		// Class C
		Operation_RequiredInterface_DelegationChain_C->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_C);
		Operation_RequiredInterface_DelegationChain_C->setName("C");
		Operation_RequiredInterface_DelegationChain_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_RequiredInterface_DelegationChain_C_q->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_q);
			Operation_RequiredInterface_DelegationChain_C_q->setName("q");
			Operation_RequiredInterface_DelegationChain_C_q->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_C_q->setType(Operation_RequiredInterface_DelegationChain_IImpl);
			Operation_RequiredInterface_DelegationChain_C_q->setAggregation(AggregationKind::composite);
			Operation_RequiredInterface_DelegationChain_C_q->isConjugated = true;;
			Operation_RequiredInterface_DelegationChain_C_q->isService = true;
			Operation_RequiredInterface_DelegationChain_C_q->addRequired(Operation_RequiredInterface_DelegationChain_I);
		Operation_RequiredInterface_DelegationChain_C->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_C_q);
		// Activity setPActivity
			Operation_RequiredInterface_DelegationChain_C_setPActivity->setThisActivityPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_DelegationChain_C_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_DelegationChain_C_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_v->setName("v");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_C_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addOwnedParameter(Operation_RequiredInterface_DelegationChain_C_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_DelegationChain_C_setPActivity_v);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode);
				// ReadSelfAction this
				Operation_RequiredInterface_DelegationChain_C_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_this);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_this->setName("this");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result->setType(Operation_RequiredInterface_DelegationChain_C);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_this->setResult(Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_C_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setOnPort(Operation_RequiredInterface_DelegationChain_C_q);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setOperation(Operation_RequiredInterface_DelegationChain_I_setP_Integer);
					// InputPin target
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target->setType(Operation_RequiredInterface_DelegationChain_C);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->setTarget(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q->addArgument(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q);
				// ObjectFlow ObjectFlow0 from result to target
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setName("ObjectFlow0");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setSource(Operation_RequiredInterface_DelegationChain_C_setPActivity_this_result);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setTarget(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean1
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1->setValue(true);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0->setGuard(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0_LiteralBoolean1);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow0);
				// ObjectFlow ObjectFlow4 from vParameterNode to v
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setName("ObjectFlow4");
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setSource(Operation_RequiredInterface_DelegationChain_C_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setTarget(Operation_RequiredInterface_DelegationChain_C_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean6
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6->setName("LiteralBoolean6");
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6->setValue(true);
				Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4->setGuard(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4_LiteralBoolean6);
			Operation_RequiredInterface_DelegationChain_C_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_C_setPActivity_ObjectFlow4);
		Operation_RequiredInterface_DelegationChain_C->addOwnedBehavior(Operation_RequiredInterface_DelegationChain_C_setPActivity);
			Operation_RequiredInterface_DelegationChain_C_IRealization->setName("IRealization");
			Operation_RequiredInterface_DelegationChain_C_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_C_IRealization->setContract(Operation_RequiredInterface_DelegationChain_I);
			
		Operation_RequiredInterface_DelegationChain_C->addInterfaceRealization(Operation_RequiredInterface_DelegationChain_C_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_DelegationChain_C_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_C_setP_Integer);
			Operation_RequiredInterface_DelegationChain_C_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_DelegationChain_C_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_DelegationChain_C_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_C_setP_Integer_v);
				Operation_RequiredInterface_DelegationChain_C_setP_Integer_v->setName("v");
				Operation_RequiredInterface_DelegationChain_C_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_C_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_C_setP_Integer->addOwnedParameter(Operation_RequiredInterface_DelegationChain_C_setP_Integer_v);
			Operation_RequiredInterface_DelegationChain_C_setP_Integer->addMethod(Operation_RequiredInterface_DelegationChain_C_setPActivity);
		Operation_RequiredInterface_DelegationChain_C->addOwnedOperation(Operation_RequiredInterface_DelegationChain_C_setP_Integer);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_C);
		// Association S
		Operation_RequiredInterface_DelegationChain_S->setThisAssociationPtr(Operation_RequiredInterface_DelegationChain_S);
		Operation_RequiredInterface_DelegationChain_S->setName("S");
		Operation_RequiredInterface_DelegationChain_S->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_DelegationChain_S->addOwnedEnd(Operation_RequiredInterface_DelegationChain_S_x);
		Operation_RequiredInterface_DelegationChain_S->addOwnedEnd(Operation_RequiredInterface_DelegationChain_S_y);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_S);
		// Activity main
		Operation_RequiredInterface_DelegationChain_main->setThisActivityPtr(Operation_RequiredInterface_DelegationChain_main);
		Operation_RequiredInterface_DelegationChain_main->setName("main");
		Operation_RequiredInterface_DelegationChain_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			Operation_RequiredInterface_DelegationChain_main_testP->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_main_testP);
			Operation_RequiredInterface_DelegationChain_main_testP->setName("testP");
			Operation_RequiredInterface_DelegationChain_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				Operation_RequiredInterface_DelegationChain_main_testP_p->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_testP_p);
				Operation_RequiredInterface_DelegationChain_main_testP_p->setName("p");
				Operation_RequiredInterface_DelegationChain_main_testP_p->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_main_testP->addOwnedParameter(Operation_RequiredInterface_DelegationChain_main_testP_p);
			Operation_RequiredInterface_DelegationChain_main_testP->addLanguage("C++");
			Operation_RequiredInterface_DelegationChain_main_testP->addLanguage("Include");
			Operation_RequiredInterface_DelegationChain_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting d.a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"d.a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Invocation forwarded out of e through q: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			Operation_RequiredInterface_DelegationChain_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		Operation_RequiredInterface_DelegationChain_main->addOwnedBehavior(Operation_RequiredInterface_DelegationChain_main_testP);
			// ValueSpecificationAction Value(4)
			Operation_RequiredInterface_DelegationChain_main_Value_4->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Value_4);
			Operation_RequiredInterface_DelegationChain_main_Value_4->setName("Value(4)");
			Operation_RequiredInterface_DelegationChain_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger17
				Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17);
				Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17->setName("LiteralInteger17");
				Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17->setValue(4);
			Operation_RequiredInterface_DelegationChain_main_Value_4->setValue(Operation_RequiredInterface_DelegationChain_main_Value_4_LiteralInteger17);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Value_4_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Value_4_result);
				Operation_RequiredInterface_DelegationChain_main_Value_4_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Value_4_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_main_Value_4->setResult(Operation_RequiredInterface_DelegationChain_main_Value_4_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Value_4);
			// ReadStructuralFeatureAction Read e.c
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Read_e_c);
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setName("Read e.c");
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setStructuralFeature(Operation_RequiredInterface_DelegationChain_E_c);
				// InputPin object
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_e_c_object);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_object->setName("object");
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_object->setType(Operation_RequiredInterface_DelegationChain_E);
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setObject(Operation_RequiredInterface_DelegationChain_main_Read_e_c_object);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_e_c_result);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_e_c_result->setType(Operation_RequiredInterface_DelegationChain_C);
			Operation_RequiredInterface_DelegationChain_main_Read_e_c->setResult(Operation_RequiredInterface_DelegationChain_main_Read_e_c_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Read_e_c);
			// ReadStructuralFeatureAction Read a.b
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Read_a_b);
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setName("Read a.b");
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setStructuralFeature(Operation_RequiredInterface_DelegationChain_A_b);
				// InputPin object
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_a_b_object);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_object->setName("object");
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_object->setType(Operation_RequiredInterface_DelegationChain_A);
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setObject(Operation_RequiredInterface_DelegationChain_main_Read_a_b_object);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_a_b_result);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_a_b_result->setType(Operation_RequiredInterface_DelegationChain_B);
			Operation_RequiredInterface_DelegationChain_main_Read_a_b->setResult(Operation_RequiredInterface_DelegationChain_main_Read_a_b_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Read_a_b);
			// CreateObjectAction Create D
			Operation_RequiredInterface_DelegationChain_main_Create_D->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Create_D);
			Operation_RequiredInterface_DelegationChain_main_Create_D->setName("Create D");
			Operation_RequiredInterface_DelegationChain_main_Create_D->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Create_D->setClassifier(Operation_RequiredInterface_DelegationChain_D);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Create_D_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Create_D_result);
				Operation_RequiredInterface_DelegationChain_main_Create_D_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Create_D_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Create_D_result->setType(Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_main_Create_D->setResult(Operation_RequiredInterface_DelegationChain_main_Create_D_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Create_D);
			// ForkNode Fork d
			Operation_RequiredInterface_DelegationChain_main_Fork_d->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Fork_d);
			Operation_RequiredInterface_DelegationChain_main_Fork_d->setName("Fork d");
			Operation_RequiredInterface_DelegationChain_main_Fork_d->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Fork_d);
			// CallOperationAction Call setP()
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Call_setP_);
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->setName("Call setP()");
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->setOperation(Operation_RequiredInterface_DelegationChain_C_setP_Integer);
				// InputPin target
				Operation_RequiredInterface_DelegationChain_main_Call_setP__target->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Call_setP__target);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__target->setName("target");
				Operation_RequiredInterface_DelegationChain_main_Call_setP__target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__target->setType(Operation_RequiredInterface_DelegationChain_C);
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->setTarget(Operation_RequiredInterface_DelegationChain_main_Call_setP__target);
				// InputPin v
				Operation_RequiredInterface_DelegationChain_main_Call_setP__v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Call_setP__v);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__v->setName("v");
				Operation_RequiredInterface_DelegationChain_main_Call_setP__v->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Call_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_main_Call_setP_->addArgument(Operation_RequiredInterface_DelegationChain_main_Call_setP__v);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Call_setP_);
			// ReadStructuralFeatureAction Read b.p
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Read_b_p);
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setName("Read b.p");
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setStructuralFeature(Operation_RequiredInterface_DelegationChain_B_p);
				// InputPin object
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_b_p_object);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_object->setName("object");
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_object->setType(Operation_RequiredInterface_DelegationChain_B);
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setObject(Operation_RequiredInterface_DelegationChain_main_Read_b_p_object);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_b_p_result);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_main_Read_b_p->setResult(Operation_RequiredInterface_DelegationChain_main_Read_b_p_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Read_b_p);
			// CallBehaviorAction Call testP
			Operation_RequiredInterface_DelegationChain_main_Call_testP->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Call_testP);
			Operation_RequiredInterface_DelegationChain_main_Call_testP->setName("Call testP");
			Operation_RequiredInterface_DelegationChain_main_Call_testP->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Call_testP->setBehavior(Operation_RequiredInterface_DelegationChain_main_testP);
				// InputPin p
				Operation_RequiredInterface_DelegationChain_main_Call_testP_p->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Call_testP_p);
				Operation_RequiredInterface_DelegationChain_main_Call_testP_p->setName("p");
				Operation_RequiredInterface_DelegationChain_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_main_Call_testP->addArgument(Operation_RequiredInterface_DelegationChain_main_Call_testP_p);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Call_testP);
			// ReadStructuralFeatureAction Read d.a
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Read_d_a);
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setName("Read d.a");
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setStructuralFeature(Operation_RequiredInterface_DelegationChain_D_a);
				// InputPin object
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_d_a_object);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_object->setName("object");
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_object->setType(Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setObject(Operation_RequiredInterface_DelegationChain_main_Read_d_a_object);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_d_a_result);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_d_a_result->setType(Operation_RequiredInterface_DelegationChain_A);
			Operation_RequiredInterface_DelegationChain_main_Read_d_a->setResult(Operation_RequiredInterface_DelegationChain_main_Read_d_a_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Read_d_a);
			// ReadStructuralFeatureAction Read d.e
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_Read_d_e);
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setName("Read d.e");
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setStructuralFeature(Operation_RequiredInterface_DelegationChain_D_e);
				// InputPin object
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_d_e_object);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_object->setName("object");
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_object->setType(Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setObject(Operation_RequiredInterface_DelegationChain_main_Read_d_e_object);
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_Read_d_e_result);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_Read_d_e_result->setType(Operation_RequiredInterface_DelegationChain_E);
			Operation_RequiredInterface_DelegationChain_main_Read_d_e->setResult(Operation_RequiredInterface_DelegationChain_main_Read_d_e_result);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_Read_d_e);
			// CallOperationAction D()
			Operation_RequiredInterface_DelegationChain_main_D_->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_main_D_);
			Operation_RequiredInterface_DelegationChain_main_D_->setName("D()");
			Operation_RequiredInterface_DelegationChain_main_D_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Operation_RequiredInterface_DelegationChain_main_D__result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_D__result);
				Operation_RequiredInterface_DelegationChain_main_D__result->setName("result");
				Operation_RequiredInterface_DelegationChain_main_D__result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_D__result->setType(Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_main_D_->addResult(Operation_RequiredInterface_DelegationChain_main_D__result);
			Operation_RequiredInterface_DelegationChain_main_D_->setOperation(Operation_RequiredInterface_DelegationChain_D_D_D);
				// InputPin target
				Operation_RequiredInterface_DelegationChain_main_D__target->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_D__target);
				Operation_RequiredInterface_DelegationChain_main_D__target->setName("target");
				Operation_RequiredInterface_DelegationChain_main_D__target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_D__target->setType(Operation_RequiredInterface_DelegationChain_D);
			Operation_RequiredInterface_DelegationChain_main_D_->setTarget(Operation_RequiredInterface_DelegationChain_main_D__target);
		Operation_RequiredInterface_DelegationChain_main->addNode(Operation_RequiredInterface_DelegationChain_main_D_);
			// ControlFlow ControlFlow14 from Call setP() to Read d.a
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ControlFlow14);
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14->setName("ControlFlow14");
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14->setSource(Operation_RequiredInterface_DelegationChain_main_Call_setP_);
			Operation_RequiredInterface_DelegationChain_main_ControlFlow14->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_d_a);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ControlFlow14);
			// ObjectFlow ObjectFlow48 from result to target
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow48);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setName("ObjectFlow48");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setSource(Operation_RequiredInterface_DelegationChain_main_Read_e_c_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setTarget(Operation_RequiredInterface_DelegationChain_main_Call_setP__target);
				// LiteralBoolean LiteralBoolean50
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50->setName("LiteralBoolean50");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow48->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow48_LiteralBoolean50);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow48);
			// ObjectFlow ObjectFlow51 from result to Fork d
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow51);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setName("ObjectFlow51");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setSource(Operation_RequiredInterface_DelegationChain_main_D__result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setTarget(Operation_RequiredInterface_DelegationChain_main_Fork_d);
				// LiteralBoolean LiteralBoolean53
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53->setName("LiteralBoolean53");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow51->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow51_LiteralBoolean53);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow51);
			// ObjectFlow ObjectFlow22 from result to target
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow22);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setName("ObjectFlow22");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setSource(Operation_RequiredInterface_DelegationChain_main_Create_D_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setTarget(Operation_RequiredInterface_DelegationChain_main_D__target);
				// LiteralBoolean LiteralBoolean24
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24->setName("LiteralBoolean24");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow22->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow22_LiteralBoolean24);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow22);
			// ObjectFlow ObjectFlow54 from Fork d to object
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow54);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setName("ObjectFlow54");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setSource(Operation_RequiredInterface_DelegationChain_main_Fork_d);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_d_e_object);
				// LiteralBoolean LiteralBoolean55
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55->setName("LiteralBoolean55");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow54->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow54_LiteralBoolean55);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow54);
			// ObjectFlow ObjectFlow27 from result to v
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow27);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setName("ObjectFlow27");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setSource(Operation_RequiredInterface_DelegationChain_main_Value_4_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setTarget(Operation_RequiredInterface_DelegationChain_main_Call_setP__v);
				// LiteralBoolean LiteralBoolean28
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28->setName("LiteralBoolean28");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow27->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow27_LiteralBoolean28);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow27);
			// ObjectFlow ObjectFlow30 from result to object
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow30);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setName("ObjectFlow30");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setSource(Operation_RequiredInterface_DelegationChain_main_Read_a_b_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean32
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32->setName("LiteralBoolean32");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow30->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow30_LiteralBoolean32);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow30);
			// ObjectFlow ObjectFlow41 from result to object
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow41);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setName("ObjectFlow41");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setSource(Operation_RequiredInterface_DelegationChain_main_Read_d_a_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean42
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42->setName("LiteralBoolean42");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow41->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow41_LiteralBoolean42);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow41);
			// ObjectFlow ObjectFlow74 from result to object
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow74);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setName("ObjectFlow74");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setSource(Operation_RequiredInterface_DelegationChain_main_Read_d_e_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_e_c_object);
				// LiteralBoolean LiteralBoolean75
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75->setName("LiteralBoolean75");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow74->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow74_LiteralBoolean75);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow74);
			// ObjectFlow ObjectFlow77 from result to p
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow77);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setName("ObjectFlow77");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setSource(Operation_RequiredInterface_DelegationChain_main_Read_b_p_result);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setTarget(Operation_RequiredInterface_DelegationChain_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean78
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78->setName("LiteralBoolean78");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow77->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow77_LiteralBoolean78);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow77);
			// ObjectFlow ObjectFlow80 from Fork d to object
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow80);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setName("ObjectFlow80");
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setSource(Operation_RequiredInterface_DelegationChain_main_Fork_d);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setTarget(Operation_RequiredInterface_DelegationChain_main_Read_d_a_object);
				// LiteralBoolean LiteralBoolean82
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82->setThisElementPtr(Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82->setName("LiteralBoolean82");
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82->setValue(true);
			Operation_RequiredInterface_DelegationChain_main_ObjectFlow80->setGuard(Operation_RequiredInterface_DelegationChain_main_ObjectFlow80_LiteralBoolean82);
		Operation_RequiredInterface_DelegationChain_main->addEdge(Operation_RequiredInterface_DelegationChain_main_ObjectFlow80);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_main);
		// Interface I
		Operation_RequiredInterface_DelegationChain_I->setThisInterfacePtr(Operation_RequiredInterface_DelegationChain_I);
		Operation_RequiredInterface_DelegationChain_I->setName("I");
		Operation_RequiredInterface_DelegationChain_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			Operation_RequiredInterface_DelegationChain_I_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_I_setP_Integer);
			Operation_RequiredInterface_DelegationChain_I_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_DelegationChain_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_DelegationChain_I_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_I_setP_Integer_v);
				Operation_RequiredInterface_DelegationChain_I_setP_Integer_v->setName("v");
				Operation_RequiredInterface_DelegationChain_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_I_setP_Integer->addOwnedParameter(Operation_RequiredInterface_DelegationChain_I_setP_Integer_v);
		Operation_RequiredInterface_DelegationChain_I->addOwnedOperation(Operation_RequiredInterface_DelegationChain_I_setP_Integer);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_I);
		// Class D
		Operation_RequiredInterface_DelegationChain_D->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_D);
		Operation_RequiredInterface_DelegationChain_D->setName("D");
		Operation_RequiredInterface_DelegationChain_D->setVisibility(VisibilityKind::public_);
		
			// Property e
			Operation_RequiredInterface_DelegationChain_D_e->setThisElementPtr(Operation_RequiredInterface_DelegationChain_D_e);
			Operation_RequiredInterface_DelegationChain_D_e->setName("e");
			Operation_RequiredInterface_DelegationChain_D_e->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_D_e->setType(Operation_RequiredInterface_DelegationChain_E);
			Operation_RequiredInterface_DelegationChain_D_e->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_DelegationChain_D->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_D_e);
			// Property a
			Operation_RequiredInterface_DelegationChain_D_a->setThisElementPtr(Operation_RequiredInterface_DelegationChain_D_a);
			Operation_RequiredInterface_DelegationChain_D_a->setName("a");
			Operation_RequiredInterface_DelegationChain_D_a->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_D_a->setType(Operation_RequiredInterface_DelegationChain_A);
			Operation_RequiredInterface_DelegationChain_D_a->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_DelegationChain_D->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_D_a);
		
		Operation_RequiredInterface_DelegationChain_D_s->setName("s");
			Operation_RequiredInterface_DelegationChain_D_s->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84->setRole(Operation_RequiredInterface_DelegationChain_E_q);
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84->setPartWithPort(Operation_RequiredInterface_DelegationChain_D_e);
				
			Operation_RequiredInterface_DelegationChain_D_s->addEnd(Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd84);
				
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83->setRole(Operation_RequiredInterface_DelegationChain_A_q);
				Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83->setPartWithPort(Operation_RequiredInterface_DelegationChain_D_a);
				
			Operation_RequiredInterface_DelegationChain_D_s->addEnd(Operation_RequiredInterface_DelegationChain_D_s_ConnectorEnd83);
			Operation_RequiredInterface_DelegationChain_D_s->setType(Operation_RequiredInterface_DelegationChain_S);
		Operation_RequiredInterface_DelegationChain_D->addOwnedConnector(Operation_RequiredInterface_DelegationChain_D_s);
			// Operation D_D
			Operation_RequiredInterface_DelegationChain_D_D_D->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_D_D_D);
			Operation_RequiredInterface_DelegationChain_D_D_D->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Operation_RequiredInterface_DelegationChain_D_D_D->setName("D_D");
			Operation_RequiredInterface_DelegationChain_D_D_D->setVisibility(VisibilityKind::public_);
				// Parameter result
				Operation_RequiredInterface_DelegationChain_D_D_D_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_D_D_D_result);
				Operation_RequiredInterface_DelegationChain_D_D_D_result->setName("result");
				Operation_RequiredInterface_DelegationChain_D_D_D_result->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_D_D_D_result->setType(Operation_RequiredInterface_DelegationChain_D);
				Operation_RequiredInterface_DelegationChain_D_D_D_result->setDirection(ParameterDirectionKind::return_);
			Operation_RequiredInterface_DelegationChain_D_D_D->addOwnedParameter(Operation_RequiredInterface_DelegationChain_D_D_D_result);
		Operation_RequiredInterface_DelegationChain_D->addOwnedOperation(Operation_RequiredInterface_DelegationChain_D_D_D);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_D);
		// Association R
		Operation_RequiredInterface_DelegationChain_R->setThisAssociationPtr(Operation_RequiredInterface_DelegationChain_R);
		Operation_RequiredInterface_DelegationChain_R->setName("R");
		Operation_RequiredInterface_DelegationChain_R->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_DelegationChain_R->addOwnedEnd(Operation_RequiredInterface_DelegationChain_R_x);
		Operation_RequiredInterface_DelegationChain_R->addOwnedEnd(Operation_RequiredInterface_DelegationChain_R_y);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_R);
		// Class A
		Operation_RequiredInterface_DelegationChain_A->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_A);
		Operation_RequiredInterface_DelegationChain_A->setName("A");
		Operation_RequiredInterface_DelegationChain_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_RequiredInterface_DelegationChain_A_q->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_q);
			Operation_RequiredInterface_DelegationChain_A_q->setName("q");
			Operation_RequiredInterface_DelegationChain_A_q->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_A_q->setType(Operation_RequiredInterface_DelegationChain_IImpl);
			Operation_RequiredInterface_DelegationChain_A_q->setAggregation(AggregationKind::composite);
			Operation_RequiredInterface_DelegationChain_A_q->isService = true;
			Operation_RequiredInterface_DelegationChain_A_q->addProvided(Operation_RequiredInterface_DelegationChain_I);
		Operation_RequiredInterface_DelegationChain_A->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_A_q);
			// Property b
			Operation_RequiredInterface_DelegationChain_A_b->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_b);
			Operation_RequiredInterface_DelegationChain_A_b->setName("b");
			Operation_RequiredInterface_DelegationChain_A_b->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_A_b->setType(Operation_RequiredInterface_DelegationChain_B);
			Operation_RequiredInterface_DelegationChain_A_b->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_DelegationChain_A->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_A_b);
		// Activity setPActivity
			Operation_RequiredInterface_DelegationChain_A_setPActivity->setThisActivityPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_DelegationChain_A_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_DelegationChain_A_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_v->setName("v");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addOwnedParameter(Operation_RequiredInterface_DelegationChain_A_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_DelegationChain_A_setPActivity_v);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode);
				// ReadSelfAction this
				Operation_RequiredInterface_DelegationChain_A_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_this);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_this->setName("this");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result->setType(Operation_RequiredInterface_DelegationChain_A);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_this->setResult(Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_A_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setOnPort(Operation_RequiredInterface_DelegationChain_A_q);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setOperation(Operation_RequiredInterface_DelegationChain_I_setP_Integer);
					// InputPin target
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->setTarget(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q->addArgument(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q);
				// ObjectFlow ObjectFlow88 from result to target
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setName("ObjectFlow88");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setSource(Operation_RequiredInterface_DelegationChain_A_setPActivity_this_result);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setTarget(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean89
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89->setName("LiteralBoolean89");
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89->setValue(true);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88->setGuard(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88_LiteralBoolean89);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow88);
				// ObjectFlow ObjectFlow91 from vParameterNode to v
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setName("ObjectFlow91");
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setSource(Operation_RequiredInterface_DelegationChain_A_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setTarget(Operation_RequiredInterface_DelegationChain_A_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean93
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93->setName("LiteralBoolean93");
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93->setValue(true);
				Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91->setGuard(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91_LiteralBoolean93);
			Operation_RequiredInterface_DelegationChain_A_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_A_setPActivity_ObjectFlow91);
		Operation_RequiredInterface_DelegationChain_A->addOwnedBehavior(Operation_RequiredInterface_DelegationChain_A_setPActivity);
		Operation_RequiredInterface_DelegationChain_A_r->setName("r");
			Operation_RequiredInterface_DelegationChain_A_r->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd100->setRole(Operation_RequiredInterface_DelegationChain_A_q);
				
			Operation_RequiredInterface_DelegationChain_A_r->addEnd(Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd100);
				
				Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd99->setRole(Operation_RequiredInterface_DelegationChain_A_b);
				
			Operation_RequiredInterface_DelegationChain_A_r->addEnd(Operation_RequiredInterface_DelegationChain_A_r_ConnectorEnd99);
			Operation_RequiredInterface_DelegationChain_A_r->setType(Operation_RequiredInterface_DelegationChain_R);
		Operation_RequiredInterface_DelegationChain_A->addOwnedConnector(Operation_RequiredInterface_DelegationChain_A_r);
			// Operation setP_Integer
			Operation_RequiredInterface_DelegationChain_A_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_A_setP_Integer);
			Operation_RequiredInterface_DelegationChain_A_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_DelegationChain_A_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_DelegationChain_A_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_A_setP_Integer_v);
				Operation_RequiredInterface_DelegationChain_A_setP_Integer_v->setName("v");
				Operation_RequiredInterface_DelegationChain_A_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_A_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_A_setP_Integer->addOwnedParameter(Operation_RequiredInterface_DelegationChain_A_setP_Integer_v);
			Operation_RequiredInterface_DelegationChain_A_setP_Integer->addMethod(Operation_RequiredInterface_DelegationChain_A_setPActivity);
		Operation_RequiredInterface_DelegationChain_A->addOwnedOperation(Operation_RequiredInterface_DelegationChain_A_setP_Integer);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_A);
		// Class E
		Operation_RequiredInterface_DelegationChain_E->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_E);
		Operation_RequiredInterface_DelegationChain_E->setName("E");
		Operation_RequiredInterface_DelegationChain_E->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_RequiredInterface_DelegationChain_E_q->setThisElementPtr(Operation_RequiredInterface_DelegationChain_E_q);
			Operation_RequiredInterface_DelegationChain_E_q->setName("q");
			Operation_RequiredInterface_DelegationChain_E_q->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_E_q->setType(Operation_RequiredInterface_DelegationChain_IImpl);
			Operation_RequiredInterface_DelegationChain_E_q->setAggregation(AggregationKind::composite);
			Operation_RequiredInterface_DelegationChain_E_q->isConjugated = true;;
			Operation_RequiredInterface_DelegationChain_E_q->isService = true;
			Operation_RequiredInterface_DelegationChain_E_q->addRequired(Operation_RequiredInterface_DelegationChain_I);
		Operation_RequiredInterface_DelegationChain_E->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_E_q);
			// Property c
			Operation_RequiredInterface_DelegationChain_E_c->setThisElementPtr(Operation_RequiredInterface_DelegationChain_E_c);
			Operation_RequiredInterface_DelegationChain_E_c->setName("c");
			Operation_RequiredInterface_DelegationChain_E_c->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_E_c->setType(Operation_RequiredInterface_DelegationChain_C);
			Operation_RequiredInterface_DelegationChain_E_c->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_DelegationChain_E->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_E_c);
		
		Operation_RequiredInterface_DelegationChain_E_s->setName("s");
			Operation_RequiredInterface_DelegationChain_E_s->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102->setRole(Operation_RequiredInterface_DelegationChain_C_q);
				Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102->setPartWithPort(Operation_RequiredInterface_DelegationChain_E_c);
				
			Operation_RequiredInterface_DelegationChain_E_s->addEnd(Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd102);
				
				Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd101->setRole(Operation_RequiredInterface_DelegationChain_E_q);
				
			Operation_RequiredInterface_DelegationChain_E_s->addEnd(Operation_RequiredInterface_DelegationChain_E_s_ConnectorEnd101);
			Operation_RequiredInterface_DelegationChain_E_s->setType(Operation_RequiredInterface_DelegationChain_S);
		Operation_RequiredInterface_DelegationChain_E->addOwnedConnector(Operation_RequiredInterface_DelegationChain_E_s);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_E);
		// Class IImpl
		Operation_RequiredInterface_DelegationChain_IImpl->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_IImpl);
		Operation_RequiredInterface_DelegationChain_IImpl->setName("IImpl");
		Operation_RequiredInterface_DelegationChain_IImpl->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_DelegationChain_IImpl_IRealization->setName("IRealization");
			Operation_RequiredInterface_DelegationChain_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_IImpl_IRealization->setContract(Operation_RequiredInterface_DelegationChain_I);
			
		Operation_RequiredInterface_DelegationChain_IImpl->addInterfaceRealization(Operation_RequiredInterface_DelegationChain_IImpl_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer);
			Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v);
				Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v->setName("v");
				Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer->addOwnedParameter(Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer_v);
		Operation_RequiredInterface_DelegationChain_IImpl->addOwnedOperation(Operation_RequiredInterface_DelegationChain_IImpl_setP_Integer);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_IImpl);
		// Class B
		Operation_RequiredInterface_DelegationChain_B->setThisClass_Ptr(Operation_RequiredInterface_DelegationChain_B);
		Operation_RequiredInterface_DelegationChain_B->setName("B");
		Operation_RequiredInterface_DelegationChain_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			Operation_RequiredInterface_DelegationChain_B_p->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_p);
			Operation_RequiredInterface_DelegationChain_B_p->setName("p");
			Operation_RequiredInterface_DelegationChain_B_p->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_DelegationChain_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Operation_RequiredInterface_DelegationChain_B->addOwnedAttribute(Operation_RequiredInterface_DelegationChain_B_p);
		// Activity setPActivity
			Operation_RequiredInterface_DelegationChain_B_setPActivity->setThisActivityPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_DelegationChain_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_DelegationChain_B_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_v);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_v->setName("v");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addOwnedParameter(Operation_RequiredInterface_DelegationChain_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_DelegationChain_B_setPActivity_v);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode);
				// AddStructuralFeatureValueAction Set this.p
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setName("Set this.p");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setStructuralFeature(Operation_RequiredInterface_DelegationChain_B_p);
					// InputPin object
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object->setName("object");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object->setType(Operation_RequiredInterface_DelegationChain_B);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setObject(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object);
					// InputPin value
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value->setName("value");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setValue(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value);
					// OutputPin result
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result->setName("result");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result->setType(Operation_RequiredInterface_DelegationChain_B);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setResult(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_result);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p->setIsReplaceAll(true);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p);
				// ReadSelfAction this
				Operation_RequiredInterface_DelegationChain_B_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_this);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_this->setName("this");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result->setType(Operation_RequiredInterface_DelegationChain_B);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_this->setResult(Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addNode(Operation_RequiredInterface_DelegationChain_B_setPActivity_this);
				// ObjectFlow ObjectFlow103 from vParameterNode to value
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setName("ObjectFlow103");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setSource(Operation_RequiredInterface_DelegationChain_B_setPActivity_vParameterNode);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setTarget(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean105
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105->setName("LiteralBoolean105");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105->setValue(true);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103->setGuard(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103_LiteralBoolean105);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow103);
				// ObjectFlow ObjectFlow106 from result to object
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setThisActivityEdgePtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setName("ObjectFlow106");
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setSource(Operation_RequiredInterface_DelegationChain_B_setPActivity_this_result);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setTarget(Operation_RequiredInterface_DelegationChain_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean107
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107->setName("LiteralBoolean107");
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107->setValue(true);
				Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106->setGuard(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106_LiteralBoolean107);
			Operation_RequiredInterface_DelegationChain_B_setPActivity->addEdge(Operation_RequiredInterface_DelegationChain_B_setPActivity_ObjectFlow106);
		Operation_RequiredInterface_DelegationChain_B->addOwnedBehavior(Operation_RequiredInterface_DelegationChain_B_setPActivity);
			Operation_RequiredInterface_DelegationChain_B_IRealization->setName("IRealization");
			Operation_RequiredInterface_DelegationChain_B_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_DelegationChain_B_IRealization->setContract(Operation_RequiredInterface_DelegationChain_I);
			
		Operation_RequiredInterface_DelegationChain_B->addInterfaceRealization(Operation_RequiredInterface_DelegationChain_B_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_DelegationChain_B_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_DelegationChain_B_setP_Integer);
			Operation_RequiredInterface_DelegationChain_B_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_DelegationChain_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_DelegationChain_B_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_DelegationChain_B_setP_Integer_v);
				Operation_RequiredInterface_DelegationChain_B_setP_Integer_v->setName("v");
				Operation_RequiredInterface_DelegationChain_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_DelegationChain_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_DelegationChain_B_setP_Integer->addOwnedParameter(Operation_RequiredInterface_DelegationChain_B_setP_Integer_v);
			Operation_RequiredInterface_DelegationChain_B_setP_Integer->addMethod(Operation_RequiredInterface_DelegationChain_B_setPActivity);
		Operation_RequiredInterface_DelegationChain_B->addOwnedOperation(Operation_RequiredInterface_DelegationChain_B_setP_Integer);
	Operation_RequiredInterface_DelegationChain->addPackagedElement(Operation_RequiredInterface_DelegationChain_B);
}
