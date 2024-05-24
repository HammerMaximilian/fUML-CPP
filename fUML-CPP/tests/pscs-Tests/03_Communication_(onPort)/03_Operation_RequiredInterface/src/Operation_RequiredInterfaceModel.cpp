/*
 * Operation_RequiredInterfaceModel.cpp
 * 
 * Auto-generated file
 */

#include "Operation_RequiredInterfaceModel.h"

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

using namespace Operation_RequiredInterface;
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

Operation_RequiredInterfaceModel::Operation_RequiredInterfaceModel()
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

Operation_RequiredInterfaceModel::~Operation_RequiredInterfaceModel()
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

const std::shared_ptr<Operation_RequiredInterfaceModel>& Operation_RequiredInterfaceModel::Instance()
{
	static std::shared_ptr<Operation_RequiredInterfaceModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Operation_RequiredInterfaceModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Operation_RequiredInterfaceModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Operation_RequiredInterface
	 */
	Operation_RequiredInterface.reset(new Package());
	this->addToElementRepository("Operation_RequiredInterface", Operation_RequiredInterface);
		Operation_RequiredInterface_I.reset(new Interface());
		this->addToElementRepository("I", Operation_RequiredInterface_I);
			Operation_RequiredInterface_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_I_setP_Integer);
				Operation_RequiredInterface_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_I_setP_Integer_v);
		Operation_RequiredInterface_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", Operation_RequiredInterface_IImpl);
			Operation_RequiredInterface_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_IImpl_setP_Integer);
				Operation_RequiredInterface_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_IImpl_setP_Integer_v);
			Operation_RequiredInterface_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_IImpl_IRealization);
		Operation_RequiredInterface_B.reset(new Class_());
		this->addToElementRepository("B", Operation_RequiredInterface_B);
			Operation_RequiredInterface_B_p.reset(new Property());
			this->addToElementRepository("p", Operation_RequiredInterface_B_p);
			Operation_RequiredInterface_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_B_setPActivity);
				Operation_RequiredInterface_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_B_setPActivity_v);
				Operation_RequiredInterface_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_B_setPActivity_vParameterNode);
					Operation_RequiredInterface_B_setPActivity_vParameterNode_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", Operation_RequiredInterface_B_setPActivity_vParameterNode_LiteralInteger0);
				Operation_RequiredInterface_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", Operation_RequiredInterface_B_setPActivity_Set_this_p);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_B_setPActivity_Set_this_p_result);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural1", Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural1);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger2.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger2", Operation_RequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger2);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", Operation_RequiredInterface_B_setPActivity_Set_this_p_value);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger3);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural4", Operation_RequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural4);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", Operation_RequiredInterface_B_setPActivity_Set_this_p_object);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger5.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger5", Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger5);
						Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural6", Operation_RequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural6);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow7", Operation_RequiredInterface_B_setPActivity_ObjectFlow7);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralInteger8);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean9", Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow10", Operation_RequiredInterface_B_setPActivity_ObjectFlow10);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralInteger12);
				Operation_RequiredInterface_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_B_setPActivity_this);
					Operation_RequiredInterface_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_B_setPActivity_this_result);
						Operation_RequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", Operation_RequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural13);
						Operation_RequiredInterface_B_setPActivity_this_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", Operation_RequiredInterface_B_setPActivity_this_result_LiteralInteger14);
			Operation_RequiredInterface_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_B_IRealization);
			Operation_RequiredInterface_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_B_setP_Integer);
				Operation_RequiredInterface_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_B_setP_Integer_v);
		Operation_RequiredInterface_R.reset(new Association());
		this->addToElementRepository("R", Operation_RequiredInterface_R);
			Operation_RequiredInterface_R_y.reset(new Property());
			this->addToElementRepository("y", Operation_RequiredInterface_R_y);
			Operation_RequiredInterface_R_x.reset(new Property());
			this->addToElementRepository("x", Operation_RequiredInterface_R_x);
		Operation_RequiredInterface_S.reset(new Association());
		this->addToElementRepository("S", Operation_RequiredInterface_S);
			Operation_RequiredInterface_S_x.reset(new Property());
			this->addToElementRepository("x", Operation_RequiredInterface_S_x);
			Operation_RequiredInterface_S_y.reset(new Property());
			this->addToElementRepository("y", Operation_RequiredInterface_S_y);
		Operation_RequiredInterface_main.reset(new Activity());
		this->addToElementRepository("main", Operation_RequiredInterface_main);
			Operation_RequiredInterface_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", Operation_RequiredInterface_main_Value_4);
				Operation_RequiredInterface_main_Value_4_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", Operation_RequiredInterface_main_Value_4_LiteralInteger15);
				Operation_RequiredInterface_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Value_4_result);
					Operation_RequiredInterface_main_Value_4_result_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", Operation_RequiredInterface_main_Value_4_result_LiteralInteger16);
					Operation_RequiredInterface_main_Value_4_result_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", Operation_RequiredInterface_main_Value_4_result_LiteralUnlimitedNatural17);
			Operation_RequiredInterface_main_ObjectFlow18.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow18", Operation_RequiredInterface_main_ObjectFlow18);
				Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean19", Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19);
				Operation_RequiredInterface_main_ObjectFlow18_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", Operation_RequiredInterface_main_ObjectFlow18_LiteralInteger20);
			Operation_RequiredInterface_main_ObjectFlow21.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow21", Operation_RequiredInterface_main_ObjectFlow21);
				Operation_RequiredInterface_main_ObjectFlow21_LiteralInteger22.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger22", Operation_RequiredInterface_main_ObjectFlow21_LiteralInteger22);
				Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean23", Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23);
			Operation_RequiredInterface_main_Read_d_c.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.c", Operation_RequiredInterface_main_Read_d_c);
				Operation_RequiredInterface_main_Read_d_c_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_main_Read_d_c_object);
					Operation_RequiredInterface_main_Read_d_c_object_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", Operation_RequiredInterface_main_Read_d_c_object_LiteralInteger24);
					Operation_RequiredInterface_main_Read_d_c_object_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", Operation_RequiredInterface_main_Read_d_c_object_LiteralUnlimitedNatural25);
				Operation_RequiredInterface_main_Read_d_c_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Read_d_c_result);
					Operation_RequiredInterface_main_Read_d_c_result_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", Operation_RequiredInterface_main_Read_d_c_result_LiteralInteger26);
					Operation_RequiredInterface_main_Read_d_c_result_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", Operation_RequiredInterface_main_Read_d_c_result_LiteralUnlimitedNatural27);
			Operation_RequiredInterface_main_ObjectFlow28.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow28", Operation_RequiredInterface_main_ObjectFlow28);
				Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean29", Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29);
				Operation_RequiredInterface_main_ObjectFlow28_LiteralInteger30.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger30", Operation_RequiredInterface_main_ObjectFlow28_LiteralInteger30);
			Operation_RequiredInterface_main_Read_d_a.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.a", Operation_RequiredInterface_main_Read_d_a);
				Operation_RequiredInterface_main_Read_d_a_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_main_Read_d_a_object);
					Operation_RequiredInterface_main_Read_d_a_object_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", Operation_RequiredInterface_main_Read_d_a_object_LiteralInteger31);
					Operation_RequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", Operation_RequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural32);
				Operation_RequiredInterface_main_Read_d_a_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Read_d_a_result);
					Operation_RequiredInterface_main_Read_d_a_result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", Operation_RequiredInterface_main_Read_d_a_result_LiteralInteger33);
					Operation_RequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", Operation_RequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural34);
			Operation_RequiredInterface_main_ObjectFlow35.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow35", Operation_RequiredInterface_main_ObjectFlow35);
				Operation_RequiredInterface_main_ObjectFlow35_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", Operation_RequiredInterface_main_ObjectFlow35_LiteralInteger36);
				Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37);
			Operation_RequiredInterface_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", Operation_RequiredInterface_main_Read_b_p);
				Operation_RequiredInterface_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Read_b_p_result);
					Operation_RequiredInterface_main_Read_b_p_result_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", Operation_RequiredInterface_main_Read_b_p_result_LiteralInteger38);
					Operation_RequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", Operation_RequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural39);
				Operation_RequiredInterface_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_main_Read_b_p_object);
					Operation_RequiredInterface_main_Read_b_p_object_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", Operation_RequiredInterface_main_Read_b_p_object_LiteralInteger40);
					Operation_RequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural41", Operation_RequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural41);
			Operation_RequiredInterface_main_ObjectFlow42.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow42", Operation_RequiredInterface_main_ObjectFlow42);
				Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean43", Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43);
				Operation_RequiredInterface_main_ObjectFlow42_LiteralInteger44.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger44", Operation_RequiredInterface_main_ObjectFlow42_LiteralInteger44);
			Operation_RequiredInterface_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", Operation_RequiredInterface_main_Read_a_b);
				Operation_RequiredInterface_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_RequiredInterface_main_Read_a_b_object);
					Operation_RequiredInterface_main_Read_a_b_object_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", Operation_RequiredInterface_main_Read_a_b_object_LiteralInteger45);
					Operation_RequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", Operation_RequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural46);
				Operation_RequiredInterface_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Read_a_b_result);
					Operation_RequiredInterface_main_Read_a_b_result_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Operation_RequiredInterface_main_Read_a_b_result_LiteralInteger47);
					Operation_RequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural48", Operation_RequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural48);
			Operation_RequiredInterface_main_D_.reset(new CallOperationAction());
			this->addToElementRepository("D()", Operation_RequiredInterface_main_D_);
				Operation_RequiredInterface_main_D__result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_D__result);
					Operation_RequiredInterface_main_D__result_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", Operation_RequiredInterface_main_D__result_LiteralInteger49);
					Operation_RequiredInterface_main_D__result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", Operation_RequiredInterface_main_D__result_LiteralUnlimitedNatural50);
					Operation_RequiredInterface_main_D__result_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", Operation_RequiredInterface_main_D__result_LiteralInteger51);
				Operation_RequiredInterface_main_D__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_RequiredInterface_main_D__target);
					Operation_RequiredInterface_main_D__target_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", Operation_RequiredInterface_main_D__target_LiteralUnlimitedNatural52);
					Operation_RequiredInterface_main_D__target_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", Operation_RequiredInterface_main_D__target_LiteralInteger53);
			Operation_RequiredInterface_main_Call_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call setP()", Operation_RequiredInterface_main_Call_setP_);
				Operation_RequiredInterface_main_Call_setP__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_RequiredInterface_main_Call_setP__target);
					Operation_RequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", Operation_RequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural54);
					Operation_RequiredInterface_main_Call_setP__target_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", Operation_RequiredInterface_main_Call_setP__target_LiteralInteger55);
				Operation_RequiredInterface_main_Call_setP__v.reset(new InputPin());
				this->addToElementRepository("v", Operation_RequiredInterface_main_Call_setP__v);
					Operation_RequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural56", Operation_RequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural56);
					Operation_RequiredInterface_main_Call_setP__v_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", Operation_RequiredInterface_main_Call_setP__v_LiteralInteger57);
					Operation_RequiredInterface_main_Call_setP__v_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", Operation_RequiredInterface_main_Call_setP__v_LiteralInteger58);
			Operation_RequiredInterface_main_Fork_d.reset(new ForkNode());
			this->addToElementRepository("Fork d", Operation_RequiredInterface_main_Fork_d);
			Operation_RequiredInterface_main_ObjectFlow59.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow59", Operation_RequiredInterface_main_ObjectFlow59);
				Operation_RequiredInterface_main_ObjectFlow59_LiteralInteger60.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger60", Operation_RequiredInterface_main_ObjectFlow59_LiteralInteger60);
				Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean61", Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61);
			Operation_RequiredInterface_main_ObjectFlow62.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow62", Operation_RequiredInterface_main_ObjectFlow62);
				Operation_RequiredInterface_main_ObjectFlow62_LiteralInteger63.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger63", Operation_RequiredInterface_main_ObjectFlow62_LiteralInteger63);
				Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean64", Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64);
			Operation_RequiredInterface_main_ObjectFlow65.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow65", Operation_RequiredInterface_main_ObjectFlow65);
				Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean66", Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66);
				Operation_RequiredInterface_main_ObjectFlow65_LiteralInteger67.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger67", Operation_RequiredInterface_main_ObjectFlow65_LiteralInteger67);
			Operation_RequiredInterface_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", Operation_RequiredInterface_main_Call_testP);
				Operation_RequiredInterface_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", Operation_RequiredInterface_main_Call_testP_p);
					Operation_RequiredInterface_main_Call_testP_p_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", Operation_RequiredInterface_main_Call_testP_p_LiteralInteger68);
					Operation_RequiredInterface_main_Call_testP_p_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", Operation_RequiredInterface_main_Call_testP_p_LiteralInteger69);
					Operation_RequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", Operation_RequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural70);
			Operation_RequiredInterface_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", Operation_RequiredInterface_main_testP);
				Operation_RequiredInterface_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", Operation_RequiredInterface_main_testP_p);
			Operation_RequiredInterface_main_ControlFlow71.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow71", Operation_RequiredInterface_main_ControlFlow71);
			Operation_RequiredInterface_main_Create_D.reset(new CreateObjectAction());
			this->addToElementRepository("Create D", Operation_RequiredInterface_main_Create_D);
				Operation_RequiredInterface_main_Create_D_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_RequiredInterface_main_Create_D_result);
					Operation_RequiredInterface_main_Create_D_result_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", Operation_RequiredInterface_main_Create_D_result_LiteralUnlimitedNatural72);
					Operation_RequiredInterface_main_Create_D_result_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", Operation_RequiredInterface_main_Create_D_result_LiteralInteger73);
			Operation_RequiredInterface_main_ObjectFlow74.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow74", Operation_RequiredInterface_main_ObjectFlow74);
				Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean75", Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75);
				Operation_RequiredInterface_main_ObjectFlow74_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", Operation_RequiredInterface_main_ObjectFlow74_LiteralInteger76);
		Operation_RequiredInterface_D.reset(new Class_());
		this->addToElementRepository("D", Operation_RequiredInterface_D);
			Operation_RequiredInterface_D_c.reset(new Property());
			this->addToElementRepository("c", Operation_RequiredInterface_D_c);
			Operation_RequiredInterface_D_s.reset(new Connector());
			this->addToElementRepository("s", Operation_RequiredInterface_D_s);
				Operation_RequiredInterface_D_s_ConnectorEnd77.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd77", Operation_RequiredInterface_D_s_ConnectorEnd77);
				Operation_RequiredInterface_D_s_ConnectorEnd78.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd78", Operation_RequiredInterface_D_s_ConnectorEnd78);
			Operation_RequiredInterface_D_a.reset(new Property());
			this->addToElementRepository("a", Operation_RequiredInterface_D_a);
			Operation_RequiredInterface_D_D_D.reset(new Operation());
			this->addToElementRepository("D_D", Operation_RequiredInterface_D_D_D);
				Operation_RequiredInterface_D_D_D_result.reset(new Parameter());
				this->addToElementRepository("result", Operation_RequiredInterface_D_D_D_result);
		Operation_RequiredInterface_C.reset(new Class_());
		this->addToElementRepository("C", Operation_RequiredInterface_C);
			Operation_RequiredInterface_C_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_C_setPActivity);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow79", Operation_RequiredInterface_C_setPActivity_ObjectFlow79);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean80", Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralInteger81.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger81", Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralInteger81);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow82", Operation_RequiredInterface_C_setPActivity_ObjectFlow82);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean83", Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralInteger84);
				Operation_RequiredInterface_C_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_C_setPActivity_this);
					Operation_RequiredInterface_C_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_C_setPActivity_this_result);
						Operation_RequiredInterface_C_setPActivity_this_result_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", Operation_RequiredInterface_C_setPActivity_this_result_LiteralInteger85);
						Operation_RequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural86", Operation_RequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural86);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
						Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger87);
						Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural88.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural88", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural88);
						Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger89.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger89", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger89);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
						Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural90", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural90);
						Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger91);
				Operation_RequiredInterface_C_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_C_setPActivity_vParameterNode);
					Operation_RequiredInterface_C_setPActivity_vParameterNode_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", Operation_RequiredInterface_C_setPActivity_vParameterNode_LiteralInteger92);
				Operation_RequiredInterface_C_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_C_setPActivity_v);
			Operation_RequiredInterface_C_q.reset(new Port());
			this->addToElementRepository("q", Operation_RequiredInterface_C_q);
			Operation_RequiredInterface_C_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_RequiredInterface_C_IRealization);
			Operation_RequiredInterface_C_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_C_setP_Integer);
				Operation_RequiredInterface_C_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_C_setP_Integer_v);
		Operation_RequiredInterface_A.reset(new Class_());
		this->addToElementRepository("A", Operation_RequiredInterface_A);
			Operation_RequiredInterface_A_q.reset(new Port());
			this->addToElementRepository("q", Operation_RequiredInterface_A_q);
			Operation_RequiredInterface_A_b.reset(new Property());
			this->addToElementRepository("b", Operation_RequiredInterface_A_b);
			Operation_RequiredInterface_A_r.reset(new Connector());
			this->addToElementRepository("r", Operation_RequiredInterface_A_r);
				Operation_RequiredInterface_A_r_ConnectorEnd93.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd93", Operation_RequiredInterface_A_r_ConnectorEnd93);
				Operation_RequiredInterface_A_r_ConnectorEnd94.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd94", Operation_RequiredInterface_A_r_ConnectorEnd94);
			Operation_RequiredInterface_A_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_RequiredInterface_A_setPActivity);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow95", Operation_RequiredInterface_A_setPActivity_ObjectFlow95);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean96", Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralInteger97);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q);
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
						Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger98.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger98", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger98);
						Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural99", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural99);
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
						Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural100", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural100);
						Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger101);
						Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger102.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger102", Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger102);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow103", Operation_RequiredInterface_A_setPActivity_ObjectFlow103);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralInteger104);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean105", Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105);
				Operation_RequiredInterface_A_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_A_setPActivity_v);
				Operation_RequiredInterface_A_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_RequiredInterface_A_setPActivity_vParameterNode);
					Operation_RequiredInterface_A_setPActivity_vParameterNode_LiteralInteger106.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger106", Operation_RequiredInterface_A_setPActivity_vParameterNode_LiteralInteger106);
				Operation_RequiredInterface_A_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_RequiredInterface_A_setPActivity_this);
					Operation_RequiredInterface_A_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_RequiredInterface_A_setPActivity_this_result);
						Operation_RequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural107.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural107", Operation_RequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural107);
						Operation_RequiredInterface_A_setPActivity_this_result_LiteralInteger108.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger108", Operation_RequiredInterface_A_setPActivity_this_result_LiteralInteger108);
			Operation_RequiredInterface_A_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_RequiredInterface_A_setP_Integer);
				Operation_RequiredInterface_A_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_RequiredInterface_A_setP_Integer_v);

	// Initialize public members
	/*
	 * Model Operation_RequiredInterface
	 */
	Operation_RequiredInterface->setThisPackagePtr(Operation_RequiredInterface);
	Operation_RequiredInterface->setName("Operation_RequiredInterface");
	Operation_RequiredInterface->setVisibility(VisibilityKind::public_);
		// Interface I
		Operation_RequiredInterface_I->setThisInterfacePtr(Operation_RequiredInterface_I);
		Operation_RequiredInterface_I->setName("I");
		Operation_RequiredInterface_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			Operation_RequiredInterface_I_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_I_setP_Integer);
			Operation_RequiredInterface_I_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_I_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_I_setP_Integer_v);
				Operation_RequiredInterface_I_setP_Integer_v->setName("v");
				Operation_RequiredInterface_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_I_setP_Integer->addOwnedParameter(Operation_RequiredInterface_I_setP_Integer_v);
		Operation_RequiredInterface_I->addOwnedOperation(Operation_RequiredInterface_I_setP_Integer);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_I);
		// Class IImpl
		Operation_RequiredInterface_IImpl->setThisClass_Ptr(Operation_RequiredInterface_IImpl);
		Operation_RequiredInterface_IImpl->setName("IImpl");
		Operation_RequiredInterface_IImpl->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_IImpl_IRealization->setName("IRealization");
			Operation_RequiredInterface_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_IImpl_IRealization->setContract(Operation_RequiredInterface_I);
			
		Operation_RequiredInterface_IImpl->addInterfaceRealization(Operation_RequiredInterface_IImpl_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_IImpl_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_IImpl_setP_Integer);
			Operation_RequiredInterface_IImpl_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_IImpl_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_IImpl_setP_Integer_v);
				Operation_RequiredInterface_IImpl_setP_Integer_v->setName("v");
				Operation_RequiredInterface_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_IImpl_setP_Integer->addOwnedParameter(Operation_RequiredInterface_IImpl_setP_Integer_v);
		Operation_RequiredInterface_IImpl->addOwnedOperation(Operation_RequiredInterface_IImpl_setP_Integer);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_IImpl);
		// Class B
		Operation_RequiredInterface_B->setThisClass_Ptr(Operation_RequiredInterface_B);
		Operation_RequiredInterface_B->setName("B");
		Operation_RequiredInterface_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			Operation_RequiredInterface_B_p->setThisElementPtr(Operation_RequiredInterface_B_p);
			Operation_RequiredInterface_B_p->setName("p");
			Operation_RequiredInterface_B_p->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Operation_RequiredInterface_B->addOwnedAttribute(Operation_RequiredInterface_B_p);
		// Activity setPActivity
			Operation_RequiredInterface_B_setPActivity->setThisActivityPtr(Operation_RequiredInterface_B_setPActivity);
			Operation_RequiredInterface_B_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_B_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_v);
				Operation_RequiredInterface_B_setPActivity_v->setName("v");
				Operation_RequiredInterface_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_B_setPActivity->addOwnedParameter(Operation_RequiredInterface_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_B_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_vParameterNode);
				Operation_RequiredInterface_B_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_B_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_B_setPActivity_v);
			Operation_RequiredInterface_B_setPActivity->addNode(Operation_RequiredInterface_B_setPActivity_vParameterNode);
				// AddStructuralFeatureValueAction Set this.p
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setThisExecutableNodePtr(Operation_RequiredInterface_B_setPActivity_Set_this_p);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setName("Set this.p");
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setStructuralFeature(Operation_RequiredInterface_B_p);
					// InputPin object
					Operation_RequiredInterface_B_setPActivity_Set_this_p_object->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_Set_this_p_object);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_object->setName("object");
					Operation_RequiredInterface_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_object->setType(Operation_RequiredInterface_B);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setObject(Operation_RequiredInterface_B_setPActivity_Set_this_p_object);
					// InputPin value
					Operation_RequiredInterface_B_setPActivity_Set_this_p_value->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_Set_this_p_value);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_value->setName("value");
					Operation_RequiredInterface_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setValue(Operation_RequiredInterface_B_setPActivity_Set_this_p_value);
					// OutputPin result
					Operation_RequiredInterface_B_setPActivity_Set_this_p_result->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_Set_this_p_result);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_result->setName("result");
					Operation_RequiredInterface_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_Set_this_p_result->setType(Operation_RequiredInterface_B);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setResult(Operation_RequiredInterface_B_setPActivity_Set_this_p_result);
				Operation_RequiredInterface_B_setPActivity_Set_this_p->setIsReplaceAll(true);
			Operation_RequiredInterface_B_setPActivity->addNode(Operation_RequiredInterface_B_setPActivity_Set_this_p);
				// ReadSelfAction this
				Operation_RequiredInterface_B_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_B_setPActivity_this);
				Operation_RequiredInterface_B_setPActivity_this->setName("this");
				Operation_RequiredInterface_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_B_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_this_result);
					Operation_RequiredInterface_B_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_this_result->setType(Operation_RequiredInterface_B);
				Operation_RequiredInterface_B_setPActivity_this->setResult(Operation_RequiredInterface_B_setPActivity_this_result);
			Operation_RequiredInterface_B_setPActivity->addNode(Operation_RequiredInterface_B_setPActivity_this);
				// ObjectFlow ObjectFlow7 from result to object
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setThisActivityEdgePtr(Operation_RequiredInterface_B_setPActivity_ObjectFlow7);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setName("ObjectFlow7");
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setSource(Operation_RequiredInterface_B_setPActivity_this_result);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setTarget(Operation_RequiredInterface_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean9
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9->setName("LiteralBoolean9");
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9->setValue(true);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow7->setGuard(Operation_RequiredInterface_B_setPActivity_ObjectFlow7_LiteralBoolean9);
			Operation_RequiredInterface_B_setPActivity->addEdge(Operation_RequiredInterface_B_setPActivity_ObjectFlow7);
				// ObjectFlow ObjectFlow10 from vParameterNode to value
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setThisActivityEdgePtr(Operation_RequiredInterface_B_setPActivity_ObjectFlow10);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setName("ObjectFlow10");
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setSource(Operation_RequiredInterface_B_setPActivity_vParameterNode);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setTarget(Operation_RequiredInterface_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean11
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11->setThisElementPtr(Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11->setName("LiteralBoolean11");
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11->setValue(true);
				Operation_RequiredInterface_B_setPActivity_ObjectFlow10->setGuard(Operation_RequiredInterface_B_setPActivity_ObjectFlow10_LiteralBoolean11);
			Operation_RequiredInterface_B_setPActivity->addEdge(Operation_RequiredInterface_B_setPActivity_ObjectFlow10);
		Operation_RequiredInterface_B->addOwnedBehavior(Operation_RequiredInterface_B_setPActivity);
			Operation_RequiredInterface_B_IRealization->setName("IRealization");
			Operation_RequiredInterface_B_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_B_IRealization->setContract(Operation_RequiredInterface_I);
			
		Operation_RequiredInterface_B->addInterfaceRealization(Operation_RequiredInterface_B_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_B_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_B_setP_Integer);
			Operation_RequiredInterface_B_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_B_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_B_setP_Integer_v);
				Operation_RequiredInterface_B_setP_Integer_v->setName("v");
				Operation_RequiredInterface_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_B_setP_Integer->addOwnedParameter(Operation_RequiredInterface_B_setP_Integer_v);
			Operation_RequiredInterface_B_setP_Integer->addMethod(Operation_RequiredInterface_B_setPActivity);
		Operation_RequiredInterface_B->addOwnedOperation(Operation_RequiredInterface_B_setP_Integer);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_B);
		// Association R
		Operation_RequiredInterface_R->setThisAssociationPtr(Operation_RequiredInterface_R);
		Operation_RequiredInterface_R->setName("R");
		Operation_RequiredInterface_R->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_R->addOwnedEnd(Operation_RequiredInterface_R_x);
		Operation_RequiredInterface_R->addOwnedEnd(Operation_RequiredInterface_R_y);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_R);
		// Association S
		Operation_RequiredInterface_S->setThisAssociationPtr(Operation_RequiredInterface_S);
		Operation_RequiredInterface_S->setName("S");
		Operation_RequiredInterface_S->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_S->addOwnedEnd(Operation_RequiredInterface_S_x);
		Operation_RequiredInterface_S->addOwnedEnd(Operation_RequiredInterface_S_y);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_S);
		// Activity main
		Operation_RequiredInterface_main->setThisActivityPtr(Operation_RequiredInterface_main);
		Operation_RequiredInterface_main->setName("main");
		Operation_RequiredInterface_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			Operation_RequiredInterface_main_testP->setThisClass_Ptr(Operation_RequiredInterface_main_testP);
			Operation_RequiredInterface_main_testP->setName("testP");
			Operation_RequiredInterface_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				Operation_RequiredInterface_main_testP_p->setThisElementPtr(Operation_RequiredInterface_main_testP_p);
				Operation_RequiredInterface_main_testP_p->setName("p");
				Operation_RequiredInterface_main_testP_p->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_main_testP->addOwnedParameter(Operation_RequiredInterface_main_testP_p);
			Operation_RequiredInterface_main_testP->addLanguage("C++");
			Operation_RequiredInterface_main_testP->addLanguage("Include");
			Operation_RequiredInterface_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting d.a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"d.a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Invocation forwarded out of c through q: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			Operation_RequiredInterface_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		Operation_RequiredInterface_main->addOwnedBehavior(Operation_RequiredInterface_main_testP);
			// CallOperationAction D()
			Operation_RequiredInterface_main_D_->setThisExecutableNodePtr(Operation_RequiredInterface_main_D_);
			Operation_RequiredInterface_main_D_->setName("D()");
			Operation_RequiredInterface_main_D_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Operation_RequiredInterface_main_D__result->setThisElementPtr(Operation_RequiredInterface_main_D__result);
				Operation_RequiredInterface_main_D__result->setName("result");
				Operation_RequiredInterface_main_D__result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_D__result->setType(Operation_RequiredInterface_D);
			Operation_RequiredInterface_main_D_->addResult(Operation_RequiredInterface_main_D__result);
			Operation_RequiredInterface_main_D_->setOperation(Operation_RequiredInterface_D_D_D);
				// InputPin target
				Operation_RequiredInterface_main_D__target->setThisElementPtr(Operation_RequiredInterface_main_D__target);
				Operation_RequiredInterface_main_D__target->setName("target");
				Operation_RequiredInterface_main_D__target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_D__target->setType(Operation_RequiredInterface_D);
			Operation_RequiredInterface_main_D_->setTarget(Operation_RequiredInterface_main_D__target);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_D_);
			// CallOperationAction Call setP()
			Operation_RequiredInterface_main_Call_setP_->setThisExecutableNodePtr(Operation_RequiredInterface_main_Call_setP_);
			Operation_RequiredInterface_main_Call_setP_->setName("Call setP()");
			Operation_RequiredInterface_main_Call_setP_->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Call_setP_->setOperation(Operation_RequiredInterface_C_setP_Integer);
				// InputPin target
				Operation_RequiredInterface_main_Call_setP__target->setThisElementPtr(Operation_RequiredInterface_main_Call_setP__target);
				Operation_RequiredInterface_main_Call_setP__target->setName("target");
				Operation_RequiredInterface_main_Call_setP__target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Call_setP__target->setType(Operation_RequiredInterface_C);
			Operation_RequiredInterface_main_Call_setP_->setTarget(Operation_RequiredInterface_main_Call_setP__target);
				// InputPin v
				Operation_RequiredInterface_main_Call_setP__v->setThisElementPtr(Operation_RequiredInterface_main_Call_setP__v);
				Operation_RequiredInterface_main_Call_setP__v->setName("v");
				Operation_RequiredInterface_main_Call_setP__v->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Call_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_main_Call_setP_->addArgument(Operation_RequiredInterface_main_Call_setP__v);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Call_setP_);
			// ForkNode Fork d
			Operation_RequiredInterface_main_Fork_d->setThisElementPtr(Operation_RequiredInterface_main_Fork_d);
			Operation_RequiredInterface_main_Fork_d->setName("Fork d");
			Operation_RequiredInterface_main_Fork_d->setVisibility(VisibilityKind::public_);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Fork_d);
			// ValueSpecificationAction Value(4)
			Operation_RequiredInterface_main_Value_4->setThisExecutableNodePtr(Operation_RequiredInterface_main_Value_4);
			Operation_RequiredInterface_main_Value_4->setName("Value(4)");
			Operation_RequiredInterface_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger15
				Operation_RequiredInterface_main_Value_4_LiteralInteger15->setThisElementPtr(Operation_RequiredInterface_main_Value_4_LiteralInteger15);
				Operation_RequiredInterface_main_Value_4_LiteralInteger15->setName("LiteralInteger15");
				Operation_RequiredInterface_main_Value_4_LiteralInteger15->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Value_4_LiteralInteger15->setValue(4);
			Operation_RequiredInterface_main_Value_4->setValue(Operation_RequiredInterface_main_Value_4_LiteralInteger15);
				// OutputPin result
				Operation_RequiredInterface_main_Value_4_result->setThisElementPtr(Operation_RequiredInterface_main_Value_4_result);
				Operation_RequiredInterface_main_Value_4_result->setName("result");
				Operation_RequiredInterface_main_Value_4_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_main_Value_4->setResult(Operation_RequiredInterface_main_Value_4_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Value_4);
			// ReadStructuralFeatureAction Read d.c
			Operation_RequiredInterface_main_Read_d_c->setThisExecutableNodePtr(Operation_RequiredInterface_main_Read_d_c);
			Operation_RequiredInterface_main_Read_d_c->setName("Read d.c");
			Operation_RequiredInterface_main_Read_d_c->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Read_d_c->setStructuralFeature(Operation_RequiredInterface_D_c);
				// InputPin object
				Operation_RequiredInterface_main_Read_d_c_object->setThisElementPtr(Operation_RequiredInterface_main_Read_d_c_object);
				Operation_RequiredInterface_main_Read_d_c_object->setName("object");
				Operation_RequiredInterface_main_Read_d_c_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_d_c_object->setType(Operation_RequiredInterface_D);
			Operation_RequiredInterface_main_Read_d_c->setObject(Operation_RequiredInterface_main_Read_d_c_object);
				// OutputPin result
				Operation_RequiredInterface_main_Read_d_c_result->setThisElementPtr(Operation_RequiredInterface_main_Read_d_c_result);
				Operation_RequiredInterface_main_Read_d_c_result->setName("result");
				Operation_RequiredInterface_main_Read_d_c_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_d_c_result->setType(Operation_RequiredInterface_C);
			Operation_RequiredInterface_main_Read_d_c->setResult(Operation_RequiredInterface_main_Read_d_c_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Read_d_c);
			// ReadStructuralFeatureAction Read d.a
			Operation_RequiredInterface_main_Read_d_a->setThisExecutableNodePtr(Operation_RequiredInterface_main_Read_d_a);
			Operation_RequiredInterface_main_Read_d_a->setName("Read d.a");
			Operation_RequiredInterface_main_Read_d_a->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Read_d_a->setStructuralFeature(Operation_RequiredInterface_D_a);
				// InputPin object
				Operation_RequiredInterface_main_Read_d_a_object->setThisElementPtr(Operation_RequiredInterface_main_Read_d_a_object);
				Operation_RequiredInterface_main_Read_d_a_object->setName("object");
				Operation_RequiredInterface_main_Read_d_a_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_d_a_object->setType(Operation_RequiredInterface_D);
			Operation_RequiredInterface_main_Read_d_a->setObject(Operation_RequiredInterface_main_Read_d_a_object);
				// OutputPin result
				Operation_RequiredInterface_main_Read_d_a_result->setThisElementPtr(Operation_RequiredInterface_main_Read_d_a_result);
				Operation_RequiredInterface_main_Read_d_a_result->setName("result");
				Operation_RequiredInterface_main_Read_d_a_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_d_a_result->setType(Operation_RequiredInterface_A);
			Operation_RequiredInterface_main_Read_d_a->setResult(Operation_RequiredInterface_main_Read_d_a_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Read_d_a);
			// CallBehaviorAction Call testP
			Operation_RequiredInterface_main_Call_testP->setThisExecutableNodePtr(Operation_RequiredInterface_main_Call_testP);
			Operation_RequiredInterface_main_Call_testP->setName("Call testP");
			Operation_RequiredInterface_main_Call_testP->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Call_testP->setBehavior(Operation_RequiredInterface_main_testP);
				// InputPin p
				Operation_RequiredInterface_main_Call_testP_p->setThisElementPtr(Operation_RequiredInterface_main_Call_testP_p);
				Operation_RequiredInterface_main_Call_testP_p->setName("p");
				Operation_RequiredInterface_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_main_Call_testP->addArgument(Operation_RequiredInterface_main_Call_testP_p);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Call_testP);
			// ReadStructuralFeatureAction Read b.p
			Operation_RequiredInterface_main_Read_b_p->setThisExecutableNodePtr(Operation_RequiredInterface_main_Read_b_p);
			Operation_RequiredInterface_main_Read_b_p->setName("Read b.p");
			Operation_RequiredInterface_main_Read_b_p->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Read_b_p->setStructuralFeature(Operation_RequiredInterface_B_p);
				// InputPin object
				Operation_RequiredInterface_main_Read_b_p_object->setThisElementPtr(Operation_RequiredInterface_main_Read_b_p_object);
				Operation_RequiredInterface_main_Read_b_p_object->setName("object");
				Operation_RequiredInterface_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_b_p_object->setType(Operation_RequiredInterface_B);
			Operation_RequiredInterface_main_Read_b_p->setObject(Operation_RequiredInterface_main_Read_b_p_object);
				// OutputPin result
				Operation_RequiredInterface_main_Read_b_p_result->setThisElementPtr(Operation_RequiredInterface_main_Read_b_p_result);
				Operation_RequiredInterface_main_Read_b_p_result->setName("result");
				Operation_RequiredInterface_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_main_Read_b_p->setResult(Operation_RequiredInterface_main_Read_b_p_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Read_b_p);
			// CreateObjectAction Create D
			Operation_RequiredInterface_main_Create_D->setThisExecutableNodePtr(Operation_RequiredInterface_main_Create_D);
			Operation_RequiredInterface_main_Create_D->setName("Create D");
			Operation_RequiredInterface_main_Create_D->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Create_D->setClassifier(Operation_RequiredInterface_D);
				// OutputPin result
				Operation_RequiredInterface_main_Create_D_result->setThisElementPtr(Operation_RequiredInterface_main_Create_D_result);
				Operation_RequiredInterface_main_Create_D_result->setName("result");
				Operation_RequiredInterface_main_Create_D_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Create_D_result->setType(Operation_RequiredInterface_D);
			Operation_RequiredInterface_main_Create_D->setResult(Operation_RequiredInterface_main_Create_D_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Create_D);
			// ReadStructuralFeatureAction Read a.b
			Operation_RequiredInterface_main_Read_a_b->setThisExecutableNodePtr(Operation_RequiredInterface_main_Read_a_b);
			Operation_RequiredInterface_main_Read_a_b->setName("Read a.b");
			Operation_RequiredInterface_main_Read_a_b->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_main_Read_a_b->setStructuralFeature(Operation_RequiredInterface_A_b);
				// InputPin object
				Operation_RequiredInterface_main_Read_a_b_object->setThisElementPtr(Operation_RequiredInterface_main_Read_a_b_object);
				Operation_RequiredInterface_main_Read_a_b_object->setName("object");
				Operation_RequiredInterface_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_a_b_object->setType(Operation_RequiredInterface_A);
			Operation_RequiredInterface_main_Read_a_b->setObject(Operation_RequiredInterface_main_Read_a_b_object);
				// OutputPin result
				Operation_RequiredInterface_main_Read_a_b_result->setThisElementPtr(Operation_RequiredInterface_main_Read_a_b_result);
				Operation_RequiredInterface_main_Read_a_b_result->setName("result");
				Operation_RequiredInterface_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_Read_a_b_result->setType(Operation_RequiredInterface_B);
			Operation_RequiredInterface_main_Read_a_b->setResult(Operation_RequiredInterface_main_Read_a_b_result);
		Operation_RequiredInterface_main->addNode(Operation_RequiredInterface_main_Read_a_b);
			// ObjectFlow ObjectFlow59 from result to object
			Operation_RequiredInterface_main_ObjectFlow59->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow59);
			Operation_RequiredInterface_main_ObjectFlow59->setName("ObjectFlow59");
			Operation_RequiredInterface_main_ObjectFlow59->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow59->setSource(Operation_RequiredInterface_main_Read_d_a_result);
			Operation_RequiredInterface_main_ObjectFlow59->setTarget(Operation_RequiredInterface_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean61
				Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61);
				Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61->setName("LiteralBoolean61");
				Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow59->setGuard(Operation_RequiredInterface_main_ObjectFlow59_LiteralBoolean61);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow59);
			// ObjectFlow ObjectFlow62 from result to target
			Operation_RequiredInterface_main_ObjectFlow62->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow62);
			Operation_RequiredInterface_main_ObjectFlow62->setName("ObjectFlow62");
			Operation_RequiredInterface_main_ObjectFlow62->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow62->setSource(Operation_RequiredInterface_main_Read_d_c_result);
			Operation_RequiredInterface_main_ObjectFlow62->setTarget(Operation_RequiredInterface_main_Call_setP__target);
				// LiteralBoolean LiteralBoolean64
				Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64);
				Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64->setName("LiteralBoolean64");
				Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow62->setGuard(Operation_RequiredInterface_main_ObjectFlow62_LiteralBoolean64);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow62);
			// ObjectFlow ObjectFlow18 from result to target
			Operation_RequiredInterface_main_ObjectFlow18->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow18);
			Operation_RequiredInterface_main_ObjectFlow18->setName("ObjectFlow18");
			Operation_RequiredInterface_main_ObjectFlow18->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow18->setSource(Operation_RequiredInterface_main_Create_D_result);
			Operation_RequiredInterface_main_ObjectFlow18->setTarget(Operation_RequiredInterface_main_D__target);
				// LiteralBoolean LiteralBoolean19
				Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19);
				Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19->setName("LiteralBoolean19");
				Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow18->setGuard(Operation_RequiredInterface_main_ObjectFlow18_LiteralBoolean19);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow18);
			// ObjectFlow ObjectFlow21 from result to object
			Operation_RequiredInterface_main_ObjectFlow21->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow21);
			Operation_RequiredInterface_main_ObjectFlow21->setName("ObjectFlow21");
			Operation_RequiredInterface_main_ObjectFlow21->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow21->setSource(Operation_RequiredInterface_main_Read_a_b_result);
			Operation_RequiredInterface_main_ObjectFlow21->setTarget(Operation_RequiredInterface_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean23
				Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23);
				Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23->setName("LiteralBoolean23");
				Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow21->setGuard(Operation_RequiredInterface_main_ObjectFlow21_LiteralBoolean23);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow21);
			// ObjectFlow ObjectFlow28 from result to p
			Operation_RequiredInterface_main_ObjectFlow28->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow28);
			Operation_RequiredInterface_main_ObjectFlow28->setName("ObjectFlow28");
			Operation_RequiredInterface_main_ObjectFlow28->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow28->setSource(Operation_RequiredInterface_main_Read_b_p_result);
			Operation_RequiredInterface_main_ObjectFlow28->setTarget(Operation_RequiredInterface_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean29
				Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29);
				Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29->setName("LiteralBoolean29");
				Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow28->setGuard(Operation_RequiredInterface_main_ObjectFlow28_LiteralBoolean29);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow28);
			// ObjectFlow ObjectFlow65 from result to v
			Operation_RequiredInterface_main_ObjectFlow65->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow65);
			Operation_RequiredInterface_main_ObjectFlow65->setName("ObjectFlow65");
			Operation_RequiredInterface_main_ObjectFlow65->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow65->setSource(Operation_RequiredInterface_main_Value_4_result);
			Operation_RequiredInterface_main_ObjectFlow65->setTarget(Operation_RequiredInterface_main_Call_setP__v);
				// LiteralBoolean LiteralBoolean66
				Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66);
				Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66->setName("LiteralBoolean66");
				Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow65->setGuard(Operation_RequiredInterface_main_ObjectFlow65_LiteralBoolean66);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow65);
			// ObjectFlow ObjectFlow35 from result to Fork d
			Operation_RequiredInterface_main_ObjectFlow35->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow35);
			Operation_RequiredInterface_main_ObjectFlow35->setName("ObjectFlow35");
			Operation_RequiredInterface_main_ObjectFlow35->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow35->setSource(Operation_RequiredInterface_main_D__result);
			Operation_RequiredInterface_main_ObjectFlow35->setTarget(Operation_RequiredInterface_main_Fork_d);
				// LiteralBoolean LiteralBoolean37
				Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37);
				Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37->setName("LiteralBoolean37");
				Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow35->setGuard(Operation_RequiredInterface_main_ObjectFlow35_LiteralBoolean37);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow35);
			// ControlFlow ControlFlow71 from Call setP() to Read d.a
			Operation_RequiredInterface_main_ControlFlow71->setThisActivityEdgePtr(Operation_RequiredInterface_main_ControlFlow71);
			Operation_RequiredInterface_main_ControlFlow71->setName("ControlFlow71");
			Operation_RequiredInterface_main_ControlFlow71->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ControlFlow71->setSource(Operation_RequiredInterface_main_Call_setP_);
			Operation_RequiredInterface_main_ControlFlow71->setTarget(Operation_RequiredInterface_main_Read_d_a);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ControlFlow71);
			// ObjectFlow ObjectFlow42 from Fork d to object
			Operation_RequiredInterface_main_ObjectFlow42->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow42);
			Operation_RequiredInterface_main_ObjectFlow42->setName("ObjectFlow42");
			Operation_RequiredInterface_main_ObjectFlow42->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow42->setSource(Operation_RequiredInterface_main_Fork_d);
			Operation_RequiredInterface_main_ObjectFlow42->setTarget(Operation_RequiredInterface_main_Read_d_a_object);
				// LiteralBoolean LiteralBoolean43
				Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43);
				Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43->setName("LiteralBoolean43");
				Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow42->setGuard(Operation_RequiredInterface_main_ObjectFlow42_LiteralBoolean43);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow42);
			// ObjectFlow ObjectFlow74 from Fork d to object
			Operation_RequiredInterface_main_ObjectFlow74->setThisActivityEdgePtr(Operation_RequiredInterface_main_ObjectFlow74);
			Operation_RequiredInterface_main_ObjectFlow74->setName("ObjectFlow74");
			Operation_RequiredInterface_main_ObjectFlow74->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_main_ObjectFlow74->setSource(Operation_RequiredInterface_main_Fork_d);
			Operation_RequiredInterface_main_ObjectFlow74->setTarget(Operation_RequiredInterface_main_Read_d_c_object);
				// LiteralBoolean LiteralBoolean75
				Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75->setThisElementPtr(Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75);
				Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75->setName("LiteralBoolean75");
				Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75->setValue(true);
			Operation_RequiredInterface_main_ObjectFlow74->setGuard(Operation_RequiredInterface_main_ObjectFlow74_LiteralBoolean75);
		Operation_RequiredInterface_main->addEdge(Operation_RequiredInterface_main_ObjectFlow74);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_main);
		// Class D
		Operation_RequiredInterface_D->setThisClass_Ptr(Operation_RequiredInterface_D);
		Operation_RequiredInterface_D->setName("D");
		Operation_RequiredInterface_D->setVisibility(VisibilityKind::public_);
		
			// Property c
			Operation_RequiredInterface_D_c->setThisElementPtr(Operation_RequiredInterface_D_c);
			Operation_RequiredInterface_D_c->setName("c");
			Operation_RequiredInterface_D_c->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_D_c->setType(Operation_RequiredInterface_C);
			Operation_RequiredInterface_D_c->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_D->addOwnedAttribute(Operation_RequiredInterface_D_c);
			// Property a
			Operation_RequiredInterface_D_a->setThisElementPtr(Operation_RequiredInterface_D_a);
			Operation_RequiredInterface_D_a->setName("a");
			Operation_RequiredInterface_D_a->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_D_a->setType(Operation_RequiredInterface_A);
			Operation_RequiredInterface_D_a->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_D->addOwnedAttribute(Operation_RequiredInterface_D_a);
		
		Operation_RequiredInterface_D_s->setName("s");
			Operation_RequiredInterface_D_s->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_D_s_ConnectorEnd77->setRole(Operation_RequiredInterface_C_q);
				Operation_RequiredInterface_D_s_ConnectorEnd77->setPartWithPort(Operation_RequiredInterface_D_c);
				
			Operation_RequiredInterface_D_s->addEnd(Operation_RequiredInterface_D_s_ConnectorEnd77);
				
				Operation_RequiredInterface_D_s_ConnectorEnd78->setRole(Operation_RequiredInterface_A_q);
				Operation_RequiredInterface_D_s_ConnectorEnd78->setPartWithPort(Operation_RequiredInterface_D_a);
				
			Operation_RequiredInterface_D_s->addEnd(Operation_RequiredInterface_D_s_ConnectorEnd78);
			Operation_RequiredInterface_D_s->setType(Operation_RequiredInterface_S);
		Operation_RequiredInterface_D->addOwnedConnector(Operation_RequiredInterface_D_s);
			// Operation D_D
			Operation_RequiredInterface_D_D_D->setThisOperationPtr(Operation_RequiredInterface_D_D_D);
			Operation_RequiredInterface_D_D_D->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Operation_RequiredInterface_D_D_D->setName("D_D");
			Operation_RequiredInterface_D_D_D->setVisibility(VisibilityKind::public_);
				// Parameter result
				Operation_RequiredInterface_D_D_D_result->setThisElementPtr(Operation_RequiredInterface_D_D_D_result);
				Operation_RequiredInterface_D_D_D_result->setName("result");
				Operation_RequiredInterface_D_D_D_result->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_D_D_D_result->setType(Operation_RequiredInterface_D);
				Operation_RequiredInterface_D_D_D_result->setDirection(ParameterDirectionKind::return_);
			Operation_RequiredInterface_D_D_D->addOwnedParameter(Operation_RequiredInterface_D_D_D_result);
		Operation_RequiredInterface_D->addOwnedOperation(Operation_RequiredInterface_D_D_D);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_D);
		// Class C
		Operation_RequiredInterface_C->setThisClass_Ptr(Operation_RequiredInterface_C);
		Operation_RequiredInterface_C->setName("C");
		Operation_RequiredInterface_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_RequiredInterface_C_q->setThisElementPtr(Operation_RequiredInterface_C_q);
			Operation_RequiredInterface_C_q->setName("q");
			Operation_RequiredInterface_C_q->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_C_q->setType(Operation_RequiredInterface_IImpl);
			Operation_RequiredInterface_C_q->setAggregation(AggregationKind::composite);
			Operation_RequiredInterface_C_q->isConjugated = true;;
			Operation_RequiredInterface_C_q->isService = true;
			Operation_RequiredInterface_C_q->addRequired(Operation_RequiredInterface_I);
		Operation_RequiredInterface_C->addOwnedAttribute(Operation_RequiredInterface_C_q);
		// Activity setPActivity
			Operation_RequiredInterface_C_setPActivity->setThisActivityPtr(Operation_RequiredInterface_C_setPActivity);
			Operation_RequiredInterface_C_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_C_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_C_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_v);
				Operation_RequiredInterface_C_setPActivity_v->setName("v");
				Operation_RequiredInterface_C_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_C_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_C_setPActivity->addOwnedParameter(Operation_RequiredInterface_C_setPActivity_v);
				// ReadSelfAction this
				Operation_RequiredInterface_C_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_C_setPActivity_this);
				Operation_RequiredInterface_C_setPActivity_this->setName("this");
				Operation_RequiredInterface_C_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_C_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_this_result);
					Operation_RequiredInterface_C_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_C_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_C_setPActivity_this_result->setType(Operation_RequiredInterface_C);
				Operation_RequiredInterface_C_setPActivity_this->setResult(Operation_RequiredInterface_C_setPActivity_this_result);
			Operation_RequiredInterface_C_setPActivity->addNode(Operation_RequiredInterface_C_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setOnPort(Operation_RequiredInterface_C_q);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setOperation(Operation_RequiredInterface_I_setP_Integer);
					// InputPin target
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setType(Operation_RequiredInterface_C);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->setTarget(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q->addArgument(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
			Operation_RequiredInterface_C_setPActivity->addNode(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_C_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_vParameterNode);
				Operation_RequiredInterface_C_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_C_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_C_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_C_setPActivity_v);
			Operation_RequiredInterface_C_setPActivity->addNode(Operation_RequiredInterface_C_setPActivity_vParameterNode);
				// ObjectFlow ObjectFlow79 from vParameterNode to v
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setThisActivityEdgePtr(Operation_RequiredInterface_C_setPActivity_ObjectFlow79);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setName("ObjectFlow79");
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setSource(Operation_RequiredInterface_C_setPActivity_vParameterNode);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setTarget(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean80
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80->setName("LiteralBoolean80");
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80->setValue(true);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow79->setGuard(Operation_RequiredInterface_C_setPActivity_ObjectFlow79_LiteralBoolean80);
			Operation_RequiredInterface_C_setPActivity->addEdge(Operation_RequiredInterface_C_setPActivity_ObjectFlow79);
				// ObjectFlow ObjectFlow82 from result to target
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setThisActivityEdgePtr(Operation_RequiredInterface_C_setPActivity_ObjectFlow82);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setName("ObjectFlow82");
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setSource(Operation_RequiredInterface_C_setPActivity_this_result);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setTarget(Operation_RequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean83
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83->setThisElementPtr(Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83->setName("LiteralBoolean83");
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83->setValue(true);
				Operation_RequiredInterface_C_setPActivity_ObjectFlow82->setGuard(Operation_RequiredInterface_C_setPActivity_ObjectFlow82_LiteralBoolean83);
			Operation_RequiredInterface_C_setPActivity->addEdge(Operation_RequiredInterface_C_setPActivity_ObjectFlow82);
		Operation_RequiredInterface_C->addOwnedBehavior(Operation_RequiredInterface_C_setPActivity);
			Operation_RequiredInterface_C_IRealization->setName("IRealization");
			Operation_RequiredInterface_C_IRealization->setVisibility(VisibilityKind::public_);
			Operation_RequiredInterface_C_IRealization->setContract(Operation_RequiredInterface_I);
			
		Operation_RequiredInterface_C->addInterfaceRealization(Operation_RequiredInterface_C_IRealization);
		
			// Operation setP_Integer
			Operation_RequiredInterface_C_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_C_setP_Integer);
			Operation_RequiredInterface_C_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_C_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_C_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_C_setP_Integer_v);
				Operation_RequiredInterface_C_setP_Integer_v->setName("v");
				Operation_RequiredInterface_C_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_C_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_C_setP_Integer->addOwnedParameter(Operation_RequiredInterface_C_setP_Integer_v);
			Operation_RequiredInterface_C_setP_Integer->addMethod(Operation_RequiredInterface_C_setPActivity);
		Operation_RequiredInterface_C->addOwnedOperation(Operation_RequiredInterface_C_setP_Integer);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_C);
		// Class A
		Operation_RequiredInterface_A->setThisClass_Ptr(Operation_RequiredInterface_A);
		Operation_RequiredInterface_A->setName("A");
		Operation_RequiredInterface_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_RequiredInterface_A_q->setThisElementPtr(Operation_RequiredInterface_A_q);
			Operation_RequiredInterface_A_q->setName("q");
			Operation_RequiredInterface_A_q->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_A_q->setType(Operation_RequiredInterface_IImpl);
			Operation_RequiredInterface_A_q->setAggregation(AggregationKind::composite);
			Operation_RequiredInterface_A_q->isService = true;
			Operation_RequiredInterface_A_q->addProvided(Operation_RequiredInterface_I);
		Operation_RequiredInterface_A->addOwnedAttribute(Operation_RequiredInterface_A_q);
			// Property b
			Operation_RequiredInterface_A_b->setThisElementPtr(Operation_RequiredInterface_A_b);
			Operation_RequiredInterface_A_b->setName("b");
			Operation_RequiredInterface_A_b->setVisibility(VisibilityKind::public_);
			
			Operation_RequiredInterface_A_b->setType(Operation_RequiredInterface_B);
			Operation_RequiredInterface_A_b->setAggregation(AggregationKind::composite);
		Operation_RequiredInterface_A->addOwnedAttribute(Operation_RequiredInterface_A_b);
		// Activity setPActivity
			Operation_RequiredInterface_A_setPActivity->setThisActivityPtr(Operation_RequiredInterface_A_setPActivity);
			Operation_RequiredInterface_A_setPActivity->setName("setPActivity");
			Operation_RequiredInterface_A_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_RequiredInterface_A_setPActivity_v->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_v);
				Operation_RequiredInterface_A_setPActivity_v->setName("v");
				Operation_RequiredInterface_A_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_A_setPActivity->addOwnedParameter(Operation_RequiredInterface_A_setPActivity_v);
				// CallOperationAction Call I::setP on q
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setOnPort(Operation_RequiredInterface_A_q);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setOperation(Operation_RequiredInterface_I_setP_Integer);
					// InputPin target
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->setTarget(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q->addArgument(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
			Operation_RequiredInterface_A_setPActivity->addNode(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q);
				// ActivityParameterNode vParameterNode
				Operation_RequiredInterface_A_setPActivity_vParameterNode->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_vParameterNode);
				Operation_RequiredInterface_A_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_RequiredInterface_A_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_setPActivity_vParameterNode->setParameter(Operation_RequiredInterface_A_setPActivity_v);
			Operation_RequiredInterface_A_setPActivity->addNode(Operation_RequiredInterface_A_setPActivity_vParameterNode);
				// ReadSelfAction this
				Operation_RequiredInterface_A_setPActivity_this->setThisExecutableNodePtr(Operation_RequiredInterface_A_setPActivity_this);
				Operation_RequiredInterface_A_setPActivity_this->setName("this");
				Operation_RequiredInterface_A_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_RequiredInterface_A_setPActivity_this_result->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_this_result);
					Operation_RequiredInterface_A_setPActivity_this_result->setName("result");
					Operation_RequiredInterface_A_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_A_setPActivity_this_result->setType(Operation_RequiredInterface_A);
				Operation_RequiredInterface_A_setPActivity_this->setResult(Operation_RequiredInterface_A_setPActivity_this_result);
			Operation_RequiredInterface_A_setPActivity->addNode(Operation_RequiredInterface_A_setPActivity_this);
				// ObjectFlow ObjectFlow95 from vParameterNode to v
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setThisActivityEdgePtr(Operation_RequiredInterface_A_setPActivity_ObjectFlow95);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setName("ObjectFlow95");
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setSource(Operation_RequiredInterface_A_setPActivity_vParameterNode);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setTarget(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean96
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96->setName("LiteralBoolean96");
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96->setValue(true);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow95->setGuard(Operation_RequiredInterface_A_setPActivity_ObjectFlow95_LiteralBoolean96);
			Operation_RequiredInterface_A_setPActivity->addEdge(Operation_RequiredInterface_A_setPActivity_ObjectFlow95);
				// ObjectFlow ObjectFlow103 from result to target
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setThisActivityEdgePtr(Operation_RequiredInterface_A_setPActivity_ObjectFlow103);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setName("ObjectFlow103");
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setSource(Operation_RequiredInterface_A_setPActivity_this_result);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setTarget(Operation_RequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean105
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105->setThisElementPtr(Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105->setName("LiteralBoolean105");
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105->setVisibility(VisibilityKind::public_);
					Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105->setValue(true);
				Operation_RequiredInterface_A_setPActivity_ObjectFlow103->setGuard(Operation_RequiredInterface_A_setPActivity_ObjectFlow103_LiteralBoolean105);
			Operation_RequiredInterface_A_setPActivity->addEdge(Operation_RequiredInterface_A_setPActivity_ObjectFlow103);
		Operation_RequiredInterface_A->addOwnedBehavior(Operation_RequiredInterface_A_setPActivity);
		Operation_RequiredInterface_A_r->setName("r");
			Operation_RequiredInterface_A_r->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_r_ConnectorEnd94->setRole(Operation_RequiredInterface_A_q);
				
			Operation_RequiredInterface_A_r->addEnd(Operation_RequiredInterface_A_r_ConnectorEnd94);
				
				Operation_RequiredInterface_A_r_ConnectorEnd93->setRole(Operation_RequiredInterface_A_b);
				
			Operation_RequiredInterface_A_r->addEnd(Operation_RequiredInterface_A_r_ConnectorEnd93);
			Operation_RequiredInterface_A_r->setType(Operation_RequiredInterface_R);
		Operation_RequiredInterface_A->addOwnedConnector(Operation_RequiredInterface_A_r);
			// Operation setP_Integer
			Operation_RequiredInterface_A_setP_Integer->setThisOperationPtr(Operation_RequiredInterface_A_setP_Integer);
			Operation_RequiredInterface_A_setP_Integer->setName("setP_Integer");
			Operation_RequiredInterface_A_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_RequiredInterface_A_setP_Integer_v->setThisElementPtr(Operation_RequiredInterface_A_setP_Integer_v);
				Operation_RequiredInterface_A_setP_Integer_v->setName("v");
				Operation_RequiredInterface_A_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_RequiredInterface_A_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_RequiredInterface_A_setP_Integer->addOwnedParameter(Operation_RequiredInterface_A_setP_Integer_v);
			Operation_RequiredInterface_A_setP_Integer->addMethod(Operation_RequiredInterface_A_setPActivity);
		Operation_RequiredInterface_A->addOwnedOperation(Operation_RequiredInterface_A_setP_Integer);
	Operation_RequiredInterface->addPackagedElement(Operation_RequiredInterface_A);
}
