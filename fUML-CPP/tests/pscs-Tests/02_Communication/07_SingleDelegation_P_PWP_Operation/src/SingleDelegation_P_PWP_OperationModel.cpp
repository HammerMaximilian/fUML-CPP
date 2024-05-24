/*
 * SingleDelegation_P_PWP_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "SingleDelegation_P_PWP_OperationModel.h"

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

using namespace SingleDelegation_P_PWP_Operation;
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

SingleDelegation_P_PWP_OperationModel::SingleDelegation_P_PWP_OperationModel()
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

SingleDelegation_P_PWP_OperationModel::~SingleDelegation_P_PWP_OperationModel()
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

const std::shared_ptr<SingleDelegation_P_PWP_OperationModel>& SingleDelegation_P_PWP_OperationModel::Instance()
{
	static std::shared_ptr<SingleDelegation_P_PWP_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new SingleDelegation_P_PWP_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void SingleDelegation_P_PWP_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model SingleDelegation_P_PWP_Operation
	 */
	SingleDelegation_P_PWP_Operation.reset(new Package());
	this->addToElementRepository("SingleDelegation_P_PWP_Operation", SingleDelegation_P_PWP_Operation);
		SingleDelegation_P_PWP_Operation_R.reset(new Association());
		this->addToElementRepository("R", SingleDelegation_P_PWP_Operation_R);
			SingleDelegation_P_PWP_Operation_R_y.reset(new Property());
			this->addToElementRepository("y", SingleDelegation_P_PWP_Operation_R_y);
			SingleDelegation_P_PWP_Operation_R_x.reset(new Property());
			this->addToElementRepository("x", SingleDelegation_P_PWP_Operation_R_x);
		SingleDelegation_P_PWP_Operation_main.reset(new Activity());
		this->addToElementRepository("main", SingleDelegation_P_PWP_Operation_main);
			SingleDelegation_P_PWP_Operation_main_Read_c_a.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.a", SingleDelegation_P_PWP_Operation_main_Read_c_a);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Read_c_a_result);
					SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural0", SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralUnlimitedNatural0);
					SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", SingleDelegation_P_PWP_Operation_main_Read_c_a_result_LiteralInteger1);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_PWP_Operation_main_Read_c_a_object);
					SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural2", SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralUnlimitedNatural2);
					SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", SingleDelegation_P_PWP_Operation_main_Read_c_a_object_LiteralInteger3);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow4", SingleDelegation_P_PWP_Operation_main_ObjectFlow4);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean5", SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralInteger6.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger6", SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralInteger6);
			SingleDelegation_P_PWP_Operation_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", SingleDelegation_P_PWP_Operation_main_Read_b_p);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_PWP_Operation_main_Read_b_p_object);
					SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralInteger7);
					SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural8", SingleDelegation_P_PWP_Operation_main_Read_b_p_object_LiteralUnlimitedNatural8);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Read_b_p_result);
					SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralUnlimitedNatural9);
					SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", SingleDelegation_P_PWP_Operation_main_Read_b_p_result_LiteralInteger10);
			SingleDelegation_P_PWP_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", SingleDelegation_P_PWP_Operation_main_Call_testP);
				SingleDelegation_P_PWP_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", SingleDelegation_P_PWP_Operation_main_Call_testP_p);
					SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger11.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger11", SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger11);
					SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural12", SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralUnlimitedNatural12);
					SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", SingleDelegation_P_PWP_Operation_main_Call_testP_p_LiteralInteger13);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow14", SingleDelegation_P_PWP_Operation_main_ObjectFlow14);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean15", SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralInteger16);
			SingleDelegation_P_PWP_Operation_main_ControlFlow17.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow17", SingleDelegation_P_PWP_Operation_main_ControlFlow17);
			SingleDelegation_P_PWP_Operation_main_Create_C.reset(new CreateObjectAction());
			this->addToElementRepository("Create C", SingleDelegation_P_PWP_Operation_main_Create_C);
				SingleDelegation_P_PWP_Operation_main_Create_C_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Create_C_result);
					SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralInteger18);
					SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", SingleDelegation_P_PWP_Operation_main_Create_C_result_LiteralUnlimitedNatural19);
			SingleDelegation_P_PWP_Operation_main_Read_c_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.p", SingleDelegation_P_PWP_Operation_main_Read_c_p);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Read_c_p_result);
					SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralInteger20);
					SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", SingleDelegation_P_PWP_Operation_main_Read_c_p_result_LiteralUnlimitedNatural21);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_PWP_Operation_main_Read_c_p_object);
					SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralInteger22);
					SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", SingleDelegation_P_PWP_Operation_main_Read_c_p_object_LiteralUnlimitedNatural23);
			SingleDelegation_P_PWP_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", SingleDelegation_P_PWP_Operation_main_testP);
				SingleDelegation_P_PWP_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", SingleDelegation_P_PWP_Operation_main_testP_p);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow24", SingleDelegation_P_PWP_Operation_main_ObjectFlow24);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean25", SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralInteger26.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger26", SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralInteger26);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow27", SingleDelegation_P_PWP_Operation_main_ObjectFlow27);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean28", SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralInteger29.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger29", SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralInteger29);
			SingleDelegation_P_PWP_Operation_main_C_.reset(new CallOperationAction());
			this->addToElementRepository("C()", SingleDelegation_P_PWP_Operation_main_C_);
				SingleDelegation_P_PWP_Operation_main_C__result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_C__result);
					SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger30);
					SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", SingleDelegation_P_PWP_Operation_main_C__result_LiteralInteger31);
					SingleDelegation_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", SingleDelegation_P_PWP_Operation_main_C__result_LiteralUnlimitedNatural32);
				SingleDelegation_P_PWP_Operation_main_C__target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_PWP_Operation_main_C__target);
					SingleDelegation_P_PWP_Operation_main_C__target_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", SingleDelegation_P_PWP_Operation_main_C__target_LiteralInteger33);
					SingleDelegation_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", SingleDelegation_P_PWP_Operation_main_C__target_LiteralUnlimitedNatural34);
			SingleDelegation_P_PWP_Operation_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", SingleDelegation_P_PWP_Operation_main_Read_a_b);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_PWP_Operation_main_Read_a_b_object);
					SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural35", SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralUnlimitedNatural35);
					SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", SingleDelegation_P_PWP_Operation_main_Read_a_b_object_LiteralInteger36);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Read_a_b_result);
					SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural37.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural37", SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralUnlimitedNatural37);
					SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", SingleDelegation_P_PWP_Operation_main_Read_a_b_result_LiteralInteger38);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow39", SingleDelegation_P_PWP_Operation_main_ObjectFlow39);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralInteger40.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger40", SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralInteger40);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean41", SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow42", SingleDelegation_P_PWP_Operation_main_ObjectFlow42);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralInteger43);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow45", SingleDelegation_P_PWP_Operation_main_ObjectFlow45);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralInteger46.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger46", SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralInteger46);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean47", SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow48", SingleDelegation_P_PWP_Operation_main_ObjectFlow48);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralInteger49.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger49", SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralInteger49);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean50", SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50);
			SingleDelegation_P_PWP_Operation_main_ControlFlow51.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow51", SingleDelegation_P_PWP_Operation_main_ControlFlow51);
			SingleDelegation_P_PWP_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", SingleDelegation_P_PWP_Operation_main_Value_4);
				SingleDelegation_P_PWP_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_Value_4_result);
					SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralUnlimitedNatural52);
					SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", SingleDelegation_P_PWP_Operation_main_Value_4_result_LiteralInteger53);
				SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger54", SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54);
			SingleDelegation_P_PWP_Operation_main_ControlFlow55.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow55", SingleDelegation_P_PWP_Operation_main_ControlFlow55);
			SingleDelegation_P_PWP_Operation_main_InitialMessage.reset(new ValueSpecificationAction());
			this->addToElementRepository("InitialMessage", SingleDelegation_P_PWP_Operation_main_InitialMessage);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_InitialMessage_result);
					SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural56", SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralUnlimitedNatural56);
					SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", SingleDelegation_P_PWP_Operation_main_InitialMessage_result_LiteralInteger57);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58.reset(new LiteralString());
				this->addToElementRepository("LiteralString58", SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58);
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine(EndMessage)", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value.reset(new InputPin());
				this->addToElementRepository("value", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger59);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralInteger60);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural61", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value_LiteralUnlimitedNatural61);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger62);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralInteger63);
					SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural64", SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural64);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow65", SingleDelegation_P_PWP_Operation_main_ObjectFlow65);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralInteger66);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow68", SingleDelegation_P_PWP_Operation_main_ObjectFlow68);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralInteger69.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger69", SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralInteger69);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean70", SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70);
			SingleDelegation_P_PWP_Operation_main_Fork_C.reset(new ForkNode());
			this->addToElementRepository("Fork C", SingleDelegation_P_PWP_Operation_main_Fork_C);
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine(InitialMessage)", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value.reset(new InputPin());
				this->addToElementRepository("value", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger71);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralUnlimitedNatural72);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value_LiteralInteger73);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger74);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralInteger75);
					SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural76", SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural76);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow77", SingleDelegation_P_PWP_Operation_main_ObjectFlow77);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralInteger78.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger78", SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralInteger78);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean79", SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79);
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP.reset(new CallOperationAction());
			this->addToElementRepository("Call c.p.setP", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP);
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target);
					SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralInteger80);
					SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural81", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target_LiteralUnlimitedNatural81);
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v.reset(new InputPin());
				this->addToElementRepository("v", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v);
					SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger82);
					SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralInteger83);
					SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v_LiteralUnlimitedNatural84);
			SingleDelegation_P_PWP_Operation_main_EndMessage.reset(new ValueSpecificationAction());
			this->addToElementRepository("EndMessage", SingleDelegation_P_PWP_Operation_main_EndMessage);
				SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85.reset(new LiteralString());
				this->addToElementRepository("LiteralString85", SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85);
				SingleDelegation_P_PWP_Operation_main_EndMessage_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_main_EndMessage_result);
					SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural86", SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralUnlimitedNatural86);
					SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", SingleDelegation_P_PWP_Operation_main_EndMessage_result_LiteralInteger87);
		SingleDelegation_P_PWP_Operation_U.reset(new Association());
		this->addToElementRepository("U", SingleDelegation_P_PWP_Operation_U);
			SingleDelegation_P_PWP_Operation_U_y.reset(new Property());
			this->addToElementRepository("y", SingleDelegation_P_PWP_Operation_U_y);
			SingleDelegation_P_PWP_Operation_U_x.reset(new Property());
			this->addToElementRepository("x", SingleDelegation_P_PWP_Operation_U_x);
		SingleDelegation_P_PWP_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", SingleDelegation_P_PWP_Operation_IImpl);
			SingleDelegation_P_PWP_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_PWP_Operation_IImpl_setP_Integer);
				SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v);
			SingleDelegation_P_PWP_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_PWP_Operation_IImpl_IRealization);
		SingleDelegation_P_PWP_Operation_A.reset(new Class_());
		this->addToElementRepository("A", SingleDelegation_P_PWP_Operation_A);
			SingleDelegation_P_PWP_Operation_A_b.reset(new Property());
			this->addToElementRepository("b", SingleDelegation_P_PWP_Operation_A_b);
			SingleDelegation_P_PWP_Operation_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", SingleDelegation_P_PWP_Operation_A_A_A);
				SingleDelegation_P_PWP_Operation_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_A_A_A_result);
			SingleDelegation_P_PWP_Operation_A_q.reset(new Port());
			this->addToElementRepository("q", SingleDelegation_P_PWP_Operation_A_q);
			SingleDelegation_P_PWP_Operation_A_r.reset(new Connector());
			this->addToElementRepository("r", SingleDelegation_P_PWP_Operation_A_r);
				SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd88.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd88", SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd88);
				SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd89.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd89", SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd89);
		SingleDelegation_P_PWP_Operation_I.reset(new Interface());
		this->addToElementRepository("I", SingleDelegation_P_PWP_Operation_I);
			SingleDelegation_P_PWP_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_PWP_Operation_I_setP_Integer);
				SingleDelegation_P_PWP_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_PWP_Operation_I_setP_Integer_v);
		SingleDelegation_P_PWP_Operation_C.reset(new Class_());
		this->addToElementRepository("C", SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_C_a.reset(new Property());
			this->addToElementRepository("a", SingleDelegation_P_PWP_Operation_C_a);
			SingleDelegation_P_PWP_Operation_C_u.reset(new Connector());
			this->addToElementRepository("u", SingleDelegation_P_PWP_Operation_C_u);
				SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd90", SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90);
				SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd91.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd91", SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd91);
			SingleDelegation_P_PWP_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", SingleDelegation_P_PWP_Operation_C_C_C);
				SingleDelegation_P_PWP_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_C_C_C_result);
			SingleDelegation_P_PWP_Operation_C_p.reset(new Port());
			this->addToElementRepository("p", SingleDelegation_P_PWP_Operation_C_p);
		SingleDelegation_P_PWP_Operation_B.reset(new Class_());
		this->addToElementRepository("B", SingleDelegation_P_PWP_Operation_B);
			SingleDelegation_P_PWP_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_PWP_Operation_B_IRealization);
			SingleDelegation_P_PWP_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", SingleDelegation_P_PWP_Operation_B_setPActivity);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralInteger92);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural93", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural93);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural94);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object_LiteralInteger95);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural96", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural96);
						SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger97.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger97", SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result_LiteralInteger97);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow98", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralInteger99);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean100", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow101", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean102", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralInteger103);
				SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode);
					SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode_LiteralInteger104);
				SingleDelegation_P_PWP_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_PWP_Operation_B_setPActivity_v);
				SingleDelegation_P_PWP_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SingleDelegation_P_PWP_Operation_B_setPActivity_this);
					SingleDelegation_P_PWP_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_B_setPActivity_this_result);
						SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural105", SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural105);
						SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", SingleDelegation_P_PWP_Operation_B_setPActivity_this_result_LiteralInteger106);
			SingleDelegation_P_PWP_Operation_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", SingleDelegation_P_PWP_Operation_B_B_B);
				SingleDelegation_P_PWP_Operation_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_PWP_Operation_B_B_B_result);
			SingleDelegation_P_PWP_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", SingleDelegation_P_PWP_Operation_B_p);
			SingleDelegation_P_PWP_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", SingleDelegation_P_PWP_Operation_B_setP_Integer);
				SingleDelegation_P_PWP_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", SingleDelegation_P_PWP_Operation_B_setP_Integer_v);

	// Initialize public members
	/*
	 * Model SingleDelegation_P_PWP_Operation
	 */
	SingleDelegation_P_PWP_Operation->setThisPackagePtr(SingleDelegation_P_PWP_Operation);
	SingleDelegation_P_PWP_Operation->setName("SingleDelegation_P_PWP_Operation");
	SingleDelegation_P_PWP_Operation->setVisibility(VisibilityKind::public_);
		// Association R
		SingleDelegation_P_PWP_Operation_R->setThisAssociationPtr(SingleDelegation_P_PWP_Operation_R);
		SingleDelegation_P_PWP_Operation_R->setName("R");
		SingleDelegation_P_PWP_Operation_R->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_PWP_Operation_R->addOwnedEnd(SingleDelegation_P_PWP_Operation_R_x);
		SingleDelegation_P_PWP_Operation_R->addOwnedEnd(SingleDelegation_P_PWP_Operation_R_y);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_R);
		// Activity main
		SingleDelegation_P_PWP_Operation_main->setThisActivityPtr(SingleDelegation_P_PWP_Operation_main);
		SingleDelegation_P_PWP_Operation_main->setName("main");
		SingleDelegation_P_PWP_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			SingleDelegation_P_PWP_Operation_main_testP->setThisClass_Ptr(SingleDelegation_P_PWP_Operation_main_testP);
			SingleDelegation_P_PWP_Operation_main_testP->setName("testP");
			SingleDelegation_P_PWP_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				SingleDelegation_P_PWP_Operation_main_testP_p->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_testP_p);
				SingleDelegation_P_PWP_Operation_main_testP_p->setName("p");
				SingleDelegation_P_PWP_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_main_testP->addOwnedParameter(SingleDelegation_P_PWP_Operation_main_testP_p);
			SingleDelegation_P_PWP_Operation_main_testP->addLanguage("C++");
			SingleDelegation_P_PWP_Operation_main_testP->addLanguage("Include");
			SingleDelegation_P_PWP_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting c.a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"c.a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Operation call delegated: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			SingleDelegation_P_PWP_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		SingleDelegation_P_PWP_Operation_main->addOwnedBehavior(SingleDelegation_P_PWP_Operation_main_testP);
			// CallOperationAction C()
			SingleDelegation_P_PWP_Operation_main_C_->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_C_);
			SingleDelegation_P_PWP_Operation_main_C_->setName("C()");
			SingleDelegation_P_PWP_Operation_main_C_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_C__result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_C__result);
				SingleDelegation_P_PWP_Operation_main_C__result->setName("result");
				SingleDelegation_P_PWP_Operation_main_C__result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_C__result->setType(SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_main_C_->addResult(SingleDelegation_P_PWP_Operation_main_C__result);
			SingleDelegation_P_PWP_Operation_main_C_->setOperation(SingleDelegation_P_PWP_Operation_C_C_C);
				// InputPin target
				SingleDelegation_P_PWP_Operation_main_C__target->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_C__target);
				SingleDelegation_P_PWP_Operation_main_C__target->setName("target");
				SingleDelegation_P_PWP_Operation_main_C__target->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_C__target->setType(SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_main_C_->setTarget(SingleDelegation_P_PWP_Operation_main_C__target);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_C_);
			// ReadStructuralFeatureAction Read a.b
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Read_a_b);
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setName("Read a.b");
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setStructuralFeature(SingleDelegation_P_PWP_Operation_A_b);
				// InputPin object
				SingleDelegation_P_PWP_Operation_main_Read_a_b_object->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_a_b_object);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_object->setName("object");
				SingleDelegation_P_PWP_Operation_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_object->setType(SingleDelegation_P_PWP_Operation_A);
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setObject(SingleDelegation_P_PWP_Operation_main_Read_a_b_object);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Read_a_b_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_a_b_result);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_a_b_result->setType(SingleDelegation_P_PWP_Operation_B);
			SingleDelegation_P_PWP_Operation_main_Read_a_b->setResult(SingleDelegation_P_PWP_Operation_main_Read_a_b_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Read_a_b);
			// ReadStructuralFeatureAction Read c.a
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Read_c_a);
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setName("Read c.a");
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setStructuralFeature(SingleDelegation_P_PWP_Operation_C_a);
				// InputPin object
				SingleDelegation_P_PWP_Operation_main_Read_c_a_object->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_c_a_object);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_object->setName("object");
				SingleDelegation_P_PWP_Operation_main_Read_c_a_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_object->setType(SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setObject(SingleDelegation_P_PWP_Operation_main_Read_c_a_object);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Read_c_a_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_c_a_result);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Read_c_a_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_c_a_result->setType(SingleDelegation_P_PWP_Operation_A);
			SingleDelegation_P_PWP_Operation_main_Read_c_a->setResult(SingleDelegation_P_PWP_Operation_main_Read_c_a_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Read_c_a);
			// ReadStructuralFeatureAction Read b.p
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Read_b_p);
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setName("Read b.p");
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setStructuralFeature(SingleDelegation_P_PWP_Operation_B_p);
				// InputPin object
				SingleDelegation_P_PWP_Operation_main_Read_b_p_object->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_b_p_object);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_object->setName("object");
				SingleDelegation_P_PWP_Operation_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_object->setType(SingleDelegation_P_PWP_Operation_B);
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setObject(SingleDelegation_P_PWP_Operation_main_Read_b_p_object);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Read_b_p_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_b_p_result);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_main_Read_b_p->setResult(SingleDelegation_P_PWP_Operation_main_Read_b_p_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Read_b_p);
			// CallBehaviorAction Call testP
			SingleDelegation_P_PWP_Operation_main_Call_testP->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Call_testP);
			SingleDelegation_P_PWP_Operation_main_Call_testP->setName("Call testP");
			SingleDelegation_P_PWP_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Call_testP->setBehavior(SingleDelegation_P_PWP_Operation_main_testP);
				// InputPin p
				SingleDelegation_P_PWP_Operation_main_Call_testP_p->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Call_testP_p);
				SingleDelegation_P_PWP_Operation_main_Call_testP_p->setName("p");
				SingleDelegation_P_PWP_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_main_Call_testP->addArgument(SingleDelegation_P_PWP_Operation_main_Call_testP_p);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Call_testP);
			// ValueSpecificationAction Value(4)
			SingleDelegation_P_PWP_Operation_main_Value_4->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Value_4);
			SingleDelegation_P_PWP_Operation_main_Value_4->setName("Value(4)");
			SingleDelegation_P_PWP_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger54
				SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54);
				SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54->setName("LiteralInteger54");
				SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54->setValue(4);
			SingleDelegation_P_PWP_Operation_main_Value_4->setValue(SingleDelegation_P_PWP_Operation_main_Value_4_LiteralInteger54);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Value_4_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Value_4_result);
				SingleDelegation_P_PWP_Operation_main_Value_4_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_main_Value_4->setResult(SingleDelegation_P_PWP_Operation_main_Value_4_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Value_4);
			// ValueSpecificationAction InitialMessage
			SingleDelegation_P_PWP_Operation_main_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_InitialMessage);
			SingleDelegation_P_PWP_Operation_main_InitialMessage->setName("InitialMessage");
			SingleDelegation_P_PWP_Operation_main_InitialMessage->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString58
				SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58->setName("LiteralString58");
				SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58->setValue("-- Running test case: Single delegation connector - Operation delegated from port to part with port --");
			SingleDelegation_P_PWP_Operation_main_InitialMessage->setValue(SingleDelegation_P_PWP_Operation_main_InitialMessage_LiteralString58);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_InitialMessage_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_InitialMessage_result);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_InitialMessage_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_InitialMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_PWP_Operation_main_InitialMessage->setResult(SingleDelegation_P_PWP_Operation_main_InitialMessage_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_InitialMessage);
			// CallBehaviorAction WriteLine(EndMessage)
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage);
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->setName("WriteLine(EndMessage)");
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus->setName("errorStatus");
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus->setLower(0);
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->addResult(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_errorStatus);
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value->setName("value");
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage->addArgument(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage);
			// CreateObjectAction Create C
			SingleDelegation_P_PWP_Operation_main_Create_C->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Create_C);
			SingleDelegation_P_PWP_Operation_main_Create_C->setName("Create C");
			SingleDelegation_P_PWP_Operation_main_Create_C->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Create_C->setClassifier(SingleDelegation_P_PWP_Operation_C);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Create_C_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Create_C_result);
				SingleDelegation_P_PWP_Operation_main_Create_C_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Create_C_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Create_C_result->setType(SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_main_Create_C->setResult(SingleDelegation_P_PWP_Operation_main_Create_C_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Create_C);
			// ReadStructuralFeatureAction Read c.p
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Read_c_p);
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setName("Read c.p");
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setStructuralFeature(SingleDelegation_P_PWP_Operation_C_p);
				// InputPin object
				SingleDelegation_P_PWP_Operation_main_Read_c_p_object->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_c_p_object);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_object->setName("object");
				SingleDelegation_P_PWP_Operation_main_Read_c_p_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_object->setType(SingleDelegation_P_PWP_Operation_C);
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setObject(SingleDelegation_P_PWP_Operation_main_Read_c_p_object);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_Read_c_p_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Read_c_p_result);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_Read_c_p_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Read_c_p_result->setType(SingleDelegation_P_PWP_Operation_IImpl);
			SingleDelegation_P_PWP_Operation_main_Read_c_p->setResult(SingleDelegation_P_PWP_Operation_main_Read_c_p_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Read_c_p);
			// ForkNode Fork C
			SingleDelegation_P_PWP_Operation_main_Fork_C->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Fork_C);
			SingleDelegation_P_PWP_Operation_main_Fork_C->setName("Fork C");
			SingleDelegation_P_PWP_Operation_main_Fork_C->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Fork_C);
			// CallBehaviorAction WriteLine(InitialMessage)
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage);
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->setName("WriteLine(InitialMessage)");
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus->setName("errorStatus");
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus->setLower(0);
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->addResult(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_errorStatus);
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value->setName("value");
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage->addArgument(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage);
			// CallOperationAction Call c.p.setP
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP);
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->setName("Call c.p.setP");
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->setOperation(SingleDelegation_P_PWP_Operation_I_setP_Integer);
				// InputPin target
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target);
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target->setName("target");
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->setTarget(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target);
				// InputPin v
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v);
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v->setName("v");
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_main_Call_c_p_setP->addArgument(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP);
			// ValueSpecificationAction EndMessage
			SingleDelegation_P_PWP_Operation_main_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_main_EndMessage);
			SingleDelegation_P_PWP_Operation_main_EndMessage->setName("EndMessage");
			SingleDelegation_P_PWP_Operation_main_EndMessage->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString85
				SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85);
				SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85->setName("LiteralString85");
				SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85->setValue("-- End of test case --");
			SingleDelegation_P_PWP_Operation_main_EndMessage->setValue(SingleDelegation_P_PWP_Operation_main_EndMessage_LiteralString85);
				// OutputPin result
				SingleDelegation_P_PWP_Operation_main_EndMessage_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_EndMessage_result);
				SingleDelegation_P_PWP_Operation_main_EndMessage_result->setName("result");
				SingleDelegation_P_PWP_Operation_main_EndMessage_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_EndMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			SingleDelegation_P_PWP_Operation_main_EndMessage->setResult(SingleDelegation_P_PWP_Operation_main_EndMessage_result);
		SingleDelegation_P_PWP_Operation_main->addNode(SingleDelegation_P_PWP_Operation_main_EndMessage);
			// ObjectFlow ObjectFlow39 from result to target
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow39);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setName("ObjectFlow39");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setSource(SingleDelegation_P_PWP_Operation_main_Create_C_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setTarget(SingleDelegation_P_PWP_Operation_main_C__target);
				// LiteralBoolean LiteralBoolean41
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41->setName("LiteralBoolean41");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow39->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow39_LiteralBoolean41);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow39);
			// ObjectFlow ObjectFlow42 from result to v
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow42);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setName("ObjectFlow42");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setSource(SingleDelegation_P_PWP_Operation_main_Value_4_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setTarget(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_v);
				// LiteralBoolean LiteralBoolean44
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44->setName("LiteralBoolean44");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow42->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow42_LiteralBoolean44);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow42);
			// ObjectFlow ObjectFlow45 from result to object
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow45);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setName("ObjectFlow45");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setSource(SingleDelegation_P_PWP_Operation_main_Read_a_b_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setTarget(SingleDelegation_P_PWP_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean47
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47->setName("LiteralBoolean47");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow45->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow45_LiteralBoolean47);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow45);
			// ObjectFlow ObjectFlow48 from Fork C to object
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow48);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setName("ObjectFlow48");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setSource(SingleDelegation_P_PWP_Operation_main_Fork_C);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setTarget(SingleDelegation_P_PWP_Operation_main_Read_c_a_object);
				// LiteralBoolean LiteralBoolean50
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50->setName("LiteralBoolean50");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow48->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow48_LiteralBoolean50);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow48);
			// ObjectFlow ObjectFlow4 from result to object
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow4);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setName("ObjectFlow4");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setSource(SingleDelegation_P_PWP_Operation_main_Read_c_a_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setTarget(SingleDelegation_P_PWP_Operation_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean5
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5->setName("LiteralBoolean5");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow4->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow4_LiteralBoolean5);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow4);
			// ControlFlow ControlFlow51 from Call c.p.setP to Read c.a
			SingleDelegation_P_PWP_Operation_main_ControlFlow51->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ControlFlow51);
			SingleDelegation_P_PWP_Operation_main_ControlFlow51->setName("ControlFlow51");
			SingleDelegation_P_PWP_Operation_main_ControlFlow51->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ControlFlow51->setSource(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP);
			SingleDelegation_P_PWP_Operation_main_ControlFlow51->setTarget(SingleDelegation_P_PWP_Operation_main_Read_c_a);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ControlFlow51);
			// ControlFlow ControlFlow55 from WriteLine(InitialMessage) to Create C
			SingleDelegation_P_PWP_Operation_main_ControlFlow55->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ControlFlow55);
			SingleDelegation_P_PWP_Operation_main_ControlFlow55->setName("ControlFlow55");
			SingleDelegation_P_PWP_Operation_main_ControlFlow55->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ControlFlow55->setSource(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage);
			SingleDelegation_P_PWP_Operation_main_ControlFlow55->setTarget(SingleDelegation_P_PWP_Operation_main_Create_C);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ControlFlow55);
			// ObjectFlow ObjectFlow14 from result to Fork C
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow14);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setName("ObjectFlow14");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setSource(SingleDelegation_P_PWP_Operation_main_C__result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setTarget(SingleDelegation_P_PWP_Operation_main_Fork_C);
				// LiteralBoolean LiteralBoolean15
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15->setName("LiteralBoolean15");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow14->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow14_LiteralBoolean15);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow14);
			// ObjectFlow ObjectFlow65 from result to p
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow65);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setName("ObjectFlow65");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setSource(SingleDelegation_P_PWP_Operation_main_Read_b_p_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setTarget(SingleDelegation_P_PWP_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean67
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67->setName("LiteralBoolean67");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow65->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow65_LiteralBoolean67);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow65);
			// ControlFlow ControlFlow17 from Call testP to WriteLine(EndMessage)
			SingleDelegation_P_PWP_Operation_main_ControlFlow17->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ControlFlow17);
			SingleDelegation_P_PWP_Operation_main_ControlFlow17->setName("ControlFlow17");
			SingleDelegation_P_PWP_Operation_main_ControlFlow17->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ControlFlow17->setSource(SingleDelegation_P_PWP_Operation_main_Call_testP);
			SingleDelegation_P_PWP_Operation_main_ControlFlow17->setTarget(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ControlFlow17);
			// ObjectFlow ObjectFlow68 from result to value
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow68);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setName("ObjectFlow68");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setSource(SingleDelegation_P_PWP_Operation_main_InitialMessage_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setTarget(SingleDelegation_P_PWP_Operation_main_WriteLine_InitialMessage_value);
				// LiteralBoolean LiteralBoolean70
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70->setName("LiteralBoolean70");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow68->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow68_LiteralBoolean70);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow68);
			// ObjectFlow ObjectFlow24 from Fork C to object
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow24);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setName("ObjectFlow24");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setSource(SingleDelegation_P_PWP_Operation_main_Fork_C);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setTarget(SingleDelegation_P_PWP_Operation_main_Read_c_p_object);
				// LiteralBoolean LiteralBoolean25
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25->setName("LiteralBoolean25");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow24->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow24_LiteralBoolean25);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow24);
			// ObjectFlow ObjectFlow27 from result to value
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow27);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setName("ObjectFlow27");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setSource(SingleDelegation_P_PWP_Operation_main_EndMessage_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setTarget(SingleDelegation_P_PWP_Operation_main_WriteLine_EndMessage_value);
				// LiteralBoolean LiteralBoolean28
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28->setName("LiteralBoolean28");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow27->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow27_LiteralBoolean28);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow27);
			// ObjectFlow ObjectFlow77 from result to target
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow77);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setName("ObjectFlow77");
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setSource(SingleDelegation_P_PWP_Operation_main_Read_c_p_result);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setTarget(SingleDelegation_P_PWP_Operation_main_Call_c_p_setP_target);
				// LiteralBoolean LiteralBoolean79
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79->setThisElementPtr(SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79->setName("LiteralBoolean79");
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79->setValue(true);
			SingleDelegation_P_PWP_Operation_main_ObjectFlow77->setGuard(SingleDelegation_P_PWP_Operation_main_ObjectFlow77_LiteralBoolean79);
		SingleDelegation_P_PWP_Operation_main->addEdge(SingleDelegation_P_PWP_Operation_main_ObjectFlow77);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_main);
		// Association U
		SingleDelegation_P_PWP_Operation_U->setThisAssociationPtr(SingleDelegation_P_PWP_Operation_U);
		SingleDelegation_P_PWP_Operation_U->setName("U");
		SingleDelegation_P_PWP_Operation_U->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_PWP_Operation_U->addOwnedEnd(SingleDelegation_P_PWP_Operation_U_x);
		SingleDelegation_P_PWP_Operation_U->addOwnedEnd(SingleDelegation_P_PWP_Operation_U_y);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_U);
		// Class IImpl
		SingleDelegation_P_PWP_Operation_IImpl->setThisClass_Ptr(SingleDelegation_P_PWP_Operation_IImpl);
		SingleDelegation_P_PWP_Operation_IImpl->setName("IImpl");
		SingleDelegation_P_PWP_Operation_IImpl->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_PWP_Operation_IImpl_IRealization->setName("IRealization");
			SingleDelegation_P_PWP_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_IImpl_IRealization->setContract(SingleDelegation_P_PWP_Operation_I);
			
		SingleDelegation_P_PWP_Operation_IImpl->addInterfaceRealization(SingleDelegation_P_PWP_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			SingleDelegation_P_PWP_Operation_IImpl_setP_Integer->setThisOperationPtr(SingleDelegation_P_PWP_Operation_IImpl_setP_Integer);
			SingleDelegation_P_PWP_Operation_IImpl_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_PWP_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v->setThisElementPtr(SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v);
				SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v->setName("v");
				SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_IImpl_setP_Integer->addOwnedParameter(SingleDelegation_P_PWP_Operation_IImpl_setP_Integer_v);
		SingleDelegation_P_PWP_Operation_IImpl->addOwnedOperation(SingleDelegation_P_PWP_Operation_IImpl_setP_Integer);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_IImpl);
		// Class A
		SingleDelegation_P_PWP_Operation_A->setThisClass_Ptr(SingleDelegation_P_PWP_Operation_A);
		SingleDelegation_P_PWP_Operation_A->setName("A");
		SingleDelegation_P_PWP_Operation_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			SingleDelegation_P_PWP_Operation_A_q->setThisElementPtr(SingleDelegation_P_PWP_Operation_A_q);
			SingleDelegation_P_PWP_Operation_A_q->setName("q");
			SingleDelegation_P_PWP_Operation_A_q->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_A_q->setType(SingleDelegation_P_PWP_Operation_IImpl);
			SingleDelegation_P_PWP_Operation_A_q->setAggregation(AggregationKind::composite);
			SingleDelegation_P_PWP_Operation_A_q->isService = true;
			SingleDelegation_P_PWP_Operation_A_q->addProvided(SingleDelegation_P_PWP_Operation_I);
		SingleDelegation_P_PWP_Operation_A->addOwnedAttribute(SingleDelegation_P_PWP_Operation_A_q);
			// Property b
			SingleDelegation_P_PWP_Operation_A_b->setThisElementPtr(SingleDelegation_P_PWP_Operation_A_b);
			SingleDelegation_P_PWP_Operation_A_b->setName("b");
			SingleDelegation_P_PWP_Operation_A_b->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_A_b->setType(SingleDelegation_P_PWP_Operation_B);
			SingleDelegation_P_PWP_Operation_A_b->setAggregation(AggregationKind::composite);
		SingleDelegation_P_PWP_Operation_A->addOwnedAttribute(SingleDelegation_P_PWP_Operation_A_b);
		
		SingleDelegation_P_PWP_Operation_A_r->setName("r");
			SingleDelegation_P_PWP_Operation_A_r->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd89->setRole(SingleDelegation_P_PWP_Operation_A_q);
				
			SingleDelegation_P_PWP_Operation_A_r->addEnd(SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd89);
				
				SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd88->setRole(SingleDelegation_P_PWP_Operation_A_b);
				
			SingleDelegation_P_PWP_Operation_A_r->addEnd(SingleDelegation_P_PWP_Operation_A_r_ConnectorEnd88);
			SingleDelegation_P_PWP_Operation_A_r->setType(SingleDelegation_P_PWP_Operation_R);
		SingleDelegation_P_PWP_Operation_A->addOwnedConnector(SingleDelegation_P_PWP_Operation_A_r);
			// Operation A_A
			SingleDelegation_P_PWP_Operation_A_A_A->setThisOperationPtr(SingleDelegation_P_PWP_Operation_A_A_A);
			SingleDelegation_P_PWP_Operation_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_PWP_Operation_A_A_A->setName("A_A");
			SingleDelegation_P_PWP_Operation_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_PWP_Operation_A_A_A_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_A_A_A_result);
				SingleDelegation_P_PWP_Operation_A_A_A_result->setName("result");
				SingleDelegation_P_PWP_Operation_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_A_A_A_result->setType(SingleDelegation_P_PWP_Operation_A);
				SingleDelegation_P_PWP_Operation_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_PWP_Operation_A_A_A->addOwnedParameter(SingleDelegation_P_PWP_Operation_A_A_A_result);
		SingleDelegation_P_PWP_Operation_A->addOwnedOperation(SingleDelegation_P_PWP_Operation_A_A_A);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_A);
		// Interface I
		SingleDelegation_P_PWP_Operation_I->setThisInterfacePtr(SingleDelegation_P_PWP_Operation_I);
		SingleDelegation_P_PWP_Operation_I->setName("I");
		SingleDelegation_P_PWP_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			SingleDelegation_P_PWP_Operation_I_setP_Integer->setThisOperationPtr(SingleDelegation_P_PWP_Operation_I_setP_Integer);
			SingleDelegation_P_PWP_Operation_I_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_PWP_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_PWP_Operation_I_setP_Integer_v->setThisElementPtr(SingleDelegation_P_PWP_Operation_I_setP_Integer_v);
				SingleDelegation_P_PWP_Operation_I_setP_Integer_v->setName("v");
				SingleDelegation_P_PWP_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_I_setP_Integer->addOwnedParameter(SingleDelegation_P_PWP_Operation_I_setP_Integer_v);
		SingleDelegation_P_PWP_Operation_I->addOwnedOperation(SingleDelegation_P_PWP_Operation_I_setP_Integer);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_I);
		// Class C
		SingleDelegation_P_PWP_Operation_C->setThisClass_Ptr(SingleDelegation_P_PWP_Operation_C);
		SingleDelegation_P_PWP_Operation_C->setName("C");
		SingleDelegation_P_PWP_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			SingleDelegation_P_PWP_Operation_C_p->setThisElementPtr(SingleDelegation_P_PWP_Operation_C_p);
			SingleDelegation_P_PWP_Operation_C_p->setName("p");
			SingleDelegation_P_PWP_Operation_C_p->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_C_p->setType(SingleDelegation_P_PWP_Operation_IImpl);
			SingleDelegation_P_PWP_Operation_C_p->setAggregation(AggregationKind::composite);
			SingleDelegation_P_PWP_Operation_C_p->isService = true;
			SingleDelegation_P_PWP_Operation_C_p->addProvided(SingleDelegation_P_PWP_Operation_I);
		SingleDelegation_P_PWP_Operation_C->addOwnedAttribute(SingleDelegation_P_PWP_Operation_C_p);
			// Property a
			SingleDelegation_P_PWP_Operation_C_a->setThisElementPtr(SingleDelegation_P_PWP_Operation_C_a);
			SingleDelegation_P_PWP_Operation_C_a->setName("a");
			SingleDelegation_P_PWP_Operation_C_a->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_C_a->setType(SingleDelegation_P_PWP_Operation_A);
			SingleDelegation_P_PWP_Operation_C_a->setAggregation(AggregationKind::composite);
		SingleDelegation_P_PWP_Operation_C->addOwnedAttribute(SingleDelegation_P_PWP_Operation_C_a);
		
		SingleDelegation_P_PWP_Operation_C_u->setName("u");
			SingleDelegation_P_PWP_Operation_C_u->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd91->setRole(SingleDelegation_P_PWP_Operation_C_p);
				
			SingleDelegation_P_PWP_Operation_C_u->addEnd(SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd91);
				
				SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90->setRole(SingleDelegation_P_PWP_Operation_A_q);
				SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90->setPartWithPort(SingleDelegation_P_PWP_Operation_C_a);
				
			SingleDelegation_P_PWP_Operation_C_u->addEnd(SingleDelegation_P_PWP_Operation_C_u_ConnectorEnd90);
			SingleDelegation_P_PWP_Operation_C_u->setType(SingleDelegation_P_PWP_Operation_U);
		SingleDelegation_P_PWP_Operation_C->addOwnedConnector(SingleDelegation_P_PWP_Operation_C_u);
			// Operation C_C
			SingleDelegation_P_PWP_Operation_C_C_C->setThisOperationPtr(SingleDelegation_P_PWP_Operation_C_C_C);
			SingleDelegation_P_PWP_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_PWP_Operation_C_C_C->setName("C_C");
			SingleDelegation_P_PWP_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_PWP_Operation_C_C_C_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_C_C_C_result);
				SingleDelegation_P_PWP_Operation_C_C_C_result->setName("result");
				SingleDelegation_P_PWP_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_C_C_C_result->setType(SingleDelegation_P_PWP_Operation_C);
				SingleDelegation_P_PWP_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_PWP_Operation_C_C_C->addOwnedParameter(SingleDelegation_P_PWP_Operation_C_C_C_result);
		SingleDelegation_P_PWP_Operation_C->addOwnedOperation(SingleDelegation_P_PWP_Operation_C_C_C);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_C);
		// Class B
		SingleDelegation_P_PWP_Operation_B->setThisClass_Ptr(SingleDelegation_P_PWP_Operation_B);
		SingleDelegation_P_PWP_Operation_B->setName("B");
		SingleDelegation_P_PWP_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			SingleDelegation_P_PWP_Operation_B_p->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_p);
			SingleDelegation_P_PWP_Operation_B_p->setName("p");
			SingleDelegation_P_PWP_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_PWP_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		SingleDelegation_P_PWP_Operation_B->addOwnedAttribute(SingleDelegation_P_PWP_Operation_B_p);
		// Activity setPActivity
			SingleDelegation_P_PWP_Operation_B_setPActivity->setThisActivityPtr(SingleDelegation_P_PWP_Operation_B_setPActivity);
			SingleDelegation_P_PWP_Operation_B_setPActivity->setName("setPActivity");
			SingleDelegation_P_PWP_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				SingleDelegation_P_PWP_Operation_B_setPActivity_v->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_v);
				SingleDelegation_P_PWP_Operation_B_setPActivity_v->setName("v");
				SingleDelegation_P_PWP_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addOwnedParameter(SingleDelegation_P_PWP_Operation_B_setPActivity_v);
				// AddStructuralFeatureValueAction Set this.p
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setStructuralFeature(SingleDelegation_P_PWP_Operation_B_p);
					// InputPin object
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object->setName("object");
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object->setType(SingleDelegation_P_PWP_Operation_B);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setObject(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value->setName("value");
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setValue(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result->setName("result");
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result->setType(SingleDelegation_P_PWP_Operation_B);
				SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p->setResult(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_result);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addNode(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p);
				// ActivityParameterNode vParameterNode
				SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode);
				SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode->setParameter(SingleDelegation_P_PWP_Operation_B_setPActivity_v);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addNode(SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				SingleDelegation_P_PWP_Operation_B_setPActivity_this->setThisExecutableNodePtr(SingleDelegation_P_PWP_Operation_B_setPActivity_this);
				SingleDelegation_P_PWP_Operation_B_setPActivity_this->setName("this");
				SingleDelegation_P_PWP_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_PWP_Operation_B_setPActivity_this_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_this_result);
					SingleDelegation_P_PWP_Operation_B_setPActivity_this_result->setName("result");
					SingleDelegation_P_PWP_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_this_result->setType(SingleDelegation_P_PWP_Operation_B);
				SingleDelegation_P_PWP_Operation_B_setPActivity_this->setResult(SingleDelegation_P_PWP_Operation_B_setPActivity_this_result);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addNode(SingleDelegation_P_PWP_Operation_B_setPActivity_this);
				// ObjectFlow ObjectFlow98 from result to object
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setName("ObjectFlow98");
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setSource(SingleDelegation_P_PWP_Operation_B_setPActivity_this_result);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setTarget(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean100
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100->setName("LiteralBoolean100");
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100->setValue(true);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98->setGuard(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98_LiteralBoolean100);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addEdge(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow98);
				// ObjectFlow ObjectFlow101 from vParameterNode to value
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setThisActivityEdgePtr(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setName("ObjectFlow101");
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setSource(SingleDelegation_P_PWP_Operation_B_setPActivity_vParameterNode);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setTarget(SingleDelegation_P_PWP_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean102
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102->setName("LiteralBoolean102");
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102->setValue(true);
				SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101->setGuard(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101_LiteralBoolean102);
			SingleDelegation_P_PWP_Operation_B_setPActivity->addEdge(SingleDelegation_P_PWP_Operation_B_setPActivity_ObjectFlow101);
		SingleDelegation_P_PWP_Operation_B->addOwnedBehavior(SingleDelegation_P_PWP_Operation_B_setPActivity);
			SingleDelegation_P_PWP_Operation_B_IRealization->setName("IRealization");
			SingleDelegation_P_PWP_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_PWP_Operation_B_IRealization->setContract(SingleDelegation_P_PWP_Operation_I);
			
		SingleDelegation_P_PWP_Operation_B->addInterfaceRealization(SingleDelegation_P_PWP_Operation_B_IRealization);
		
			// Operation B_B
			SingleDelegation_P_PWP_Operation_B_B_B->setThisOperationPtr(SingleDelegation_P_PWP_Operation_B_B_B);
			SingleDelegation_P_PWP_Operation_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_PWP_Operation_B_B_B->setName("B_B");
			SingleDelegation_P_PWP_Operation_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_PWP_Operation_B_B_B_result->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_B_B_result);
				SingleDelegation_P_PWP_Operation_B_B_B_result->setName("result");
				SingleDelegation_P_PWP_Operation_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_B_B_result->setType(SingleDelegation_P_PWP_Operation_B);
				SingleDelegation_P_PWP_Operation_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_PWP_Operation_B_B_B->addOwnedParameter(SingleDelegation_P_PWP_Operation_B_B_B_result);
		SingleDelegation_P_PWP_Operation_B->addOwnedOperation(SingleDelegation_P_PWP_Operation_B_B_B);
			// Operation setP_Integer
			SingleDelegation_P_PWP_Operation_B_setP_Integer->setThisOperationPtr(SingleDelegation_P_PWP_Operation_B_setP_Integer);
			SingleDelegation_P_PWP_Operation_B_setP_Integer->setName("setP_Integer");
			SingleDelegation_P_PWP_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				SingleDelegation_P_PWP_Operation_B_setP_Integer_v->setThisElementPtr(SingleDelegation_P_PWP_Operation_B_setP_Integer_v);
				SingleDelegation_P_PWP_Operation_B_setP_Integer_v->setName("v");
				SingleDelegation_P_PWP_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_PWP_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			SingleDelegation_P_PWP_Operation_B_setP_Integer->addOwnedParameter(SingleDelegation_P_PWP_Operation_B_setP_Integer_v);
			SingleDelegation_P_PWP_Operation_B_setP_Integer->addMethod(SingleDelegation_P_PWP_Operation_B_setPActivity);
		SingleDelegation_P_PWP_Operation_B->addOwnedOperation(SingleDelegation_P_PWP_Operation_B_setP_Integer);
	SingleDelegation_P_PWP_Operation->addPackagedElement(SingleDelegation_P_PWP_Operation_B);
}
