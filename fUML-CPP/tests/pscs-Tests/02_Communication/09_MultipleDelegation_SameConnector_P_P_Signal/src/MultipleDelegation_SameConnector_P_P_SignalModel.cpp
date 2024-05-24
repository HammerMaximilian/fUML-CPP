/*
 * MultipleDelegation_SameConnector_P_P_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_SameConnector_P_P_SignalModel.h"

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
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
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
#include <uml/actions/SendSignalAction.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/simpleclassifiers/Signal.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MultipleDelegation_SameConnector_P_P_Signal;
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

MultipleDelegation_SameConnector_P_P_SignalModel::MultipleDelegation_SameConnector_P_P_SignalModel()
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

MultipleDelegation_SameConnector_P_P_SignalModel::~MultipleDelegation_SameConnector_P_P_SignalModel()
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

const std::shared_ptr<MultipleDelegation_SameConnector_P_P_SignalModel>& MultipleDelegation_SameConnector_P_P_SignalModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_SameConnector_P_P_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_SameConnector_P_P_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_SameConnector_P_P_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_SameConnector_P_P_Signal
	 */
	MultipleDelegation_SameConnector_P_P_Signal.reset(new Package());
	this->addToElementRepository("MultipleDelegation_SameConnector_P_P_Signal", MultipleDelegation_SameConnector_P_P_Signal);
		MultipleDelegation_SameConnector_P_P_Signal_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_SameConnector_P_P_Signal_main);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean1", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralInteger2);
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result);
					MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural3", MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural3);
					MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result_LiteralInteger4.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger4", MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result_LiteralInteger4);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow5", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean6", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralInteger7);
			MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object);
					MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object_LiteralInteger8);
					MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural9);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow10", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralInteger11.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger11", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralInteger11);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean12", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow13", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralInteger14.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger14", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralInteger14);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean15", MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15);
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow16", MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16);
			MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", MultipleDelegation_SameConnector_P_P_Signal_main_Tester_);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target);
					MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target_LiteralInteger17);
					MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural18);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result);
					MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralInteger19);
					MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural20);
					MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result_LiteralInteger21);
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start);
				MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target);
					MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural22);
					MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target_LiteralInteger23);
		MultipleDelegation_SameConnector_P_P_Signal_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_SameConnector_P_P_Signal_A);
			MultipleDelegation_SameConnector_P_P_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_SameConnector_P_P_Signal_A_q);
			MultipleDelegation_SameConnector_P_P_Signal_A_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_SameConnector_P_P_Signal_A_b);
				MultipleDelegation_SameConnector_P_P_Signal_A_b_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural24", MultipleDelegation_SameConnector_P_P_Signal_A_b_LiteralUnlimitedNatural24);
				MultipleDelegation_SameConnector_P_P_Signal_A_b_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", MultipleDelegation_SameConnector_P_P_Signal_A_b_LiteralInteger25);
			MultipleDelegation_SameConnector_P_P_Signal_A_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_SameConnector_P_P_Signal_A_r);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd26", MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26);
					MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26_LiteralUnlimitedNatural27);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd28", MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28);
					MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28_LiteralUnlimitedNatural29);
					MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28_LiteralInteger30);
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", MultipleDelegation_SameConnector_P_P_Signal_A_A_A);
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result);
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue);
		MultipleDelegation_SameConnector_P_P_Signal_S.reset(new Signal());
		this->addToElementRepository("S", MultipleDelegation_SameConnector_P_P_Signal_S);
			MultipleDelegation_SameConnector_P_P_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Signal_S_v);
			MultipleDelegation_SameConnector_P_P_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", MultipleDelegation_SameConnector_P_P_Signal_S_t);
		MultipleDelegation_SameConnector_P_P_Signal_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", MultipleDelegation_SameConnector_P_P_Signal_StartEvent);
		MultipleDelegation_SameConnector_P_P_Signal_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_SameConnector_P_P_Signal_I);
			MultipleDelegation_SameConnector_P_P_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_P_Signal_I_S);
		MultipleDelegation_SameConnector_P_P_Signal_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_SameConnector_P_P_Signal_B);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior.reset(new Activity());
			this->addToElementRepository("BClassifierBehavior", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow31", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean32", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralInteger33);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow34", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean35", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralInteger36);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow37", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow38", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralInteger39);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean40", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41.reset(new Trigger());
					this->addToElementRepository("Trigger41", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s.reset(new OutputPin());
					this->addToElementRepository("s", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural42", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural42);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger43.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger43", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger43);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger44);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural45", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural45);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger46.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger46", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger46);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger47.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger47", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger47);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural48", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural48);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger49);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural50);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural51", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural51);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger52.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger52", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger52);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow53", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean54", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralInteger55);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow56", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean57", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralInteger58);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger59);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural60);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger61.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger61", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger61);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural62", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural62);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.t", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger63.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger63", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger63);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural64", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural64);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural65);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger66.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger66", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger66);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural67", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural67);
						MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger68.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger68", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger68);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s.reset(new ForkNode());
				this->addToElementRepository("Fork s", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow69", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean70", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralInteger71);
			MultipleDelegation_SameConnector_P_P_Signal_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_P_Signal_B_IRealization);
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_SameConnector_P_P_Signal_B_B_B);
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result);
			MultipleDelegation_SameConnector_P_P_Signal_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Signal_B_p);
			MultipleDelegation_SameConnector_P_P_Signal_B_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_P_Signal_B_S);
		MultipleDelegation_SameConnector_P_P_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", MultipleDelegation_SameConnector_P_P_Signal_Start);
		MultipleDelegation_SameConnector_P_P_Signal_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_SameConnector_P_P_Signal_R);
			MultipleDelegation_SameConnector_P_P_Signal_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_P_Signal_R_x);
				MultipleDelegation_SameConnector_P_P_Signal_R_x_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural72", MultipleDelegation_SameConnector_P_P_Signal_R_x_LiteralUnlimitedNatural72);
				MultipleDelegation_SameConnector_P_P_Signal_R_x_LiteralInteger73.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger73", MultipleDelegation_SameConnector_P_P_Signal_R_x_LiteralInteger73);
			MultipleDelegation_SameConnector_P_P_Signal_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_P_Signal_R_y);
				MultipleDelegation_SameConnector_P_P_Signal_R_y_LiteralInteger74.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger74", MultipleDelegation_SameConnector_P_P_Signal_R_y_LiteralInteger74);
				MultipleDelegation_SameConnector_P_P_Signal_R_y_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural75", MultipleDelegation_SameConnector_P_P_Signal_R_y_LiteralUnlimitedNatural75);
		MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
		MultipleDelegation_SameConnector_P_P_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_SameConnector_P_P_Signal_IImpl);
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization);
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_P_Signal_IImpl_S);
		MultipleDelegation_SameConnector_P_P_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", MultipleDelegation_SameConnector_P_P_Signal_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.p", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural76", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural76);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger77);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural78", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural78);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger79.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger79", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger79);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural80.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural80", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural80);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result_LiteralInteger81.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger81", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result_LiteralInteger81);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow82", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean83", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralInteger84);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow85", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean86", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralInteger87);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow88", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralInteger89);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean90", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural91.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural91", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural91);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger92);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger93);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger94.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger94", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger94);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural95", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural95);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger96);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural97", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural97);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger98.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger98", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger98);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural99", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural99);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural100", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural100);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger101);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow102", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean103", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralInteger104);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_SameConnector_P_P_Signal_Tester_test);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a.reset(new Property());
			this->addToElementRepository("a", MultipleDelegation_SameConnector_P_P_Signal_Tester_a);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural105", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural105);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger106);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural107.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural107", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural107);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger108.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger108", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger108);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural109", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural109);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger110);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow111", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralInteger112.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger112", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralInteger112);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean113", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow114", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger115.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger115", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger115);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural116", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural116);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow117", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralInteger118.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger118", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralInteger118);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean119", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger120.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger120", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger120);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural121.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural121", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural121);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural122.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural122", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural122);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger123.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger123", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger123);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural124.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural124", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural124);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger125.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger125", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger125);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_1", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126.reset(new Trigger());
					this->addToElementRepository("Trigger126", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger127.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger127", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger127);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger128.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger128", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger128);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural129.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural129", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural129);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.q", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural130.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural130", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural130);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger131.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger131", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger131);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger132.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger132", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger132);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural133);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow134", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_3", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger135.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger135", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger135);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural136.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural136", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural136);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger137.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger137", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger137);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138.reset(new Trigger());
					this->addToElementRepository("Trigger138", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow139", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean140", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralInteger141.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger141", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralInteger141);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow142", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralInteger143.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger143", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralInteger143);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean144", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow145", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_4", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146.reset(new Trigger());
					this->addToElementRepository("Trigger146", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural147.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural147", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural147);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger148.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger148", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger148);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger149.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger149", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger149);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow150", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean151", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralInteger152.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger152", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralInteger152);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger153", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger154.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger154", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger154);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural155.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural155", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural155);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow156", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean157", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralInteger158.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger158", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralInteger158);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow159", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger160.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger160", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger160);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger161.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger161", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger161);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural162.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural162", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural162);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163.reset(new Trigger());
					this->addToElementRepository("Trigger163", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow164", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow165", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralInteger166.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger166", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralInteger166);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean167", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow168", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_2", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169.reset(new Trigger());
					this->addToElementRepository("Trigger169", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural170", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural170);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger171.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger171", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger171);
						MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger172.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger172", MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger172);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173.reset(new Generalization());
			this->addToElementRepository("Generalization173", MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173);
		MultipleDelegation_SameConnector_P_P_Signal_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", MultipleDelegation_SameConnector_P_P_Signal_SEvent);
		MultipleDelegation_SameConnector_P_P_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", MultipleDelegation_SameConnector_P_P_Signal_Continue);

	// Initialize public members
	/*
	 * Model MultipleDelegation_SameConnector_P_P_Signal
	 */
	MultipleDelegation_SameConnector_P_P_Signal->setThisPackagePtr(MultipleDelegation_SameConnector_P_P_Signal);
	MultipleDelegation_SameConnector_P_P_Signal->setName("MultipleDelegation_SameConnector_P_P_Signal");
	MultipleDelegation_SameConnector_P_P_Signal->setVisibility(VisibilityKind::public_);
		// Activity main
		MultipleDelegation_SameConnector_P_P_Signal_main->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Signal_main);
		MultipleDelegation_SameConnector_P_P_Signal_main->setName("main");
		MultipleDelegation_SameConnector_P_P_Signal_main->setVisibility(VisibilityKind::public_);
			// CreateObjectAction Create Tester
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester->setName("Create Tester");
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester->setClassifier(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result);
				MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester->setResult(MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result);
		MultipleDelegation_SameConnector_P_P_Signal_main->addNode(MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester);
			// StartObjectBehaviorAction Start Tester
			MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester->setName("Start Tester");
			MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object);
				MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object->setName("object");
				MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester->setObject(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object);
		MultipleDelegation_SameConnector_P_P_Signal_main->addNode(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester);
			// ForkNode Fork Tester
			MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester->setName("Fork Tester");
			MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_main->addNode(MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
			// CallOperationAction Tester()
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_main_Tester_);
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->setName("Tester()");
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result->setName("result");
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->addResult(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result);
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->setOperation(MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester);
				// InputPin target
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target->setName("target");
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Tester_->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target);
		MultipleDelegation_SameConnector_P_P_Signal_main->addNode(MultipleDelegation_SameConnector_P_P_Signal_main_Tester_);
			// SendSignalAction Send Start
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start);
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start->setName("Send Start");
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Start);
				// InputPin target
				MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target);
				MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target->setName("target");
				MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target);
		MultipleDelegation_SameConnector_P_P_Signal_main->addNode(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start);
			// ObjectFlow ObjectFlow0 from result to target
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setName("ObjectFlow0");
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setSource(MultipleDelegation_SameConnector_P_P_Signal_main_Create_Tester_result);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean1
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1->setValue(true);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0->setGuard(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0_LiteralBoolean1);
		MultipleDelegation_SameConnector_P_P_Signal_main->addEdge(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow0);
			// ObjectFlow ObjectFlow5 from result to Fork Tester
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setName("ObjectFlow5");
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setSource(MultipleDelegation_SameConnector_P_P_Signal_main_Tester__result);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean6
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6->setName("LiteralBoolean6");
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6->setValue(true);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5->setGuard(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5_LiteralBoolean6);
		MultipleDelegation_SameConnector_P_P_Signal_main->addEdge(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow5);
			// ObjectFlow ObjectFlow10 from Fork Tester to object
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setName("ObjectFlow10");
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setSource(MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean12
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12->setName("LiteralBoolean12");
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12->setValue(true);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10->setGuard(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10_LiteralBoolean12);
		MultipleDelegation_SameConnector_P_P_Signal_main->addEdge(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow10);
			// ObjectFlow ObjectFlow13 from Fork Tester to target
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setName("ObjectFlow13");
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setSource(MultipleDelegation_SameConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean15
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15->setName("LiteralBoolean15");
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15->setValue(true);
			MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13->setGuard(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13_LiteralBoolean15);
		MultipleDelegation_SameConnector_P_P_Signal_main->addEdge(MultipleDelegation_SameConnector_P_P_Signal_main_ObjectFlow13);
			// ControlFlow ControlFlow16 from Start Tester to Send Start
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16);
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16->setName("ControlFlow16");
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16->setSource(MultipleDelegation_SameConnector_P_P_Signal_main_Start_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16->setTarget(MultipleDelegation_SameConnector_P_P_Signal_main_Send_Start);
		MultipleDelegation_SameConnector_P_P_Signal_main->addEdge(MultipleDelegation_SameConnector_P_P_Signal_main_ControlFlow16);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_main);
		// Class A
		MultipleDelegation_SameConnector_P_P_Signal_A->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_A);
		MultipleDelegation_SameConnector_P_P_Signal_A->setName("A");
		MultipleDelegation_SameConnector_P_P_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_SameConnector_P_P_Signal_A_q->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_A_q);
			MultipleDelegation_SameConnector_P_P_Signal_A_q->setName("q");
			MultipleDelegation_SameConnector_P_P_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_A_q->setType(MultipleDelegation_SameConnector_P_P_Signal_IImpl);
			MultipleDelegation_SameConnector_P_P_Signal_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_P_Signal_A_q->isService = true;
			MultipleDelegation_SameConnector_P_P_Signal_A_q->addProvided(MultipleDelegation_SameConnector_P_P_Signal_I);
		MultipleDelegation_SameConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_A_q);
			// Property b
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_A_b);
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setName("b");
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setUpper(4);
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setLower(4);
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
			MultipleDelegation_SameConnector_P_P_Signal_A_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_A_b);
		
		MultipleDelegation_SameConnector_P_P_Signal_A_r->setName("r");
			MultipleDelegation_SameConnector_P_P_Signal_A_r->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26->setUpper(-1);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26->setRole(MultipleDelegation_SameConnector_P_P_Signal_A_q);
				
			MultipleDelegation_SameConnector_P_P_Signal_A_r->addEnd(MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd26);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28->setUpper(-1);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28->setLower(4);
				MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28->setRole(MultipleDelegation_SameConnector_P_P_Signal_A_b);
				
			MultipleDelegation_SameConnector_P_P_Signal_A_r->addEnd(MultipleDelegation_SameConnector_P_P_Signal_A_r_ConnectorEnd28);
			MultipleDelegation_SameConnector_P_P_Signal_A_r->setType(MultipleDelegation_SameConnector_P_P_Signal_R);
		MultipleDelegation_SameConnector_P_P_Signal_A->addOwnedConnector(MultipleDelegation_SameConnector_P_P_Signal_A_r);
			// Operation A_A
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Signal_A_A_A);
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A->setName("A_A");
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result);
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
				MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_P_Signal_A_A_A->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Signal_A_A_A_result);
		MultipleDelegation_SameConnector_P_P_Signal_A->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Signal_A_A_A);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_A);
		// Class AbstractTester
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->setName("AbstractTester");
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->setIsAbstract(true);
		
		
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->setIsActive(true);
			// Operation test
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test->setName("test");
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test->setIsAbstract(true);
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_test);
			// Reception Start
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start->setName("Start");
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Start);
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->addOwnedReception(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Start);
			// Reception Continue
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue->setName("Continue");
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Continue);
		MultipleDelegation_SameConnector_P_P_Signal_AbstractTester->addOwnedReception(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester_Continue);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
		// Signal S
		MultipleDelegation_SameConnector_P_P_Signal_S->setThisSignalPtr(MultipleDelegation_SameConnector_P_P_Signal_S);
		MultipleDelegation_SameConnector_P_P_Signal_S->setName("S");
		MultipleDelegation_SameConnector_P_P_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			MultipleDelegation_SameConnector_P_P_Signal_S_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_S_v);
			MultipleDelegation_SameConnector_P_P_Signal_S_v->setName("v");
			MultipleDelegation_SameConnector_P_P_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_SameConnector_P_P_Signal_S->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_S_v);
			// Property t
			MultipleDelegation_SameConnector_P_P_Signal_S_t->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_S_t);
			MultipleDelegation_SameConnector_P_P_Signal_S_t->setName("t");
			MultipleDelegation_SameConnector_P_P_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_S_t->setType(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_P_Signal_S->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_S_t);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_S);
		// SignalEvent StartEvent
		MultipleDelegation_SameConnector_P_P_Signal_StartEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_StartEvent);
		MultipleDelegation_SameConnector_P_P_Signal_StartEvent->setName("StartEvent");
		MultipleDelegation_SameConnector_P_P_Signal_StartEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_StartEvent->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Start);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_StartEvent);
		// Interface I
		MultipleDelegation_SameConnector_P_P_Signal_I->setThisInterfacePtr(MultipleDelegation_SameConnector_P_P_Signal_I);
		MultipleDelegation_SameConnector_P_P_Signal_I->setName("I");
		MultipleDelegation_SameConnector_P_P_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			MultipleDelegation_SameConnector_P_P_Signal_I_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_P_Signal_I_S);
			MultipleDelegation_SameConnector_P_P_Signal_I_S->setName("S");
			MultipleDelegation_SameConnector_P_P_Signal_I_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_I_S->setSignal(MultipleDelegation_SameConnector_P_P_Signal_S);
		MultipleDelegation_SameConnector_P_P_Signal_I->addOwnedReception(MultipleDelegation_SameConnector_P_P_Signal_I_S);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_I);
		// Class B
		MultipleDelegation_SameConnector_P_P_Signal_B->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_B);
		MultipleDelegation_SameConnector_P_P_Signal_B->setName("B");
		MultipleDelegation_SameConnector_P_P_Signal_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_SameConnector_P_P_Signal_B_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_p);
			MultipleDelegation_SameConnector_P_P_Signal_B_p->setName("p");
			MultipleDelegation_SameConnector_P_P_Signal_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_SameConnector_P_P_Signal_B->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_B_p);
		MultipleDelegation_SameConnector_P_P_Signal_B->setClassifierBehavior(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior);
			// Activity BClassifierBehavior
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->setName("BClassifierBehavior");
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->setVisibility(VisibilityKind::public_);
				// AcceptEventAction Accept S
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setName("Accept S");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin s
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setName("s");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setType(MultipleDelegation_SameConnector_P_P_Signal_S);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->addResult(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
					// Trigger Trigger41
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41->setName("Trigger41");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41->setEvent(MultipleDelegation_SameConnector_P_P_Signal_SEvent);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger41);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setName("Set this.p");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setObject(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// InputPin value
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setName("value");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setValue(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setResult(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				// SendSignalAction Send Continue
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setName("Send Continue");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Continue);
					// InputPin target
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setName("target");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setType(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read s.v
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setName("Read s.v");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_S_v);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setObject(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setResult(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				// ReadStructuralFeatureAction Read s.t
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setName("Read s.t");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_S_t);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setObject(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setType(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setResult(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this->setName("this");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this->setResult(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this);
				// ForkNode Fork s
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setName("Fork s");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				// ObjectFlow ObjectFlow31 from result to target
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setName("ObjectFlow31");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean32
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32->setName("LiteralBoolean32");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31_LiteralBoolean32);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow31);
				// ObjectFlow ObjectFlow53 from Fork s to object
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setName("ObjectFlow53");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// LiteralBoolean LiteralBoolean54
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54->setName("LiteralBoolean54");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53_LiteralBoolean54);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow53);
				// ObjectFlow ObjectFlow34 from result to value
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setName("ObjectFlow34");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean35
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35->setName("LiteralBoolean35");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34_LiteralBoolean35);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow34);
				// ObjectFlow ObjectFlow56 from result to object
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setName("ObjectFlow56");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_this_result);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean57
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57->setName("LiteralBoolean57");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56_LiteralBoolean57);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow56);
				// ControlFlow ControlFlow37 from Set this.p to Send Continue
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37->setName("ControlFlow37");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow37);
				// ObjectFlow ObjectFlow38 from s to Fork s
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setName("ObjectFlow38");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
					// LiteralBoolean LiteralBoolean40
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40->setName("LiteralBoolean40");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38_LiteralBoolean40);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow38);
				// ObjectFlow ObjectFlow69 from Fork s to object
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setName("ObjectFlow69");
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setSource(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setTarget(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean70
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70->setName("LiteralBoolean70");
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69->setGuard(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69_LiteralBoolean70);
			MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow69);
		MultipleDelegation_SameConnector_P_P_Signal_B->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Signal_B_BClassifierBehavior);
			MultipleDelegation_SameConnector_P_P_Signal_B_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_P_Signal_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_B_IRealization->setContract(MultipleDelegation_SameConnector_P_P_Signal_I);
			
		MultipleDelegation_SameConnector_P_P_Signal_B->addInterfaceRealization(MultipleDelegation_SameConnector_P_P_Signal_B_IRealization);
		
		MultipleDelegation_SameConnector_P_P_Signal_B->setIsActive(true);
			// Operation B_B
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Signal_B_B_B);
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B->setName("B_B");
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result);
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
				MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_P_Signal_B_B_B->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Signal_B_B_B_result);
		MultipleDelegation_SameConnector_P_P_Signal_B->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Signal_B_B_B);
			// Reception S
			MultipleDelegation_SameConnector_P_P_Signal_B_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_P_Signal_B_S);
			MultipleDelegation_SameConnector_P_P_Signal_B_S->setName("S");
			MultipleDelegation_SameConnector_P_P_Signal_B_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_B_S->setSignal(MultipleDelegation_SameConnector_P_P_Signal_S);
		MultipleDelegation_SameConnector_P_P_Signal_B->addOwnedReception(MultipleDelegation_SameConnector_P_P_Signal_B_S);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_B);
		// Signal Start
		MultipleDelegation_SameConnector_P_P_Signal_Start->setThisSignalPtr(MultipleDelegation_SameConnector_P_P_Signal_Start);
		MultipleDelegation_SameConnector_P_P_Signal_Start->setName("Start");
		MultipleDelegation_SameConnector_P_P_Signal_Start->setVisibility(VisibilityKind::public_);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_Start);
		// Association R
		MultipleDelegation_SameConnector_P_P_Signal_R->setThisAssociationPtr(MultipleDelegation_SameConnector_P_P_Signal_R);
		MultipleDelegation_SameConnector_P_P_Signal_R->setName("R");
		MultipleDelegation_SameConnector_P_P_Signal_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_R->addOwnedEnd(MultipleDelegation_SameConnector_P_P_Signal_R_x);
		MultipleDelegation_SameConnector_P_P_Signal_R->addOwnedEnd(MultipleDelegation_SameConnector_P_P_Signal_R_y);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_R);
		// SignalEvent ContinueEvent
		MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
		MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent->setName("ContinueEvent");
		MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent->setSignal(MultipleDelegation_SameConnector_P_P_Signal_Continue);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
		// Class IImpl
		MultipleDelegation_SameConnector_P_P_Signal_IImpl->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_IImpl);
		MultipleDelegation_SameConnector_P_P_Signal_IImpl->setName("IImpl");
		MultipleDelegation_SameConnector_P_P_Signal_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization->setContract(MultipleDelegation_SameConnector_P_P_Signal_I);
			
		MultipleDelegation_SameConnector_P_P_Signal_IImpl->addInterfaceRealization(MultipleDelegation_SameConnector_P_P_Signal_IImpl_IRealization);
		
			// Reception S
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_P_Signal_IImpl_S);
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_S->setName("S");
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_IImpl_S->setSignal(MultipleDelegation_SameConnector_P_P_Signal_S);
		MultipleDelegation_SameConnector_P_P_Signal_IImpl->addOwnedReception(MultipleDelegation_SameConnector_P_P_Signal_IImpl_S);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_IImpl);
		// Class Tester
		MultipleDelegation_SameConnector_P_P_Signal_Tester->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_Tester);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->setName("Tester");
		MultipleDelegation_SameConnector_P_P_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173->setGeneral(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addGeneralization(MultipleDelegation_SameConnector_P_P_Signal_Tester_Generalization173);
			// Property a
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_a);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a->setName("a");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_a->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Signal_Tester_a);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->setClassifierBehavior(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->setName("testActivity");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->setName("testP");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p->setName("p");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->addLanguage("C++");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->addLanguage("Include");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = true;  	if(index == 1) 	{ 		std::cout<<\"Asserting a.b[1].p == 4 && a.b[2].p == 4 && a.b[3].p == 4 && a.b[4].p == 4\"<<std::endl; 	}  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.b[\" << index << \"].p == \" << std::to_string(p) <<std::endl; 	success = success && (p == 4);  	if(index == MAX_INDEX) 	{ 		std::cout<<\"Signal delegated on all links (shall be true for default strategy): \";  		if(success) 		{ 			std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 		} 		else 		{ 			std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 		} 	}  	index++;");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP);
				// ReadStructuralFeatureAction Read b.p
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setName("Read b.p");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setObject(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this->setName("this");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this);
				// CallBehaviorAction Call testP
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP->setBehavior(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_testP);
					// InputPin p
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setName("p");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP->addArgument(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP);
				// ReadStructuralFeatureAction Read a.b
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setName("Read a.b");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_A_b);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setObject(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setType(MultipleDelegation_SameConnector_P_P_Signal_B);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setUpper(4);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result->setLower(4);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b);
				// ReadStructuralFeatureAction Read this.a
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setName("Read this.a");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_Tester_a);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setObject(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a);
				// ObjectFlow ObjectFlow82 from result to object
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setName("ObjectFlow82");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean83
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83->setName("LiteralBoolean83");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82_LiteralBoolean83);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow82);
				// ObjectFlow ObjectFlow85 from result to object
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setName("ObjectFlow85");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_a_b_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean86
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86->setName("LiteralBoolean86");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85_LiteralBoolean86);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow85);
				// ObjectFlow ObjectFlow88 from result to object
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setName("ObjectFlow88");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_this_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// LiteralBoolean LiteralBoolean90
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setName("LiteralBoolean90");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88_LiteralBoolean90);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow88);
				// ObjectFlow ObjectFlow102 from result to p
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setName("ObjectFlow102");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean103
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103->setName("LiteralBoolean103");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102_LiteralBoolean103);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity_ObjectFlow102);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity);
			// Activity TesterClassifierBehavior
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ReadStructuralFeatureAction Read this.a
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setName("Read this.a");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_Tester_a);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setObject(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				// ValueSpecificationAction Value(4)
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger153
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153->setName("LiteralInteger153");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153->setValue(4);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setValue(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger153);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
				// CallOperationAction Call test()
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(MultipleDelegation_SameConnector_P_P_Signal_Tester_test);
					// InputPin target
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// AcceptEventAction Accept Start
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Start);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger163
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163->setName("Trigger163");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163->setEvent(MultipleDelegation_SameConnector_P_P_Signal_StartEvent);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger163);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
				// SendSignalAction Send S
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setSignal(MultipleDelegation_SameConnector_P_P_Signal_S);
					// InputPin target
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setType(MultipleDelegation_SameConnector_P_P_Signal_IImpl);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin v
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setName("v");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// InputPin t
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setName("t");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setType(MultipleDelegation_SameConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				// AcceptEventAction Accept Continue_1
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setName("Accept Continue_1");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Continue);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					// Trigger Trigger126
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126->setName("Trigger126");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126->setEvent(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger126);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				// ReadStructuralFeatureAction Read a.q
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setName("Read a.q");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Signal_A_q);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setType(MultipleDelegation_SameConnector_P_P_Signal_A);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setObject(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setType(MultipleDelegation_SameConnector_P_P_Signal_IImpl);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				// AcceptEventAction Accept Continue_3
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setName("Accept Continue_3");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Continue);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					// Trigger Trigger138
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138->setName("Trigger138");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138->setEvent(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger138);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				// AcceptEventAction Accept Continue_2
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setName("Accept Continue_2");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Continue);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					// Trigger Trigger169
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169->setName("Trigger169");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169->setEvent(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger169);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				// ForkNode Fork this
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// AcceptEventAction Accept Continue_4
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setName("Accept Continue_4");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Continue);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addResult(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					// Trigger Trigger146
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146->setName("Trigger146");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146->setEvent(MultipleDelegation_SameConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addTrigger(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger146);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				// ObjectFlow ObjectFlow150 from result to Fork this
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setName("ObjectFlow150");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean151
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151->setName("LiteralBoolean151");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150_LiteralBoolean151);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow150);
				// ObjectFlow ObjectFlow111 from Fork this to t
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setName("ObjectFlow111");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					// LiteralBoolean LiteralBoolean113
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113->setName("LiteralBoolean113");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111_LiteralBoolean113);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow111);
				// ObjectFlow ObjectFlow156 from result to target
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setName("ObjectFlow156");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean157
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157->setName("LiteralBoolean157");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156_LiteralBoolean157);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow156);
				// ControlFlow ControlFlow114 from Accept Continue_4 to Call test()
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114->setName("ControlFlow114");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow114);
				// ControlFlow ControlFlow159 from Accept Continue_1 to Accept Continue_2
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159->setName("ControlFlow159");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow159);
				// ObjectFlow ObjectFlow117 from result to v
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setName("ObjectFlow117");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// LiteralBoolean LiteralBoolean119
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119->setName("LiteralBoolean119");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117_LiteralBoolean119);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow117);
				// ControlFlow ControlFlow164 from Accept Continue_3 to Accept Continue_4
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setName("ControlFlow164");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow164);
				// ObjectFlow ObjectFlow165 from result to object
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setName("ObjectFlow165");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// LiteralBoolean LiteralBoolean167
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167->setName("LiteralBoolean167");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165_LiteralBoolean167);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow165);
				// ControlFlow ControlFlow134 from Send S to Accept Continue_1
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134->setName("ControlFlow134");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow134);
				// ObjectFlow ObjectFlow139 from Fork this to object
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setName("ObjectFlow139");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// LiteralBoolean LiteralBoolean140
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140->setName("LiteralBoolean140");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139_LiteralBoolean140);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow139);
				// ObjectFlow ObjectFlow142 from Fork this to target
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setName("ObjectFlow142");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean144
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144->setName("LiteralBoolean144");
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144->setValue(true);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142->setGuard(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142_LiteralBoolean144);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow142);
				// ControlFlow ControlFlow168 from Accept Start to this
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168->setName("ControlFlow168");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow168);
				// ControlFlow ControlFlow145 from Accept Continue_2 to Accept Continue_3
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145->setName("ControlFlow145");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145->setSource(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145->setTarget(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow145);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Signal_Tester_TesterClassifierBehavior);
		
		MultipleDelegation_SameConnector_P_P_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result->setType(MultipleDelegation_SameConnector_P_P_Signal_Tester);
				MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester_result);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Signal_Tester_Tester_Tester);
			// Operation test
			MultipleDelegation_SameConnector_P_P_Signal_Tester_test->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Signal_Tester_test);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_test->setName("test");
			MultipleDelegation_SameConnector_P_P_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Signal_Tester_test->addMethod(MultipleDelegation_SameConnector_P_P_Signal_Tester_testActivity);
		MultipleDelegation_SameConnector_P_P_Signal_Tester->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Signal_Tester_test);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_Tester);
		// SignalEvent SEvent
		MultipleDelegation_SameConnector_P_P_Signal_SEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Signal_SEvent);
		MultipleDelegation_SameConnector_P_P_Signal_SEvent->setName("SEvent");
		MultipleDelegation_SameConnector_P_P_Signal_SEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Signal_SEvent->setSignal(MultipleDelegation_SameConnector_P_P_Signal_S);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_SEvent);
		// Signal Continue
		MultipleDelegation_SameConnector_P_P_Signal_Continue->setThisSignalPtr(MultipleDelegation_SameConnector_P_P_Signal_Continue);
		MultipleDelegation_SameConnector_P_P_Signal_Continue->setName("Continue");
		MultipleDelegation_SameConnector_P_P_Signal_Continue->setVisibility(VisibilityKind::public_);
	MultipleDelegation_SameConnector_P_P_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_P_Signal_Continue);
}
