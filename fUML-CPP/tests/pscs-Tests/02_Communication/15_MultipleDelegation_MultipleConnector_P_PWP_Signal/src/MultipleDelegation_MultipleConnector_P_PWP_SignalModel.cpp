/*
 * MultipleDelegation_MultipleConnector_P_PWP_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_MultipleConnector_P_PWP_SignalModel.h"

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
#include <uml/actions/StartObjectBehaviorAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/classification/Generalization.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/Association.h>
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

using namespace MultipleDelegation_MultipleConnector_P_PWP_Signal;
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

MultipleDelegation_MultipleConnector_P_PWP_SignalModel::MultipleDelegation_MultipleConnector_P_PWP_SignalModel()
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

MultipleDelegation_MultipleConnector_P_PWP_SignalModel::~MultipleDelegation_MultipleConnector_P_PWP_SignalModel()
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

const std::shared_ptr<MultipleDelegation_MultipleConnector_P_PWP_SignalModel>& MultipleDelegation_MultipleConnector_P_PWP_SignalModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_MultipleConnector_P_PWP_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_MultipleConnector_P_PWP_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_MultipleConnector_P_PWP_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_PWP_Signal
	 */
	MultipleDelegation_MultipleConnector_P_PWP_Signal.reset(new Package());
	this->addToElementRepository("MultipleDelegation_MultipleConnector_P_PWP_Signal", MultipleDelegation_MultipleConnector_P_PWP_Signal);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_MultipleConnector_P_PWP_Signal_main);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean1", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralInteger2);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean4", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralInteger5);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow6", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralInteger7);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean8", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result_LiteralInteger9);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result_LiteralUnlimitedNatural10);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow11", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean12", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralInteger13);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object_LiteralUnlimitedNatural14);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object_LiteralInteger15);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow16", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralInteger17);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralInteger18);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result_LiteralUnlimitedNatural19);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target_LiteralUnlimitedNatural20);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target_LiteralInteger21);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target_LiteralInteger22);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target_LiteralUnlimitedNatural23);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U.reset(new Association());
		this->addToElementRepository("U", MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural24", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x_LiteralUnlimitedNatural24);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x_LiteralInteger25);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y_LiteralInteger26.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger26", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y_LiteralInteger26);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural27", MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y_LiteralUnlimitedNatural27);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger28.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger28", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger28);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural29", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural29);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger30.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger30", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger30);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural31", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural31);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.a4", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result_LiteralInteger32.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger32", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result_LiteralInteger32);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural33", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result_LiteralUnlimitedNatural33);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object_LiteralInteger34);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object_LiteralUnlimitedNatural35);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow36", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralInteger37);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean38", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.p", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural39", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural39);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger40);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger41.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger41", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger41);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural42", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural42);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural43", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural43);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger44);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger45.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger45", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger45);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow46", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean47", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralInteger48);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow49", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralInteger50);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean51", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.a2", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result_LiteralInteger52.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger52", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result_LiteralInteger52);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural53", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result_LiteralUnlimitedNatural53);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object_LiteralInteger54.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger54", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object_LiteralInteger54);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural55", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object_LiteralUnlimitedNatural55);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.a3", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result_LiteralInteger56);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result_LiteralUnlimitedNatural57);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object_LiteralInteger58);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object_LiteralUnlimitedNatural59.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural59", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object_LiteralUnlimitedNatural59);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.a1", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object_LiteralUnlimitedNatural60);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object_LiteralInteger61.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger61", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object_LiteralInteger61);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c.reset(new ForkNode());
				this->addToElementRepository("Fork c", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow62", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralInteger63);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean64", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow65", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean66", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralInteger67);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow68", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean69", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralInteger70);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow71", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow72", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean73", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralInteger74);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow75", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean76", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralInteger77);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow78", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow79", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralInteger80);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean81", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralInteger82.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger82", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralInteger82);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural83);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.c", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural84", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralUnlimitedNatural84);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralInteger85);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural86", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralUnlimitedNatural86);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralInteger87);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow88", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralInteger89);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean90", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow91", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean92", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralInteger93.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger93", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralInteger93);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow94", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralInteger95);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean96", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow97", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c.reset(new Property());
			this->addToElementRepository("c", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow98", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralInteger99);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean100", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow101", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger102.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger102", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger102);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural103.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural103", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural103);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger104.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger104", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger104);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105.reset(new Trigger());
					this->addToElementRepository("Trigger105", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.c", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralInteger106);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralUnlimitedNatural107.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural107", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralUnlimitedNatural107);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural108", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralUnlimitedNatural108);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralInteger109.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger109", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralInteger109);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.p", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralInteger110);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural111", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralUnlimitedNatural111);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural112", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralUnlimitedNatural112);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralInteger113);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow114", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean115", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralInteger116);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_2", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural117.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural117", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural117);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger118.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger118", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger118);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger119.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger119", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger119);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120.reset(new Trigger());
					this->addToElementRepository("Trigger120", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow121", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow122", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralInteger123.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger123", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralInteger123);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean124", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_1", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural125", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural125);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger126.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger126", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger126);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger127.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger127", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger127);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128.reset(new Trigger());
					this->addToElementRepository("Trigger128", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger129.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger129", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger129);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural130.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural130", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural130);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger131.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger131", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger131);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural132", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural132);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural133);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger134.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger134", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger134);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_4", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger135.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger135", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger135);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger136.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger136", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger136);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural137.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural137", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural137);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138.reset(new Trigger());
					this->addToElementRepository("Trigger138", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural139.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural139", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural139);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger140.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger140", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger140);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow141", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralInteger142.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger142", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralInteger142);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean143", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_3", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural144.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural144", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural144);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger145.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger145", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger145);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger146.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger146", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger146);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147.reset(new Trigger());
					this->addToElementRepository("Trigger147", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow148", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralInteger149.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger149", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralInteger149);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean150", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow151", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralInteger152.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger152", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralInteger152);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean153", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow154", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural155.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural155", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural155);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger156.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger156", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger156);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger157", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow158", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean159", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralInteger160.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger160", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralInteger160);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural161.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural161", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural161);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger162.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger162", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger162);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow163", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow164", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow165", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166.reset(new Generalization());
			this->addToElementRepository("Generalization166", MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S.reset(new Signal());
		this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2.reset(new Property());
			this->addToElementRepository("a2", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural167", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2_LiteralUnlimitedNatural167);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2_LiteralInteger168.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger168", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2_LiteralInteger168);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1.reset(new Property());
			this->addToElementRepository("a1", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1_LiteralUnlimitedNatural169.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural169", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1_LiteralUnlimitedNatural169);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1_LiteralInteger170.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger170", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1_LiteralInteger170);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3.reset(new Property());
			this->addToElementRepository("a3", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3_LiteralInteger171.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger171", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3_LiteralInteger171);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural172", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3_LiteralUnlimitedNatural172);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3.reset(new Connector());
			this->addToElementRepository("u3", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd173.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd173", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd173);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd174.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd174", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd174);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4.reset(new Property());
			this->addToElementRepository("a4", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4_LiteralUnlimitedNatural175.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural175", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4_LiteralUnlimitedNatural175);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4_LiteralInteger176.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger176", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4_LiteralInteger176);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1.reset(new Connector());
			this->addToElementRepository("u1", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd177", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177_LiteralUnlimitedNatural178.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural178", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177_LiteralUnlimitedNatural178);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177_LiteralInteger179.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger179", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177_LiteralInteger179);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd180", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180_LiteralUnlimitedNatural181.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural181", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180_LiteralUnlimitedNatural181);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p.reset(new Port());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2.reset(new Connector());
			this->addToElementRepository("u2", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd182.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd182", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd182);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd183.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd183", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd183);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4.reset(new Connector());
			this->addToElementRepository("u4", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd184.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd184", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd184);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd185.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd185", MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd185);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior.reset(new Activity());
			this->addToElementRepository("BClassifierBehavior", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow186", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean187", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralInteger188.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger188", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralInteger188);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow189", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean190", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralInteger191.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger191", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralInteger191);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow192", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow193", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralInteger194.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger194", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralInteger194);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean195", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196.reset(new Trigger());
					this->addToElementRepository("Trigger196", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s.reset(new OutputPin());
					this->addToElementRepository("s", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural197.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural197", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural197);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger198.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger198", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger198);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger199.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger199", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger199);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural200.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural200", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural200);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger201.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger201", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger201);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger202.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger202", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger202);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural203.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural203", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural203);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger204.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger204", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger204);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural205.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural205", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural205);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural206.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural206", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural206);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger207.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger207", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger207);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow208", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean209", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralInteger210.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger210", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralInteger210);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow211", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean212", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralInteger213.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger213", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralInteger213);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger214.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger214", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger214);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural215.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural215", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural215);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger216.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger216", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger216);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural217.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural217", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural217);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.t", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger218.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger218", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger218);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural219.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural219", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural219);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural220.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural220", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural220);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger221.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger221", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger221);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural222.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural222", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural222);
						MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralInteger223.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger223", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralInteger223);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s.reset(new ForkNode());
				this->addToElementRepository("Fork s", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow224", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean225", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralInteger226.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger226", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralInteger226);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd227", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227_LiteralUnlimitedNatural228.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural228", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227_LiteralUnlimitedNatural228);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227_LiteralInteger229.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger229", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227_LiteralInteger229);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd230", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230_LiteralUnlimitedNatural231.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural231", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230_LiteralUnlimitedNatural231);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b_LiteralInteger232.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger232", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b_LiteralInteger232);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b_LiteralUnlimitedNatural233.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural233", MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b_LiteralUnlimitedNatural233);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_MultipleConnector_P_PWP_Signal_R);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x_LiteralUnlimitedNatural234.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural234", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x_LiteralUnlimitedNatural234);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x_LiteralInteger235.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger235", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x_LiteralInteger235);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y_LiteralInteger236.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger236", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y_LiteralInteger236);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y_LiteralUnlimitedNatural237.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural237", MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y_LiteralUnlimitedNatural237);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);

	// Initialize public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_PWP_Signal
	 */
	MultipleDelegation_MultipleConnector_P_PWP_Signal->setThisPackagePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->setName("MultipleDelegation_MultipleConnector_P_PWP_Signal");
	MultipleDelegation_MultipleConnector_P_PWP_Signal->setVisibility(VisibilityKind::public_);
		// Activity main
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->setName("main");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->setVisibility(VisibilityKind::public_);
			// CreateObjectAction Create Tester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester->setName("Create Tester");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester->setClassifier(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester);
			// StartObjectBehaviorAction Start Tester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester->setName("Start Tester");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object->setName("object");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester);
			// ForkNode Fork Tester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester->setName("Fork Tester");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
			// CallOperationAction Tester()
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->setName("Tester()");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->setOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target->setName("target");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester_);
			// SendSignalAction Send Start
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start->setName("Send Start");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target->setName("target");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start);
			// ObjectFlow ObjectFlow0 from result to Fork Tester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setName("ObjectFlow0");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean1
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0_LiteralBoolean1);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow0);
			// ObjectFlow ObjectFlow3 from Fork Tester to object
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setName("ObjectFlow3");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean4
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3_LiteralBoolean4);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow3);
			// ObjectFlow ObjectFlow6 from Fork Tester to target
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setName("ObjectFlow6");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean8
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8->setName("LiteralBoolean8");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6_LiteralBoolean8);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow6);
			// ObjectFlow ObjectFlow11 from result to target
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setName("ObjectFlow11");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Create_Tester_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean12
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12->setName("LiteralBoolean12");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12->setValue(true);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11_LiteralBoolean12);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ObjectFlow11);
			// ControlFlow ControlFlow16 from Start Tester to Send Start
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16->setName("ControlFlow16");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Start_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_Send_Start);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_main_ControlFlow16);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_main);
		// SignalEvent ContinueEvent
		MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent->setName("ContinueEvent");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
		// SignalEvent SEvent
		MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent->setName("SEvent");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent);
		// Signal Continue
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue->setName("Continue");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue->setVisibility(VisibilityKind::public_);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
		// Association U
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U->setName("U");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_U_x);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_U->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_U_y);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		// Class Tester
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->setName("Tester");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166->setGeneral(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addGeneralization(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Generalization166);
			// Property c
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c->setName("c");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->setClassifierBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->setName("testActivity");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->setName("testP");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p->setName("p");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->addLanguage("C++");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->addLanguage("Include");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = true;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.a1.b.p == 4 && c.a2.b.p == 4 && c.a3.b.p == 4 && c.a4.b.p == 4\"<<std::endl; 	}  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"c.a\" << index << \".b.p == \" << std::to_string(p) <<std::endl; 	success = success && (p == 4);  	if(index == MAX_INDEX) 	{ 		std::cout<<\"Signal delegated on all links (shall be true for default strategy): \";  		if(success) 		{ 			std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 		} 		else 		{ 			std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 		} 	}  	index++;");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP);
				// ReadStructuralFeatureAction Read a.b
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setName("Read a.b");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setUpper(4);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setLower(4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
				// ReadStructuralFeatureAction Read c.a4
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setName("Read c.a4");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4);
				// ReadStructuralFeatureAction Read c.a3
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setName("Read c.a3");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this->setName("this");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this);
				// ReadStructuralFeatureAction Read this.c
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setName("Read this.c");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
				// ReadStructuralFeatureAction Read b.p
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setName("Read b.p");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
				// CallBehaviorAction Call testP
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_testP);
					// InputPin p
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setName("p");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP->addArgument(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
				// ReadStructuralFeatureAction Read c.a1
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setName("Read c.a1");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1);
				// ReadStructuralFeatureAction Read c.a2
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setName("Read c.a2");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2);
				// ForkNode Fork c
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c->setName("Fork c");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				// ObjectFlow ObjectFlow65 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setName("ObjectFlow65");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean66
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66->setName("LiteralBoolean66");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65_LiteralBoolean66);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow65);
				// ObjectFlow ObjectFlow36 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setName("ObjectFlow36");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean38
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36_LiteralBoolean38);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow36);
				// ObjectFlow ObjectFlow46 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setName("ObjectFlow46");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean47
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47->setName("LiteralBoolean47");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46_LiteralBoolean47);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow46);
				// ObjectFlow ObjectFlow68 from Fork c to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setName("ObjectFlow68");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1_object);
					// LiteralBoolean LiteralBoolean69
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69->setName("LiteralBoolean69");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68_LiteralBoolean69);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow68);
				// ObjectFlow ObjectFlow49 from Fork c to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setName("ObjectFlow49");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3_object);
					// LiteralBoolean LiteralBoolean51
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51->setName("LiteralBoolean51");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49_LiteralBoolean51);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow49);
				// ControlFlow ControlFlow71 from Read c.a3 to Read c.a4
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71->setName("ControlFlow71");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow71);
				// ObjectFlow ObjectFlow72 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setName("ObjectFlow72");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_this_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					// LiteralBoolean LiteralBoolean73
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72_LiteralBoolean73);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow72);
				// ObjectFlow ObjectFlow75 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setName("ObjectFlow75");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean76
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76->setName("LiteralBoolean76");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75_LiteralBoolean76);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow75);
				// ControlFlow ControlFlow78 from Read c.a2 to Read c.a3
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78->setName("ControlFlow78");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow78);
				// ObjectFlow ObjectFlow79 from Fork c to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setName("ObjectFlow79");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_object);
					// LiteralBoolean LiteralBoolean81
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81->setName("LiteralBoolean81");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79_LiteralBoolean81);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow79);
				// ObjectFlow ObjectFlow88 from Fork c to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setName("ObjectFlow88");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a4_object);
					// LiteralBoolean LiteralBoolean90
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setName("LiteralBoolean90");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow88);
				// ObjectFlow ObjectFlow91 from result to Fork c
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setName("ObjectFlow91");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Fork_c);
					// LiteralBoolean LiteralBoolean92
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92->setName("LiteralBoolean92");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91_LiteralBoolean92);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow91);
				// ObjectFlow ObjectFlow94 from result to p
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setName("ObjectFlow94");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean96
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96->setName("LiteralBoolean96");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94_LiteralBoolean96);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow94);
				// ControlFlow ControlFlow97 from Read c.a1 to Read c.a2
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97->setName("ControlFlow97");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ControlFlow97);
				// ObjectFlow ObjectFlow62 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setName("ObjectFlow62");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_c_a2_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean64
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64->setName("LiteralBoolean64");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62_LiteralBoolean64);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow62);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity);
			// Activity TesterClassifierBehavior
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// AcceptEventAction Accept Start
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger105
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105->setName("Trigger105");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger105);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadStructuralFeatureAction Read this.c
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setName("Read this.c");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_c);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
				// ReadStructuralFeatureAction Read c.p
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setName("Read c.p");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
				// AcceptEventAction Accept Continue_2
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setName("Accept Continue_2");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					// Trigger Trigger120
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120->setName("Trigger120");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger120);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				// ValueSpecificationAction Value(4)
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger157
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157->setName("LiteralInteger157");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157->setValue(4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setValue(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger157);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
				// AcceptEventAction Accept Continue_1
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setName("Accept Continue_1");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					// Trigger Trigger128
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128->setName("Trigger128");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger128);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				// ForkNode Fork this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
				// SendSignalAction Send S
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin v
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setName("v");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// InputPin t
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setName("t");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				// AcceptEventAction Accept Continue_4
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setName("Accept Continue_4");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					// Trigger Trigger138
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138->setName("Trigger138");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger138);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				// CallOperationAction Call test()
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// AcceptEventAction Accept Continue_3
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setName("Accept Continue_3");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					// Trigger Trigger147
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147->setName("Trigger147");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger147);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				// ObjectFlow ObjectFlow98 from Fork this to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setName("ObjectFlow98");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					// LiteralBoolean LiteralBoolean100
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100->setName("LiteralBoolean100");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98_LiteralBoolean100);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow98);
				// ControlFlow ControlFlow101 from Send S to Accept Continue_1
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101->setName("ControlFlow101");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow101);
				// ObjectFlow ObjectFlow151 from Fork this to target
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setName("ObjectFlow151");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean153
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153->setName("LiteralBoolean153");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151_LiteralBoolean153);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow151);
				// ObjectFlow ObjectFlow114 from result to target
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setName("ObjectFlow114");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean115
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115->setName("LiteralBoolean115");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114_LiteralBoolean115);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow114);
				// ControlFlow ControlFlow154 from Accept Continue_3 to Accept Continue_4
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154->setName("ControlFlow154");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow154);
				// ControlFlow ControlFlow121 from Accept Continue_1 to Accept Continue_2
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121->setName("ControlFlow121");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow121);
				// ObjectFlow ObjectFlow122 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setName("ObjectFlow122");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					// LiteralBoolean LiteralBoolean124
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124->setName("LiteralBoolean124");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122_LiteralBoolean124);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow122);
				// ObjectFlow ObjectFlow158 from result to v
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setName("ObjectFlow158");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// LiteralBoolean LiteralBoolean159
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159->setName("LiteralBoolean159");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158_LiteralBoolean159);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow158);
				// ObjectFlow ObjectFlow141 from result to Fork this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setName("ObjectFlow141");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean143
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143->setName("LiteralBoolean143");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141_LiteralBoolean143);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow141);
				// ControlFlow ControlFlow163 from Accept Start to this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163->setName("ControlFlow163");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow163);
				// ControlFlow ControlFlow164 from Accept Continue_2 to Accept Continue_3
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setName("ControlFlow164");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				// ObjectFlow ObjectFlow148 from Fork this to t
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setName("ObjectFlow148");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					// LiteralBoolean LiteralBoolean150
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150->setName("LiteralBoolean150");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148_LiteralBoolean150);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow148);
				// ControlFlow ControlFlow165 from Accept Continue_4 to Call test()
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165->setName("ControlFlow165");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow165);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester_result);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_Tester_Tester);
			// Operation test
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test->setName("test");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test->addMethod(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_testActivity);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester_test);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_Tester);
		// Signal S
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S->setName("S");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v->setName("v");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v);
			// Property t
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t->setName("t");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_S->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
		// Class C
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->setName("C");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->setName("p");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->isService = true;
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p->addProvided(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
			// Property a1
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1->setName("a1");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1);
			// Property a2
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2->setName("a2");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2);
			// Property a3
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3->setName("a3");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3);
			// Property a4
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4->setName("a4");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4);
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3->setName("u3");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd174->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd174);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd173->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd173->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a3);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3_ConnectorEnd173);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u3);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1->setName("u1");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd180);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a1);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1_ConnectorEnd177);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u1);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2->setName("u2");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd182->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd182);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd183->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd183->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a2);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2_ConnectorEnd183);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u2);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4->setName("u4");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd184->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_p);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd184);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd185->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd185->setPartWithPort(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_a4);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4_ConnectorEnd185);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_U);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_C->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Signal_C_u4);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_C);
		// Interface I
		MultipleDelegation_MultipleConnector_P_PWP_Signal_I->setThisInterfacePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_I->setName("I");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S->setName("S");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_I->addOwnedReception(MultipleDelegation_MultipleConnector_P_PWP_Signal_I_S);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
		// Class B
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->setName("B");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p->setName("p");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->setClassifierBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior);
			// Activity BClassifierBehavior
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->setName("BClassifierBehavior");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->setVisibility(VisibilityKind::public_);
				// AcceptEventAction Accept S
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setName("Accept S");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin s
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setName("s");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->addResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
					// Trigger Trigger196
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196->setName("Trigger196");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196->setEvent(MultipleDelegation_MultipleConnector_P_PWP_Signal_SEvent);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->addTrigger(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger196);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setName("Set this.p");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					// InputPin value
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setName("value");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setValue(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				// SendSignalAction Send Continue
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setName("Send Continue");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setName("target");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read s.v
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setName("Read s.v");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_v);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
				// ReadStructuralFeatureAction Read s.t
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setName("Read s.t");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setStructuralFeature(MultipleDelegation_MultipleConnector_P_PWP_Signal_S_t);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setName("object");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setObject(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this->setName("this");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this->setResult(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this);
				// ForkNode Fork s
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setName("Fork s");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				// ObjectFlow ObjectFlow186 from result to target
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setName("ObjectFlow186");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean187
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187->setName("LiteralBoolean187");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186_LiteralBoolean187);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow186);
				// ObjectFlow ObjectFlow208 from Fork s to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setName("ObjectFlow208");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					// LiteralBoolean LiteralBoolean209
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209->setName("LiteralBoolean209");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208_LiteralBoolean209);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow208);
				// ObjectFlow ObjectFlow189 from result to value
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setName("ObjectFlow189");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean190
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190->setName("LiteralBoolean190");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189_LiteralBoolean190);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow189);
				// ObjectFlow ObjectFlow211 from result to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setName("ObjectFlow211");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean212
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212->setName("LiteralBoolean212");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211_LiteralBoolean212);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow211);
				// ControlFlow ControlFlow192 from Set this.p to Send Continue
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192->setName("ControlFlow192");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow192);
				// ObjectFlow ObjectFlow193 from s to Fork s
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setName("ObjectFlow193");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
					// LiteralBoolean LiteralBoolean195
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195->setName("LiteralBoolean195");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193_LiteralBoolean195);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow193);
				// ObjectFlow ObjectFlow224 from Fork s to object
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setName("ObjectFlow224");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setSource(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setTarget(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean225
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225->setName("LiteralBoolean225");
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225->setValue(true);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224->setGuard(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224_LiteralBoolean225);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow224);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_BClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization->setContract(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
			
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_IRealization);
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->setIsActive(true);
			// Operation B_B
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B->setName("B_B");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B_result);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_B_B);
			// Reception S
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S->setName("S");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_B->addOwnedReception(MultipleDelegation_MultipleConnector_P_PWP_Signal_B_S);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
		// Class A
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->setName("A");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->setName("q");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->isService = true;
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q->addProvided(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
			// Property b
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b->setName("b");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_B);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b);
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r->setName("r");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_q);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd230);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227->setRole(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_b);
				
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r->addEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r_ConnectorEnd227);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_R);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_r);
			// Operation A_A
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A->setName("A_A");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result->setName("result");
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result->setType(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
				MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A->addOwnedParameter(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A_result);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_A->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_A_A_A);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_A);
		// SignalEvent StartEvent
		MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent->setName("StartEvent");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_StartEvent);
		// Association R
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_R);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R->setName("R");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_R_x);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_PWP_Signal_R_y);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_R);
		// Class AbstractTester
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->setName("AbstractTester");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->setIsAbstract(true);
		
		
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->setIsActive(true);
			// Operation test
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test->setName("test");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test->setIsAbstract(true);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_test);
			// Reception Continue
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue->setName("Continue");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->addOwnedReception(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Continue);
			// Reception Start
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start->setName("Start");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester->addOwnedReception(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester_Start);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_AbstractTester);
		// Class IImpl
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl->setName("IImpl");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization->setContract(MultipleDelegation_MultipleConnector_P_PWP_Signal_I);
			
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_IRealization);
		
			// Reception S
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S->setName("S");
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S->setSignal(MultipleDelegation_MultipleConnector_P_PWP_Signal_S);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl->addOwnedReception(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl_S);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_IImpl);
		// Signal Start
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Start->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Start->setName("Start");
		MultipleDelegation_MultipleConnector_P_PWP_Signal_Start->setVisibility(VisibilityKind::public_);
	MultipleDelegation_MultipleConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_PWP_Signal_Start);
}
