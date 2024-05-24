/*
 * Operation_ProvidedInterfaceModel.cpp
 * 
 * Auto-generated file
 */

#include "Operation_ProvidedInterfaceModel.h"

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

using namespace Operation_ProvidedInterface;
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

Operation_ProvidedInterfaceModel::Operation_ProvidedInterfaceModel()
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

Operation_ProvidedInterfaceModel::~Operation_ProvidedInterfaceModel()
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

const std::shared_ptr<Operation_ProvidedInterfaceModel>& Operation_ProvidedInterfaceModel::Instance()
{
	static std::shared_ptr<Operation_ProvidedInterfaceModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Operation_ProvidedInterfaceModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Operation_ProvidedInterfaceModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Operation_ProvidedInterface
	 */
	Operation_ProvidedInterface.reset(new Package());
	this->addToElementRepository("Operation_ProvidedInterface", Operation_ProvidedInterface);
		Operation_ProvidedInterface_main.reset(new Activity());
		this->addToElementRepository("main", Operation_ProvidedInterface_main);
			Operation_ProvidedInterface_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", Operation_ProvidedInterface_main_Read_b_p);
				Operation_ProvidedInterface_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedInterface_main_Read_b_p_result);
					Operation_ProvidedInterface_main_Read_b_p_result_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", Operation_ProvidedInterface_main_Read_b_p_result_LiteralInteger0);
					Operation_ProvidedInterface_main_Read_b_p_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural1", Operation_ProvidedInterface_main_Read_b_p_result_LiteralUnlimitedNatural1);
				Operation_ProvidedInterface_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedInterface_main_Read_b_p_object);
					Operation_ProvidedInterface_main_Read_b_p_object_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", Operation_ProvidedInterface_main_Read_b_p_object_LiteralInteger2);
					Operation_ProvidedInterface_main_Read_b_p_object_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural3", Operation_ProvidedInterface_main_Read_b_p_object_LiteralUnlimitedNatural3);
			Operation_ProvidedInterface_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", Operation_ProvidedInterface_main_Create_A);
				Operation_ProvidedInterface_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedInterface_main_Create_A_result);
					Operation_ProvidedInterface_main_Create_A_result_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", Operation_ProvidedInterface_main_Create_A_result_LiteralUnlimitedNatural4);
					Operation_ProvidedInterface_main_Create_A_result_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", Operation_ProvidedInterface_main_Create_A_result_LiteralInteger5);
			Operation_ProvidedInterface_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", Operation_ProvidedInterface_main_A_);
				Operation_ProvidedInterface_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedInterface_main_A__result);
					Operation_ProvidedInterface_main_A__result_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural6", Operation_ProvidedInterface_main_A__result_LiteralUnlimitedNatural6);
					Operation_ProvidedInterface_main_A__result_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", Operation_ProvidedInterface_main_A__result_LiteralInteger7);
					Operation_ProvidedInterface_main_A__result_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", Operation_ProvidedInterface_main_A__result_LiteralInteger8);
				Operation_ProvidedInterface_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_ProvidedInterface_main_A__target);
					Operation_ProvidedInterface_main_A__target_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", Operation_ProvidedInterface_main_A__target_LiteralInteger9);
					Operation_ProvidedInterface_main_A__target_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", Operation_ProvidedInterface_main_A__target_LiteralUnlimitedNatural10);
			Operation_ProvidedInterface_main_ObjectFlow11.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow11", Operation_ProvidedInterface_main_ObjectFlow11);
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean12", Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12);
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", Operation_ProvidedInterface_main_ObjectFlow11_LiteralInteger13);
			Operation_ProvidedInterface_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", Operation_ProvidedInterface_main_testP);
				Operation_ProvidedInterface_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", Operation_ProvidedInterface_main_testP_p);
			Operation_ProvidedInterface_main_ObjectFlow14.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow14", Operation_ProvidedInterface_main_ObjectFlow14);
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean15", Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15);
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", Operation_ProvidedInterface_main_ObjectFlow14_LiteralInteger16);
			Operation_ProvidedInterface_main_ObjectFlow17.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow17", Operation_ProvidedInterface_main_ObjectFlow17);
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", Operation_ProvidedInterface_main_ObjectFlow17_LiteralInteger18);
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean19", Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19);
			Operation_ProvidedInterface_main_ObjectFlow20.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow20", Operation_ProvidedInterface_main_ObjectFlow20);
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean21", Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21);
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralInteger22.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger22", Operation_ProvidedInterface_main_ObjectFlow20_LiteralInteger22);
			Operation_ProvidedInterface_main_Call_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call setP()", Operation_ProvidedInterface_main_Call_setP_);
				Operation_ProvidedInterface_main_Call_setP__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_ProvidedInterface_main_Call_setP__target);
					Operation_ProvidedInterface_main_Call_setP__target_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", Operation_ProvidedInterface_main_Call_setP__target_LiteralUnlimitedNatural23);
					Operation_ProvidedInterface_main_Call_setP__target_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", Operation_ProvidedInterface_main_Call_setP__target_LiteralInteger24);
				Operation_ProvidedInterface_main_Call_setP__v.reset(new InputPin());
				this->addToElementRepository("v", Operation_ProvidedInterface_main_Call_setP__v);
					Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger25);
					Operation_ProvidedInterface_main_Call_setP__v_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural26", Operation_ProvidedInterface_main_Call_setP__v_LiteralUnlimitedNatural26);
					Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", Operation_ProvidedInterface_main_Call_setP__v_LiteralInteger27);
			Operation_ProvidedInterface_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", Operation_ProvidedInterface_main_Call_testP);
				Operation_ProvidedInterface_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", Operation_ProvidedInterface_main_Call_testP_p);
					Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger28);
					Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", Operation_ProvidedInterface_main_Call_testP_p_LiteralInteger29);
					Operation_ProvidedInterface_main_Call_testP_p_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", Operation_ProvidedInterface_main_Call_testP_p_LiteralUnlimitedNatural30);
			Operation_ProvidedInterface_main_ControlFlow31.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow31", Operation_ProvidedInterface_main_ControlFlow31);
			Operation_ProvidedInterface_main_ObjectFlow32.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow32", Operation_ProvidedInterface_main_ObjectFlow32);
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean33", Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33);
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", Operation_ProvidedInterface_main_ObjectFlow32_LiteralInteger34);
			Operation_ProvidedInterface_main_ObjectFlow35.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow35", Operation_ProvidedInterface_main_ObjectFlow35);
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", Operation_ProvidedInterface_main_ObjectFlow35_LiteralInteger36);
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37);
			Operation_ProvidedInterface_main_Fork_a.reset(new ForkNode());
			this->addToElementRepository("Fork a", Operation_ProvidedInterface_main_Fork_a);
			Operation_ProvidedInterface_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", Operation_ProvidedInterface_main_Value_4);
				Operation_ProvidedInterface_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedInterface_main_Value_4_result);
					Operation_ProvidedInterface_main_Value_4_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", Operation_ProvidedInterface_main_Value_4_result_LiteralUnlimitedNatural38);
					Operation_ProvidedInterface_main_Value_4_result_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", Operation_ProvidedInterface_main_Value_4_result_LiteralInteger39);
				Operation_ProvidedInterface_main_Value_4_LiteralInteger40.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger40", Operation_ProvidedInterface_main_Value_4_LiteralInteger40);
			Operation_ProvidedInterface_main_ObjectFlow41.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow41", Operation_ProvidedInterface_main_ObjectFlow41);
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean42", Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42);
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", Operation_ProvidedInterface_main_ObjectFlow41_LiteralInteger43);
			Operation_ProvidedInterface_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", Operation_ProvidedInterface_main_Read_a_b);
				Operation_ProvidedInterface_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedInterface_main_Read_a_b_result);
					Operation_ProvidedInterface_main_Read_a_b_result_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", Operation_ProvidedInterface_main_Read_a_b_result_LiteralUnlimitedNatural44);
					Operation_ProvidedInterface_main_Read_a_b_result_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", Operation_ProvidedInterface_main_Read_a_b_result_LiteralInteger45);
				Operation_ProvidedInterface_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedInterface_main_Read_a_b_object);
					Operation_ProvidedInterface_main_Read_a_b_object_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", Operation_ProvidedInterface_main_Read_a_b_object_LiteralInteger46);
					Operation_ProvidedInterface_main_Read_a_b_object_LiteralUnlimitedNatural47.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural47", Operation_ProvidedInterface_main_Read_a_b_object_LiteralUnlimitedNatural47);
		Operation_ProvidedInterface_B.reset(new Class_());
		this->addToElementRepository("B", Operation_ProvidedInterface_B);
			Operation_ProvidedInterface_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_ProvidedInterface_B_IRealization);
			Operation_ProvidedInterface_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedInterface_B_setP_Integer);
				Operation_ProvidedInterface_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_B_setP_Integer_v);
			Operation_ProvidedInterface_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_ProvidedInterface_B_setPActivity);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow48", Operation_ProvidedInterface_B_setPActivity_ObjectFlow48);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean49", Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralInteger50);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow51", Operation_ProvidedInterface_B_setPActivity_ObjectFlow51);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralInteger52);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean53", Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53);
				Operation_ProvidedInterface_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_B_setPActivity_v);
				Operation_ProvidedInterface_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_ProvidedInterface_B_setPActivity_vParameterNode);
					Operation_ProvidedInterface_B_setPActivity_vParameterNode_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", Operation_ProvidedInterface_B_setPActivity_vParameterNode_LiteralInteger54);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", Operation_ProvidedInterface_B_setPActivity_Set_this_p);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", Operation_ProvidedInterface_B_setPActivity_Set_this_p_object);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural55", Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural55);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", Operation_ProvidedInterface_B_setPActivity_Set_this_p_object_LiteralInteger56);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedInterface_B_setPActivity_Set_this_p_result);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralInteger57.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger57", Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralInteger57);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural58.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural58", Operation_ProvidedInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural58);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", Operation_ProvidedInterface_B_setPActivity_Set_this_p_value);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralInteger59);
						Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", Operation_ProvidedInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural60);
				Operation_ProvidedInterface_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_ProvidedInterface_B_setPActivity_this);
					Operation_ProvidedInterface_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedInterface_B_setPActivity_this_result);
						Operation_ProvidedInterface_B_setPActivity_this_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", Operation_ProvidedInterface_B_setPActivity_this_result_LiteralUnlimitedNatural61);
						Operation_ProvidedInterface_B_setPActivity_this_result_LiteralInteger62.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger62", Operation_ProvidedInterface_B_setPActivity_this_result_LiteralInteger62);
			Operation_ProvidedInterface_B_p.reset(new Property());
			this->addToElementRepository("p", Operation_ProvidedInterface_B_p);
		Operation_ProvidedInterface_R.reset(new Association());
		this->addToElementRepository("R", Operation_ProvidedInterface_R);
			Operation_ProvidedInterface_R_y.reset(new Property());
			this->addToElementRepository("y", Operation_ProvidedInterface_R_y);
			Operation_ProvidedInterface_R_x.reset(new Property());
			this->addToElementRepository("x", Operation_ProvidedInterface_R_x);
		Operation_ProvidedInterface_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", Operation_ProvidedInterface_IImpl);
			Operation_ProvidedInterface_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedInterface_IImpl_setP_Integer);
				Operation_ProvidedInterface_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_IImpl_setP_Integer_v);
			Operation_ProvidedInterface_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_ProvidedInterface_IImpl_IRealization);
		Operation_ProvidedInterface_I.reset(new Interface());
		this->addToElementRepository("I", Operation_ProvidedInterface_I);
			Operation_ProvidedInterface_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedInterface_I_setP_Integer);
				Operation_ProvidedInterface_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_I_setP_Integer_v);
		Operation_ProvidedInterface_A.reset(new Class_());
		this->addToElementRepository("A", Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_A_b.reset(new Property());
			this->addToElementRepository("b", Operation_ProvidedInterface_A_b);
			Operation_ProvidedInterface_A_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedInterface_A_setP_Integer);
				Operation_ProvidedInterface_A_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_A_setP_Integer_v);
			Operation_ProvidedInterface_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", Operation_ProvidedInterface_A_A_A);
				Operation_ProvidedInterface_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", Operation_ProvidedInterface_A_A_A_result);
			Operation_ProvidedInterface_A_r.reset(new Connector());
			this->addToElementRepository("r", Operation_ProvidedInterface_A_r);
				Operation_ProvidedInterface_A_r_ConnectorEnd63.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd63", Operation_ProvidedInterface_A_r_ConnectorEnd63);
				Operation_ProvidedInterface_A_r_ConnectorEnd64.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd64", Operation_ProvidedInterface_A_r_ConnectorEnd64);
			Operation_ProvidedInterface_A_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_ProvidedInterface_A_setPActivity);
				Operation_ProvidedInterface_A_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedInterface_A_setPActivity_v);
				Operation_ProvidedInterface_A_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_ProvidedInterface_A_setPActivity_this);
					Operation_ProvidedInterface_A_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedInterface_A_setPActivity_this_result);
						Operation_ProvidedInterface_A_setPActivity_this_result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", Operation_ProvidedInterface_A_setPActivity_this_result_LiteralUnlimitedNatural65);
						Operation_ProvidedInterface_A_setPActivity_this_result_LiteralInteger66.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger66", Operation_ProvidedInterface_A_setPActivity_this_result_LiteralInteger66);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q);
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target);
						Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural67", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural67);
						Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger68.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger68", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger68);
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v);
						Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger69);
						Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger70);
						Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural71", Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural71);
				Operation_ProvidedInterface_A_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_ProvidedInterface_A_setPActivity_vParameterNode);
					Operation_ProvidedInterface_A_setPActivity_vParameterNode_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", Operation_ProvidedInterface_A_setPActivity_vParameterNode_LiteralInteger72);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow73", Operation_ProvidedInterface_A_setPActivity_ObjectFlow73);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean74", Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralInteger75);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow76", Operation_ProvidedInterface_A_setPActivity_ObjectFlow76);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean77", Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralInteger78.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger78", Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralInteger78);
			Operation_ProvidedInterface_A_q.reset(new Port());
			this->addToElementRepository("q", Operation_ProvidedInterface_A_q);
		Operation_ProvidedInterface_S.reset(new Association());
		this->addToElementRepository("S", Operation_ProvidedInterface_S);
			Operation_ProvidedInterface_S_x.reset(new Property());
			this->addToElementRepository("x", Operation_ProvidedInterface_S_x);
			Operation_ProvidedInterface_S_y.reset(new Property());
			this->addToElementRepository("y", Operation_ProvidedInterface_S_y);

	// Initialize public members
	/*
	 * Model Operation_ProvidedInterface
	 */
	Operation_ProvidedInterface->setThisPackagePtr(Operation_ProvidedInterface);
	Operation_ProvidedInterface->setName("Operation_ProvidedInterface");
	Operation_ProvidedInterface->setVisibility(VisibilityKind::public_);
		// Activity main
		Operation_ProvidedInterface_main->setThisActivityPtr(Operation_ProvidedInterface_main);
		Operation_ProvidedInterface_main->setName("main");
		Operation_ProvidedInterface_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			Operation_ProvidedInterface_main_testP->setThisClass_Ptr(Operation_ProvidedInterface_main_testP);
			Operation_ProvidedInterface_main_testP->setName("testP");
			Operation_ProvidedInterface_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				Operation_ProvidedInterface_main_testP_p->setThisElementPtr(Operation_ProvidedInterface_main_testP_p);
				Operation_ProvidedInterface_main_testP_p->setName("p");
				Operation_ProvidedInterface_main_testP_p->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_main_testP->addOwnedParameter(Operation_ProvidedInterface_main_testP_p);
			Operation_ProvidedInterface_main_testP->addLanguage("C++");
			Operation_ProvidedInterface_main_testP->addLanguage("Include");
			Operation_ProvidedInterface_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Invocation made into a through q: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			Operation_ProvidedInterface_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		Operation_ProvidedInterface_main->addOwnedBehavior(Operation_ProvidedInterface_main_testP);
			// ReadStructuralFeatureAction Read b.p
			Operation_ProvidedInterface_main_Read_b_p->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Read_b_p);
			Operation_ProvidedInterface_main_Read_b_p->setName("Read b.p");
			Operation_ProvidedInterface_main_Read_b_p->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_main_Read_b_p->setStructuralFeature(Operation_ProvidedInterface_B_p);
				// InputPin object
				Operation_ProvidedInterface_main_Read_b_p_object->setThisElementPtr(Operation_ProvidedInterface_main_Read_b_p_object);
				Operation_ProvidedInterface_main_Read_b_p_object->setName("object");
				Operation_ProvidedInterface_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Read_b_p_object->setType(Operation_ProvidedInterface_B);
			Operation_ProvidedInterface_main_Read_b_p->setObject(Operation_ProvidedInterface_main_Read_b_p_object);
				// OutputPin result
				Operation_ProvidedInterface_main_Read_b_p_result->setThisElementPtr(Operation_ProvidedInterface_main_Read_b_p_result);
				Operation_ProvidedInterface_main_Read_b_p_result->setName("result");
				Operation_ProvidedInterface_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_main_Read_b_p->setResult(Operation_ProvidedInterface_main_Read_b_p_result);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Read_b_p);
			// CreateObjectAction Create A
			Operation_ProvidedInterface_main_Create_A->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Create_A);
			Operation_ProvidedInterface_main_Create_A->setName("Create A");
			Operation_ProvidedInterface_main_Create_A->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_main_Create_A->setClassifier(Operation_ProvidedInterface_A);
				// OutputPin result
				Operation_ProvidedInterface_main_Create_A_result->setThisElementPtr(Operation_ProvidedInterface_main_Create_A_result);
				Operation_ProvidedInterface_main_Create_A_result->setName("result");
				Operation_ProvidedInterface_main_Create_A_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Create_A_result->setType(Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_main_Create_A->setResult(Operation_ProvidedInterface_main_Create_A_result);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Create_A);
			// CallOperationAction Call setP()
			Operation_ProvidedInterface_main_Call_setP_->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Call_setP_);
			Operation_ProvidedInterface_main_Call_setP_->setName("Call setP()");
			Operation_ProvidedInterface_main_Call_setP_->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_main_Call_setP_->setOperation(Operation_ProvidedInterface_A_setP_Integer);
				// InputPin target
				Operation_ProvidedInterface_main_Call_setP__target->setThisElementPtr(Operation_ProvidedInterface_main_Call_setP__target);
				Operation_ProvidedInterface_main_Call_setP__target->setName("target");
				Operation_ProvidedInterface_main_Call_setP__target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Call_setP__target->setType(Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_main_Call_setP_->setTarget(Operation_ProvidedInterface_main_Call_setP__target);
				// InputPin v
				Operation_ProvidedInterface_main_Call_setP__v->setThisElementPtr(Operation_ProvidedInterface_main_Call_setP__v);
				Operation_ProvidedInterface_main_Call_setP__v->setName("v");
				Operation_ProvidedInterface_main_Call_setP__v->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Call_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_main_Call_setP_->addArgument(Operation_ProvidedInterface_main_Call_setP__v);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Call_setP_);
			// CallOperationAction A()
			Operation_ProvidedInterface_main_A_->setThisExecutableNodePtr(Operation_ProvidedInterface_main_A_);
			Operation_ProvidedInterface_main_A_->setName("A()");
			Operation_ProvidedInterface_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Operation_ProvidedInterface_main_A__result->setThisElementPtr(Operation_ProvidedInterface_main_A__result);
				Operation_ProvidedInterface_main_A__result->setName("result");
				Operation_ProvidedInterface_main_A__result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_A__result->setType(Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_main_A_->addResult(Operation_ProvidedInterface_main_A__result);
			Operation_ProvidedInterface_main_A_->setOperation(Operation_ProvidedInterface_A_A_A);
				// InputPin target
				Operation_ProvidedInterface_main_A__target->setThisElementPtr(Operation_ProvidedInterface_main_A__target);
				Operation_ProvidedInterface_main_A__target->setName("target");
				Operation_ProvidedInterface_main_A__target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_A__target->setType(Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_main_A_->setTarget(Operation_ProvidedInterface_main_A__target);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_A_);
			// CallBehaviorAction Call testP
			Operation_ProvidedInterface_main_Call_testP->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Call_testP);
			Operation_ProvidedInterface_main_Call_testP->setName("Call testP");
			Operation_ProvidedInterface_main_Call_testP->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_main_Call_testP->setBehavior(Operation_ProvidedInterface_main_testP);
				// InputPin p
				Operation_ProvidedInterface_main_Call_testP_p->setThisElementPtr(Operation_ProvidedInterface_main_Call_testP_p);
				Operation_ProvidedInterface_main_Call_testP_p->setName("p");
				Operation_ProvidedInterface_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_main_Call_testP->addArgument(Operation_ProvidedInterface_main_Call_testP_p);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Call_testP);
			// ForkNode Fork a
			Operation_ProvidedInterface_main_Fork_a->setThisElementPtr(Operation_ProvidedInterface_main_Fork_a);
			Operation_ProvidedInterface_main_Fork_a->setName("Fork a");
			Operation_ProvidedInterface_main_Fork_a->setVisibility(VisibilityKind::public_);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Fork_a);
			// ValueSpecificationAction Value(4)
			Operation_ProvidedInterface_main_Value_4->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Value_4);
			Operation_ProvidedInterface_main_Value_4->setName("Value(4)");
			Operation_ProvidedInterface_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger40
				Operation_ProvidedInterface_main_Value_4_LiteralInteger40->setThisElementPtr(Operation_ProvidedInterface_main_Value_4_LiteralInteger40);
				Operation_ProvidedInterface_main_Value_4_LiteralInteger40->setName("LiteralInteger40");
				Operation_ProvidedInterface_main_Value_4_LiteralInteger40->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Value_4_LiteralInteger40->setValue(4);
			Operation_ProvidedInterface_main_Value_4->setValue(Operation_ProvidedInterface_main_Value_4_LiteralInteger40);
				// OutputPin result
				Operation_ProvidedInterface_main_Value_4_result->setThisElementPtr(Operation_ProvidedInterface_main_Value_4_result);
				Operation_ProvidedInterface_main_Value_4_result->setName("result");
				Operation_ProvidedInterface_main_Value_4_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_main_Value_4->setResult(Operation_ProvidedInterface_main_Value_4_result);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Value_4);
			// ReadStructuralFeatureAction Read a.b
			Operation_ProvidedInterface_main_Read_a_b->setThisExecutableNodePtr(Operation_ProvidedInterface_main_Read_a_b);
			Operation_ProvidedInterface_main_Read_a_b->setName("Read a.b");
			Operation_ProvidedInterface_main_Read_a_b->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_main_Read_a_b->setStructuralFeature(Operation_ProvidedInterface_A_b);
				// InputPin object
				Operation_ProvidedInterface_main_Read_a_b_object->setThisElementPtr(Operation_ProvidedInterface_main_Read_a_b_object);
				Operation_ProvidedInterface_main_Read_a_b_object->setName("object");
				Operation_ProvidedInterface_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Read_a_b_object->setType(Operation_ProvidedInterface_A);
			Operation_ProvidedInterface_main_Read_a_b->setObject(Operation_ProvidedInterface_main_Read_a_b_object);
				// OutputPin result
				Operation_ProvidedInterface_main_Read_a_b_result->setThisElementPtr(Operation_ProvidedInterface_main_Read_a_b_result);
				Operation_ProvidedInterface_main_Read_a_b_result->setName("result");
				Operation_ProvidedInterface_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_Read_a_b_result->setType(Operation_ProvidedInterface_B);
			Operation_ProvidedInterface_main_Read_a_b->setResult(Operation_ProvidedInterface_main_Read_a_b_result);
		Operation_ProvidedInterface_main->addNode(Operation_ProvidedInterface_main_Read_a_b);
			// ObjectFlow ObjectFlow17 from result to Fork a
			Operation_ProvidedInterface_main_ObjectFlow17->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow17);
			Operation_ProvidedInterface_main_ObjectFlow17->setName("ObjectFlow17");
			Operation_ProvidedInterface_main_ObjectFlow17->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow17->setSource(Operation_ProvidedInterface_main_A__result);
			Operation_ProvidedInterface_main_ObjectFlow17->setTarget(Operation_ProvidedInterface_main_Fork_a);
				// LiteralBoolean LiteralBoolean19
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19);
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19->setName("LiteralBoolean19");
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow17->setGuard(Operation_ProvidedInterface_main_ObjectFlow17_LiteralBoolean19);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow17);
			// ObjectFlow ObjectFlow20 from result to v
			Operation_ProvidedInterface_main_ObjectFlow20->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow20);
			Operation_ProvidedInterface_main_ObjectFlow20->setName("ObjectFlow20");
			Operation_ProvidedInterface_main_ObjectFlow20->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow20->setSource(Operation_ProvidedInterface_main_Value_4_result);
			Operation_ProvidedInterface_main_ObjectFlow20->setTarget(Operation_ProvidedInterface_main_Call_setP__v);
				// LiteralBoolean LiteralBoolean21
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21);
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21->setName("LiteralBoolean21");
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow20->setGuard(Operation_ProvidedInterface_main_ObjectFlow20_LiteralBoolean21);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow20);
			// ObjectFlow ObjectFlow11 from result to p
			Operation_ProvidedInterface_main_ObjectFlow11->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow11);
			Operation_ProvidedInterface_main_ObjectFlow11->setName("ObjectFlow11");
			Operation_ProvidedInterface_main_ObjectFlow11->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow11->setSource(Operation_ProvidedInterface_main_Read_b_p_result);
			Operation_ProvidedInterface_main_ObjectFlow11->setTarget(Operation_ProvidedInterface_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean12
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12);
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12->setName("LiteralBoolean12");
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow11->setGuard(Operation_ProvidedInterface_main_ObjectFlow11_LiteralBoolean12);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow11);
			// ControlFlow ControlFlow31 from Call setP() to Read a.b
			Operation_ProvidedInterface_main_ControlFlow31->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ControlFlow31);
			Operation_ProvidedInterface_main_ControlFlow31->setName("ControlFlow31");
			Operation_ProvidedInterface_main_ControlFlow31->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ControlFlow31->setSource(Operation_ProvidedInterface_main_Call_setP_);
			Operation_ProvidedInterface_main_ControlFlow31->setTarget(Operation_ProvidedInterface_main_Read_a_b);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ControlFlow31);
			// ObjectFlow ObjectFlow32 from result to target
			Operation_ProvidedInterface_main_ObjectFlow32->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow32);
			Operation_ProvidedInterface_main_ObjectFlow32->setName("ObjectFlow32");
			Operation_ProvidedInterface_main_ObjectFlow32->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow32->setSource(Operation_ProvidedInterface_main_Create_A_result);
			Operation_ProvidedInterface_main_ObjectFlow32->setTarget(Operation_ProvidedInterface_main_A__target);
				// LiteralBoolean LiteralBoolean33
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33);
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33->setName("LiteralBoolean33");
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow32->setGuard(Operation_ProvidedInterface_main_ObjectFlow32_LiteralBoolean33);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow32);
			// ObjectFlow ObjectFlow35 from Fork a to object
			Operation_ProvidedInterface_main_ObjectFlow35->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow35);
			Operation_ProvidedInterface_main_ObjectFlow35->setName("ObjectFlow35");
			Operation_ProvidedInterface_main_ObjectFlow35->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow35->setSource(Operation_ProvidedInterface_main_Fork_a);
			Operation_ProvidedInterface_main_ObjectFlow35->setTarget(Operation_ProvidedInterface_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean37
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37);
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37->setName("LiteralBoolean37");
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow35->setGuard(Operation_ProvidedInterface_main_ObjectFlow35_LiteralBoolean37);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow35);
			// ObjectFlow ObjectFlow14 from result to object
			Operation_ProvidedInterface_main_ObjectFlow14->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow14);
			Operation_ProvidedInterface_main_ObjectFlow14->setName("ObjectFlow14");
			Operation_ProvidedInterface_main_ObjectFlow14->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow14->setSource(Operation_ProvidedInterface_main_Read_a_b_result);
			Operation_ProvidedInterface_main_ObjectFlow14->setTarget(Operation_ProvidedInterface_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean15
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15);
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15->setName("LiteralBoolean15");
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow14->setGuard(Operation_ProvidedInterface_main_ObjectFlow14_LiteralBoolean15);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow14);
			// ObjectFlow ObjectFlow41 from Fork a to target
			Operation_ProvidedInterface_main_ObjectFlow41->setThisActivityEdgePtr(Operation_ProvidedInterface_main_ObjectFlow41);
			Operation_ProvidedInterface_main_ObjectFlow41->setName("ObjectFlow41");
			Operation_ProvidedInterface_main_ObjectFlow41->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_main_ObjectFlow41->setSource(Operation_ProvidedInterface_main_Fork_a);
			Operation_ProvidedInterface_main_ObjectFlow41->setTarget(Operation_ProvidedInterface_main_Call_setP__target);
				// LiteralBoolean LiteralBoolean42
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42->setThisElementPtr(Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42);
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42->setName("LiteralBoolean42");
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42->setValue(true);
			Operation_ProvidedInterface_main_ObjectFlow41->setGuard(Operation_ProvidedInterface_main_ObjectFlow41_LiteralBoolean42);
		Operation_ProvidedInterface_main->addEdge(Operation_ProvidedInterface_main_ObjectFlow41);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_main);
		// Class B
		Operation_ProvidedInterface_B->setThisClass_Ptr(Operation_ProvidedInterface_B);
		Operation_ProvidedInterface_B->setName("B");
		Operation_ProvidedInterface_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			Operation_ProvidedInterface_B_p->setThisElementPtr(Operation_ProvidedInterface_B_p);
			Operation_ProvidedInterface_B_p->setName("p");
			Operation_ProvidedInterface_B_p->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Operation_ProvidedInterface_B->addOwnedAttribute(Operation_ProvidedInterface_B_p);
		// Activity setPActivity
			Operation_ProvidedInterface_B_setPActivity->setThisActivityPtr(Operation_ProvidedInterface_B_setPActivity);
			Operation_ProvidedInterface_B_setPActivity->setName("setPActivity");
			Operation_ProvidedInterface_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_ProvidedInterface_B_setPActivity_v->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_v);
				Operation_ProvidedInterface_B_setPActivity_v->setName("v");
				Operation_ProvidedInterface_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_B_setPActivity->addOwnedParameter(Operation_ProvidedInterface_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_ProvidedInterface_B_setPActivity_vParameterNode->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_vParameterNode);
				Operation_ProvidedInterface_B_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_ProvidedInterface_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_B_setPActivity_vParameterNode->setParameter(Operation_ProvidedInterface_B_setPActivity_v);
			Operation_ProvidedInterface_B_setPActivity->addNode(Operation_ProvidedInterface_B_setPActivity_vParameterNode);
				// AddStructuralFeatureValueAction Set this.p
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setThisExecutableNodePtr(Operation_ProvidedInterface_B_setPActivity_Set_this_p);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setName("Set this.p");
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setStructuralFeature(Operation_ProvidedInterface_B_p);
					// InputPin object
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_object->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_Set_this_p_object);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_object->setName("object");
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_object->setType(Operation_ProvidedInterface_B);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setObject(Operation_ProvidedInterface_B_setPActivity_Set_this_p_object);
					// InputPin value
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_value->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_Set_this_p_value);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_value->setName("value");
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setValue(Operation_ProvidedInterface_B_setPActivity_Set_this_p_value);
					// OutputPin result
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_result->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_Set_this_p_result);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_result->setName("result");
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_Set_this_p_result->setType(Operation_ProvidedInterface_B);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setResult(Operation_ProvidedInterface_B_setPActivity_Set_this_p_result);
				Operation_ProvidedInterface_B_setPActivity_Set_this_p->setIsReplaceAll(true);
			Operation_ProvidedInterface_B_setPActivity->addNode(Operation_ProvidedInterface_B_setPActivity_Set_this_p);
				// ReadSelfAction this
				Operation_ProvidedInterface_B_setPActivity_this->setThisExecutableNodePtr(Operation_ProvidedInterface_B_setPActivity_this);
				Operation_ProvidedInterface_B_setPActivity_this->setName("this");
				Operation_ProvidedInterface_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_ProvidedInterface_B_setPActivity_this_result->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_this_result);
					Operation_ProvidedInterface_B_setPActivity_this_result->setName("result");
					Operation_ProvidedInterface_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_this_result->setType(Operation_ProvidedInterface_B);
				Operation_ProvidedInterface_B_setPActivity_this->setResult(Operation_ProvidedInterface_B_setPActivity_this_result);
			Operation_ProvidedInterface_B_setPActivity->addNode(Operation_ProvidedInterface_B_setPActivity_this);
				// ObjectFlow ObjectFlow48 from vParameterNode to value
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setThisActivityEdgePtr(Operation_ProvidedInterface_B_setPActivity_ObjectFlow48);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setName("ObjectFlow48");
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setSource(Operation_ProvidedInterface_B_setPActivity_vParameterNode);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setTarget(Operation_ProvidedInterface_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean49
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49->setName("LiteralBoolean49");
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49->setValue(true);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow48->setGuard(Operation_ProvidedInterface_B_setPActivity_ObjectFlow48_LiteralBoolean49);
			Operation_ProvidedInterface_B_setPActivity->addEdge(Operation_ProvidedInterface_B_setPActivity_ObjectFlow48);
				// ObjectFlow ObjectFlow51 from result to object
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setThisActivityEdgePtr(Operation_ProvidedInterface_B_setPActivity_ObjectFlow51);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setName("ObjectFlow51");
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setSource(Operation_ProvidedInterface_B_setPActivity_this_result);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setTarget(Operation_ProvidedInterface_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean53
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53->setThisElementPtr(Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53->setName("LiteralBoolean53");
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53->setValue(true);
				Operation_ProvidedInterface_B_setPActivity_ObjectFlow51->setGuard(Operation_ProvidedInterface_B_setPActivity_ObjectFlow51_LiteralBoolean53);
			Operation_ProvidedInterface_B_setPActivity->addEdge(Operation_ProvidedInterface_B_setPActivity_ObjectFlow51);
		Operation_ProvidedInterface_B->addOwnedBehavior(Operation_ProvidedInterface_B_setPActivity);
			Operation_ProvidedInterface_B_IRealization->setName("IRealization");
			Operation_ProvidedInterface_B_IRealization->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_B_IRealization->setContract(Operation_ProvidedInterface_I);
			
		Operation_ProvidedInterface_B->addInterfaceRealization(Operation_ProvidedInterface_B_IRealization);
		
			// Operation setP_Integer
			Operation_ProvidedInterface_B_setP_Integer->setThisOperationPtr(Operation_ProvidedInterface_B_setP_Integer);
			Operation_ProvidedInterface_B_setP_Integer->setName("setP_Integer");
			Operation_ProvidedInterface_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedInterface_B_setP_Integer_v->setThisElementPtr(Operation_ProvidedInterface_B_setP_Integer_v);
				Operation_ProvidedInterface_B_setP_Integer_v->setName("v");
				Operation_ProvidedInterface_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_B_setP_Integer->addOwnedParameter(Operation_ProvidedInterface_B_setP_Integer_v);
			Operation_ProvidedInterface_B_setP_Integer->addMethod(Operation_ProvidedInterface_B_setPActivity);
		Operation_ProvidedInterface_B->addOwnedOperation(Operation_ProvidedInterface_B_setP_Integer);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_B);
		// Association R
		Operation_ProvidedInterface_R->setThisAssociationPtr(Operation_ProvidedInterface_R);
		Operation_ProvidedInterface_R->setName("R");
		Operation_ProvidedInterface_R->setVisibility(VisibilityKind::public_);
		Operation_ProvidedInterface_R->addOwnedEnd(Operation_ProvidedInterface_R_x);
		Operation_ProvidedInterface_R->addOwnedEnd(Operation_ProvidedInterface_R_y);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_R);
		// Class IImpl
		Operation_ProvidedInterface_IImpl->setThisClass_Ptr(Operation_ProvidedInterface_IImpl);
		Operation_ProvidedInterface_IImpl->setName("IImpl");
		Operation_ProvidedInterface_IImpl->setVisibility(VisibilityKind::public_);
		Operation_ProvidedInterface_IImpl_IRealization->setName("IRealization");
			Operation_ProvidedInterface_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			Operation_ProvidedInterface_IImpl_IRealization->setContract(Operation_ProvidedInterface_I);
			
		Operation_ProvidedInterface_IImpl->addInterfaceRealization(Operation_ProvidedInterface_IImpl_IRealization);
		
			// Operation setP_Integer
			Operation_ProvidedInterface_IImpl_setP_Integer->setThisOperationPtr(Operation_ProvidedInterface_IImpl_setP_Integer);
			Operation_ProvidedInterface_IImpl_setP_Integer->setName("setP_Integer");
			Operation_ProvidedInterface_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedInterface_IImpl_setP_Integer_v->setThisElementPtr(Operation_ProvidedInterface_IImpl_setP_Integer_v);
				Operation_ProvidedInterface_IImpl_setP_Integer_v->setName("v");
				Operation_ProvidedInterface_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_IImpl_setP_Integer->addOwnedParameter(Operation_ProvidedInterface_IImpl_setP_Integer_v);
		Operation_ProvidedInterface_IImpl->addOwnedOperation(Operation_ProvidedInterface_IImpl_setP_Integer);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_IImpl);
		// Interface I
		Operation_ProvidedInterface_I->setThisInterfacePtr(Operation_ProvidedInterface_I);
		Operation_ProvidedInterface_I->setName("I");
		Operation_ProvidedInterface_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			Operation_ProvidedInterface_I_setP_Integer->setThisOperationPtr(Operation_ProvidedInterface_I_setP_Integer);
			Operation_ProvidedInterface_I_setP_Integer->setName("setP_Integer");
			Operation_ProvidedInterface_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedInterface_I_setP_Integer_v->setThisElementPtr(Operation_ProvidedInterface_I_setP_Integer_v);
				Operation_ProvidedInterface_I_setP_Integer_v->setName("v");
				Operation_ProvidedInterface_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_I_setP_Integer->addOwnedParameter(Operation_ProvidedInterface_I_setP_Integer_v);
		Operation_ProvidedInterface_I->addOwnedOperation(Operation_ProvidedInterface_I_setP_Integer);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_I);
		// Class A
		Operation_ProvidedInterface_A->setThisClass_Ptr(Operation_ProvidedInterface_A);
		Operation_ProvidedInterface_A->setName("A");
		Operation_ProvidedInterface_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_ProvidedInterface_A_q->setThisElementPtr(Operation_ProvidedInterface_A_q);
			Operation_ProvidedInterface_A_q->setName("q");
			Operation_ProvidedInterface_A_q->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_A_q->setType(Operation_ProvidedInterface_IImpl);
			Operation_ProvidedInterface_A_q->setAggregation(AggregationKind::composite);
			Operation_ProvidedInterface_A_q->isService = true;
			Operation_ProvidedInterface_A_q->addProvided(Operation_ProvidedInterface_I);
		Operation_ProvidedInterface_A->addOwnedAttribute(Operation_ProvidedInterface_A_q);
			// Property b
			Operation_ProvidedInterface_A_b->setThisElementPtr(Operation_ProvidedInterface_A_b);
			Operation_ProvidedInterface_A_b->setName("b");
			Operation_ProvidedInterface_A_b->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedInterface_A_b->setType(Operation_ProvidedInterface_B);
			Operation_ProvidedInterface_A_b->setAggregation(AggregationKind::composite);
		Operation_ProvidedInterface_A->addOwnedAttribute(Operation_ProvidedInterface_A_b);
		// Activity setPActivity
			Operation_ProvidedInterface_A_setPActivity->setThisActivityPtr(Operation_ProvidedInterface_A_setPActivity);
			Operation_ProvidedInterface_A_setPActivity->setName("setPActivity");
			Operation_ProvidedInterface_A_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_ProvidedInterface_A_setPActivity_v->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_v);
				Operation_ProvidedInterface_A_setPActivity_v->setName("v");
				Operation_ProvidedInterface_A_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_A_setPActivity->addOwnedParameter(Operation_ProvidedInterface_A_setPActivity_v);
				// ReadSelfAction this
				Operation_ProvidedInterface_A_setPActivity_this->setThisExecutableNodePtr(Operation_ProvidedInterface_A_setPActivity_this);
				Operation_ProvidedInterface_A_setPActivity_this->setName("this");
				Operation_ProvidedInterface_A_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_ProvidedInterface_A_setPActivity_this_result->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_this_result);
					Operation_ProvidedInterface_A_setPActivity_this_result->setName("result");
					Operation_ProvidedInterface_A_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_A_setPActivity_this_result->setType(Operation_ProvidedInterface_A);
				Operation_ProvidedInterface_A_setPActivity_this->setResult(Operation_ProvidedInterface_A_setPActivity_this_result);
			Operation_ProvidedInterface_A_setPActivity->addNode(Operation_ProvidedInterface_A_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setOnPort(Operation_ProvidedInterface_A_q);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setOperation(Operation_ProvidedInterface_I_setP_Integer);
					// InputPin target
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target);
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->setTarget(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v);
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q->addArgument(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v);
			Operation_ProvidedInterface_A_setPActivity->addNode(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q);
				// ActivityParameterNode vParameterNode
				Operation_ProvidedInterface_A_setPActivity_vParameterNode->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_vParameterNode);
				Operation_ProvidedInterface_A_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_ProvidedInterface_A_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_setPActivity_vParameterNode->setParameter(Operation_ProvidedInterface_A_setPActivity_v);
			Operation_ProvidedInterface_A_setPActivity->addNode(Operation_ProvidedInterface_A_setPActivity_vParameterNode);
				// ObjectFlow ObjectFlow73 from result to target
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setThisActivityEdgePtr(Operation_ProvidedInterface_A_setPActivity_ObjectFlow73);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setName("ObjectFlow73");
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setSource(Operation_ProvidedInterface_A_setPActivity_this_result);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setTarget(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean74
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74->setName("LiteralBoolean74");
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74->setValue(true);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow73->setGuard(Operation_ProvidedInterface_A_setPActivity_ObjectFlow73_LiteralBoolean74);
			Operation_ProvidedInterface_A_setPActivity->addEdge(Operation_ProvidedInterface_A_setPActivity_ObjectFlow73);
				// ObjectFlow ObjectFlow76 from vParameterNode to v
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setThisActivityEdgePtr(Operation_ProvidedInterface_A_setPActivity_ObjectFlow76);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setName("ObjectFlow76");
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setSource(Operation_ProvidedInterface_A_setPActivity_vParameterNode);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setTarget(Operation_ProvidedInterface_A_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean77
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77->setThisElementPtr(Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77->setName("LiteralBoolean77");
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77->setVisibility(VisibilityKind::public_);
					Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77->setValue(true);
				Operation_ProvidedInterface_A_setPActivity_ObjectFlow76->setGuard(Operation_ProvidedInterface_A_setPActivity_ObjectFlow76_LiteralBoolean77);
			Operation_ProvidedInterface_A_setPActivity->addEdge(Operation_ProvidedInterface_A_setPActivity_ObjectFlow76);
		Operation_ProvidedInterface_A->addOwnedBehavior(Operation_ProvidedInterface_A_setPActivity);
		Operation_ProvidedInterface_A_r->setName("r");
			Operation_ProvidedInterface_A_r->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_r_ConnectorEnd64->setRole(Operation_ProvidedInterface_A_q);
				
			Operation_ProvidedInterface_A_r->addEnd(Operation_ProvidedInterface_A_r_ConnectorEnd64);
				
				Operation_ProvidedInterface_A_r_ConnectorEnd63->setRole(Operation_ProvidedInterface_A_b);
				
			Operation_ProvidedInterface_A_r->addEnd(Operation_ProvidedInterface_A_r_ConnectorEnd63);
			Operation_ProvidedInterface_A_r->setType(Operation_ProvidedInterface_R);
		Operation_ProvidedInterface_A->addOwnedConnector(Operation_ProvidedInterface_A_r);
			// Operation setP_Integer
			Operation_ProvidedInterface_A_setP_Integer->setThisOperationPtr(Operation_ProvidedInterface_A_setP_Integer);
			Operation_ProvidedInterface_A_setP_Integer->setName("setP_Integer");
			Operation_ProvidedInterface_A_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedInterface_A_setP_Integer_v->setThisElementPtr(Operation_ProvidedInterface_A_setP_Integer_v);
				Operation_ProvidedInterface_A_setP_Integer_v->setName("v");
				Operation_ProvidedInterface_A_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedInterface_A_setP_Integer->addOwnedParameter(Operation_ProvidedInterface_A_setP_Integer_v);
			Operation_ProvidedInterface_A_setP_Integer->addMethod(Operation_ProvidedInterface_A_setPActivity);
		Operation_ProvidedInterface_A->addOwnedOperation(Operation_ProvidedInterface_A_setP_Integer);
			// Operation A_A
			Operation_ProvidedInterface_A_A_A->setThisOperationPtr(Operation_ProvidedInterface_A_A_A);
			Operation_ProvidedInterface_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Operation_ProvidedInterface_A_A_A->setName("A_A");
			Operation_ProvidedInterface_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				Operation_ProvidedInterface_A_A_A_result->setThisElementPtr(Operation_ProvidedInterface_A_A_A_result);
				Operation_ProvidedInterface_A_A_A_result->setName("result");
				Operation_ProvidedInterface_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedInterface_A_A_A_result->setType(Operation_ProvidedInterface_A);
				Operation_ProvidedInterface_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			Operation_ProvidedInterface_A_A_A->addOwnedParameter(Operation_ProvidedInterface_A_A_A_result);
		Operation_ProvidedInterface_A->addOwnedOperation(Operation_ProvidedInterface_A_A_A);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_A);
		// Association S
		Operation_ProvidedInterface_S->setThisAssociationPtr(Operation_ProvidedInterface_S);
		Operation_ProvidedInterface_S->setName("S");
		Operation_ProvidedInterface_S->setVisibility(VisibilityKind::public_);
		Operation_ProvidedInterface_S->addOwnedEnd(Operation_ProvidedInterface_S_x);
		Operation_ProvidedInterface_S->addOwnedEnd(Operation_ProvidedInterface_S_y);
	Operation_ProvidedInterface->addPackagedElement(Operation_ProvidedInterface_S);
}
